
void __thiscall FUN_0040cfa0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1630);
  if (param_2 != (uVar1 >> 6 & 1)) {
    *(uint *)(param_1 + 0x1630) = (param_2 << 6 ^ uVar1) & 0x40 ^ uVar1;
    FUN_0040ad70(param_2);
    if ((*(byte *)(param_1 + 0x1630) & 0x40) == 0) {
      FUN_00659600(s_GoldAppearFromChest_0071e4f0,1);
      FUN_004dbd50(s_LoadTrigger_Water_Cooler_Off_0071e520);
      FUN_0040cdd0(PTR_s_canal_cooler_001_0071e098,0);
    }
    else {
      FUN_00659600(s_GoldAppearFromChest_0071e4f0,1);
      FUN_004dbd50(s_LoadTrigger_Water_Cooler_0071e540);
      FUN_0040cdd0(PTR_s_canal_cooler_001_0071e098,1);
      if ((*(byte *)(param_1 + 0x1630) & 2) == 0) {
        iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x26c));
        if (iVar3 != 0) {
          FUN_0046a550();
          *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 2;
        }
      }
      if ((*(uint *)(param_1 + 0x1630) & 0x200000) == 0) {
        iVar3 = FUN_0040cc10();
        if (iVar3 != 0) {
          iVar3 = FUN_0041bcc0();
          uVar5 = *(undefined4 *)(iVar3 + 8);
          uVar2 = *(undefined4 *)(iVar3 + 0xc);
          piVar4 = (int *)FUN_0041bcc0();
          uVar5 = (**(code **)(*piVar4 + 0x28))(uVar5,uVar2,1);
          FUN_004b2a60(0x96,uVar5);
          FUN_00659600(s_QuestItemSuccess_0071e4dc,1);
          *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x200000;
          return;
        }
      }
    }
  }
  return;
}

