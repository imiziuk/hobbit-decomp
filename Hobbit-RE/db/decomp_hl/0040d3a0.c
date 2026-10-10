
void __fastcall FUN_0040d3a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_00659600(s_GoldAppearFromChest_0071e4f0,1);
  iVar2 = 0;
  do {
    FUN_0064e7d0(s_Opening_secret_water_door__d_0071e5b0,iVar2);
    iVar1 = FUN_0054c120((&PTR_s_SD_Water_Room_001_0071e084)[iVar2],1);
    if (iVar1 != 0) {
      FUN_0046a550();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  *(uint *)(param_1 + 0x1630) = *(uint *)(param_1 + 0x1630) | 0x20000;
  return;
}

