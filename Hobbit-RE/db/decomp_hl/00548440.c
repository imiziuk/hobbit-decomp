
void __fastcall FUN_00548440(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_005486b0();
    FUN_005c9070();
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if (*(HMODULE *)(param_1 + 0x464) != (HMODULE)0x0) {
      FreeLibrary(*(HMODULE *)(param_1 + 0x464));
    }
    *(undefined4 *)(param_1 + 0x464) = 0;
  }
  return;
}

