
void __fastcall FUN_004cdaa0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4c20;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_save_pedestal__OnAdvanceLogic_0072d4e8);
  uVar1 = *(uint *)(param_1 + 0x188);
  uVar2 = *(uint *)(param_1 + 0x18c);
  local_4 = 0;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  iVar3 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
  for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
  }
  if (iVar3 == -1) {
LAB_004cdb6e:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  else {
    do {
      piVar6 = (int *)(DAT_0076f648 + iVar3 * 0x14);
      iVar4 = *piVar6;
      if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar1)) && (*(uint *)(iVar4 + 0xc) == uVar2)) {
        if (iVar3 == -1) goto LAB_004cdb6e;
        uVar1 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        piVar6 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        FUN_00649720();
        if (((piVar6 == (int *)0x0) || ((char)piVar6[0x1f] != '-')) ||
           ((iVar4 = (**(code **)(*piVar6 + 0xd4))(), iVar4 == 0 ||
            ((iVar3 = FUN_00647ed0(iVar4,s_Saveped_inactive_0072d4c4), iVar3 != 0 &&
             (iVar4 = FUN_00647ed0(iVar4,s_Saveped_active_0072d4d8), iVar4 != 0))))))
        goto LAB_004cdbe3;
        goto LAB_004cdbef;
      }
      iVar3 = (int)*(short *)((int)piVar6 + 0xe);
    } while (iVar3 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_004cdbe3:
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
LAB_004cdbef:
  if (*(int *)(param_1 + 0x188) == 0 && *(int *)(param_1 + 0x18c) == 0) {
    if ((DAT_0075dae0 == *(int *)(param_1 + 8)) && (DAT_0075dae4 == *(int *)(param_1 + 0xc))) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    FUN_004cd880(uVar5);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

