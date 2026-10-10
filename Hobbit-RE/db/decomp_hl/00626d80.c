
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00626d80(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  
  if ((*(int *)(param_1 + 0x48) != 0) || (*(float *)(param_1 + 0x5c) <= *(float *)(param_1 + 0x58)))
  {
    fVar1 = *(float *)(param_1 + 0x4c);
    if (*(int *)(param_1 + 0x54) == 0) {
      fVar2 = *(float *)(param_1 + 0x6c) * (float)_DAT_006f6180;
      if (fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1))) {
        if (_DAT_006f6194 < *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x6c)) {
          *param_2 = 7;
          return 1;
        }
        *param_2 = 8;
        return 1;
      }
    }
    else if (DAT_006f6190 * (float)_DAT_006f6180 < fVar1 !=
             (NAN(DAT_006f6190 * (float)_DAT_006f6180) || NAN(fVar1))) {
      if (_DAT_006f6194 < *(float *)(param_1 + 0x4c) - DAT_006f6190) {
        *param_2 = 7;
        return 1;
      }
      *param_2 = 8;
      return 1;
    }
  }
  else if (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0x68) !=
           (NAN(*(float *)(param_1 + 0x4c)) || NAN(*(float *)(param_1 + 0x68)))) {
    *param_2 = 0xd;
    return 1;
  }
  return 0;
}

