
void __thiscall FUN_0044fc90(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_40;
  char local_3c [4];
  int *local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cfd30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_eel_colony__OnImport_00724d28);
  local_4 = 0;
  FUN_006403a0(s_Position_00724d1c,param_1 + 0x14);
  FUN_006404b0(s_WorldBBox_00724d10,param_1 + 0x44);
  FUN_006404b0(s_LocalBBox_00724d04,param_1 + 0x2c);
  FUN_006405b0(s_EelsRegen_00724cf8,local_3c);
  *(ushort *)(param_1 + 0xf4) =
       (byte)(local_3c[0] * '\x02' ^ (byte)*(ushort *)(param_1 + 0xf4)) & 2 ^
       *(ushort *)(param_1 + 0xf4);
  FUN_00640450(s_nEels_00724cf0,param_1 + 0xb4);
  piVar6 = (int *)(param_1 + 0xac);
  local_38 = piVar6;
  FUN_00640450(s_nHoles_00724ce8,piVar6);
  FUN_00640450(&DAT_00724ce0,param_1 + 0xb8);
  FUN_00640450(s_MaxActive_00724cd4,*(int *)(param_1 + 0xa8) + 4);
  FUN_006403a0(s_AudibleRadius_00724cc4,*(int *)(param_1 + 0xa8) + 0xc);
  FUN_00640420(s_HoleAudibleRadius_00724cb0,*(int *)(param_1 + 0xa8) + 0x18);
  FUN_00640420(s_WhipAttackFreq_00724ca0,*(int *)(param_1 + 0xa8) + 0x24);
  FUN_00640420(s_MovePatrolSpeed_00724c90,*(int *)(param_1 + 0xa8) + 0x28);
  FUN_00640420(s_MoveHuntSpeed_00724c80,*(int *)(param_1 + 0xa8) + 0x2c);
  FUN_00640420(s_IdleLengthMin_00724c70,*(int *)(param_1 + 0xa8) + 0x30);
  FUN_00640420(s_IdleLengthMax_00724c60,*(int *)(param_1 + 0xa8) + 0x34);
  FUN_00640420(s_NoiseMemoryTime_00724c50,*(int *)(param_1 + 0xa8) + 0x38);
  FUN_00640420(s_YawRate_00724c48,*(int *)(param_1 + 0xa8) + 0x3c);
  FUN_00640420(s_AnimSpeed_00724c3c,*(int *)(param_1 + 0xa8) + 0x54);
  FUN_00640420(s_BBoxInflateX_00724c2c,*(int *)(param_1 + 0xa8) + 0x40);
  FUN_00640420(s_BBoxInflateY_00724c1c,*(int *)(param_1 + 0xa8) + 0x44);
  FUN_00640420(s_BBoxInflateZ_00724c0c,*(int *)(param_1 + 0xa8) + 0x48);
  FUN_0063ff20();
  local_40 = *(int *)(param_2 + 0xc);
  pvVar3 = operator_new(local_40 * 8);
  *(void **)(param_1 + 0xb0) = pvVar3;
  param_2 = 0;
  if (0 < local_40) {
    do {
      FUN_0063ffc0();
      FUN_006405e0(&DAT_00724c04,&local_34);
      uVar2 = local_30;
      uVar1 = local_34;
      local_2c = local_34;
      local_28 = local_30;
      FUN_00649600(s_obj_mgr__LockObjectEvenIfDeactiv_0071d1b4);
      iVar4 = (int)*(short *)(&DAT_0076cd88 + ((uVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
      for (iVar5 = iVar4; iVar5 != -1; iVar5 = (int)*(short *)(DAT_0076f648 + iVar5 * 0x14 + 0xe)) {
      }
      if (iVar4 == -1) {
LAB_0044ff94:
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
      }
      else {
        do {
          piVar6 = (int *)(DAT_0076f648 + iVar4 * 0x14);
          iVar5 = *piVar6;
          if (((iVar5 != 0) && (local_18 = *(uint *)(iVar5 + 0xc), *(uint *)(iVar5 + 8) == local_2c)
              ) && (local_18 == local_28)) {
            if (iVar4 == -1) goto LAB_0044ff94;
            iVar5 = *(int *)(DAT_0076f648 + iVar4 * 0x14);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00649720();
            if ((iVar5 != 0) && (*(char *)(iVar5 + 0x7c) == '\x15')) {
              iVar5 = *(int *)(param_1 + 0xb0);
              *(uint *)(iVar5 + param_2 * 8) = local_34;
              *(uint *)(iVar5 + 4 + param_2 * 8) = local_30;
              param_2 = param_2 + 1;
            }
            goto LAB_0044ffe0;
          }
          iVar4 = (int)*(short *)((int)piVar6 + 0xe);
        } while (iVar4 != -1);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649720();
      }
LAB_0044ffe0:
      local_40 = local_40 + -1;
      piVar6 = local_38;
    } while (local_40 != 0);
  }
  if (*piVar6 != param_2) {
    FUN_0064e7d0(s_Warning__Some_eel_colony_holes_w_00724bcc);
  }
  *piVar6 = param_2;
  if (param_2 == 0) {
    FUN_0064f020(s_Eel_Colony_could_not_find_Eel_Ho_00724b90);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

