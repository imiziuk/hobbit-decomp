
undefined4 __thiscall FUN_00435330(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf720;
  local_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_c;
  do {
    iVar2 = FUN_00647e40(uVar1,(&PTR_DAT_00720fa0)[iVar4]);
    if (iVar2 == 0) {
      if (*param_3 != 2) {
        ExceptionList = local_c;
        return 0;
      }
      *(int *)(param_1 + 0x1cc + iVar4 * 4) = param_3[0x94];
      ExceptionList = local_c;
      return 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc6);
  iVar4 = 0;
  while( true ) {
    if ((iVar4 != 0) || (*(int *)(param_1 + 0x104) == -1)) {
      FUN_00649920(&param_2,s_Quest_List__d_00723130,iVar4);
      local_4 = 0;
      uVar3 = FUN_00649940();
      iVar2 = FUN_00647e40(uVar1,uVar3);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        if (*param_3 != 1) {
          ExceptionList = local_c;
          return 0;
        }
        *(int *)(param_1 + 0x104 + iVar4 * 4) = param_3[0x93];
        ExceptionList = local_c;
        return 1;
      }
    }
    FUN_00649920(local_10,s_Quests_Completed__d_0072311c,iVar4);
    local_4 = 1;
    uVar3 = FUN_00649940();
    iVar2 = FUN_00647e40(uVar1,uVar3);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) break;
    iVar4 = iVar4 + 1;
    if (0x31 < iVar4) {
      ExceptionList = local_c;
      return 0;
    }
  }
  if (*param_3 != 3) {
    ExceptionList = local_c;
    return 0;
  }
  *(int *)(param_1 + 4 + iVar4 * 4) = param_3[0x95];
  ExceptionList = local_c;
  return 1;
}

