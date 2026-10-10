
bool __fastcall FUN_0063d990(int *param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1[6];
  if (param_1[2] <= iVar2) {
    return false;
  }
  bVar1 = *(byte *)((iVar2 >> 3) + *param_1);
  param_1[6] = iVar2 + 1;
  return ((byte)(1 << (7 - ((byte)iVar2 & 7) & 0x1f)) & bVar1) != 0;
}

