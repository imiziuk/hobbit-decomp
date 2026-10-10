
int * __thiscall FUN_00664540(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_2 + 0x34);
  iVar2 = *(int *)(param_2 + 0x18);
  iVar3 = *(int *)(param_2 + 0x1c);
  iVar4 = *(int *)(param_1 + 0x344);
  iVar5 = 0;
  if (0 < iVar4) {
    piVar6 = (int *)(param_1 + 0x24);
    do {
      if ((piVar6[1] == iVar1) && (*piVar6 == iVar3)) {
        return (int *)(param_1 + 0x24 + iVar5 * 0x28);
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 10;
    } while (iVar5 < iVar4);
  }
  piVar6 = (int *)(param_1 + 0x24 + iVar4 * 0x28);
  *(int *)(param_1 + 0x344) = iVar4 + 1;
  FUN_00664bb0();
  *piVar6 = iVar3;
  piVar6[1] = iVar1;
  piVar6[2] = iVar2;
  return piVar6;
}

