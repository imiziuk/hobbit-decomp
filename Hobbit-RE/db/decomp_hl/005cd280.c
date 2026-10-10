
void __fastcall FUN_005cd280(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dfb00;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_ActionTriggerSwitch__Execute___007466e0);
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x1c);
  local_4 = 0;
  FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
  iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
  for (iVar5 = iVar4; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
  }
  if (iVar4 == -1) {
LAB_005cd34a:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  else {
    do {
      piVar1 = (int *)(DAT_0076f648 + iVar4 * 0x14);
      iVar5 = *piVar1;
      if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == uVar2)) && (*(uint *)(iVar5 + 0xc) == uVar3)) {
        if (iVar4 == -1) goto LAB_005cd34a;
        iVar5 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
        if ((iVar5 != 0) &&
           (FUN_004d2f20(*(undefined4 *)(param_1 + 0x20)), *(int *)(param_1 + 0x24) != 0)) {
          *(uint *)(param_1 + 0x20) = (uint)(*(int *)(param_1 + 0x20) == 0);
        }
        goto LAB_005cd391;
      }
      iVar4 = (int)*(short *)((int)piVar1 + 0xe);
    } while (iVar4 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_005cd391:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

