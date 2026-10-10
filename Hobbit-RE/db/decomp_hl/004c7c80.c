
void __thiscall FUN_004c7c80(int *param_1,char *param_2,char *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1[0x52] == 0) {
    puVar1 = (undefined4 *)operator_new(8);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0x7fffffff;
      puVar1[1] = 0x7fffffff;
    }
    param_1[0x52] = (int)puVar1;
  }
  FUN_00549430(param_1[0x52],param_2);
  FUN_00549430(param_1[0x52] + 4,param_3);
  if ((((param_2 == (char *)0x0) || (*param_2 == '\0')) || (param_3 == (char *)0x0)) ||
     (*param_3 == '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x4c))();
    FUN_0064e7d0(s_WARNING__Plant_RI___s__does_not_h_0072d0a4,uVar2);
  }
  *(byte *)((int)param_1 + 0x15d) = *(byte *)((int)param_1 + 0x15d) | 1;
  param_1[4] = param_1[4] | 0x40000000;
  return;
}

