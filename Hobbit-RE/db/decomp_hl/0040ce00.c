
void __thiscall FUN_0040ce00(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1630);
  if (param_2 != (uVar1 >> 5 & 1)) {
    *(uint *)(param_1 + 0x1630) = (param_2 << 5 ^ uVar1) & 0x20 ^ uVar1;
    FUN_0040ad50(param_2);
    if ((*(byte *)(param_1 + 0x1630) & 0x20) == 0) {
      FUN_004dbd50(s_LoadTrigger_Water_Bellows_Off_0071e4bc);
      FUN_0040cdd0(PTR_s_canal_bellows_001_0071e094,0);
      iVar3 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x1600),*(undefined4 *)(param_1 + 0x1604));
      if (iVar3 != 0) {
        *(byte *)(iVar3 + 0x15b) = *(byte *)(iVar3 + 0x15b) & 0xbf;
      }
    }
    else {
      FUN_004dbd50(s_LoadTrigger_Water_Bellows_0071e504);
      FUN_00659600(s_GoldAppearFromChest_0071e4f0,1);
      FUN_0040cdd0(PTR_s_canal_bellows_001_0071e094,1);
      iVar3 = FUN_00406bf0(*(undefined4 *)(param_1 + 0x1600),*(undefined4 *)(param_1 + 0x1604));
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0x15a) = *(ushort *)(iVar3 + 0x15a) & 0xbfff ^ 0x4000;
      }
      if ((*(byte *)(param_1 + 0x1630) & 1) == 0) {
        iVar3 = FUN_004021c0(*(undefined4 *)(param_1 + 0x260),*(undefined4 *)(param_1 + 0x264));
        if (iVar3 != 0) {
          FUN_0046a550();
          *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 1;
        }
      }
      if ((*(uint *)(param_1 + 0x1630) & 0x200000) == 0) {
        iVar3 = FUN_0040cc20();
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

