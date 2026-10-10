#!/bin/sh
# full regenerate -> compile -> DLL -> (optional) equiv; logs in auto/rebuild_all.log
cd "$(dirname "$0")/.."
PY=tools/.venv/Scripts/python
CMAKE="/c/Program Files/Microsoft Visual Studio/18/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"
{
  echo "== ghidra2c $(date)"; $PY tools/ghidra2c.py ../Hobbit-RE/db/units2 ../Hobbit-RE/db/cexport2/meridian.h | tail -3
  echo "== build_units $(date)"; $PY tools/build_units.py | tail -1
  echo "== gen_registry"; python tools/gen_registry.py
  echo "== dll $(date)"; MSYS_NO_PATHCONV=1 "$CMAKE" --build build --config Release -- /m | grep -E " error |dinput8.vcxproj ->" | head -5
  if [ "$1" = "--equiv" ]; then
    echo "== equiv $(date)"; HOBBIT_UNITS="$(cd ../Hobbit-RE/db/units2 && pwd -W)" $PY tools/equiv.py --auto --trials 30 --quiet > auto/equiv_regen.log 2>&1
    grep "^{" auto/equiv_regen.log | tail -1
  fi
  echo "== done $(date)"
} > auto/rebuild_all.log 2>&1
