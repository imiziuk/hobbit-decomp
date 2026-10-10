
void FUN_00653030(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    do {
      FUN_0064f4f0(param_1,&DAT_0074d620);
      iVar1 = param_3;
      if (0 < param_3) {
        do {
          FUN_0064f4f0(param_1,s_0x_02X__0074d628,*param_2);
          param_2 = param_2 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_0064f4f0(param_1,&DAT_0074d630);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

