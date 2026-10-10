
void __thiscall FUN_00436f90(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf8e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0064afa0();
  puVar3 = (uint *)(param_1 + 0x104);
  local_4 = 0;
  iVar2 = 0;
  puVar1 = puVar3;
  do {
    if ((*puVar1 & 0xefffffff) == param_2) goto LAB_00437067;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x32);
  iVar2 = 0;
  do {
    if (*puVar3 == 0xffffffff) {
      *(uint *)(param_1 + 0x104 + iVar2 * 4) = param_2 | -(uint)(param_3 != 0) & 0x10000000;
      FUN_004f8a80();
      FUN_00659600(s_QuestLogUpdated_00723c2c,1);
      FUN_00436f30();
      FUN_0064e7d0(s__________________________________00723bf4);
      FUN_0064e7d0(s_____________________QUEST_GIVEN___00723bbc);
      FUN_0064e7d0(s__________________________________00723b84);
      break;
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 < 0x32);
LAB_00437067:
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return;
}

