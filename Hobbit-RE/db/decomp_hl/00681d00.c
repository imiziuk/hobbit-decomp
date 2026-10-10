
int FUN_00681d00(byte param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 >> 3;
  if ((param_1 & 4) != 0) {
    iVar1 = iVar1 + param_3;
  }
  if ((param_1 & 2) != 0) {
    iVar1 = iVar1 + (param_3 >> 1);
  }
  if ((param_1 & 1) != 0) {
    iVar1 = iVar1 + (param_3 >> 2);
  }
  if ((param_1 & 8) != 0) {
    iVar1 = -iVar1;
  }
  iVar1 = iVar1 + param_2;
  if ((short)iVar1 != iVar1) {
    iVar1 = ((-0x8001 < iVar1) - 1 & 0xffff0001) + 0x7fff;
  }
  return iVar1;
}

