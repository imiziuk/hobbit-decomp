
void __thiscall FUN_0055d360(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int in_stack_00000030;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006da418;
  local_c = ExceptionList;
  iVar5 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_006501d0(s_AIManager__SetLinkState_0073e8f0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (DAT_0073e824 != 0) {
    FUN_005620d0();
    DAT_0073e824 = 0;
  }
  iVar2 = in_stack_00000030;
  bVar1 = false;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar3 = FUN_00647ed0(param_2,*(undefined4 *)
                                    (*(int *)(*(int *)(param_1 + 0x4c) + iVar5 * 4) + 0x10));
      if (iVar3 == 0) {
        bVar1 = true;
        if ((iVar2 == 0) || (iVar2 == 2)) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + iVar5 * 4);
          bVar6 = *(int *)(iVar3 + 8) == 3;
        }
        else {
          if ((iVar2 != 1) && (iVar2 != 3)) goto LAB_0055d404;
          iVar3 = *(int *)(*(int *)(param_1 + 0x4c) + iVar5 * 4);
          bVar6 = *(int *)(iVar3 + 8) == 2;
        }
        if (!bVar6) {
          *(int *)(iVar3 + 8) = iVar2;
        }
      }
LAB_0055d404:
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x48));
    if (bVar1) goto LAB_0055d44d;
  }
  FUN_00649920(&stack0x00000030,s_Failed_to_find_the_link_to_toggl_0073e8c0,param_2);
  local_4._0_1_ = 2;
  uVar4 = FUN_00649940();
  FUN_0064e870(6,uVar4);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00649950();
LAB_0055d44d:
  local_4 = local_4 & 0xffffff00;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

