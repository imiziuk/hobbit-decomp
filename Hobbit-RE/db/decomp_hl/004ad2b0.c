
undefined4
FUN_004ad2b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_00647e40(param_1,param_3);
  if (iVar1 == 0) {
    *param_2 = 10;
    param_2[0x94] = *param_4;
    return 1;
  }
  return 0;
}

