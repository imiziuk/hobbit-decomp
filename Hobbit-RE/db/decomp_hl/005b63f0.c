
void __fastcall FUN_005b63f0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x30,*(undefined4 *)(iVar1 + -4),FUN_005b69c0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x30,*(undefined4 *)(iVar1 + -4),FUN_005b69c0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

