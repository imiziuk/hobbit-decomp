
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00532b40(int param_1,float param_2)

{
  float fVar1;
  
  if ((*(int *)(param_1 + 0x1d4) != 1) || (*(float *)(param_1 + 0x1c4) <= _DAT_006ebfe4)) {
    if ((*(int *)(param_1 + 0x1d4) != 2) ||
       ((*(float *)(param_1 + 0x1c4) < _DAT_006e92f0 ==
         (NAN(*(float *)(param_1 + 0x1c4)) || NAN(_DAT_006e92f0)) ||
        (fVar1 = DAT_006e92e8 / (*(float *)(param_1 + 0x1cc) / param_2) +
                 *(float *)(param_1 + 0x1c4), *(float *)(param_1 + 0x1c4) = fVar1,
        fVar1 <= *(float *)(param_1 + 0x1c8))))) goto LAB_00532bec;
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1c8);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1c4) - DAT_006e92e8 / (*(float *)(param_1 + 0x1cc) / param_2);
    *(float *)(param_1 + 0x1c4) = fVar1;
    if (fVar1 < *(float *)(param_1 + 0x1c8) == (NAN(fVar1) || NAN(*(float *)(param_1 + 0x1c8))))
    goto LAB_00532bec;
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1c8);
  }
  *(undefined4 *)(param_1 + 0x1d4) = 0;
LAB_00532bec:
  FUN_0065a050(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1),
               *(undefined4 *)(param_1 + 0x1c4));
  return;
}

