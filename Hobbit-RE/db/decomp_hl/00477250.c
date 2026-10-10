
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00477250(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float local_10;
  
  fVar1 = *(float *)(param_1 + 8);
  if ((NAN(*(float *)(param_1 + 0x18)) || NAN(DAT_006e92e4)) ==
      (*(float *)(param_1 + 0x18) == DAT_006e92e4)) {
    local_10 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x18);
  }
  else {
    local_10 = 0.0;
  }
  fVar4 = (float10)FUN_00657fa0();
  if ((NAN(fVar4) || NAN((float10)DAT_006e92e4)) == (fVar4 == (float10)DAT_006e92e4)) {
    fVar2 = (float)fVar4 + local_10;
    FUN_0064e870(6,s_Adjusting__s_from__f_to__f__Offs_00727e10,*(undefined4 *)(param_1 + 0x28),
                 (double)fVar1,(double)fVar2,(double)local_10);
    fVar3 = _DAT_006e95a8;
    *(float *)(param_1 + 0x18) = (float)fVar4;
    if (fVar2 < fVar3) {
      fVar2 = _DAT_006e95a8;
    }
    *(float *)(param_1 + 8) = fVar2;
  }
  if ((NAN(fVar1) || NAN(*(float *)(param_1 + 8))) != (fVar1 == *(float *)(param_1 + 8))) {
    return 0;
  }
  return 1;
}

