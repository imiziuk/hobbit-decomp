
void __fastcall FUN_00416870(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x424) == 0) {
    iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x40c));
    if (iVar1 != 0) {
      iVar1 = FUN_004d2f10();
      if (iVar1 != *(int *)(param_1 + 0x428)) {
        uVar3 = FUN_004d2f10();
        *(undefined4 *)(param_1 + 0x428) = uVar3;
        *(undefined4 *)(param_1 + 0x424) = 1;
        FUN_0064e7d0(s_Gas_Puzzle_turned_on__Bilbo_ente_0071fa48);
      }
    }
  }
  else {
    iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x418),*(undefined4 *)(param_1 + 0x41c));
    if (iVar1 != 0) {
      iVar1 = FUN_004d2f10();
      if (iVar1 == *(int *)(param_1 + 0x430)) {
        iVar1 = FUN_004d2f10();
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x438) = 0x40200000;
        }
        iVar1 = FUN_004d2f10();
        *(uint *)(param_1 + 0x430) = (uint)(iVar1 == 0);
        puVar2 = &DAT_0071fac4;
        if ((iVar1 == 0) == 0) {
          puVar2 = &DAT_0071fac0;
        }
        FUN_0064e7d0(s_Gas_Puzzle_turned__s__Bilbo_hit_s_0071fa94,puVar2);
      }
    }
    iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x414));
    if (iVar1 != 0) {
      iVar1 = FUN_004d2f10();
      if (iVar1 != *(int *)(param_1 + 0x42c)) {
        uVar3 = FUN_004d2f10();
        *(undefined4 *)(param_1 + 0x42c) = uVar3;
        *(undefined4 *)(param_1 + 0x424) = 0;
        FUN_0064e7d0(s_Gas_Puzzle_turned_off__Bilbo_lef_0071fa70);
        return;
      }
    }
  }
  return;
}

