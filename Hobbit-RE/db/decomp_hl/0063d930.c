
void __thiscall FUN_0063d930(int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  
  if (param_1[2] <= param_1[6]) {
    FUN_0063ca00();
  }
  pbVar4 = (byte *)(*param_1 + (param_1[6] >> 3));
  bVar3 = '\x01' << (7 - ((byte)param_1[6] & 7) & 0x1f);
  bVar2 = *pbVar4;
  if (param_2 == 0) {
    bVar2 = bVar2 & ~bVar3;
  }
  else {
    bVar2 = bVar2 | bVar3;
  }
  *pbVar4 = bVar2;
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 1;
  if (param_1[3] < iVar1) {
    param_1[3] = iVar1;
    return;
  }
  param_1[3] = param_1[3];
  return;
}

