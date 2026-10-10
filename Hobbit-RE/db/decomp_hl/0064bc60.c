
int * __thiscall FUN_0064bc60(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_006480e0(param_2);
  FUN_0064af30(param_1[0x11] + iVar1);
  FUN_00648480(*param_1 + param_1[0x11] * 2,param_2,iVar1 * 2 + 2);
  param_1[0x11] = param_1[0x11] + iVar1;
  return param_1;
}

