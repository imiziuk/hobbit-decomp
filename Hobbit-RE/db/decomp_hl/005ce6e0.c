
void __fastcall FUN_005ce6e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dfc90;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_ActionAmbientAudioTrigger__Execu_00746828);
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x1c);
  local_4 = 0;
  FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
  iVar3 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
  for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
  }
  if (iVar3 == -1) {
LAB_005ce7ab:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  else {
    do {
      iVar4 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
      if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar1)) && (*(uint *)(iVar4 + 0xc) == uVar2)) {
        if (iVar3 == -1) goto LAB_005ce7ab;
        iVar4 = *(int *)(DAT_0076f648 + iVar3 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
        if (iVar4 != 0) {
          FUN_004554a0();
        }
        goto LAB_005ce7db;
      }
      iVar3 = (int)*(short *)(DAT_0076f648 + iVar3 * 0x14 + 0xe);
    } while (iVar3 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_005ce7db:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

