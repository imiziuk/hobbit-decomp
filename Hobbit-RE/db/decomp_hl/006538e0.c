
void __fastcall FUN_006538e0(int param_1)

{
  int iVar1;
  
  FUN_0064e7d0(s_xthread___xthread___killing___s__0074d760,param_1 + 8,
               *(undefined4 *)(param_1 + 0x4c));
  iVar1 = *(int *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x5c) = 1;
  while (iVar1 != 2) {
    FUN_006539d0(0);
    FUN_00653be0(1);
    iVar1 = *(int *)(param_1 + 0x80);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_00655890(1);
  CloseHandle(*(HANDLE *)(param_1 + 0x4c));
  CloseHandle(*(HANDLE *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0x7c)) {
    FUN_0064ff40(*(int *)(param_1 + 0x78),s_C__projects_meridian_xCore_x_fil_0074d790,0x1f6);
  }
  FUN_0064ff40(*(undefined4 *)(param_1 + 0x7c),s_C__projects_meridian_xCore_x_fil_0074d7d0,0x1f9);
  FUN_006558d0(1);
  return;
}

