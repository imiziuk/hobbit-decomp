
undefined4 __thiscall FUN_0059ad20(int param_1,undefined4 param_2,int *param_3)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd5b8;
  local_c = ExceptionList;
  iVar4 = *(int *)(param_1 + 0x34);
  ExceptionList = &local_c;
  iVar3 = FUN_00647e40(param_2,s_PhysicalControl_MinGroundDistanc_00743340);
  if ((iVar3 == 0) && (*param_3 == 2)) {
    *(int *)(iVar4 + 4) = param_3[0x94];
    pfVar1 = *(float **)(param_1 + 0x34);
    if (*pfVar1 < pfVar1[1]) {
      *pfVar1 = pfVar1[1];
    }
  }
  piVar2 = *(int **)(param_1 + 0x34);
  iVar4 = FUN_00647e40(param_2,s_PhysicalControl_MaxGroundDistanc_0074331c);
  if ((iVar4 == 0) && (*param_3 == 2)) {
    *piVar2 = param_3[0x94];
    pfVar1 = *(float **)(param_1 + 0x34);
    if (*pfVar1 < pfVar1[1]) {
      pfVar1[1] = *pfVar1;
    }
  }
  iVar4 = FUN_00647e40(param_2,s_PhysicalControl_Initial_Idle_Ani_007432e8);
  if (iVar4 == 0) {
    if ((*param_3 == 0xd) || (*param_3 == 4)) {
      FUN_0064a2e0(param_3 + 2);
      ExceptionList = local_c;
      return 1;
    }
  }
  else {
    FUN_00649b20(&DAT_0075b6e0);
    local_4 = 0;
    iVar4 = FUN_00647e40(param_2,s_PhysicalControl_BodyMaskedAnim_007432c8);
    if ((iVar4 == 0) && (((iVar4 = *param_3, iVar4 == 0xd || (iVar4 == 4)) || (iVar4 == 0xe)))) {
      FUN_0064a2e0(param_3 + 2);
      uVar5 = FUN_00594390(local_38);
      FUN_00592730(uVar5);
    }
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = local_c;
  return 0;
}

