
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0066c130(void)

{
  int iVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 *puStack_10;
  
  DAT_007f1574 = 0;
  puVar3 = &DAT_007f1544;
  do {
    uStack_14 = 2;
    uStack_18 = 0;
    uStack_1c = 0x208;
    puStack_10 = (undefined4 *)puVar3;
    (**(code **)(*DAT_007f1000 + 0x5c))(DAT_007f1000,0xce40);
    puVar3 = puVar3 + 4;
  } while ((int)puVar3 < 0x7f1550);
  puStack_10 = &DAT_007f14e4;
  uStack_14 = 2;
  uStack_18 = 0x65;
  uStack_1c = 0x208;
  DAT_007f15fc = 0;
  DAT_007f15e4 = 0;
  (**(code **)(*DAT_007f1000 + 0x60))(DAT_007f1000,0xe10);
  iVar4 = 0;
  (**(code **)(*DAT_007f14e4 + 0x2c))(DAT_007f14e4,0,0,&uStack_1c,0);
  sVar2 = 0;
  iVar1 = 4;
  do {
    *(short *)(iVar1 + -4 + iVar4) = sVar2;
    *(short *)(iVar1 + -2 + iVar4) = sVar2 + 1;
    *(short *)(iVar1 + iVar4) = sVar2 + 2;
    *(short *)(iVar1 + 2 + iVar4) = sVar2;
    *(short *)(iVar1 + 4 + iVar4) = sVar2 + 2;
    *(short *)(iVar1 + 6 + iVar4) = sVar2 + 3;
    iVar1 = iVar1 + 0xc;
    sVar2 = sVar2 + 4;
  } while (iVar1 < 0xe14);
  (**(code **)(*DAT_007f14e4 + 0x30))(DAT_007f14e4);
  DAT_007f14e8 = thunk_FUN_0064ff70(0x3840,s_C__projects_meridian_xCore_entro_00750310,0xcd);
  DAT_007f1540 = 0;
  DAT_007f1550 = 0;
  DAT_007f1554 = 0;
  DAT_007f14ec = 0;
  DAT_007f1584 = 0;
  DAT_007f15d4 = 0;
  _DAT_007f15c0 = 0;
  _DAT_007f15b0 = 0;
  DAT_007f15a0 = 0;
  _DAT_007f15c4 = 0;
  _DAT_007f15b4 = 0;
  DAT_007f1594 = 0;
  _DAT_007f15c8 = 0;
  DAT_007f15a8 = 0;
  DAT_007f1598 = 0;
  _DAT_007f15bc = 0;
  DAT_007f15ac = 0;
  DAT_007f159c = 0;
  DAT_007f1590 = 0x3f800000;
  DAT_007f15a4 = 0x3f800000;
  _DAT_007f15b8 = 0x3f800000;
  _DAT_007f15cc = 0x3f800000;
  DAT_007f155c = 1;
  DAT_007f14d0 = 0;
  DAT_007f14d4 = 0;
  DAT_007f14d8 = 0;
  DAT_007f14dc = 0;
  DAT_007f1570._3_1_ = 0xff;
  DAT_007f1570._2_1_ = 0xff;
  DAT_007f1570._1_1_ = 0xff;
  DAT_007f1570._0_1_ = 0xff;
  DAT_007f15e0 = 1;
  DAT_007f1600 = 1;
  return;
}

