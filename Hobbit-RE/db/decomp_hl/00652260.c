
int * __thiscall FUN_00652260(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != param_2) {
    uVar1 = FUN_00651f40();
    FUN_00651e00(uVar1);
    FUN_00648480(*param_1,*param_2,uVar1);
    *(undefined4 *)(*param_1 + -4) = uVar1;
  }
  return param_1;
}

