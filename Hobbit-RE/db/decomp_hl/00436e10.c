
undefined4 __thiscall FUN_00436e10(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  piVar3 = (int *)(param_1 + 0x104);
  do {
    if (-1 < *piVar3) {
      if (iVar4 == param_2) {
        uVar2 = FUN_006ab170(s_QuestNames_00723b30,
                             *(uint *)(param_1 + 0x104 + iVar1 * 4) & 0xefffffff);
        return uVar2;
      }
      iVar4 = iVar4 + 1;
    }
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 0x32);
  return 0;
}

