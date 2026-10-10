
void __fastcall FUN_00428850(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  if (*(int *)(param_1 + 0x400) != 0) {
    FUN_0043a3f0(0x19,s_C__projects_meridian_Support_Obj_00720b28,0x667);
    return;
  }
  if (*(int *)(param_1 + 0x46d0) == 0) {
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00720b28,0x66e);
    return;
  }
  if (*(int *)(param_1 + 0x6f8) == 0) {
    if (*(float *)(*(int *)(param_1 + 0x450) + 0xc) < *(float *)(param_1 + 0x610)) {
      FUN_0043a3f0(0x12,s_C__projects_meridian_Support_Obj_00720b28,0x67f);
      return;
    }
  }
  else if ((((*(int *)(param_1 + 0x700) != 0) || (*(int *)(param_1 + 0x704) != 0)) ||
           (*(int *)(param_1 + 0x708) != 0)) || (*(int *)(param_1 + 0x70c) != 0)) {
    FUN_0043a3f0(0x12,s_C__projects_meridian_Support_Obj_00720b28,0x677);
    return;
  }
  if (*(int *)(param_1 + 0x658) == 0) {
    if (*(int *)(param_1 + 0x760) == 0) {
      FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00720b28,0x698);
      return;
    }
    if (*(int *)(param_1 + 0x640) != 0) {
      iVar1 = FUN_00422510();
      if (iVar1 != 0) {
        FUN_0043a3f0(0x13,s_C__projects_meridian_Support_Obj_00720b28,0x69f);
        return;
      }
    }
    if (((*(int *)(param_1 + 0x3c0) == 0) && (*(int *)(param_1 + 0x3d0) == 0)) &&
       (*(int *)(param_1 + 0x3b0) == 0)) {
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      uVar7 = 0x3e800000;
      pcVar4 = s_IDLE_NO_WEAPON_007207fc;
    }
    else {
      FUN_00549470(param_1 + 0x454);
      FUN_00549580(param_1 + 0x454);
      uVar7 = 0x3e000000;
      pcVar4 = s_combat_ready_idle_00720c50;
    }
    uVar6 = 1;
    uVar5 = 0;
    uVar2 = FUN_0053cc70(pcVar4);
    FUN_00540840(uVar2,uVar5,uVar6,uVar7);
    fVar3 = (float10)FUN_00426760();
    *(float *)(param_1 + 0x7ac) = (float)fVar3;
    *(undefined4 *)(param_1 + 0x7b0) = *(undefined4 *)(*(int *)(param_1 + 0x450) + 0x184);
  }
  else {
    if ((*(int *)(param_1 + 0x3d0) != 0) || (*(int *)(param_1 + 0x3c0) != 0)) {
      FUN_0064e7d0(s_State_ChangeTo_STATE_CHAIN_ATTAC_00720c64);
      FUN_0043a3f0(0x10,s_C__projects_meridian_Support_Obj_00720b28,0x68a);
      return;
    }
    if (*(int *)(param_1 + 0x3b0) != 0) {
      fVar3 = (float10)FUN_00434ca0(2);
      if ((NAN(fVar3) || NAN((float10)DAT_006e92e4)) == (fVar3 == (float10)DAT_006e92e4)) {
        FUN_0043a3f0(0x14,s_C__projects_meridian_Support_Obj_00720b28,0x68e);
        return;
      }
    }
  }
  return;
}

