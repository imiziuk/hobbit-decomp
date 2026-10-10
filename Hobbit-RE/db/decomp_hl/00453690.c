
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453690(int param_1,float param_2)

{
  float fVar1;
  
  if (*(int *)(param_1 + 0x20) == 1) {
    if (*(float *)(param_1 + 0x18) <= _DAT_006ebfe4) goto LAB_00453709;
    fVar1 = *(float *)(param_1 + 0x18) - DAT_006e92e8 / (*(float *)(param_1 + 0x14) / param_2);
    *(float *)(param_1 + 0x18) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0x1c) == (NAN(fVar1) || NAN(*(float *)(param_1 + 0x1c))))
    goto LAB_0045371b;
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    if (*(int *)(param_1 + 0x20) != 2) goto LAB_0045371b;
    if (*(float *)(param_1 + 0x18) < _DAT_006e92f0 !=
        (NAN(*(float *)(param_1 + 0x18)) || NAN(_DAT_006e92f0))) {
      fVar1 = DAT_006e92e8 / (*(float *)(param_1 + 0x10) / param_2) + *(float *)(param_1 + 0x18);
      *(float *)(param_1 + 0x18) = fVar1;
      if (fVar1 <= *(float *)(param_1 + 0x1c)) goto LAB_0045371b;
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
    }
LAB_00453709:
    *(undefined4 *)(param_1 + 0x10) = 0x3fc00000;
    *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
LAB_0045371b:
  FUN_0065a050();
  return;
}

