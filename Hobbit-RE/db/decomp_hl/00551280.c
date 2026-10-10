
void __thiscall FUN_00551280(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
      uVar2 = FUN_00659600(s_RainOutdoorLoop_0073d2e8,1);
      bVar1 = *(byte *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x50) = uVar2;
      *(byte *)(param_1 + 0x54) = bVar1 | 1;
      if ((bVar1 & 2) == 0) {
        FUN_005c96d0(0x32,0x32);
        *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 2;
      }
    }
    FUN_005893e0(param_1 + 0x10,*(undefined4 *)(param_1 + 0x14),param_3,1,0,0);
    return;
  }
  FUN_005893e0(param_1 + 0x10,0,param_3,1,0,0);
  return;
}

