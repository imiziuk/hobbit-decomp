
int FUN_0065bb10(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_007edb0c;
  if ((param_1 != DAT_007edb0c) && (DAT_007edb08 == 2)) {
    DAT_007edb0c = param_1;
    if (param_1 == 1) {
      (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x99,0);
      return iVar1;
    }
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x99,1);
  }
  return iVar1;
}

