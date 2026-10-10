
undefined4 __thiscall FUN_0045dcc0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00647e40(param_2,s_Camera_Path_00725d5c);
  if (iVar1 == 0) {
    if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
      return 0;
    }
    *(int *)(param_1 + 0xb8) = param_3[0x90];
    *(int *)(param_1 + 0xbc) = param_3[0x91];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Target_Volume_00725d4c);
  if (iVar1 == 0) {
    if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
      return 0;
    }
    *(int *)(param_1 + 200) = param_3[0x90];
    *(int *)(param_1 + 0xcc) = param_3[0x91];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Snap_to_Position_00725d38);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0xa8) = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Teleport_Only_00725d28);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0xb0) = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_One_Shot_Only_00725d18);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0xb4) = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Trigger_Delay_00725d08);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xd0) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Min_Distance_00725cf8);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xc0) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Max_Distance_00725ce8);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0xc4) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_Override_Lookat_00725cd8);
  if (iVar1 != 0) {
    uVar2 = FUN_004ab750(param_2,param_3);
    return uVar2;
  }
  if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
    return 0;
  }
  *(int *)(param_1 + 0xf0) = param_3[0x90];
  *(int *)(param_1 + 0xf4) = param_3[0x91];
  return 1;
}

