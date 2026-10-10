
void __thiscall FUN_0040d0e0(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1630);
  if (param_2 == (uVar2 >> 7 & 1)) {
    return;
  }
  uVar2 = (param_2 << 7 ^ uVar2) & 0x80 ^ uVar2;
  *(uint *)(param_1 + 0x1630) = uVar2;
  if (-1 < (char)uVar2) {
    FUN_00659600(s_GoldAppearFromChest_0071e4f0,1);
    FUN_004dbd50(s_LoadTrigger_Water_GearRoom_Off_0071e55c);
    FUN_00553f20(s_Lvl_riv_rope02_0071e498,0);
    FUN_00553f20(s_Lvl_riv_rope_0071e488,0);
    FUN_0040cdd0(PTR_s_canal_gear_room_001_0071e08c,0);
    FUN_0040c5e0(0);
    iVar3 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x1560),*(undefined4 *)(param_1 + 0x1564));
    if (iVar3 == 0) {
      return;
    }
    *(byte *)(iVar3 + 0x15b) = *(byte *)(iVar3 + 0x15b) & 0xbf;
    return;
  }
  FUN_00659600(s_GoldAppearFromChest_0071e4f0,1);
  FUN_004dbd50(s_LoadTrigger_Water_GearRoom_0071e57c);
  FUN_0040cdd0(PTR_s_canal_gear_room_001_0071e08c,1);
  FUN_00553f20(s_Lvl_riv_rope02_0071e498,1);
  FUN_00553f20(s_Lvl_riv_rope_0071e488,1);
  if ((*(uint *)(param_1 + 0x1630) & 0x400) == 0) {
    if (((*(byte *)(param_1 + 0x1632) & 1) != 0) ||
       (iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x1568),*(undefined4 *)(param_1 + 0x156c)),
       iVar3 == 0)) goto LAB_0040d1f3;
    FUN_0046a550();
    uVar2 = *(uint *)(param_1 + 0x1630) | 0x10000;
  }
  else {
    FUN_0040c5e0(1);
    if (((*(uint *)(param_1 + 0x1630) & 0x1000) != 0) ||
       (iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x1570),*(undefined4 *)(param_1 + 0x1574)),
       iVar3 == 0)) goto LAB_0040d1f3;
    FUN_0046a550();
    uVar2 = *(uint *)(param_1 + 0x1630) | 0x1000;
  }
  *(uint *)(param_1 + 0x1630) = uVar2;
LAB_0040d1f3:
  iVar3 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x1560),*(undefined4 *)(param_1 + 0x1564));
  if (iVar3 != 0) {
    *(ushort *)(iVar3 + 0x15a) = *(ushort *)(iVar3 + 0x15a) & 0xbfff ^ 0x4000;
  }
  if (((*(uint *)(param_1 + 0x1630) & 0x100000) == 0) && (iVar3 = FUN_0040cc40(), iVar3 != 0)) {
    iVar3 = FUN_0041bcc0();
    uVar5 = *(undefined4 *)(iVar3 + 8);
    uVar1 = *(undefined4 *)(iVar3 + 0xc);
    piVar4 = (int *)FUN_0041bcc0();
    uVar5 = (**(code **)(*piVar4 + 0x28))(uVar5,uVar1,1);
    FUN_004b2a60(0x96,uVar5);
    FUN_00659600(s_QuestItemSuccess_0071e4dc,1);
    *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x100000;
    return;
  }
  return;
}

