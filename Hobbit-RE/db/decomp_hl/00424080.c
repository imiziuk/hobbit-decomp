
undefined4 __thiscall FUN_00424080(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004ab750(param_2,param_3);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_IsRingEquipped_007207c8);
  if ((iVar1 == 0) && (*param_3 == 3)) {
    FUN_00423c90(param_3[0x95],1);
    return 1;
  }
  iVar1 = FUN_00647ed0(param_2,s_ForcedVisibility_007207b4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x424) = 0;
    FUN_0044ec20();
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_LevelReset_0072073c);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x3c0) != 0) {
      FUN_00435820(0,3,1);
      FUN_00435900(0);
      *(undefined4 *)(param_1 + 0x3c0) = 1;
      *(undefined4 *)(param_1 + 0x3c8) = 1;
      *(undefined4 *)(param_1 + 0x3b0) = 0;
      *(undefined4 *)(param_1 + 0x3b4) = 0;
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      *(undefined4 *)(param_1 + 0x3d8) = 0;
      *(undefined4 *)(param_1 + 0x4e60) = 0;
      FUN_00421a00();
    }
    if (*(int *)(param_1 + 0x3b0) != 0) {
      FUN_00435820(3,6,1);
      FUN_00435900(3);
      *(undefined4 *)(param_1 + 0x3b0) = 1;
      *(undefined4 *)(param_1 + 0x3b4) = 1;
      *(undefined4 *)(param_1 + 0x3c0) = 0;
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(undefined4 *)(param_1 + 0x4e60) = 0;
      FUN_00421f80();
      *(undefined4 *)(param_1 + 0x3d0) = 0;
      *(undefined4 *)(param_1 + 0x3d8) = 0;
    }
    if (*(int *)(param_1 + 0x3d0) != 0) {
      FUN_00435820(1,5,1);
      FUN_00435900(1);
      *(undefined4 *)(param_1 + 0x3d0) = 1;
      *(undefined4 *)(param_1 + 0x3d8) = 1;
      *(undefined4 *)(param_1 + 0x3b0) = 0;
      *(undefined4 *)(param_1 + 0x3b4) = 0;
      *(undefined4 *)(param_1 + 0x3c0) = 0;
      *(undefined4 *)(param_1 + 0x3c8) = 0;
      *(undefined4 *)(param_1 + 0x4e60) = 0;
      FUN_00421f80();
    }
    *(undefined4 *)(param_1 + 0x7c4) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x7c8) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x7cc) = *(undefined4 *)(param_1 + 0x1c);
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_007200c0,0x11c7);
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_m_bUsingSting_007207a4);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0x3c0) = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_m_bUsingStaff_00720794);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0x3d0) = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_m_bUsingStone_00720784);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0x3b0) = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_IsPoisoned_00720778);
  if (iVar1 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    *(int *)(param_1 + 0x5f34) = param_3[0x95];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_PoisonTime_0072076c);
  if (iVar1 == 0) {
    if (*param_3 != 2) {
      return 0;
    }
    *(int *)(param_1 + 0x5f38) = param_3[0x94];
    return 1;
  }
  iVar1 = FUN_00647e40(param_2,s_PoisonDelay_00720760);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x4ce8) = 0;
    uVar2 = FUN_00435330(param_2,param_3);
    return uVar2;
  }
  if (*param_3 != 2) {
    return 0;
  }
  *(int *)(param_1 + 0x5f3c) = param_3[0x94];
  return 1;
}

