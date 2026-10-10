
float10 FUN_00658e60(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 extraout_ST0;
  
  if (param_1 < DAT_006e92e4 != (param_1 == DAT_006e92e4)) {
    return (float10)*(float *)(&DAT_0074e0f0 + param_2 * 0x24);
  }
  if (DAT_006e92e8 <= param_1) {
    return (float10)*(float *)(&DAT_0074e110 + param_2 * 0x24);
  }
  iVar1 = __ftol();
  iVar2 = (iVar1 + param_2 * 9) * 4;
  return (extraout_ST0 - (float10)iVar1) * (float10)*(float *)(&DAT_0074e0f4 + iVar2) +
         ((float10)DAT_006e92e8 - (extraout_ST0 - (float10)iVar1)) *
         (float10)*(float *)(&DAT_0074e0f0 + iVar2);
}

