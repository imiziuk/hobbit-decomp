
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00625830(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float10 fVar4;
  
  fVar1 = *(float *)(param_1 + 0x48);
  if (*(float *)(param_1 + 0x50) < *(float *)(param_1 + 0x54)) {
    fVar3 = *(float *)(param_1 + 0x70) * (float)_DAT_006f6180;
    if (fVar3 < fVar1 != (NAN(fVar3) || NAN(fVar1))) {
      *param_2 = 7;
      return 1;
    }
    if ((*(float *)(param_1 + 0x54) <= *(float *)(param_1 + 0x50)) &&
       (*(float *)(param_1 + 0x48) < *(float *)(param_1 + 0x74))) {
      *param_2 = 0xe;
      return 1;
    }
    if (*(float *)(param_1 + 100) < DAT_006e92e4 != (*(float *)(param_1 + 100) == DAT_006e92e4)) {
      iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x214);
      fVar4 = (float10)FUN_00647b30(0,0x42c80000);
      if (fVar4 <= (float10)*(int *)(iVar2 + 0xc)) {
        *param_2 = 8;
        return 1;
      }
      *(undefined4 *)(param_1 + 100) = 0x3f800000;
    }
  }
  else if (*(int *)(param_1 + 0x58) == 0) {
    fVar3 = *(float *)(param_1 + 0x74) * (float)_DAT_006f6180;
    if (fVar3 < fVar1 != (NAN(fVar3) || NAN(fVar1))) {
      *param_2 = 9;
      return 1;
    }
  }
  else if (DAT_006f60ec * (float)_DAT_006f6180 < fVar1 !=
           (NAN(DAT_006f60ec * (float)_DAT_006f6180) || NAN(fVar1))) {
    *param_2 = 9;
    return 1;
  }
  return 0;
}

