
void __thiscall FUN_0040d400(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x1630);
  if (param_2 != (uVar2 >> 8 & 1)) {
    uVar2 = (param_2 << 8 ^ uVar2) & 0x100 ^ uVar2;
    *(uint *)(param_1 + 0x1630) = uVar2;
    if ((uVar2 & 0x100) == 0) {
      FUN_00659600(s_GoldAppearFromChest_0071e4f0,1);
      FUN_004dbd50(s_LoadTrigger_Water_Treasury_Off_0071e5d0);
      FUN_0040cdd0(PTR_s_canal_treasury_001_0071e090,0);
    }
    else {
      FUN_00659600(s_GoldAppearFromChest_0071e4f0,1);
      FUN_004dbd50(s_LoadTrigger_Water_Treasury_0071e5f0);
      FUN_0040cdd0(PTR_s_canal_treasury_001_0071e090,1);
      if (*(int *)(param_1 + 0x15c8) == 2) {
        iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x15e8),*(undefined4 *)(param_1 + 0x15ec));
        if (iVar3 != 0) {
          FUN_0046a550();
        }
      }
      else if ((*(uint *)(param_1 + 0x1630) & 0x8000) == 0) {
        iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x15f0),*(undefined4 *)(param_1 + 0x15f4));
        if (iVar3 != 0) {
          FUN_0046a550();
          *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x8000;
        }
      }
      if ((*(uint *)(param_1 + 0x1630) & 0x100000) == 0) {
        iVar3 = FUN_0040cc30();
        if (iVar3 != 0) {
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
      }
    }
  }
  return;
}

