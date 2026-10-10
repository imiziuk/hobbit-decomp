
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004312b0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float10 fVar2;
  
  switch(*(undefined4 *)(param_1 + 0x5ee4)) {
  case 0:
    *param_2 = 0xbf800000;
    if (*(float *)(param_1 + 0x5eb4) < _DAT_006ec008 !=
        (NAN(*(float *)(param_1 + 0x5eb4)) || NAN(_DAT_006ec008))) {
      *param_2 = 0xbf800000;
      *(undefined4 *)(param_1 + 0x5ee4) = 6;
LAB_0043132d:
      fVar2 = (float10)FUN_00647b30(0x3e800000,0x3fa00000);
      *(float *)(param_1 + 0x5ee8) = (float)fVar2;
      return;
    }
    break;
  case 1:
    *param_2 = 0x3f800000;
    if (_DAT_006ec004 < *(float *)(param_1 + 0x5eb4)) {
      *param_2 = 0x3f800000;
      *(undefined4 *)(param_1 + 0x5ee4) = 7;
      goto LAB_0043132d;
    }
    break;
  case 2:
    *param_2 = 0x3f800000;
    if (_DAT_006ec004 < *(float *)(param_1 + 0x5eb4)) {
      *param_2 = 0;
      *(undefined4 *)(param_1 + 0x5ee4) = 5;
      return;
    }
    break;
  case 3:
    *param_2 = 0xbf800000;
    if (*(float *)(param_1 + 0x5eb4) < _DAT_006ec008 !=
        (NAN(*(float *)(param_1 + 0x5eb4)) || NAN(_DAT_006ec008))) {
      *param_2 = 0;
      *(undefined4 *)(param_1 + 0x5ee4) = 4;
      return;
    }
    break;
  case 4:
    *param_2 = 0;
    if (_DAT_006ec000 < *(float *)(param_1 + 0x5eb4)) {
      *(undefined4 *)(param_1 + 0x5ee4) = 8;
      return;
    }
    break;
  case 5:
    *param_2 = 0;
    if (*(float *)(param_1 + 0x5eb4) < _DAT_006e95a8 !=
        (NAN(*(float *)(param_1 + 0x5eb4)) || NAN(_DAT_006e95a8))) {
      *(undefined4 *)(param_1 + 0x5ee4) = 8;
      return;
    }
    break;
  case 6:
    *param_2 = 0xbf800000;
    fVar1 = *(float *)(param_1 + 0x920) + *(float *)(param_1 + 0x5eec);
    *(float *)(param_1 + 0x5eec) = fVar1;
    if (*(float *)(param_1 + 0x5ee8) <= fVar1) {
      *(undefined4 *)(param_1 + 0x5ee4) = 2;
      *(undefined4 *)(param_1 + 0x5eec) = 0;
      return;
    }
    break;
  case 7:
    *param_2 = 0x3f800000;
    fVar1 = *(float *)(param_1 + 0x920) + *(float *)(param_1 + 0x5eec);
    *(float *)(param_1 + 0x5eec) = fVar1;
    if (*(float *)(param_1 + 0x5ee8) <= fVar1) {
      *(undefined4 *)(param_1 + 0x5ee4) = 3;
      *(undefined4 *)(param_1 + 0x5eec) = 0;
    }
  }
  return;
}

