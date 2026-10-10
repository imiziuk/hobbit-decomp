
undefined4 __thiscall FUN_0049f660(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != param_1[0x6c]) && (param_2 != 1)) {
    iVar1 = FUN_00467930(param_2);
    if (iVar1 != 0) {
      FUN_0049f8f0();
      FUN_0049f6b0();
      (**(code **)(*param_1 + 0x11c))();
      return 1;
    }
  }
  return 0;
}

