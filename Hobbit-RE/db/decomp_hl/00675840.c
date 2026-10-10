
void __fastcall FUN_00675840(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  while (0 < iVar1) {
    FUN_00675fa0(**(undefined4 **)(param_1 + 0xc));
    iVar1 = *(int *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x50,*(undefined4 *)(iVar1 + -4),FUN_00676ec0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00655890(1);
  FUN_0064ee70(DAT_007f86f0,DAT_007f86f4,DAT_007f86f8,DAT_007f86fc,DAT_007f8700,DAT_007f8704,
               DAT_007f8708,DAT_007f870c,DAT_007f8710);
  FUN_00680640();
  FUN_006558d0(1);
  DAT_007f8714 = 0;
  return;
}

