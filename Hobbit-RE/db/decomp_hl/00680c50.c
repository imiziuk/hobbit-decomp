
int * __thiscall FUN_00680c50(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  FUN_00655730(1,0);
  piVar1 = (int *)param_1[0x5e];
  if (piVar1 != (int *)0x0) {
    piVar1[7] = (int)param_1;
    iVar2 = (**(code **)(*param_1 + 0x14))(param_2,piVar1);
    if (iVar2 == 0) {
      FUN_00655630(0,1);
      return (int *)0x0;
    }
    *piVar1 = param_1[0x5c];
    piVar1[5] = 0;
    param_1[0x5e] = *(int *)(param_1[0x5e] + 0x124);
    piVar1[6] = 0;
    piVar1[1] = 1;
    piVar1[2] = 0;
    FUN_00647d70(piVar1 + 9,param_2,0x100);
  }
  FUN_00655630(0,1);
  return piVar1;
}

