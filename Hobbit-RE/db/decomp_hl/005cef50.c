
void __fastcall FUN_005cef50(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dfd30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_ActionSetTeam__Execute___0074689c);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x18);
  local_4 = 0;
  FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
  iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar1) * -0xfb & 0xfff) * 2);
  for (iVar5 = iVar4; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
  }
  if (iVar4 == -1) {
LAB_005cf01b:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  else {
    do {
      iVar5 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
      if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == uVar2)) && (*(uint *)(iVar5 + 0xc) == uVar1)) {
        if (iVar4 == -1) goto LAB_005cf01b;
        piVar3 = *(int **)(DAT_0076f648 + iVar4 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x13c))(*(undefined4 *)(param_1 + 0x20));
        }
        goto LAB_005cf051;
      }
      iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe);
    } while (iVar4 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_005cf051:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

