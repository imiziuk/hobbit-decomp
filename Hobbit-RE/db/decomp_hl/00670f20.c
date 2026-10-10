
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00670f20(int param_1,int param_2,uint param_3,uint param_4)

{
  if (param_1 == -1) {
    param_1 = 0;
  }
  if (((param_2 < 0x18b) && (0x9d < param_2)) && (-1 < (int)(&DAT_007f1808)[param_1])) {
    return (float10)(((byte)(&DAT_007f17b7)[param_2 + param_1 * 0xed] & param_3) == param_4);
  }
  if ((param_2 < 0x9c) && (0x89 < param_2)) {
    switch(param_2) {
    case 0x8b:
      return (float10)((DAT_007f1fbc & param_3) == param_4);
    case 0x8c:
      return (float10)((DAT_007f1fbe & param_3) == param_4);
    case 0x8d:
      return (float10)((DAT_007f1fbd & param_3) == param_4);
    case 0x94:
    case 0x97:
      if (DAT_007efff0 == 3) {
        return (float10)_DAT_007effc0;
      }
      return (float10)_DAT_007effc8;
    case 0x95:
    case 0x98:
      if (DAT_007efff0 == 3) {
        return (float10)_DAT_007effc4;
      }
      return (float10)_DAT_007effcc;
    case 0x96:
      return (float10)_DAT_007f1fd0;
    case 0x9a:
      return (float10)DAT_007f1fc8;
    case 0x9b:
      return (float10)_DAT_007f1fcc;
    }
  }
  if (((param_2 < 0x88) && (0x59 < param_2)) && (-1 < (int)(&DAT_007f17e8)[param_1])) {
    if (param_2 < 0x7f) {
      return (float10)(((byte)(&DAT_007f20e1)[param_2 + param_1 * 0x4c] & param_3) == param_4);
    }
    return (float10)*(float *)(&DAT_007f1f64 + (param_1 * 0x13 + param_2) * 4);
  }
  if (param_2 == 2) {
    return (float10)_DAT_007f239c;
  }
  return (float10)DAT_006e92e4;
}

