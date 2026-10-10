
undefined4 __thiscall FUN_004b4780(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00647e40(param_2,s_Resource_Name_0072be30);
  if (iVar1 != 0) {
    uVar2 = FUN_004d1430(param_2,param_3);
    return uVar2;
  }
  if ((*param_3 != 7) && (*param_3 != 4)) {
    return 0;
  }
  (**(code **)(*param_1 + 0xd0))(param_3 + 2);
  return 1;
}

