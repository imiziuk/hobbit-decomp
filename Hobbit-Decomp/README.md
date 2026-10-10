# Hobbit-Decomp

Functional decompilation of *The Hobbit* (2003, PC) `Meridian.exe`: C++ source that replaces the
original game code one function at a time, until the whole game can be built from source.

- Built as `dinput8.dll` (proxy). Copy `build/Release/dinput8.dll` next to `Meridian.exe`.
- Every reimplemented function has `REPLACE(original_address, function)`; at startup a JMP is written
  there. Log: `hobbit_decomp.log` in the game folder. Disable a function by listing its name in
  `hooks_disabled.txt` (game folder) to bisect a bug.
- Source files mirror the original `.cpp` names leaked in the exe (Support/Objects/Bilbo/BilboInventory.cpp …).
- Original toolchain was MSVC 6.0 (cl 12.00 build 9044, link 6.00.8447); we build with modern MSVC (x86),
  so the goal is identical behaviour, not identical bytes.

Build (VS 2026, 32-bit):
    cmake -S . -B build -A Win32
    cmake --build build --config Release

Research notes, names and addresses: `../Hobbit-RE-notes.md`, `../Hobbit-RE/annotations.tsv`.
