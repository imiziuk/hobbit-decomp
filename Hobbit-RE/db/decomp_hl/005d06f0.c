
void __fastcall FUN_005d06f0(int param_1)

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
  puStack_8 = &LAB_006dff70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0();
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x1c);
  local_4 = 0;
  FUN_00649600();
  iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar2 ^ uVar3) * -0xfb & 0xfff) * 2);
  for (iVar5 = iVar4; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
  }
  if (iVar4 == -1) {
LAB_005d07bd:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  else {
    do {
      piVar1 = (int *)(DAT_0076f648 + iVar4 * 0x14);
      iVar5 = *piVar1;
      if (((iVar5 != 0) && (*(uint *)(iVar5 + 8) == uVar2)) && (*(uint *)(iVar5 + 0xc) == uVar3)) {
        if (iVar4 == -1) goto LAB_005d07bd;
        iVar5 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
        if ((iVar5 != 0) && (*(char *)(iVar5 + 0x7c) == '\x1c')) {
          FUN_00649b60();
          local_4._0_1_ = 2;
          FUN_00649b60(param_1 + 0x20);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004aa020();
          FUN_005aec10();
          if (*(int *)(param_1 + 0x94) != 0) {
            FUN_00592ac0();
          }
        }
        goto LAB_005d0843;
      }
      iVar4 = (int)*(short *)((int)piVar1 + 0xe);
    } while (iVar4 != -1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
LAB_005d0843:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

