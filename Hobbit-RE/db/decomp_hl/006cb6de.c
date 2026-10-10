
undefined4 FUN_006cb6de(byte param_1,uint param_2,byte param_3)

{
  if (((&DAT_00816241)[param_1] & param_3) == 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(ushort *)(&DAT_007587d6 + (uint)param_1 * 2) & param_2;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}

