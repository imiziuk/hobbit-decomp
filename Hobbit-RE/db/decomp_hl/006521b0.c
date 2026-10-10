
int FUN_006521b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_00651f40();
  iVar3 = (int)uVar7;
  iVar2 = *(int *)((ulonglong)uVar7 >> 0x20);
  if (iVar3 <= *(int *)(iVar2 + -4)) {
    param_2 = iVar2 + param_2;
    iVar1 = (*(int *)(iVar2 + -4) - iVar3) + 1 + iVar2;
    if (param_2 != iVar1) {
      iVar6 = param_2 - (int)*extraout_ECX;
      do {
        iVar5 = 0;
        pcVar4 = (char *)*extraout_ECX;
        if (0 < iVar3) {
          do {
            if (pcVar4[iVar6] != *pcVar4) break;
            iVar5 = iVar5 + 1;
            pcVar4 = pcVar4 + 1;
          } while (iVar5 < iVar3);
        }
        if (iVar5 == iVar3) {
          return param_2 - iVar2;
        }
        param_2 = param_2 + 1;
        iVar6 = iVar6 + 1;
      } while (param_2 != iVar1);
    }
  }
  return -1;
}

