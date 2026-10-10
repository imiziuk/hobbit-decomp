
int FUN_0067d8f0(int param_1,int param_2,int *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    iVar3 = -0x7789f794;
  }
  else {
    pvVar1 = operator_new(0x50);
    if (pvVar1 == (void *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0068259a();
    }
    if (iVar2 == 0) {
      iVar3 = -0x7ff8fff2;
    }
    else {
      iVar3 = FUN_0068242f(param_1,param_2);
      if (iVar3 < 0) {
        FUN_006823f0();
        FUN_006bf840(iVar2);
      }
      else {
        *param_3 = iVar2;
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}

