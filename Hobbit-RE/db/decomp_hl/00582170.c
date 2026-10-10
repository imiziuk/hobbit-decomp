
uint __thiscall FUN_00582170(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  short sVar2;
  undefined3 uVar4;
  short *psVar3;
  int iVar5;
  
  psVar3 = (short *)*param_1;
  uVar4 = (undefined3)((uint)psVar3 >> 8);
  if ((int)psVar3 < (int)*param_2) {
    return CONCAT31(uVar4,1);
  }
  if ((psVar3 == (short *)*param_2) && ((int)param_1[1] < (int)param_2[1])) {
    return CONCAT31(uVar4,1);
  }
  if ((param_1[1] == param_2[1]) && ((uint)param_1[0x15] < (uint)param_2[0x15])) {
LAB_005821a9:
    return CONCAT31((int3)((uint)psVar3 >> 8),1);
  }
  if (param_1[0x15] == param_2[0x15]) {
    iVar1 = param_1[1] + (int)psVar3;
    iVar5 = 0;
    if (0 < iVar1) {
      psVar3 = (short *)(param_1 + 3);
      do {
        sVar2 = *(short *)(((int)param_2 - (int)param_1) + (int)psVar3);
        if (*psVar3 < sVar2) goto LAB_005821a9;
        if (*psVar3 == sVar2) break;
        iVar5 = iVar5 + 1;
        psVar3 = psVar3 + 1;
      } while (iVar5 < iVar1);
    }
  }
  return (uint)psVar3 & 0xffffff00;
}

