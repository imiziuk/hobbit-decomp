
void __thiscall FUN_0046be00(int param_1,int *param_2)

{
  byte *pbVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  ushort *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined4 **ppuVar15;
  uint local_ac;
  int *local_a8;
  ushort *local_a4;
  undefined4 *local_a0;
  int local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  ushort *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  int local_84;
  undefined4 *local_80;
  int *local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  undefined4 *local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  undefined1 local_58 [12];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1180;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_camera__OnImport_00727300);
  local_4 = 0;
  FUN_004aa740(param_2);
  local_ac = *(uint *)(param_1 + 0x194) & 1;
  FUN_006405b0(s_Repeatable_007272f4,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (uVar4 ^ local_ac) & 1 ^ uVar4;
  local_ac = uVar4 >> 3 & 1;
  FUN_006405b0(s_PopAtEnd_007272e8,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 3 ^ uVar4) & 8 ^ uVar4;
  local_ac = uVar4 >> 4 & 1;
  FUN_006405b0(s_Cinematic_007272dc,&local_ac);
  *(uint *)(param_1 + 0x194) =
       (local_ac << 4 ^ *(uint *)(param_1 + 0x194)) & 0x10 ^ *(uint *)(param_1 + 0x194);
  FUN_00640420(&DAT_007272d4,param_1 + 0x1b4);
  FUN_00640420(s_Duration_007272c8,param_1 + 0x1bc);
  local_80 = (undefined4 *)0x0;
  local_98 = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  FUN_00640450(s_nShots_007272c0,&local_80);
  FUN_00640450(s_nSyncPoints_007272b4,&local_98);
  FUN_00640450(s_nActions_007272a8,&local_88);
  local_8c = (undefined4 *)0x0;
  FUN_00640450(s_nParticipants_00727298,&local_8c);
  local_60 = 0;
  FUN_00640450(s_InitialShot_0072728c,&local_60);
  *(undefined2 *)(param_1 + 0x18c) = (undefined2)local_60;
  local_ac = *(uint *)(param_1 + 0x194) >> 6 & 1;
  FUN_006405b0(s_BilboInvisible_0072727c,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 6 ^ uVar4) & 0x40 ^ uVar4;
  local_ac = uVar4 >> 7 & 1;
  FUN_006405b0(s_HasIntroTrans_0072726c,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 7 ^ uVar4) & 0x80 ^ uVar4;
  local_ac = uVar4 >> 8 & 1;
  FUN_006405b0(s_HasOutroTrans_0072725c,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 8 ^ uVar4) & 0x100 ^ uVar4;
  local_ac = uVar4 >> 9 & 1;
  FUN_006405b0(s_Skippable_00727250,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 9 ^ uVar4) & 0x200 ^ uVar4;
  local_ac = uVar4 >> 0xb & 1;
  FUN_006405b0(s_IsDeathCinema_00727240,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 0xb ^ uVar4) & 0x800 ^ uVar4;
  local_ac = uVar4 >> 0xc & 1;
  FUN_006405b0(s_ForceNoWeapon_00727230,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 0xc ^ uVar4) & 0x1000 ^ uVar4;
  local_ac = uVar4 >> 0xd & 1;
  FUN_006405b0(s_ForceUseStick_00727220,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 0xd ^ uVar4) & 0x2000 ^ uVar4;
  local_ac = uVar4 >> 0xe & 1;
  FUN_006405b0(s_ForceUseSting_00727210,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 0xe ^ uVar4) & 0x4000 ^ uVar4;
  local_ac = uVar4 >> 0xf & 1;
  FUN_006405b0(s_Letterbox_00727204,&local_ac);
  *(uint *)(param_1 + 0x194) =
       (local_ac << 0xf ^ *(uint *)(param_1 + 0x194)) & 0x8000 ^ *(uint *)(param_1 + 0x194);
  local_ac = *(byte *)(param_1 + 0x196) & 1;
  FUN_006405b0(s_DisableControl_007271f4,&local_ac);
  uVar4 = *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = (local_ac << 0x10 ^ uVar4) & 0x10000 ^ uVar4;
  local_ac = uVar4 >> 0x14 & 1;
  FUN_006405b0(s_BypassQueue_007271e8,&local_ac);
  *(uint *)(param_1 + 0x194) =
       (local_ac << 0x14 ^ *(uint *)(param_1 + 0x194)) & 0x100000 ^ *(uint *)(param_1 + 0x194);
  local_ac = *(byte *)(param_1 + 0x197) & 1;
  FUN_006405b0(s_LowPriority_007271dc,&local_ac);
  uVar4 = (local_ac << 0x18 ^ *(uint *)(param_1 + 0x194)) & 0x1000000 ^ *(uint *)(param_1 + 0x194);
  *(uint *)(param_1 + 0x194) = uVar4;
  local_ac = uVar4 >> 0x16 & 1;
  FUN_006405b0(s_SubtitleInBox_007271cc,&local_ac);
  *(uint *)(param_1 + 0x194) =
       (local_ac << 0x16 ^ *(uint *)(param_1 + 0x194)) & 0x400000 ^ *(uint *)(param_1 + 0x194);
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar10 = *(int *)(param_1 + 0xb4);
    if (iVar10 != 0) {
      FUN_006c026a(iVar10,0x3c,*(undefined4 *)(iVar10 + -4),thunk_FUN_00649ba0);
      FUN_006bf840(iVar10 + -4);
    }
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  local_94 = local_80;
  if (local_80 != *(undefined4 **)(param_1 + 0xb8)) {
    local_a0 = local_80;
    local_7c = (int *)operator_new((int)local_80 * 0x3c + 4);
    local_4._0_1_ = 1;
    if (local_7c == (int *)0x0) {
      local_a8 = (int *)0x0;
    }
    else {
      piVar2 = local_7c + 1;
      *local_7c = (int)local_a0;
      FUN_006c043b(piVar2,0x3c,local_a0,FUN_00474180,thunk_FUN_00649ba0);
      local_a8 = piVar2;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    local_9c = 0;
    if (0 < *(int *)(param_1 + 0xb0)) {
      local_a4 = (ushort *)(local_a8 + 0xc);
      local_a0 = (undefined4 *)(-0x30 - (int)local_a8);
      do {
        iVar10 = (int)local_a4 + *(int *)(param_1 + 0xb4) + (int)local_a0;
        FUN_0064a320(iVar10);
        *(undefined4 *)(local_a4 + -2) = *(undefined4 *)(iVar10 + 0x2c);
        *(undefined4 *)local_a4 = *(undefined4 *)(iVar10 + 0x30);
        *(undefined4 *)(local_a4 + 2) = *(undefined4 *)(iVar10 + 0x34);
        *(undefined4 *)(local_a4 + 4) = *(undefined4 *)(iVar10 + 0x38);
        local_a4 = local_a4 + 0x1e;
        local_9c = local_9c + 1;
      } while (local_9c < *(int *)(param_1 + 0xb0));
    }
    if (*(int *)(param_1 + 0xb4) != 0) {
      FUN_00474120(3);
    }
    *(int **)(param_1 + 0xb4) = local_a8;
    *(undefined4 **)(param_1 + 0xb8) = local_94;
  }
  if (*(int *)(param_1 + 0xd8) == 0) {
    iVar10 = *(int *)(param_1 + 0xd0);
    if (iVar10 != 0) {
      FUN_006c026a(iVar10,0x40,*(undefined4 *)(iVar10 + -4),thunk_FUN_00649ba0);
      FUN_006bf840(iVar10 + -4);
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  local_94 = local_98;
  if (local_98 != *(undefined4 **)(param_1 + 0xd4)) {
    local_a0 = local_98;
    local_7c = (int *)operator_new((int)local_98 * 0x40 + 4);
    local_4._0_1_ = 2;
    if (local_7c == (int *)0x0) {
      local_a4 = (ushort *)0x0;
    }
    else {
      puVar11 = (ushort *)(local_7c + 1);
      *local_7c = (int)local_a0;
      FUN_006c043b(puVar11,0x40,local_a0,FUN_00474270,thunk_FUN_00649ba0);
      local_a4 = puVar11;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    local_9c = 0;
    if (0 < *(int *)(param_1 + 0xcc)) {
      local_a0 = (undefined4 *)(-0x3a - (int)local_a4);
      puVar11 = local_a4 + 0x1d;
      do {
        iVar10 = (int)puVar11 + *(int *)(param_1 + 0xd0) + (int)local_a0;
        FUN_0064a320(iVar10);
        *(undefined4 *)(puVar11 + -7) = *(undefined4 *)(iVar10 + 0x2c);
        *(undefined4 *)(puVar11 + -5) = *(undefined4 *)(iVar10 + 0x30);
        *(undefined4 *)(puVar11 + -3) = *(undefined4 *)(iVar10 + 0x34);
        puVar11[-1] = *(ushort *)(iVar10 + 0x38);
        uVar3 = (byte)((byte)((int)(uint)(ushort)(*(short *)(iVar10 + 0x3a) << 0xf) >> 0xf) ^
                      (byte)*puVar11) & 1 ^ *puVar11;
        *puVar11 = uVar3;
        *puVar11 = (byte)((byte)((int)(uint)(ushort)(*(short *)(iVar10 + 0x3a) << 0xe) >> 0xe) ^
                         (byte)uVar3) & 2 ^ uVar3;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(iVar10 + 0x3c);
        local_9c = local_9c + 1;
        puVar11 = puVar11 + 0x20;
      } while (local_9c < *(int *)(param_1 + 0xcc));
    }
    if (*(int *)(param_1 + 0xd0) != 0) {
      FUN_00474190(3);
    }
    *(ushort **)(param_1 + 0xd0) = local_a4;
    *(undefined4 **)(param_1 + 0xd4) = local_94;
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0xec));
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  local_a0 = local_88;
  if (local_88 != *(undefined4 **)(param_1 + 0xf0)) {
    pvVar5 = operator_new((int)local_88 * 4);
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0xe8)) {
      do {
        *(undefined4 *)((int)pvVar5 + iVar10 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0xec) + iVar10 * 4);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0xe8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0xec));
    *(undefined4 **)(param_1 + 0xf0) = local_a0;
    *(void **)(param_1 + 0xec) = pvVar5;
  }
  if (*(int *)(param_1 + 0x1d4) == 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x1cc));
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  local_a0 = local_8c;
  if (local_8c != *(undefined4 **)(param_1 + 0x1d0)) {
    pvVar5 = operator_new((int)local_8c << 3);
    iVar10 = 0;
    if (0 < *(int *)(param_1 + 0x1c8)) {
      do {
        iVar12 = *(int *)(param_1 + 0x1cc);
        *(undefined4 *)((int)pvVar5 + iVar10 * 8) = *(undefined4 *)(iVar12 + iVar10 * 8);
        *(undefined4 *)((int)pvVar5 + iVar10 * 8 + 4) = *(undefined4 *)(iVar12 + 4 + iVar10 * 8);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0x1c8));
    }
    FUN_006bf840(*(undefined4 *)(param_1 + 0x1cc));
    *(undefined4 **)(param_1 + 0x1d0) = local_a0;
    *(void **)(param_1 + 0x1cc) = pvVar5;
  }
  iVar10 = 0;
  if (0 < (int)local_80) {
    do {
      iVar12 = *(int *)(param_1 + 0xb0);
      if (*(int *)(param_1 + 0xb8) < iVar12 + 1) {
        if (*(int *)(param_1 + 0xc0) == 0) {
          iVar6 = *(int *)(param_1 + 0xb8) / 2;
          iVar13 = 1;
          if (0 < iVar6) {
            iVar13 = iVar6;
          }
          if (iVar13 + iVar12 < 1) {
            local_a8 = (int *)0x1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            local_a8 = (int *)(iVar6 + iVar12);
          }
        }
        else {
          local_a8 = (int *)(*(int *)(param_1 + 0xc0) + iVar12);
        }
        piVar2 = local_a8;
        local_7c = (int *)operator_new((int)local_a8 * 0x3c + 4);
        local_4._0_1_ = 3;
        if (local_7c == (int *)0x0) {
          local_90 = (ushort *)0x0;
        }
        else {
          *local_7c = (int)piVar2;
          puVar11 = (ushort *)(local_7c + 1);
          FUN_006c043b(puVar11,0x3c,local_a8,FUN_00474180,thunk_FUN_00649ba0);
          local_90 = puVar11;
        }
        local_4 = (uint)local_4._1_3_ << 8;
        local_9c = 0;
        if (0 < *(int *)(param_1 + 0xb0)) {
          local_a4 = local_90 + 0x18;
          local_a0 = (undefined4 *)(-0x30 - (int)local_90);
          do {
            iVar12 = (int)local_a0 + (int)local_a4 + *(int *)(param_1 + 0xb4);
            FUN_0064a320(iVar12);
            *(undefined4 *)(local_a4 + -2) = *(undefined4 *)(iVar12 + 0x2c);
            *(undefined4 *)local_a4 = *(undefined4 *)(iVar12 + 0x30);
            *(undefined4 *)(local_a4 + 2) = *(undefined4 *)(iVar12 + 0x34);
            *(undefined4 *)(local_a4 + 4) = *(undefined4 *)(iVar12 + 0x38);
            local_a4 = local_a4 + 0x1e;
            local_9c = local_9c + 1;
          } while (local_9c < *(int *)(param_1 + 0xb0));
        }
        if (*(int *)(param_1 + 0xb4) != 0) {
          FUN_00474120(3);
        }
        *(ushort **)(param_1 + 0xb4) = local_90;
        *(int **)(param_1 + 0xb8) = local_a8;
      }
      iVar12 = *(int *)(param_1 + 0xb0) + 1;
      *(int *)(param_1 + 0xb0) = iVar12;
      iVar13 = iVar12 * 0x3c + -0x3c + *(int *)(param_1 + 0xb4);
      FUN_0063ff20();
      FUN_0063ffc0();
      FUN_00649920(&local_94,s_Shot_d_Name_007271b8,iVar10);
      puVar9 = local_4c;
      local_4._0_1_ = 4;
      uVar7 = FUN_00649940(puVar9);
      FUN_00640480(uVar7,puVar9);
      local_4._0_1_ = 0;
      FUN_00649950();
      FUN_0064a2e0(local_4c);
      FUN_00649920(&local_84,s_Shot_d_NextShot_007271a8,iVar10);
      iVar12 = iVar13 + 0x2c;
      local_4._0_1_ = 5;
      uVar7 = FUN_00649940(iVar12);
      FUN_00640450(uVar7,iVar12);
      local_4._0_1_ = 0;
      FUN_00649950();
      FUN_00649920(local_68,s_Shot_d_SkipShot_00727198,iVar10);
      iVar12 = iVar13 + 0x30;
      local_4._0_1_ = 6;
      uVar7 = FUN_00649940(iVar12);
      FUN_00640450(uVar7,iVar12);
      local_4._0_1_ = 0;
      FUN_00649950();
      FUN_00649920(local_70,s_Shot_d_MaxTime_00727188,iVar10);
      iVar12 = iVar13 + 0x34;
      local_4._0_1_ = 7;
      uVar7 = FUN_00649940(iVar12);
      FUN_00640420(uVar7,iVar12);
      local_4._0_1_ = 0;
      FUN_00649950();
      FUN_00649920(&local_74,s_Shot_d_Time_0072717c,iVar10);
      iVar13 = iVar13 + 0x38;
      local_4._0_1_ = 8;
      uVar7 = FUN_00649940(iVar13);
      FUN_00640420(uVar7,iVar13);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)local_80);
  }
  iVar10 = 0;
  if (0 < (int)local_98) {
    local_9c = 0;
    do {
      iVar12 = *(int *)(param_1 + 0xcc);
      if (*(int *)(param_1 + 0xd4) < iVar12 + 1) {
        if (*(int *)(param_1 + 0xdc) == 0) {
          iVar6 = *(int *)(param_1 + 0xd4) / 2;
          iVar13 = 1;
          if (0 < iVar6) {
            iVar13 = iVar6;
          }
          if (iVar13 + iVar12 < 1) {
            local_a8 = (int *)0x1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            local_a8 = (int *)(iVar12 + iVar6);
          }
        }
        else {
          local_a8 = (int *)(*(int *)(param_1 + 0xdc) + iVar12);
        }
        piVar2 = local_a8;
        local_74 = (undefined4 *)operator_new((int)local_a8 * 0x40 + 4);
        local_4._0_1_ = 9;
        if (local_74 == (undefined4 *)0x0) {
          local_a4 = (ushort *)0x0;
        }
        else {
          *local_74 = piVar2;
          puVar11 = (ushort *)(local_74 + 1);
          FUN_006c043b(puVar11,0x40,local_a8,FUN_00474270,thunk_FUN_00649ba0);
          local_a4 = puVar11;
        }
        local_4 = (uint)local_4._1_3_ << 8;
        local_84 = 0;
        if (0 < *(int *)(param_1 + 0xcc)) {
          local_74 = (undefined4 *)(-0x3a - (int)local_a4);
          local_90 = local_a4 + 0x1d;
          do {
            iVar12 = *(int *)(param_1 + 0xd0) + (int)local_74 + (int)local_90;
            FUN_0064a320(iVar12);
            *(undefined4 *)(local_90 + -7) = *(undefined4 *)(iVar12 + 0x2c);
            *(undefined4 *)(local_90 + -5) = *(undefined4 *)(iVar12 + 0x30);
            *(undefined4 *)(local_90 + -3) = *(undefined4 *)(iVar12 + 0x34);
            local_90[-1] = *(ushort *)(iVar12 + 0x38);
            puVar11 = local_90 + 0x20;
            uVar3 = (byte)((byte)((int)(uint)(ushort)(*(short *)(iVar12 + 0x3a) << 0xf) >> 0xf) ^
                          (byte)*local_90) & 1 ^ *local_90;
            *local_90 = uVar3;
            *local_90 = (byte)((byte)((int)(uint)(ushort)(*(short *)(iVar12 + 0x3a) << 0xe) >> 0xe)
                              ^ (byte)uVar3) & 2 ^ uVar3;
            *(undefined4 *)(local_90 + 1) = *(undefined4 *)(iVar12 + 0x3c);
            local_84 = local_84 + 1;
            local_90 = puVar11;
          } while (local_84 < *(int *)(param_1 + 0xcc));
        }
        if (*(int *)(param_1 + 0xd0) != 0) {
          FUN_00474190(3);
        }
        *(ushort **)(param_1 + 0xd0) = local_a4;
        *(int **)(param_1 + 0xd4) = local_a8;
      }
      iVar12 = *(int *)(param_1 + 0xcc) + 1;
      *(int *)(param_1 + 0xcc) = iVar12;
      iVar13 = *(int *)(param_1 + 0xd0) + -0x40 + iVar12 * 0x40;
      FUN_0063ff20();
      FUN_0063ffc0();
      FUN_00649920(local_70,s_SyncPoint_d_Name_0072715c,iVar10);
      puVar9 = local_4c;
      local_4._0_1_ = 10;
      uVar7 = FUN_00649940(puVar9);
      FUN_00640480(uVar7,puVar9);
      local_4._0_1_ = 0;
      FUN_00649950();
      FUN_0064a2e0(local_4c);
      FUN_00649920(local_68,s_SyncPoint_d_Type_00727148,iVar10);
      puVar14 = &local_ac;
      local_4._0_1_ = 0xb;
      uVar7 = FUN_00649940(puVar14);
      FUN_00640450(uVar7,puVar14);
      local_4._0_1_ = 0;
      FUN_00649950();
      *(uint *)(iVar13 + 0x2c) = local_ac;
      FUN_00649920(local_5c,s_SyncPoint_d_Action_00727134,iVar10);
      iVar12 = iVar13 + 0x30;
      local_4._0_1_ = 0xc;
      uVar7 = FUN_00649940(iVar12);
      FUN_00640450(uVar7,iVar12);
      local_4._0_1_ = 0;
      FUN_00649950();
      FUN_00649920(local_58,s_SyncPoint_d_Offset_00727120,iVar10);
      iVar12 = iVar13 + 0x34;
      local_4._0_1_ = 0xd;
      uVar7 = FUN_00649940(iVar12);
      FUN_00640420(uVar7,iVar12);
      local_4._0_1_ = 0;
      FUN_00649950();
      local_94 = (undefined4 *)(int)*(short *)(iVar13 + 0x38);
      FUN_00649920(&local_64,s_SyncPoint_d_Shot_0072710c,iVar10);
      ppuVar15 = &local_94;
      local_4._0_1_ = 0xe;
      uVar7 = FUN_00649940(ppuVar15);
      FUN_00640450(uVar7,ppuVar15);
      local_4._0_1_ = 0;
      FUN_00649950();
      *(undefined2 *)(iVar13 + 0x38) = local_94._0_2_;
      local_a0 = (undefined4 *)0x0;
      FUN_00649920(local_6c,s_SyncPoint_d_FromEnd_007270f8,iVar10);
      ppuVar15 = &local_a0;
      local_4._0_1_ = 0xf;
      uVar7 = FUN_00649940(ppuVar15);
      FUN_006405b0(uVar7,ppuVar15);
      local_4._0_1_ = 0;
      FUN_00649950();
      puVar11 = (ushort *)(*(int *)(param_1 + 0xd0) + 0x3a + local_9c);
      uVar3 = *puVar11;
      *puVar11 = (byte)((char)local_a0 * '\x02' ^ (byte)uVar3) & 2 ^ uVar3;
      FUN_00649920(&local_7c,s_SyncPoint_d_AbsoluteTimeStart_007270d8,iVar10);
      iVar13 = iVar13 + 0x3c;
      local_4._0_1_ = 0x10;
      uVar7 = FUN_00649940(iVar13);
      FUN_00640420(uVar7,iVar13);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
      iVar10 = iVar10 + 1;
      local_9c = local_9c + 0x40;
    } while (iVar10 < (int)local_98);
  }
  local_a8 = (int *)0x0;
  if (0 < (int)local_88) {
    do {
      iVar10 = *(int *)(param_1 + 0xe8);
      puVar8 = (undefined4 *)operator_new(0x34);
      local_4._0_1_ = 0x11;
      local_64 = puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        local_a0 = (undefined4 *)0x0;
      }
      else {
        FUN_006499d0();
        local_4._0_1_ = 0x12;
        FUN_0064a2e0(s_Enter_Action_s_Name_00727068);
        *puVar8 = 0;
        puVar8[0xc] = 0;
        local_a0 = puVar8;
      }
      iVar12 = *(int *)(param_1 + 0xe8);
      local_4._0_1_ = 0;
      if (*(int *)(param_1 + 0xf0) < iVar12 + 1) {
        if (*(int *)(param_1 + 0xf8) == 0) {
          iVar6 = *(int *)(param_1 + 0xf0) / 2;
          iVar13 = 1;
          if (0 < iVar6) {
            iVar13 = iVar6;
          }
          if (iVar13 + iVar12 < 1) {
            local_a4 = (ushort *)0x1;
          }
          else {
            if (iVar6 < 1) {
              iVar6 = 1;
            }
            local_a4 = (ushort *)(iVar12 + iVar6);
          }
        }
        else {
          local_a4 = (ushort *)(*(int *)(param_1 + 0xf8) + iVar12);
        }
        pvVar5 = operator_new((int)local_a4 * 4);
        iVar12 = 0;
        if (0 < *(int *)(param_1 + 0xe8)) {
          do {
            *(undefined4 *)((int)pvVar5 + iVar12 * 4) =
                 *(undefined4 *)(*(int *)(param_1 + 0xec) + iVar12 * 4);
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(param_1 + 0xe8));
        }
        FUN_006bf840(*(undefined4 *)(param_1 + 0xec));
        *(void **)(param_1 + 0xec) = pvVar5;
        *(ushort **)(param_1 + 0xf0) = local_a4;
      }
      *(undefined4 **)(*(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xe8) * 4) = local_a0;
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
      FUN_0063ff20();
      FUN_0063ffc0();
      piVar2 = local_a8;
      FUN_00649920(&local_7c,s_Action_d_Name_007270bc,local_a8);
      puVar9 = local_4c;
      local_4._0_1_ = 0x13;
      uVar7 = FUN_00649940(puVar9);
      FUN_00640480(uVar7,puVar9);
      local_4._0_1_ = 0;
      FUN_00649950();
      FUN_0064a2e0(local_4c);
      FUN_00649920(local_6c,s_Action_d_Type_007270ac,piVar2);
      puVar14 = &local_ac;
      local_4._0_1_ = 0x14;
      uVar7 = FUN_00649940(puVar14);
      FUN_00640450(uVar7,puVar14);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
      **(uint **)(*(int *)(param_1 + 0xec) + iVar10 * 4) = local_ac;
      iVar12 = *(int *)(param_1 + 0xec);
      uVar7 = FUN_00471b00(**(undefined4 **)(iVar12 + iVar10 * 4));
      *(undefined4 *)(*(int *)(iVar12 + iVar10 * 4) + 0x30) = uVar7;
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0xec) + iVar10 * 4) + 0x30);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x2c))(local_a8,param_2);
      }
      piVar2 = *(int **)(*(int *)(param_1 + 0xec) + iVar10 * 4);
      if (*piVar2 == 4) {
        pbVar1 = (byte *)(piVar2[0xc] + 0x10);
        *pbVar1 = *pbVar1 | 1;
      }
      local_a8 = (int *)((int)local_a8 + 1);
    } while ((int)local_a8 < (int)local_88);
  }
  if (local_8c != (undefined4 *)0x0) {
    FUN_0063ff20();
    local_a8 = (int *)0x0;
    if (0 < (int)local_8c) {
      do {
        FUN_0063ffc0();
        FUN_006405e0(s_PGuid_00727094,&local_7c);
        iVar10 = *(int *)(param_1 + 0x1c8);
        if (*(int *)(param_1 + 0x1d0) < iVar10 + 1) {
          if (*(int *)(param_1 + 0x1d8) == 0) {
            iVar12 = *(int *)(param_1 + 0x1d0) / 2;
            iVar13 = 1;
            if (0 < iVar12) {
              iVar13 = iVar12;
            }
            if (iVar13 + iVar10 < 1) {
              iVar12 = 1;
            }
            else {
              if (iVar12 < 1) {
                iVar12 = 1;
              }
              iVar12 = iVar12 + iVar10;
            }
          }
          else {
            iVar12 = *(int *)(param_1 + 0x1d8) + iVar10;
          }
          pvVar5 = operator_new(iVar12 * 8);
          iVar10 = 0;
          if (0 < *(int *)(param_1 + 0x1c8)) {
            do {
              iVar13 = *(int *)(param_1 + 0x1cc);
              *(undefined4 *)((int)pvVar5 + iVar10 * 8) = *(undefined4 *)(iVar13 + iVar10 * 8);
              *(undefined4 *)((int)pvVar5 + iVar10 * 8 + 4) =
                   *(undefined4 *)(iVar13 + 4 + iVar10 * 8);
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(param_1 + 0x1c8));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x1cc));
          *(void **)(param_1 + 0x1cc) = pvVar5;
          *(int *)(param_1 + 0x1d0) = iVar12;
        }
        iVar10 = *(int *)(param_1 + 0x1c8);
        iVar12 = *(int *)(param_1 + 0x1cc);
        *(int **)(iVar12 + iVar10 * 8) = local_7c;
        *(undefined4 *)(iVar12 + 4 + iVar10 * 8) = local_78;
        local_a8 = (int *)((int)local_a8 + 1);
        *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
      } while ((int)local_a8 < (int)local_8c);
    }
  }
  FUN_0063ff20();
  if (*param_2 == 0) {
    puVar9 = &DAT_0075b6e0;
  }
  else {
    puVar9 = *(undefined1 **)(*param_2 + param_2[2] * 4);
  }
  iVar10 = FUN_00647e40(puVar9,s_Action_1_00727088);
  if (iVar10 == 0) {
    FUN_0063ffc0();
    (**(code **)(*(int *)(param_1 + 0x118) + 0x2c))(0xffffffff,param_2);
    FUN_0063ff20();
    if (*param_2 == 0) {
      puVar9 = &DAT_0075b6e0;
    }
    else {
      puVar9 = *(undefined1 **)(*param_2 + param_2[2] * 4);
    }
    iVar10 = FUN_00647e40(puVar9,s_Action_2_0072707c);
    if (iVar10 == 0) {
      FUN_0063ffc0();
      (**(code **)(*(int *)(param_1 + 0x150) + 0x2c))(0xfffffffe,param_2);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

