
void FUN_00681a50(undefined4 param_1,undefined4 param_2,uint param_3,undefined2 *param_4)

{
  ushort uVar1;
  int extraout_EDX;
  
  *param_4 = 0x69;
  param_4[1] = (short)param_1;
  *(undefined4 *)(param_4 + 2) = param_2;
  uVar1 = FUN_006819e0(param_1,param_3);
  param_4[6] = uVar1;
  param_4[9] = (short)param_3;
  param_4[7] = 4;
  param_4[8] = 2;
  *(uint *)(param_4 + 4) = ((uint)uVar1 * extraout_EDX) / (param_3 & 0xffff);
  return;
}

