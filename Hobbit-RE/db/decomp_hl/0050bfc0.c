
undefined4 __thiscall
FUN_0050bfc0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1[1] = param_3;
  uVar1 = FUN_006a2400(param_2,param_3,param_4,param_5,param_6,param_7,0);
  iVar2 = FUN_006a3320(4);
  param_1[0x56] = iVar2;
  iVar2 = FUN_006a3320(0);
  param_1[0x5a] = iVar2;
  *(undefined4 *)(iVar2 + 0xf0) = 0;
  (**(code **)(*(int *)param_1[0x5a] + 0x34))(s_small_0072f8e0);
  iVar2 = FUN_006a3320(1);
  param_1[0x57] = iVar2;
  iVar2 = FUN_006a3320(2);
  param_1[0x58] = iVar2;
  iVar2 = FUN_006a3320(3);
  param_1[0x59] = iVar2;
  if (param_1[0x56] != 0) {
    iVar2 = FUN_0052d730();
    if (iVar2 != 0) {
      FUN_006a3240(1,0);
    }
  }
  FUN_006a2bd0(param_1[0x57]);
  param_1[0x5c] = 0;
  param_1[0x5b] = -1;
  param_1[0x5d] = 0;
  FUN_0052df20();
  (**(code **)(*param_1 + 0x8c))();
  return uVar1;
}

