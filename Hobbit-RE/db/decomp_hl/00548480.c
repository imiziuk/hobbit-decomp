
void __fastcall FUN_00548480(int param_1)

{
  HMODULE pHVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    FUN_005c8ff0(0xffffffff,0x400,0x7c,0x40);
    pHVar1 = LoadLibraryA(s_shfolder_dll_0073c93c);
    *(HMODULE *)(param_1 + 0x464) = pHVar1;
    if (pHVar1 != (HMODULE)0x0) {
      uVar2 = (*(code *)PTR_FUN_0075b2d8)(pHVar1,s_SHGetFolderPathA_0073c928);
      *(undefined4 *)(param_1 + 0x468) = uVar2;
      FUN_005486b0();
      *(undefined4 *)(param_1 + 0x5c) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x468) = 0;
    FUN_005486b0();
    *(undefined4 *)(param_1 + 0x5c) = 1;
  }
  return;
}

