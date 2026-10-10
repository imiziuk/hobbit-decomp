
undefined4 __thiscall FUN_00452a70(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00647e40(param_2,s_Hole_Type_00724f60);
  if (iVar1 != 0) {
    iVar1 = FUN_00647e40(param_2,s_Animation_Resource_00724f6c);
    if (iVar1 == 0) {
      FUN_004c7010(&DAT_0075b6e0);
      return 1;
    }
    uVar2 = FUN_004c49a0(param_2,param_3);
    return uVar2;
  }
  if ((*param_3 != 1) && (*param_3 != 0xc)) {
    return 0;
  }
  param_1[0x5c] = param_3[0x93];
  (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
  return 1;
}

