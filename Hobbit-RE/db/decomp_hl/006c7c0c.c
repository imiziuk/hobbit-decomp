
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006c7c0c(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 in_ST1;
  
  if (((unkuint10)in_ST1 & 0) != 0) {
    fVar1 = (float10)FUN_006c7a06();
    return fVar1;
  }
  if (SUB104(in_ST1,0) != 0 || (int)((unkuint10)in_ST1 >> 0x20) != 0) {
    fVar1 = (float10)FUN_006c7a06(in_ST1 * (float10)_DAT_00758a24);
    return fVar1;
  }
  return in_ST0 - (in_ST0 / in_ST1) * in_ST1;
}

