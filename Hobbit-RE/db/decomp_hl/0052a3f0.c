
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052a3f0(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x38c) * 4) + 0x18))
                    ();
  if (iVar1 == 9) {
    FUN_00659600(s_ChestOpen_0072daf0,1);
    *(undefined4 *)(param_1 + 0x39c) = 1;
    return;
  }
  if (iVar1 == 8) {
    FUN_00659600(s_LockFailure_00735d80,1);
    *(undefined4 *)(param_1 + 0x3a0) = 1;
    return;
  }
  if (0 < iVar1) {
    FUN_00659600(s_LockSuccess_00735d98,1);
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x38c) * 4) + 0x1c))(0);
    iVar1 = *(int *)(param_1 + 0x38c) + 1;
    *(int *)(param_1 + 0x38c) = iVar1;
    if (*(int *)(param_1 + 8) <= iVar1) {
      *(int *)(param_1 + 0x38c) = *(int *)(param_1 + 8) + -1;
    }
    (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x38c) * 4) + 0x1c))(1);
    return;
  }
  if (iVar1 != -1) {
    FUN_00659600(s_LockMistake_00735d8c,1);
    *(float *)(param_1 + 0x390) = *(float *)(param_1 + 0x390) - _DAT_006e936c;
  }
  return;
}

