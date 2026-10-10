
void __thiscall FUN_00663990(int param_1,int *param_2)

{
  int *piVar1;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar1 = param_2;
  if ((param_2[1] != 0) && (param_2[1] != param_1)) {
    (**(code **)(*param_2 + 0x14))();
  }
  if (piVar1[1] == 0) {
    FUN_006634e0(piVar1);
  }
  FUN_00664f30(local_4,&param_2,local_8);
  FUN_00663fe0(piVar1);
  return;
}

