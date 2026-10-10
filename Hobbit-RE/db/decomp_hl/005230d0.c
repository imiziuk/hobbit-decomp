
undefined4 __thiscall
FUN_005230d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar2 = FUN_006a3320(0);
  *(undefined4 *)(param_1 + 0x160) = uVar2;
  uVar2 = FUN_006a3320(1);
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  *(undefined4 *)(param_1 + 0x158) = 0;
  return uVar1;
}

