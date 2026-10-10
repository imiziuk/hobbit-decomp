
undefined4 __thiscall FUN_005aa880(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  
  FUN_005aa750();
  iVar2 = FUN_004a1060();
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = (int *)FUN_005aa750();
  pfVar4 = (float *)(**(code **)(*piVar3 + 0x28))();
  fVar1 = SQRT((param_2 - *pfVar4) * (param_2 - *pfVar4) +
               (param_3 - pfVar4[1]) * (param_3 - pfVar4[1]) +
               (param_4 - pfVar4[2]) * (param_4 - pfVar4[2]));
  if (fVar1 < *(float *)(param_1 + 0x24) == (fVar1 == *(float *)(param_1 + 0x24))) {
    if (fVar1 < *(float *)(param_1 + 0x28) != (fVar1 == *(float *)(param_1 + 0x28))) {
      FUN_0041bcc0();
      iVar2 = FUN_00420fe0();
      if (iVar2 != 0) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}

