
void __fastcall FUN_005d2370(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0200;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0();
  local_4 = 0;
  if (*(int *)(param_1 + 0x24) < 1) goto LAB_005d24e4;
  lVar5 = FUN_00473320();
  if (lVar5 != 0) goto LAB_005d24e4;
  if (*(int *)(param_1 + 0x18) == 0) {
    uVar3 = FUN_00647b10();
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
  }
  else if ((*(int *)(param_1 + 0x18) == 1) &&
          (iVar4 = *(int *)(param_1 + 0x5c) + 1, *(int *)(param_1 + 0x5c) = iVar4,
          *(int *)(param_1 + 0x24) <= iVar4)) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  FUN_00649600();
  local_4._0_1_ = 1;
  iVar4 = FUN_00406ce0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar4 == -1) {
    FUN_00649720();
LAB_005d2421:
    FUN_00659600();
  }
  else {
    uVar2 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
    bVar1 = *(byte *)(uVar2 + 0x7f);
    FUN_00649720();
    if ((-(uint)((bVar1 & 0x10) != 0) & uVar2) == 0) goto LAB_005d2421;
    uVar3 = FUN_00437620();
    FUN_00649b60(uVar3);
    FUN_00467c00();
  }
  FUN_00658020();
  if ((*(byte *)(param_1 + 0x7c) & 2) == 0) {
    FUN_0054e780();
  }
  else {
    FUN_0054e920();
  }
LAB_005d24e4:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

