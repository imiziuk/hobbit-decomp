
undefined4 __thiscall FUN_0045b9c0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00647e40(param_2,s_CollapseDelay_00725ba4);
  if (iVar1 != 0) {
    uVar2 = FUN_004c49a0(param_2,param_3);
    return uVar2;
  }
  if (*param_3 != 2) {
    return 0;
  }
  *(int *)(param_1 + 0x160) = param_3[0x94];
  return 1;
}

