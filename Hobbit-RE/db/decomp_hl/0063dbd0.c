
void __thiscall FUN_0063dbd0(int *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  
  if (param_3 != 0) {
    if (param_1[2] <= param_1[6] + param_3) {
      FUN_0063ca00();
    }
    iVar2 = *param_1;
    param_3 = param_1[6] + param_3;
    pbVar6 = (byte *)((param_1[6] >> 3) + iVar2);
    param_1[6] = param_3;
    iVar5 = param_3 + -1;
    if (param_3 + -1 <= param_1[3]) {
      iVar5 = param_1[3];
    }
    param_1[3] = iVar5;
    __allshr();
    __allshl();
    __allshl();
    for (; pbVar6 != (byte *)(iVar2 + 1 + (param_3 + -1 >> 3)); pbVar6 = pbVar6 + 1) {
      bVar3 = __aullshr();
      bVar1 = *pbVar6;
      bVar4 = __aullshr();
      *pbVar6 = bVar3 & bVar1 | bVar4;
    }
  }
  return;
}

