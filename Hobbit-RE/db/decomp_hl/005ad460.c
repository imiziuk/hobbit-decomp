
void FUN_005ad460(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de27e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_AIGoal__InitStatics_0073f528);
  local_4 = 0;
  if (DAT_007ba608 != 0x100) {
    puVar1 = (undefined4 *)operator_new(0x2c04);
    local_4._0_1_ = 1;
    if (puVar1 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = puVar1 + 1;
      *puVar1 = 0x100;
      FUN_006c043b(puVar3,0x2c,0x100,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < DAT_007ba600) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_007ba604);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar5 < DAT_007ba600);
    }
    if (DAT_007ba604 != (undefined4 *)0x0) {
      puVar1 = DAT_007ba604 + -1;
      FUN_006c026a(DAT_007ba604,0x2c,DAT_007ba604[-1],FUN_00649ba0);
      FUN_006bf840(puVar1);
    }
    DAT_007ba608 = 0x100;
    DAT_007ba604 = puVar3;
  }
  FUN_005b0140();
  if (DAT_007ba624 != 0x100) {
    puVar1 = (undefined4 *)operator_new(0x2c04);
    local_4._0_1_ = 2;
    if (puVar1 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = puVar1 + 1;
      *puVar1 = 0x100;
      FUN_006c043b(puVar3,0x2c,0x100,FUN_006499d0,FUN_00649ba0);
    }
    iVar5 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < DAT_007ba61c) {
      iVar4 = 0;
      do {
        FUN_0064a320(iVar4 + (int)DAT_007ba620);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x2c;
      } while (iVar5 < DAT_007ba61c);
    }
    if (DAT_007ba620 != (undefined4 *)0x0) {
      puVar1 = DAT_007ba620 + -1;
      FUN_006c026a(DAT_007ba620,0x2c,DAT_007ba620[-1],FUN_00649ba0);
      FUN_006bf840(puVar1);
    }
    DAT_007ba624 = 0x100;
    DAT_007ba620 = puVar3;
  }
  if (DAT_007ba640 != 0x100) {
    pvVar2 = operator_new(0x800);
    iVar5 = 0;
    if (0 < DAT_007ba638) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar5 * 8) = *(undefined4 *)((int)DAT_007ba63c + iVar5 * 8);
        *(undefined4 *)((int)pvVar2 + iVar5 * 8 + 4) =
             *(undefined4 *)((int)DAT_007ba63c + iVar5 * 8 + 4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_007ba638);
    }
    FUN_006bf840(DAT_007ba63c);
    DAT_007ba640 = 0x100;
    DAT_007ba63c = pvVar2;
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

