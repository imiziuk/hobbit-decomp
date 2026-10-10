
void __thiscall FUN_004ba710(int param_1,undefined4 param_2)

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
  puStack_8 = &LAB_006d45c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_push_box__OnAdvanceLogic_0072c514);
  uVar1 = *(uint *)(param_1 + 0x298);
  uVar2 = *(uint *)(param_1 + 0x29c);
  local_4 = 0;
  if (uVar1 != 0 || uVar2 != 0) {
    if ((*(uint *)(param_1 + 0x260) & 0x20) == 0) {
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      iVar3 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
      for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
      }
      if (iVar3 == -1) {
LAB_004ba80b:
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
      }
      else {
        do {
          piVar6 = (int *)(DAT_0076f648 + iVar3 * 0x14);
          iVar4 = *piVar6;
          if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar1)) && (*(uint *)(iVar4 + 0xc) == uVar2)
             ) {
            if (iVar3 == -1) goto LAB_004ba80b;
            uVar1 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
            local_4 = (uint)local_4._1_3_ << 8;
            piVar6 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
            FUN_00649720();
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x114))();
            }
            goto LAB_004ba84c;
          }
          iVar3 = (int)*(short *)((int)piVar6 + 0xe);
        } while (iVar3 != -1);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
      }
LAB_004ba84c:
      *(undefined4 *)(param_1 + 0x298) = 0;
      *(undefined4 *)(param_1 + 0x29c) = 0;
    }
    else {
      *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) & 0xffffffdf;
    }
  }
  if ((*(byte *)(param_1 + 0x260) & 2) == 0) {
    uVar5 = FUN_004be9b0(0);
    *(undefined4 *)(param_1 + 0x268) = uVar5;
    *(undefined4 *)(param_1 + 0x2b0) = param_2;
    if ((*(byte *)(param_1 + 0x15b) & 1) != 0) {
      FUN_004c0ce0(param_2);
    }
    FUN_004bd710(param_2);
    FUN_004bd3e0();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

