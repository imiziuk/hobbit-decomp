
void __fastcall FUN_0059c9e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd750;
  local_c = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x28) + 1;
  ExceptionList = &local_c;
  *(int *)(param_1 + 0x28) = iVar6;
  if (*(int *)(*(int *)(param_1 + 0x1c) + 8) <= iVar6) {
    FUN_0059cb70();
    ExceptionList = local_c;
    return;
  }
  FUN_00649b60(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + iVar6 * 4));
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  uVar3 = FUN_00659600(local_38,1);
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + *(int *)(param_1 + 0x28) * 4);
  uVar1 = *(uint *)(iVar6 + 0x30);
  uVar2 = *(uint *)(iVar6 + 0x34);
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
  for (iVar6 = iVar4; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)) {
  }
  if (iVar4 == -1) {
LAB_0059cafc:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  else {
    do {
      piVar5 = (int *)(DAT_0076f648 + iVar4 * 0x14);
      iVar6 = *piVar5;
      if (((iVar6 != 0) && (*(uint *)(iVar6 + 8) == uVar1)) && (*(uint *)(iVar6 + 0xc) == uVar2)) {
        if (iVar4 == -1) goto LAB_0059cafc;
        uVar1 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        piVar5 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        FUN_00649720();
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0xfc))(*(undefined4 *)(param_1 + 0x3c));
        }
        goto LAB_0059cb41;
      }
      iVar4 = (int)*(short *)((int)piVar5 + 0xe);
    } while (iVar4 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_0059cb41:
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

