
void __thiscall FUN_00437880(int param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf9a0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bilbo__Ladder_Update_00723c74);
  iVar5 = *(int *)(param_1 + 0x4680);
  iVar3 = *(int *)(param_1 + 0x4684);
  piVar1 = (int *)(param_1 + 0x4680);
  local_4 = 0;
  if (iVar5 != 0 || iVar3 != 0) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar5 = FUN_00406ce0(iVar5,iVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar5 == -1) {
      FUN_00649720();
    }
    else {
      uVar6 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
      bVar2 = *(byte *)(uVar6 + 0x7f);
      FUN_00649720();
      if (((((-(uint)((bVar2 & 0x10) != 0) & uVar6) != 0) &&
           (*(float *)(param_1 + 0x44) <= *(float *)(param_1 + 0x4694))) &&
          (*(float *)(param_1 + 0x50) < *(float *)(param_1 + 0x4688) ==
           (NAN(*(float *)(param_1 + 0x50)) || NAN(*(float *)(param_1 + 0x4688))))) &&
         (((*(float *)(param_1 + 0x4c) <= *(float *)(param_1 + 0x469c) &&
           (*(float *)(param_1 + 0x58) < *(float *)(param_1 + 0x4690) ==
            (NAN(*(float *)(param_1 + 0x58)) || NAN(*(float *)(param_1 + 0x4690))))) &&
          ((*(float *)(param_1 + 0x48) <= *(float *)(param_1 + 0x4698) &&
           (*(float *)(param_1 + 0x54) < *(float *)(param_1 + 0x468c) ==
            (NAN(*(float *)(param_1 + 0x54)) || NAN(*(float *)(param_1 + 0x468c)))))))))
      goto LAB_00437b36;
    }
    *piVar1 = 0;
    *(undefined4 *)(param_1 + 0x4684) = 0;
  }
  *piVar1 = 0;
  *(undefined4 *)(param_1 + 0x4684) = 0;
  FUN_00588ff0(param_2);
  iVar5 = FUN_00589010(param_2,piVar1);
  while (iVar5 != 0) {
    iVar5 = *piVar1;
    uVar4 = *(undefined4 *)(param_1 + 0x4684);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 2;
    iVar5 = FUN_00406ce0(iVar5,uVar4);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar5 == -1) {
      FUN_00649720();
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
      uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
      FUN_00649720();
    }
    if (((((*(uint *)(uVar6 + 0x10) & 0x2000) != 0) &&
         (*(float *)(uVar6 + 0x44) <= *(float *)(param_1 + 0x50))) &&
        ((*(float *)(uVar6 + 0x50) < *(float *)(param_1 + 0x44) ==
          (NAN(*(float *)(uVar6 + 0x50)) || NAN(*(float *)(param_1 + 0x44))) &&
         (((*(float *)(uVar6 + 0x4c) <= *(float *)(param_1 + 0x58) &&
           (*(float *)(uVar6 + 0x58) < *(float *)(param_1 + 0x4c) ==
            (NAN(*(float *)(uVar6 + 0x58)) || NAN(*(float *)(param_1 + 0x4c))))) &&
          (*(float *)(uVar6 + 0x48) <= *(float *)(param_1 + 0x54))))))) &&
       (*(float *)(uVar6 + 0x54) < *(float *)(param_1 + 0x48) ==
        (NAN(*(float *)(uVar6 + 0x54)) || NAN(*(float *)(param_1 + 0x48))))) break;
    iVar5 = FUN_00589010(param_2,piVar1);
  }
  iVar5 = *piVar1;
  iVar3 = *(int *)(param_1 + 0x4684);
  if (iVar5 != 0 || iVar3 != 0) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 3;
    iVar5 = FUN_00406ce0(iVar5,iVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar5 == -1) {
      FUN_00649720();
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
      uVar6 = -(uint)((*(byte *)(uVar6 + 0x7f) & 0x10) != 0) & uVar6;
      FUN_00649720();
    }
    *(undefined4 *)(param_1 + 0x4688) = *(undefined4 *)(uVar6 + 0x44);
    *(undefined4 *)(param_1 + 0x468c) = *(undefined4 *)(uVar6 + 0x48);
    *(undefined4 *)(param_1 + 0x4690) = *(undefined4 *)(uVar6 + 0x4c);
    FUN_004357e0(uVar6 + 0x50);
    FUN_00437b60();
  }
LAB_00437b36:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

