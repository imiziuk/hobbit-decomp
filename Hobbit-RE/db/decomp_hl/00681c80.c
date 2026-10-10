
void FUN_00681c80(int param_1,int *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1 - *param_2;
  bVar2 = -1 < iVar1;
  if (!bVar2) {
    iVar1 = -iVar1;
  }
  if (param_3 <= iVar1) {
    iVar1 = iVar1 - param_3;
  }
  if (param_3 >> 1 <= iVar1) {
    iVar1 = iVar1 - (param_3 >> 1);
  }
  if (param_3 >> 2 <= iVar1) {
    iVar1 = iVar1 - (param_3 >> 2);
  }
  if (bVar2) {
    iVar1 = (param_3 >> 3) - iVar1;
  }
  else {
    iVar1 = iVar1 - (param_3 >> 3);
  }
  iVar1 = iVar1 + param_1;
  if (0x7fff < iVar1) {
    *param_2 = 0x7fff;
    return;
  }
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  *param_2 = iVar1;
  return;
}

