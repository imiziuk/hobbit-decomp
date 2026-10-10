
undefined4 __thiscall
FUN_0051eae0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  uVar2 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x158) = uVar2;
  FUN_006a2bd0(uVar2);
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0x437f0000;
  *(undefined4 *)(param_1 + 0x160) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 4;
  FUN_006a3240(1,0);
  FUN_006a3240(0x100,1);
  FUN_0052a630(5);
  return uVar1;
}

