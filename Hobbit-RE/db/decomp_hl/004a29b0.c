
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a29b0(int *param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  int local_130;
  undefined4 local_10c [16];
  undefined1 auStack_cc [64];
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3b12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_NPCObject__UpdateProps_0072afa4);
  local_4 = 0;
  if ((param_2 == 0) || (puVar11 = (undefined4 *)param_1[0x98], puVar11 == (undefined4 *)0x0)) {
    iVar8 = param_1[0x98];
    if (iVar8 != 0) {
      bVar6 = false;
      if (((((param_1[0x9a] & 0x80000U) != 0) || (_DAT_0072a8e0 <= (float)param_1[0xa7])) ||
          (param_2 != 0)) || ((param_1[0x9a] & 0x10000000U) == 0)) {
        bVar6 = true;
      }
      if (*(int *)(iVar8 + 8) != 0 || *(int *)(iVar8 + 0xc) != 0) {
        uVar13 = 0;
        puVar11 = local_10c;
        pcVar10 = s_Weapon_00720300;
        (**(code **)(*param_1 + 0x154))(s_Weapon_00720300,puVar11,0);
        local_130 = FUN_00540e90(pcVar10,puVar11,uVar13);
        if (local_130 == 0) {
          uVar13 = 3;
          puVar11 = local_10c;
          pcVar10 = s_Weapon_00720300;
          (**(code **)(*param_1 + 0x154))(s_Weapon_00720300,puVar11,3);
          local_130 = FUN_00540e90(pcVar10,puVar11,uVar13);
        }
        uVar4 = *(uint *)(param_1[0x98] + 8);
        uVar5 = *(uint *)(param_1[0x98] + 0xc);
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar7 = (int)*(short *)(&DAT_0076cd88 + ((uVar4 ^ uVar5) * -0xfb & 0xfff) * 2);
        for (iVar8 = iVar7; iVar8 != -1; iVar8 = (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 0xe))
        {
        }
        if (iVar7 == -1) {
LAB_004a2c23:
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
        else {
          do {
            iVar8 = *(int *)(DAT_0076f648 + iVar7 * 0x14);
            if (((iVar8 != 0) && (*(uint *)(iVar8 + 8) == uVar4)) &&
               (*(uint *)(iVar8 + 0xc) == uVar5)) {
              if (iVar7 == -1) goto LAB_004a2c23;
              uVar4 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
              bVar2 = *(byte *)(uVar4 + 0x7f);
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00649720();
              if ((-(uint)((bVar2 & 0x10) != 0) & uVar4) != 0) {
                if ((local_130 == 0) || (bVar6)) {
                  FUN_004d22c0(1);
                  iVar8 = 0;
                }
                else {
                  FUN_004b9300(local_10c);
                  FUN_004d22c0(0);
                  iVar8 = (param_1[0x3a] << 0x1d) >> 0x1f;
                }
                FUN_004b9220(iVar8);
              }
              goto LAB_004a2ca6;
            }
            iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe);
          } while (iVar7 != -1);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
      }
LAB_004a2ca6:
      if (*(int *)param_1[0x98] != 0 || ((int *)param_1[0x98])[1] != 0) {
        uVar13 = 0;
        puVar12 = auStack_cc;
        pcVar10 = s_RangedWeapon_0072af94;
        (**(code **)(*param_1 + 0x154))(s_RangedWeapon_0072af94,puVar12,0);
        local_130 = FUN_00540e90(pcVar10,puVar12,uVar13);
        if (local_130 == 0) {
          uVar13 = 3;
          puVar12 = auStack_cc;
          pcVar10 = s_RangedWeapon_0072af94;
          (**(code **)(*param_1 + 0x154))(s_RangedWeapon_0072af94,puVar12,3);
          local_130 = FUN_00540e90(pcVar10,puVar12,uVar13);
        }
        uVar4 = *(uint *)param_1[0x98];
        uVar5 = ((uint *)param_1[0x98])[1];
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar7 = (int)*(short *)(&DAT_0076cd88 + ((uVar4 ^ uVar5) * -0xfb & 0xfff) * 2);
        for (iVar8 = iVar7; iVar8 != -1; iVar8 = (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 0xe))
        {
        }
        if (iVar7 == -1) {
LAB_004a2da3:
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
        else {
          do {
            iVar8 = *(int *)(DAT_0076f648 + iVar7 * 0x14);
            if (((iVar8 != 0) && (*(uint *)(iVar8 + 8) == uVar4)) &&
               (*(uint *)(iVar8 + 0xc) == uVar5)) {
              if (iVar7 == -1) goto LAB_004a2da3;
              uVar4 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
              bVar2 = *(byte *)(uVar4 + 0x7f);
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00649720();
              if ((-(uint)((bVar2 & 0x10) != 0) & uVar4) != 0) {
                if ((local_130 == 0) || (bVar6)) {
                  FUN_004d22c0(1);
                  iVar8 = 0;
                }
                else {
                  FUN_004b9300(auStack_cc);
                  FUN_004d22c0(0);
                  iVar8 = (param_1[0x3a] << 0x1d) >> 0x1f;
                }
                FUN_004b9220(iVar8);
              }
              goto LAB_004a2e26;
            }
            iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe);
          } while (iVar7 != -1);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
      }
LAB_004a2e26:
      if (*(int *)(param_1[0x98] + 0x10) != 0 || *(int *)(param_1[0x98] + 0x14) != 0) {
        uVar13 = 0;
        puVar12 = auStack_8c;
        pcVar10 = s_Shield_0072af8c;
        (**(code **)(*param_1 + 0x154))(s_Shield_0072af8c,puVar12,0);
        local_130 = FUN_00540e90(pcVar10,puVar12,uVar13);
        if (local_130 == 0) {
          uVar13 = 3;
          puVar12 = auStack_8c;
          pcVar10 = s_Shield_0072af8c;
          (**(code **)(*param_1 + 0x154))(s_Shield_0072af8c,puVar12,3);
          local_130 = FUN_00540e90(pcVar10,puVar12,uVar13);
        }
        uVar4 = *(uint *)(param_1[0x98] + 0x10);
        uVar5 = *(uint *)(param_1[0x98] + 0x14);
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar7 = (int)*(short *)(&DAT_0076cd88 + ((uVar4 ^ uVar5) * -0xfb & 0xfff) * 2);
        for (iVar8 = iVar7; iVar8 != -1; iVar8 = (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 0xe))
        {
        }
        if (iVar7 == -1) {
LAB_004a2f21:
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
        else {
          do {
            iVar8 = *(int *)(DAT_0076f648 + iVar7 * 0x14);
            if (((iVar8 != 0) && (*(uint *)(iVar8 + 8) == uVar4)) &&
               (*(uint *)(iVar8 + 0xc) == uVar5)) {
              if (iVar7 == -1) goto LAB_004a2f21;
              uVar4 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
              bVar2 = *(byte *)(uVar4 + 0x7f);
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00649720();
              if ((-(uint)((bVar2 & 0x10) != 0) & uVar4) != 0) {
                if ((local_130 == 0) || (bVar6)) {
                  uVar13 = 1;
                }
                else {
                  FUN_004b9300(auStack_8c);
                  uVar13 = 0;
                }
                FUN_004d22c0(uVar13);
              }
              goto LAB_004a2f8a;
            }
            iVar7 = (int)*(short *)(DAT_0076f648 + iVar7 * 0x14 + 0xe);
          } while (iVar7 != -1);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
      }
LAB_004a2f8a:
      if (*(int *)(param_1[0x98] + 0x18) != 0 || *(int *)(param_1[0x98] + 0x1c) != 0) {
        uVar13 = 0;
        puVar12 = auStack_4c;
        pcVar10 = s_HeldAmmo_0072af80;
        (**(code **)(*param_1 + 0x154))(s_HeldAmmo_0072af80,puVar12,0);
        local_130 = FUN_00540e90(pcVar10,puVar12,uVar13);
        if (local_130 == 0) {
          uVar13 = 3;
          puVar12 = auStack_4c;
          pcVar10 = s_HeldAmmo_0072af80;
          (**(code **)(*param_1 + 0x154))(s_HeldAmmo_0072af80,puVar12,3);
          local_130 = FUN_00540e90(pcVar10,puVar12,uVar13);
        }
        uVar4 = *(uint *)(param_1[0x98] + 0x18);
        uVar5 = *(uint *)(param_1[0x98] + 0x1c);
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        iVar7 = (int)*(short *)(&DAT_0076cd88 + ((uVar4 ^ uVar5) * -0xfb & 0xfff) * 2);
        for (iVar8 = iVar7; iVar8 != -1; iVar8 = (int)*(short *)(DAT_0076f648 + iVar8 * 0x14 + 0xe))
        {
        }
        if (iVar7 == -1) {
LAB_004a307e:
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
        else {
          do {
            piVar1 = (int *)(DAT_0076f648 + iVar7 * 0x14);
            iVar8 = *piVar1;
            if (((iVar8 != 0) && (*(uint *)(iVar8 + 8) == uVar4)) &&
               (*(uint *)(iVar8 + 0xc) == uVar5)) {
              if (iVar7 == -1) goto LAB_004a307e;
              uVar4 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
              bVar2 = *(byte *)(uVar4 + 0x7f);
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_00649720();
              if ((-(uint)((bVar2 & 0x10) != 0) & uVar4) != 0) {
                if ((local_130 == 0) || (bVar6)) {
                  uVar13 = 1;
                }
                else {
                  FUN_004b9300(auStack_4c);
                  uVar13 = 0;
                }
                FUN_004d22c0(uVar13);
                FUN_004b9220(0);
              }
              goto LAB_004a30ef;
            }
            iVar7 = (int)*(short *)((int)piVar1 + 0xe);
          } while (iVar7 != -1);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
        }
      }
    }
  }
  else {
    puVar9 = local_10c + 2;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    local_10c[0] = puVar11[2];
    local_10c[1] = puVar11[3];
    local_10c[2] = *puVar11;
    local_10c[3] = puVar11[1];
    local_10c[4] = puVar11[6];
    local_10c[5] = puVar11[7];
    local_10c[6] = puVar11[4];
    local_10c[7] = puVar11[5];
    iVar8 = 0;
    do {
      uVar13 = local_10c[iVar8 * 2];
      uVar3 = local_10c[iVar8 * 2 + 1];
      FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
      local_4._0_1_ = 1;
      iVar7 = FUN_00406ce0(uVar13,uVar3);
      local_4 = (uint)local_4._1_3_ << 8;
      if (iVar7 == -1) {
        FUN_00649720();
      }
      else {
        uVar4 = *(uint *)(DAT_0076f648 + iVar7 * 0x14);
        bVar2 = *(byte *)(uVar4 + 0x7f);
        FUN_00649720();
        if (((-(uint)((bVar2 & 0x10) != 0) & uVar4) != 0) && (FUN_004d22c0(1), iVar8 < 3)) {
          FUN_004b9220(0);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
  }
LAB_004a30ef:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

