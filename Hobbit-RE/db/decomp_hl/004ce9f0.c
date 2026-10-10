
undefined4 __thiscall FUN_004ce9f0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00647cf0(s_Offset_Scaling_0072d5a4);
  iVar2 = FUN_00647e80(param_2,s_Offset_Scaling_0072d5a4,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        *(int *)(param_1 + 0x160) = param_3[0x89];
        *(int *)(param_1 + 0x164) = param_3[0x8a];
        *(int *)(param_1 + 0x168) = param_3[0x8b];
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x160) = param_3[0x94];
          return 1;
        }
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x164) = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            *(int *)(param_1 + 0x168) = param_3[0x94];
            return 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_00647cf0(s_Center_0072d570);
  iVar2 = FUN_00647e80(param_2,s_Center_0072d570,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_2);
    if (iVar1 == iVar2) {
      if (*param_3 == 8) {
        *(int *)(param_1 + 0x170) = param_3[0x89];
        *(int *)(param_1 + 0x174) = param_3[0x8a];
        *(int *)(param_1 + 0x178) = param_3[0x8b];
        return 1;
      }
    }
    else {
      iVar1 = iVar1 + param_2;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x170) = param_3[0x94];
          return 1;
        }
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x174) = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if ((iVar1 == 0) && (*param_3 == 2)) {
            *(int *)(param_1 + 0x178) = param_3[0x94];
            return 1;
          }
        }
      }
    }
  }
  iVar1 = FUN_00647e40(param_2,s_Anim_Speed_0072d598);
  if (iVar1 != 0) {
    uVar3 = FUN_004c49a0(param_2,param_3);
    return uVar3;
  }
  if (*param_3 != 2) {
    return 0;
  }
  *(int *)(param_1 + 0x16c) = param_3[0x94];
  return 1;
}

