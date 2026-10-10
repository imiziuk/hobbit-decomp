
void FUN_0063cd20(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0063dcd0(param_2);
  *param_1 = uVar1;
  if ((param_2 != 0x20) && ((uVar1 & 1 << ((byte)param_2 - 1 & 0x1f)) != 0)) {
    *param_1 = ~((1 << ((byte)param_2 & 0x1f)) - 1U) | uVar1;
  }
  return;
}

