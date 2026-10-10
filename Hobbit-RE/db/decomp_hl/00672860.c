
int __thiscall FUN_00672860(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x88) & 0x100) != 0) {
    FUN_00674180();
  }
  iVar1 = param_1 + 0x314;
  if (param_2 != 0) {
    iVar1 = param_1 + 0x3a4;
  }
  return iVar1;
}

