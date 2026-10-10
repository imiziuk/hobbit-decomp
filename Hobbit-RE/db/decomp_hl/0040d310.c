
void __thiscall FUN_0040d310(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x164c + param_2 * 4) == 0) == param_3) {
    *(uint *)(param_1 + 0x164c + param_2 * 4) = param_3;
  }
  if ((param_3 != 0) && (*(int *)(param_1 + 0x163c + param_2 * 4) == 0)) {
    FUN_0064e7d0(s_Opening_secret_door__d_0071e598,param_2);
    *(undefined4 *)(param_1 + 0x163c + param_2 * 4) = 1;
    FUN_00659600(s_GoldAppearFromChest_0071e4f0,1);
    iVar1 = FUN_0054c120((&PTR_s_SD_Treasury_001_0071e074)[param_2],1);
    if (iVar1 != 0) {
      FUN_0046a550();
    }
  }
  return;
}

