
int FUN_0067d964(int param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  if ((param_1 == 0) || (param_2 == (int *)0x0)) {
    iVar1 = -0x7789f794;
  }
  else {
    pvVar2 = operator_new(0x18);
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00682d05();
    }
    if (iVar3 == 0) {
      iVar1 = -0x7ff8fff2;
    }
    else {
      iVar1 = FUN_006825f5(param_1);
      if (iVar1 < 0) {
        FUN_006825b5();
        FUN_006bf840(iVar3);
      }
      else {
        *param_2 = iVar3;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

