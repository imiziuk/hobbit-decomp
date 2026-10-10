
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00458330(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  
  if (param_2 < DAT_006e92e8) {
    param_2 = DAT_006e92e8;
  }
  *(float *)(param_1 + 0xac) = param_2;
  iVar2 = FUN_004584b0();
  if (iVar2 == 0) {
    if (*(float *)(param_1 + 0xac) <= *(float *)(param_1 + 0xb4)) {
      fVar1 = *(float *)(param_1 + 0xac);
    }
    else {
      fVar1 = *(float *)(param_1 + 0xb4);
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0xac);
  }
  *(float *)(param_1 + 0xb4) = fVar1;
  fVar1 = fVar1 - _DAT_006ec634;
  if (fVar1 < *(float *)(param_1 + 0xb0) == (NAN(fVar1) || NAN(*(float *)(param_1 + 0xb0)))) {
    fVar1 = *(float *)(param_1 + 0xb0);
  }
  *(float *)(param_1 + 0xb0) = fVar1;
  FUN_00458600();
  return;
}

