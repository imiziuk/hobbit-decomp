
undefined4 __thiscall FUN_00571480(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x730);
  iVar2 = FUN_00647cf0(s_CameraMgr_ChaseOffset_0073fa3c);
  iVar3 = FUN_00647e80(param_2,s_CameraMgr_ChaseOffset_0073fa3c,iVar2);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar2 == iVar3) {
      if (*param_3 == 8) {
        *(int *)(iVar1 + 0x78) = param_3[0x89];
        *(int *)(iVar1 + 0x7c) = param_3[0x8a];
        *(int *)(iVar1 + 0x80) = param_3[0x8b];
        return 1;
      }
    }
    else {
      iVar2 = iVar2 + param_2;
      iVar3 = FUN_00647e40(&DAT_00724e78,iVar2);
      if (iVar3 == 0) {
        if (*param_3 == 2) {
          *(int *)(iVar1 + 0x78) = param_3[0x94];
          return 1;
        }
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e74,iVar2);
        if (iVar3 == 0) {
          if (*param_3 == 2) {
            *(int *)(iVar1 + 0x7c) = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar2 = FUN_00647e40(&DAT_00724e70,iVar2);
          if ((iVar2 == 0) && (*param_3 == 2)) {
            *(int *)(iVar1 + 0x80) = param_3[0x94];
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

