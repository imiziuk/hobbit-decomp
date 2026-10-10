
undefined4 __thiscall
FUN_0050cdc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  uVar2 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  uVar2 = FUN_006a3320(1);
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  uVar2 = FUN_006a3320(2);
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  uVar2 = FUN_006a3320(3);
  *(undefined4 *)(param_1 + 0x164) = uVar2;
  uVar2 = FUN_006a3320(4);
  *(undefined4 *)(param_1 + 0x168) = uVar2;
  uVar2 = FUN_006a3320(5);
  *(undefined4 *)(param_1 + 0x16c) = uVar2;
  if (DAT_00760104 != 0) {
    FUN_006a3240(1,0);
    FUN_006a3240(0x100,1);
  }
  FUN_006a2bd0(*(undefined4 *)(param_1 + 0x15c));
  *(undefined4 *)(param_1 + 0x170) = 0;
  return uVar1;
}

