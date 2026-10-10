
undefined4 __thiscall FUN_00436e60(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)(param_1 + 0x104);
  iVar4 = 0;
  iVar6 = 0;
  iVar5 = 0x32;
  piVar1 = piVar3;
  do {
    if (-1 < *piVar1) {
      iVar6 = iVar6 + 1;
    }
    piVar1 = piVar1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (iVar6 == 0) {
    if ((DAT_0075c744 & 1) == 0) {
      DAT_0075c744 = DAT_0075c744 | 1;
      FUN_0064b130(s_No_Quest_00723b78);
      FUN_006bfe55(&LAB_00436f20);
    }
    return DAT_0075c748;
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (iVar6 + -1 < param_2) {
    param_2 = iVar6 + -1;
  }
  iVar5 = 0;
  do {
    if (-1 < *piVar3) {
      if (iVar4 == param_2) {
        uVar2 = FUN_006ab170(s_QuestDesc_00723b24,
                             *(uint *)(param_1 + 0x104 + iVar5 * 4) & 0xefffffff);
        return uVar2;
      }
      iVar4 = iVar4 + 1;
    }
    iVar5 = iVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar5 < 0x32);
  return 0;
}

