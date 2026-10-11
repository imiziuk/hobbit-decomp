#!/bin/sh
# Rebuild every safety list from the CURRENT generated code (run after any ghidra2c/build_units regeneration;
# stale lists let known-bad units through: 2026-10-11 globals__OnImport dropped its "Ambient_%d" argument).
cd "$(dirname "$0")/.."
PY=tools/.venv/Scripts/python
$PY tools/vararg_check.py | tail -1
$PY tools/eax_users.py | tail -1
python tools/void_returns.py
$PY tools/eax_untouched.py
$PY tools/st0_users.py | tail -1
$PY tools/callee_audit.py | head -2
$PY tools/abi_exclude.py
$PY tools/x87_audit.py
date +%s > auto/lists_stamp.txt
