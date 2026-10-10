
void __thiscall FUN_005ed610(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e1fe0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00649920(&local_10,s_AIManager_Actions_Action__d_Mate_00747e0c,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar3 = FUN_00649940();
  uVar1 = param_2;
  iVar4 = FUN_00647e40(param_2,uVar3);
  piVar2 = param_3;
  if ((iVar4 == 0) &&
     ((((iVar4 = *param_3, iVar4 == 4 || (iVar4 == 7)) || (iVar4 == 6)) || (iVar4 == 0xd)))) {
    FUN_0064a2e0(param_3 + 2);
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Enab_00747de8,*(undefined4 *)(param_1 + 4));
  local_4 = 1;
  uVar3 = FUN_00649940();
  iVar4 = FUN_00647e40(uVar1,uVar3);
  if ((iVar4 == 0) && (*piVar2 == 3)) {
    *(int *)(param_1 + 0x18) = piVar2[0x95];
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005ccb60(uVar1,piVar2);
  ExceptionList = local_c;
  return;
}

