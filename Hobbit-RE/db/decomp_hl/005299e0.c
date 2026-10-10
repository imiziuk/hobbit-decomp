
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005299e0(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(param_1 + 0x390) - _DAT_006efa50;
  *(float *)(param_1 + 0x390) = fVar1;
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    FUN_00659600(s_LockFailure_00735d80,1);
    return 2;
  }
  if (*(int *)(param_1 + 0x39c) != 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x3a0) != 0) {
    return 2;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar2 * 4) + 0x20))
                (iVar2 == *(int *)(param_1 + 0x38c));
      (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + iVar2 * 4) + 0x10))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return 0;
}

