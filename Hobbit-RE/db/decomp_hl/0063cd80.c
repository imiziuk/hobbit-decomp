
void FUN_0063cd80(ushort *param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = FUN_0063dcd0(param_2);
  *param_1 = uVar1;
  if ((param_2 != 0x10) && (((int)(short)uVar1 & 1 << ((byte)param_2 - 1 & 0x1f)) != 0)) {
    *param_1 = ~((short)(1 << ((byte)param_2 & 0x1f)) - 1U) | uVar1;
  }
  return;
}

