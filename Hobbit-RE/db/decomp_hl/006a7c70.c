
int FUN_006a7c70(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_007f23d8;
  DAT_007f23d8 = DAT_007f23d8 + (param_1[0x11] * 2 + 0x11U & 0xfffffff0);
  FUN_00648480(iVar1,*param_1,param_1[0x11] * 2);
  *(undefined2 *)(iVar1 + param_1[0x11] * 2) = 0;
  return iVar1;
}

