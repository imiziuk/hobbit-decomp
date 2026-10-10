
void __fastcall FUN_005d1550(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e00d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0();
  uVar5 = *(uint *)(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 0x4c);
  local_4 = 0;
  FUN_00649600();
  iVar3 = (int)*(short *)(&DAT_0076cd88 + ((uVar5 ^ uVar2) * -0xfb & 0xfff) * 2);
  for (iVar4 = iVar3; iVar4 != -1; iVar4 = (int)*(short *)(DAT_0076f648 + iVar4 * 0x14 + 0xe)) {
  }
  do {
    if (iVar3 == -1) {
LAB_005d160c:
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
      uVar5 = 0;
LAB_005d1640:
      lVar6 = FUN_00473320();
      if (lVar6 == 0) {
        if (uVar5 == 0) {
          FUN_00659600();
        }
        else {
          FUN_00649b60(param_1 + 0x18);
          FUN_00467c00();
        }
        FUN_00658020();
        if ((*(byte *)(param_1 + 0x6c) & 2) == 0) {
          FUN_0054e780();
        }
        else {
          FUN_0054e920();
        }
      }
      local_4 = 0xffffffff;
      FUN_006501e0();
      ExceptionList = pvStack_c;
      return;
    }
    piVar1 = (int *)(DAT_0076f648 + iVar3 * 0x14);
    iVar4 = *piVar1;
    if (((iVar4 != 0) && (*(uint *)(iVar4 + 8) == uVar5)) && (*(uint *)(iVar4 + 0xc) == uVar2)) {
      if (iVar3 != -1) {
        uVar5 = *(uint *)(DAT_0076f648 + iVar3 * 0x14);
        local_4 = (uint)local_4._1_3_ << 8;
        uVar5 = -(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5;
        FUN_00649720();
        goto LAB_005d1640;
      }
      goto LAB_005d160c;
    }
    iVar3 = (int)*(short *)((int)piVar1 + 0xe);
  } while( true );
}

