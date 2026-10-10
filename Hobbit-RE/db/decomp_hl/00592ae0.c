
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00592ae0(int param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  float10 fVar14;
  float10 fVar15;
  undefined1 auStack_118 [12];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  float *pfStack_104;
  float *pfStack_100;
  int iStack_fc;
  float *pfStack_f8;
  float *pfStack_f4;
  float *pfStack_f0;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 *puStack_c8;
  int *piStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 auStack_98 [4];
  float fStack_94;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 auStack_4c [2];
  undefined4 uStack_44;
  undefined4 uStack_40;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd0ad;
  pvStack_c = ExceptionList;
  pfStack_f0 = (float *)s_PhysController__SetAnim_00742de8;
  pfStack_f4 = (float *)0x592b0f;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  if (param_2 == 0) goto LAB_00593d95;
  pfStack_f0 = (float *)0x592b30;
  iVar5 = FUN_00592920();
  if (*(char *)(iVar5 + 0x268) < '\0') {
    pfStack_f0 = (float *)0x592b41;
    iVar5 = FUN_00592920();
    if ((*(byte *)(iVar5 + 0x268) & 1) != 0) {
      pfStack_f0 = (float *)0x592b51;
      piVar6 = (int *)FUN_00592920();
      pfStack_f0 = (float *)0x592b5a;
      pfVar7 = (float *)FUN_00592920();
      local_c0 = *pfVar7;
      pfStack_f0 = (float *)0x0;
      pfStack_f4 = (float *)0x592b6b;
      pfStack_f4 = (float *)(**(code **)(*piVar6 + 0x2c))();
      pfStack_f8 = (float *)0x592b75;
      (**(code **)((int)local_c0 + 0x14))();
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfff7ffff;
    }
  }
  pfStack_f0 = (float *)0x592b83;
  FUN_00592920();
  pfStack_f0 = (float *)0x592b8a;
  fStack_b0 = (float)FUN_00598bc0();
  pfStack_f0 = (float *)0x592b95;
  iVar5 = FUN_00598b70();
  if ((*(int *)(param_1 + 0x158) == 0) ||
     (local_c0 = *(float *)(*(int *)(param_1 + 0x158) + 4), local_c0 == 0.0)) {
    local_c0 = 0.0;
  }
  if ((*(uint *)(param_1 + 0x4c) & 0x80000) != 0) {
    pfStack_f0 = (float *)0x592bc7;
    piVar6 = (int *)FUN_00592920();
    pfStack_f0 = (float *)0x0;
    pfStack_f4 = (float *)(param_1 + 0x210);
    pfStack_f8 = (float *)0x592bd7;
    (**(code **)(*piVar6 + 0x14))();
  }
  if (((byte)*(undefined4 *)(param_2 + 0x78) & 0x20) == 0x20) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x80000;
    pfStack_f0 = (float *)0x592bf1;
    piVar6 = (int *)FUN_00592920();
    pfStack_f0 = (float *)0x592bf8;
    puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x28))();
    *(undefined4 *)(param_1 + 0x210) = *puVar8;
    *(undefined4 *)(param_1 + 0x214) = puVar8[1];
    *(undefined4 *)(param_1 + 0x218) = puVar8[2];
  }
  else {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfff7ffff;
  }
  if (*(int *)(param_1 + 0x158) != 0) {
    if (iVar5 == 0) {
      pfStack_f0 = (float *)0x592c35;
      iVar9 = FUN_00592190();
      pfStack_f0 = *(float **)(iVar9 + 0x20);
      pfStack_f4 = (float *)0x592c46;
      fStack_d8 = (float)pfStack_f0;
      FUN_00592920();
      pfStack_f4 = (float *)0x592c4d;
      FUN_004a3330();
    }
    if (param_2 == *(int *)(param_1 + 0x158)) {
      pfStack_f0 = (float *)0x592c60;
      iVar5 = FUN_00592190();
      *(undefined4 *)(*(int *)(iVar5 + 0x10c) + 0x3c) = 0;
      pfStack_f0 = (float *)0x592c74;
      iVar5 = FUN_00592190();
      if ((0 < *(int *)(iVar5 + 0xe0)) ||
         (local_c0 = (float)(*(int *)(iVar5 + 0xd8) + -2),
         (float)(int)local_c0 < *(float *)(iVar5 + 0xdc) !=
         ((float)(int)local_c0 == *(float *)(iVar5 + 0xdc)))) {
        pfStack_f0 = (float *)0x592ca7;
        iVar5 = FUN_00592190();
        pfStack_f4 = (float *)0x592cba;
        pfStack_f0 = (float *)(iVar5 + 0xd0);
        iVar9 = FUN_00549470();
        pfStack_f4 = (float *)0x592cc7;
        pfStack_f0 = (float *)(iVar5 + 0xd0);
        FUN_00549580();
        if ((*(byte *)(*(int *)(iVar5 + 0xd4) * 0x50 + 0x2e + *(int *)(iVar9 + 0x58)) & 1) == 0) {
          pfStack_f0 = (float *)0x592ce8;
          iVar5 = FUN_00592920();
          if ((*(int *)(iVar5 + 600) != 0) && (*(int *)(param_1 + 0x158) != 0)) {
            pfStack_f0 = (float *)0x592d01;
            pfStack_f0 = (float *)FUN_004aa000();
            pfStack_f8 = &local_c0;
            pfStack_f4 = (float *)s_Looping_Current_Anim__s_00742dd0;
            iStack_fc = 0x592d11;
            FUN_00649920();
            local_4._0_1_ = 1;
            pfStack_f0 = (float *)0x592d23;
            uVar10 = FUN_00649940();
            FUN_00649b20(uVar10);
            local_4._0_1_ = 1;
            FUN_00592920();
            FUN_004a27c0();
            local_4 = (uint)local_4._1_3_ << 8;
            pfStack_f0 = (float *)0x592d59;
            FUN_00649950();
          }
          pfStack_f0 = (float *)0x592d60;
          iVar5 = FUN_00592190();
          *(undefined4 *)(iVar5 + 300) = 1;
          *(int *)(iVar5 + 0x138) = *(int *)(iVar5 + 0x138) + 1;
          *(undefined4 *)(iVar5 + 0x13c) = 1;
          *(int *)(iVar5 + 0x148) = *(int *)(iVar5 + 0x148) + 1;
          pfStack_f0 = (float *)((float)*(int *)(iVar5 + 0xd8) - DAT_006e92e8);
          pfStack_f4 = (float *)0x0;
          pfStack_f8 = (float *)0x592da4;
          fVar14 = (float10)FUN_0064c6b0();
          *(float *)(iVar5 + 0xdc) = (float)fVar14;
          pfStack_f0 = (float *)0x592db4;
          iVar5 = FUN_00592190();
          *(undefined4 *)(iVar5 + 300) = 1;
          *(int *)(iVar5 + 0x138) = *(int *)(iVar5 + 0x138) + 1;
          *(undefined4 *)(iVar5 + 0x13c) = 1;
          *(int *)(iVar5 + 0x148) = *(int *)(iVar5 + 0x148) + 1;
          *(undefined4 *)(iVar5 + 0xe0) = 0;
        }
      }
      goto LAB_00593d95;
    }
  }
  pfStack_f0 = (float *)param_2;
  pfStack_f4 = (float *)0x592df1;
  FUN_00592970();
  if ((*(uint *)(param_1 + 0x4c) & 0x100000) != 0) {
    fStack_b0 = (float)((int)(*(uint *)(param_1 + 0x4c) << 9) >> 0x1f);
  }
  pfStack_f0 = (float *)0x592e0c;
  FUN_00592920();
  pfStack_f0 = (float *)0x592e13;
  fVar14 = (float10)FUN_004a3370();
  fStack_d8 = (float)fVar14;
  iVar9 = *(int *)(param_1 + 0x158);
  *(int *)(param_1 + 0x158) = param_2;
  if (iVar5 == 0) {
LAB_00592e4d:
    pfStack_f0 = (float *)0x592e54;
    iVar11 = FUN_00598b70();
    if ((iVar11 != 0) && (iVar5 == 0)) {
      *(float *)(param_1 + 0x20c) = fStack_d8;
    }
  }
  else {
    pfStack_f0 = (float *)0x592e32;
    iVar11 = FUN_00598b70();
    if (iVar11 != 0) goto LAB_00592e4d;
    pfStack_f0 = *(float **)(param_1 + 0x20c);
    pfStack_f4 = (float *)0x592e44;
    FUN_00592920();
    pfStack_f4 = (float *)0x592e4b;
    FUN_004a3330();
  }
  if (-1 < *(int *)(param_2 + 0x74)) {
    *(int *)(param_1 + 0x10c) = *(int *)(param_2 + 0x74);
  }
  pfStack_f0 = (float *)0x592e7a;
  iVar5 = FUN_00592920();
  if ((*(int *)(iVar5 + 600) != 0) && (*(int *)(param_1 + 0x158) != 0)) {
    pfStack_f0 = (float *)0x592e93;
    pfStack_f0 = (float *)FUN_004aa000();
    pfStack_f8 = &fStack_d8;
    pfStack_f4 = (float *)s_Playing_Anim__s_00742dc0;
    iStack_fc = 0x592ea3;
    FUN_00649920();
    local_4._0_1_ = 3;
    pfStack_f0 = (float *)0x592eb5;
    uVar10 = FUN_00649940();
    puStack_c8 = auStack_118;
    FUN_00649b20(uVar10);
    local_4._0_1_ = 3;
    FUN_00592920();
    FUN_004a27c0();
    local_4 = (uint)local_4._1_3_ << 8;
    pfStack_f0 = (float *)0x592eeb;
    FUN_00649950();
  }
  if (DAT_0075cf1c != 0) {
    pfStack_f0 = (float *)0x592eff;
    pfStack_f0 = (float *)FUN_004aa000();
    pfStack_f4 = (float *)0x592f09;
    FUN_00649b20();
    uStack_44 = *(undefined4 *)(param_1 + 0x288);
    uStack_40 = *(undefined4 *)(param_1 + 0x28c);
    local_4._0_1_ = 5;
    auStack_4c[0] = 10;
    pfStack_f0 = (float *)0x592f42;
    FUN_006499d0();
    pfStack_f0 = (float *)auStack_98;
    local_4._0_1_ = 6;
    pfStack_f4 = (float *)0x592f5b;
    FUN_0064a320();
    local_4._0_1_ = 0;
    pfStack_f0 = (float *)0x592f6c;
    FUN_00649ba0();
    pfStack_f8 = *(float **)(DAT_0075cf1c + 8);
    pfStack_f4 = *(float **)(DAT_0075cf1c + 0xc);
    pfStack_f0 = (float *)auStack_4c;
    local_4._0_1_ = 7;
    iStack_fc = 0x592f93;
    FUN_0054e4d0();
    local_4 = (uint)local_4._1_3_ << 8;
    pfStack_f0 = (float *)0x592fa7;
    FUN_00649ba0();
  }
  if ((*(int *)(param_1 + 0x158) == 0) || (*(int *)(*(int *)(param_1 + 0x158) + 4) != 0x3b)) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  pfStack_f0 = (float *)0x592fc7;
  iVar5 = FUN_00592190();
  *(undefined4 *)(iVar5 + 0xc) = uVar10;
  *(undefined4 *)(iVar5 + 0x100) = uVar10;
  uVar10 = *(undefined4 *)(param_1 + 0x288);
  uVar2 = *(undefined4 *)(param_1 + 0x28c);
  pfStack_f0 = (float *)s_obj_mgr__LockObject_Guid__0071cef0;
  pfStack_f4 = (float *)0x592fea;
  FUN_00649600();
  local_4._0_1_ = 8;
  pfStack_f8 = (float *)0x592ffe;
  pfStack_f4 = (float *)uVar10;
  pfStack_f0 = (float *)uVar2;
  iVar5 = FUN_00406ce0();
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar5 == -1) {
    pfStack_f0 = (float *)0x593014;
    FUN_00649720();
    piVar6 = (int *)0x0;
  }
  else {
    uVar3 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
    piVar6 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
    pfStack_f0 = (float *)0x59303b;
    FUN_00649720();
  }
  iVar5 = *(int *)(param_1 + 0x158);
  uVar3 = *(uint *)(iVar5 + 0x78);
  piStack_c4 = piVar6;
  if (((byte)uVar3 & 0x80) == 0x80) {
    if (param_4 < DAT_006e92e4) {
      fStack_d8 = *(float *)(iVar5 + 0x50);
      pfStack_f0 = (float *)0x5930c4;
      uVar10 = FUN_00592190();
      pfStack_f4 = (float *)0x5930d1;
      pfStack_f0 = (float *)uVar10;
      FUN_00549470();
      pfStack_f4 = (float *)0x5930de;
      pfStack_f0 = (float *)uVar10;
      FUN_00549580();
      pfStack_f4 = (float *)0x1;
      pfStack_f8 = (float *)0x1;
      pfStack_f0 = (float *)fStack_d8;
      goto LAB_005931df;
    }
    pfStack_f0 = (float *)0x593077;
    uVar10 = FUN_00592190();
    pfStack_f4 = (float *)0x593084;
    pfStack_f0 = (float *)uVar10;
    fStack_d8 = (float)FUN_00549470();
    pfStack_f4 = (float *)0x593093;
    pfStack_f0 = (float *)uVar10;
    FUN_00549580();
    pfStack_f0 = (float *)param_4;
    pfStack_f4 = (float *)0x1;
    pfStack_f8 = (float *)0x1;
    pfStack_100 = (float *)0x5930a9;
    iStack_fc = iVar5 + 8;
    iStack_fc = FUN_0053cc70();
    pfStack_100 = (float *)0x5930b1;
    FUN_00540840();
  }
  else {
    if (((uVar3 & 0x400) == 0x400) || ((uVar3 & 0x8000) == 0x8000)) {
      fStack_d8 = *(float *)(iVar5 + 0x50);
      pfStack_f0 = (float *)0x5931b9;
      uVar10 = FUN_00592190();
      pfStack_f4 = (float *)0x5931c6;
      pfStack_f0 = (float *)uVar10;
      FUN_00549470();
      pfStack_f4 = (float *)0x5931d3;
      pfStack_f0 = (float *)uVar10;
      FUN_00549580();
      pfStack_f4 = (float *)0x0;
      pfStack_f8 = (float *)0x0;
      pfStack_f0 = (float *)fStack_d8;
    }
    else {
      pfVar7 = (float *)(uint)((uVar3 & 0x2000) != 0x2000);
      if (param_4 < DAT_006e92e4) {
        fStack_d8 = *(float *)(iVar5 + 0x50);
        pfStack_f0 = (float *)0x59317d;
        uVar10 = FUN_00592190();
        pfStack_f4 = (float *)0x59318a;
        pfStack_f0 = (float *)uVar10;
        puStack_c8 = (undefined1 *)FUN_00549470();
        pfStack_f4 = (float *)0x593199;
        pfStack_f0 = (float *)uVar10;
        FUN_00549580();
        pfStack_f0 = (float *)fStack_d8;
        pfStack_f8 = (float *)0x0;
        pfStack_f4 = pfVar7;
      }
      else {
        pfStack_f0 = (float *)0x593141;
        uVar10 = FUN_00592190();
        pfStack_f4 = (float *)0x59314e;
        pfStack_f0 = (float *)uVar10;
        fStack_d8 = (float)FUN_00549470();
        pfStack_f4 = (float *)0x59315d;
        pfStack_f0 = (float *)uVar10;
        FUN_00549580();
        pfStack_f0 = (float *)param_4;
        pfStack_f8 = (float *)0x0;
        pfStack_f4 = pfVar7;
      }
    }
LAB_005931df:
    iStack_fc = iVar5 + 8;
    pfStack_100 = (float *)0x5931e4;
    iStack_fc = FUN_0053cc70();
    pfStack_100 = (float *)0x5931ec;
    FUN_00540840();
    piVar6 = piStack_c4;
  }
  if (iVar9 != 0) {
    pfStack_f0 = (float *)0x593203;
    iVar5 = FUN_00598bc0();
    if (((iVar5 == 0) && (fStack_b0 != 0.0)) && ((*(uint *)(param_1 + 0x4c) & 0x100000) == 0)) {
      pfStack_f0 = (float *)0x59322b;
      piVar12 = (int *)FUN_00592920();
      pfStack_f0 = (float *)0x593232;
      pfVar7 = (float *)(**(code **)(*piVar12 + 0x28))();
      fStack_d4 = *pfVar7;
      fStack_d0 = pfVar7[1];
      fStack_cc = pfVar7[2];
      pfStack_f0 = (float *)0x59324d;
      iVar5 = FUN_00592190();
      if (*(int *)(iVar5 + 0x13c) != 0) {
        pfStack_f0 = (float *)0x593260;
        FUN_005423d0();
      }
      pfVar7 = *(float **)(iVar5 + 0x140);
      fStack_a4 = pfVar7[2] - fStack_cc;
      fStack_a8 = pfVar7[1] - fStack_d0;
      fStack_ac = *pfVar7 - fStack_d4;
      fVar1 = SQRT(fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8 + fStack_ac * fStack_ac);
      if (fVar1 < _DAT_006e99c0 != (NAN(fVar1) || NAN(_DAT_006e99c0))) {
        pfStack_f0 = (float *)0x5932ba;
        pfStack_f4 = (float *)FUN_00598b70();
        if (pfStack_f4 == (float *)0x0) {
          iVar5 = *piVar6;
          pfStack_f0 = (float *)0x1;
          pfStack_f8 = (float *)0x5932cb;
          iVar9 = FUN_00592920();
          pfStack_f8 = *(float **)(iVar9 + 0xd4);
          iStack_fc = 0;
          pfStack_100 = &fStack_ac;
          pfStack_104 = &fStack_d4;
          uStack_108 = 0x5932e6;
          (**(code **)(iVar5 + 0x15c))();
        }
        pfStack_f4 = &fStack_d4;
LAB_005933d0:
        pfStack_f0 = (float *)0x0;
        pfStack_f8 = (float *)0x5933db;
        (**(code **)(*piVar6 + 0x14))();
      }
    }
    else {
      pfStack_f0 = (float *)0x5932f6;
      iVar5 = FUN_00598bc0();
      if (((iVar5 != 0) && (fStack_b0 == 0.0)) && ((*(uint *)(param_1 + 0x4c) & 0x100000) == 0)) {
        pfStack_f0 = (float *)0x59331e;
        piVar12 = (int *)FUN_00592920();
        pfStack_f0 = (float *)0x593325;
        pfVar7 = (float *)(**(code **)(*piVar12 + 0x28))();
        fStack_ac = *pfVar7;
        fStack_a8 = pfVar7[1];
        fStack_a4 = pfVar7[2];
        pfStack_f0 = (float *)0x593340;
        uVar10 = FUN_00592190();
        pfStack_f4 = (float *)0x59334d;
        pfStack_f0 = (float *)uVar10;
        iVar5 = FUN_00549470();
        pfStack_f4 = (float *)0x59335a;
        pfStack_f0 = (float *)uVar10;
        FUN_00549580();
        iVar5 = *(int *)(iVar5 + 0x50);
        fStack_cc = -*(float *)(iVar5 + 0x30);
        fStack_d0 = -*(float *)(iVar5 + 0x2c);
        fStack_d4 = -*(float *)(iVar5 + 0x28);
        fVar1 = SQRT(fStack_cc * fStack_cc + fStack_d0 * fStack_d0 + fStack_d4 * fStack_d4);
        if (fVar1 < _DAT_006e99c0 != (NAN(fVar1) || NAN(_DAT_006e99c0))) {
          iVar5 = *piVar6;
          pfStack_f0 = (float *)0x1;
          pfStack_f4 = (float *)0x0;
          pfStack_f8 = (float *)0x5933b1;
          iVar9 = FUN_00592920();
          pfStack_f8 = *(float **)(iVar9 + 0xd4);
          iStack_fc = 0;
          pfStack_100 = &fStack_d4;
          pfStack_104 = &fStack_ac;
          uStack_108 = 0x5933cc;
          (**(code **)(iVar5 + 0x15c))();
          pfStack_f4 = &fStack_ac;
          goto LAB_005933d0;
        }
      }
    }
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xffefffff;
  iVar5 = *(int *)(param_1 + 0x158);
  if (_DAT_006ebfe4 <
      SQRT(*(float *)(iVar5 + 0x68) * *(float *)(iVar5 + 0x68) +
           *(float *)(iVar5 + 0x6c) * *(float *)(iVar5 + 0x6c) +
           *(float *)(iVar5 + 0x70) * *(float *)(iVar5 + 0x70))) {
    pfStack_f0 = (float *)0x593421;
    iVar5 = FUN_00592190();
    pfStack_f4 = (float *)0x593434;
    pfStack_f0 = (float *)(iVar5 + 0xd0);
    iVar9 = FUN_00549470();
    pfStack_f4 = (float *)0x593441;
    pfStack_f0 = (float *)(iVar5 + 0xd0);
    FUN_00549580();
    iVar5 = *(int *)(iVar5 + 0xd4) * 0x50;
    fStack_bc = *(float *)(iVar5 + 0x38 + *(int *)(iVar9 + 0x58));
    iVar5 = iVar5 + *(int *)(iVar9 + 0x58);
    fStack_b8 = *(float *)(iVar5 + 0x3c);
    fStack_b4 = *(float *)(iVar5 + 0x40);
    iVar5 = *(int *)(param_1 + 0x158);
    fStack_d4 = *(float *)(iVar5 + 0x68);
    fStack_d0 = *(float *)(iVar5 + 0x6c);
    fStack_cc = *(float *)(iVar5 + 0x70);
    pfStack_f0 = (float *)0x59348a;
    iVar5 = FUN_00592190();
    fVar1 = *(float *)(iVar5 + 0x28);
    fStack_b8 = fVar1 * fStack_b8;
    fVar4 = SQRT(fStack_cc * fStack_cc + fStack_d4 * fStack_d4);
    fVar4 = (fVar4 - SQRT(fStack_bc * fVar1 * fStack_bc * fVar1 +
                          fStack_b4 * fVar1 * fStack_b4 * fVar1)) / fVar4;
    fStack_ac = fStack_d4 * fVar4;
    fStack_cc = fVar4 * fStack_cc;
    fStack_a8 = fStack_d0 - fStack_b8;
    pfStack_f0 = (float *)0x593500;
    fStack_a4 = fStack_cc;
    iVar9 = FUN_00592190();
    *(undefined4 *)(iVar9 + 300) = 1;
    *(int *)(iVar9 + 0x138) = *(int *)(iVar9 + 0x138) + 1;
    iVar5 = *(int *)(iVar9 + 0xd8);
    *(undefined4 *)(iVar9 + 0x13c) = 1;
    *(int *)(iVar9 + 0x148) = *(int *)(iVar9 + 0x148) + 1;
    iVar9 = *(int *)(iVar9 + 0xd4);
    pfStack_f0 = (float *)0x593545;
    iVar11 = FUN_004258a0();
    fVar1 = DAT_006e92e8 /
            ((float)iVar5 / (float)*(byte *)(iVar9 * 0x50 + 0x2f + *(int *)(iVar11 + 0x58)));
    pfStack_f0 = (float *)(fStack_a4 * fVar1);
    pfStack_f4 = (float *)(fStack_a8 * fVar1);
    pfStack_f8 = (float *)(fVar1 * fStack_ac);
    iStack_fc = 0x59358d;
    FUN_00401f00();
    pfStack_f0 = &fStack_ac;
    pfStack_f4 = (float *)0x59359a;
    FUN_004357e0();
  }
  if (*(int **)(param_1 + 400) != (int *)0x0) {
    pfStack_f0 = &fStack_58;
    pfStack_f4 = (float *)0x5935b5;
    iVar5 = (**(code **)(**(int **)(param_1 + 400) + 0x20))();
    if (iVar5 != 0) {
      pfStack_f0 = (float *)0x5935c4;
      piVar6 = (int *)FUN_00592920();
      pfStack_f0 = (float *)0x5935cb;
      pfVar7 = (float *)(**(code **)(*piVar6 + 0x28))();
      piStack_c4 = (int *)(fStack_50 - pfVar7[2]);
      puStack_c8 = (undefined1 *)(fStack_54 - pfVar7[1]);
      fStack_b0 = fStack_58 - *pfVar7;
      pfStack_f0 = (float *)0x5935fb;
      iVar5 = FUN_00592190();
      fStack_8c = *(float *)(iVar5 + 0x58);
      fStack_88 = *(float *)(iVar5 + 0x50);
      fStack_84 = *(float *)(iVar5 + 0x60);
      fStack_94 = *(float *)(iVar5 + 0x5c);
      fStack_80 = *(float *)(iVar5 + 100);
      fStack_7c = *(float *)(iVar5 + 0x68);
      fStack_70 = *(float *)(iVar5 + 0x74);
      fStack_6c = *(float *)(iVar5 + 0x78);
      fStack_d8 = *(float *)(iVar5 + 0x6c) * fStack_b0 +
                  fStack_70 * (float)piStack_c4 + *(float *)(iVar5 + 0x70) * (float)puStack_c8 +
                  fStack_6c;
      fVar1 = fStack_94 * fStack_b0 + fStack_84 * (float)puStack_c8 + fStack_80 * (float)piStack_c4
              + fStack_7c;
      puStack_c8 = (undefined1 *)
                   (fStack_88 * (float)puStack_c8 +
                    *(float *)(iVar5 + 0x54) * (float)piStack_c4 +
                    *(float *)(iVar5 + 0x4c) * fStack_b0 + fStack_8c);
      pfStack_f0 = &fStack_d4;
      pfStack_f4 = (float *)0x5936cb;
      fStack_74 = fStack_80;
      FUN_00592190();
      pfStack_f4 = (float *)0x5936d2;
      FUN_00541180();
      fStack_bc = 0.0;
      fStack_b8 = 0.0;
      fStack_b4 = 0.0;
      if ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x800) == 0x800) {
        pfStack_f0 = (float *)0x59370c;
        iVar5 = (**(code **)(**(int **)(param_1 + 400) + 0x1c))();
        if ((iVar5 != 0) &&
           ((_DAT_006e95a8 < fStack_d0 ||
            (fStack_d0 < _DAT_006ec000 != (NAN(fStack_d0) || NAN(_DAT_006ec000)))))) {
          fStack_b8 = fVar1 - fStack_d0;
        }
      }
      fStack_d0 = 0.0;
      if ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x1000) == 0x1000) {
        pfStack_f0 = (float *)0x593768;
        iVar5 = (**(code **)(**(int **)(param_1 + 400) + 0x1c))();
        if ((iVar5 != 0) &&
           ((fVar1 = fStack_d4 * fStack_d4 + fStack_cc * fStack_cc + fStack_d0 * fStack_d0,
            _DAT_006e95a8 < SQRT(fVar1) ||
            (fVar1 = SQRT(fVar1), fVar1 < _DAT_006ec000 != (NAN(fVar1) || NAN(_DAT_006ec000)))))) {
          fStack_bc = (float)puStack_c8 - fStack_d4;
          fStack_b4 = fStack_d8 - fStack_cc;
        }
      }
      if (DAT_006e92e4 < SQRT(fStack_b8 * fStack_b8 + fStack_bc * fStack_bc + fStack_b4 * fStack_b4)
         ) {
        pfStack_f0 = (float *)0x5937fa;
        iVar9 = FUN_00592190();
        *(undefined4 *)(iVar9 + 300) = 1;
        *(undefined4 *)(iVar9 + 0x13c) = 1;
        *(int *)(iVar9 + 0x138) = *(int *)(iVar9 + 0x138) + 1;
        *(int *)(iVar9 + 0x148) = *(int *)(iVar9 + 0x148) + 1;
        iVar5 = *(int *)(iVar9 + 0xd8);
        iVar9 = *(int *)(iVar9 + 0xd4);
        pfStack_f0 = (float *)0x593842;
        iVar11 = FUN_004258a0();
        fVar1 = DAT_006e92e8 /
                ((float)iVar5 / (float)*(byte *)(iVar9 * 0x50 + 0x2f + *(int *)(iVar11 + 0x58)));
        pfStack_f0 = (float *)(fStack_b4 * fVar1);
        pfStack_f4 = (float *)(fStack_b8 * fVar1);
        pfStack_f8 = (float *)(fVar1 * fStack_bc);
        iStack_fc = 0x593889;
        FUN_00401f00();
        pfStack_f0 = &fStack_ac;
        pfStack_f4 = (float *)0x593896;
        FUN_004357e0();
      }
      pfStack_f0 = (float *)fStack_d8;
      pfStack_f4 = (float *)puStack_c8;
      pfStack_f8 = (float *)0x5938a5;
      fVar14 = (float10)FUN_0064ca10();
      pfStack_f0 = (float *)0x5938b3;
      FUN_00592920();
      pfStack_f0 = (float *)0x5938ba;
      fVar15 = (float10)FUN_004a3370();
      fVar14 = ((float10)(float)fVar14 - fVar15) + (float10)_DAT_006e9368;
      if (((float10)_DAT_006e95a0 < fVar14) ||
         (fVar14 < (float10)_DAT_006e959c != (NAN(fVar14) || NAN((float10)_DAT_006e959c)))) {
        pfStack_f0 = (float *)0x40c90fdb;
        pfStack_f8 = (float *)0x5938f3;
        pfStack_f4 = (float *)(float)fVar14;
        fVar14 = (float10)FUN_0064c6b0();
      }
      if ((float10)_DAT_006e9598 <= fVar14) {
        do {
          fVar14 = fVar14 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar14);
      }
      if (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar14 = fVar14 + (float10)_DAT_006e9598;
        } while (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4)));
      }
      fStack_d8 = (float)(fVar14 - (float10)_DAT_006e9368);
      pfStack_f0 = (float *)0x593947;
      iVar5 = FUN_00592190();
      pfStack_f4 = (float *)0x59395a;
      pfStack_f0 = (float *)(iVar5 + 0xd0);
      iVar9 = FUN_00549470();
      pfStack_f4 = (float *)0x593967;
      pfStack_f0 = (float *)(iVar5 + 0xd0);
      FUN_00549580();
      fVar14 = ((float10)fStack_d8 -
               (float10)*(ushort *)(*(int *)(iVar5 + 0xd4) * 0x50 + 0x32 + *(int *)(iVar9 + 0x58)) *
               (float10)_DAT_006f3c10) + (float10)_DAT_006e9368;
      if (((float10)_DAT_006e95a0 < fVar14) ||
         (fVar14 < (float10)_DAT_006e959c != (NAN(fVar14) || NAN((float10)_DAT_006e959c)))) {
        pfStack_f0 = (float *)0x40c90fdb;
        pfStack_f8 = (float *)0x5939c2;
        pfStack_f4 = (float *)(float)fVar14;
        fVar14 = (float10)FUN_0064c6b0();
      }
      if ((float10)_DAT_006e9598 <= fVar14) {
        do {
          fVar14 = fVar14 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar14);
      }
      if (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar14 = fVar14 + (float10)_DAT_006e9598;
        } while (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4)));
      }
      fVar14 = fVar14 - (float10)_DAT_006e9368;
      fStack_d8 = (float)fVar14;
      if (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4))) {
        fVar14 = -fVar14;
      }
      if ((float10)_DAT_006e9350 < fVar14) {
        pfStack_f0 = (float *)0x593a36;
        iVar9 = FUN_00592190();
        *(int *)(iVar9 + 0x148) = *(int *)(iVar9 + 0x148) + 1;
        *(undefined4 *)(iVar9 + 300) = 1;
        *(undefined4 *)(iVar9 + 0x13c) = 1;
        iVar5 = *(int *)(iVar9 + 0xd8);
        *(int *)(iVar9 + 0x138) = *(int *)(iVar9 + 0x138) + 1;
        pfStack_f4 = (float *)0x593a7e;
        pfStack_f0 = (float *)(iVar9 + 0xd0);
        iVar11 = FUN_00549470();
        pfStack_f4 = (float *)0x593a8b;
        pfStack_f0 = (float *)(iVar9 + 0xd0);
        FUN_00549580();
        *(float *)(iVar9 + 0x48) =
             fStack_d8 /
             ((float)iVar5 /
             (float)*(byte *)(*(int *)(iVar9 + 0xd4) * 0x50 + 0x2f + *(int *)(iVar11 + 0x58)));
      }
    }
  }
  if ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x4000) == 0x4000) {
    pfStack_f0 = (float *)0x593ad8;
    iVar5 = FUN_00592190();
    pfStack_f4 = (float *)0x593aeb;
    pfStack_f0 = (float *)(iVar5 + 0xd0);
    iVar9 = FUN_00549470();
    pfStack_f4 = (float *)0x593af8;
    pfStack_f0 = (float *)(iVar5 + 0xd0);
    FUN_00549580();
    fStack_d8 = -*(float *)(*(int *)(iVar5 + 0xd4) * 0x50 + 0x3c + *(int *)(iVar9 + 0x58));
    pfStack_f0 = (float *)0x593b1a;
    iVar11 = FUN_00592190();
    *(undefined4 *)(iVar11 + 300) = 1;
    *(undefined4 *)(iVar11 + 0x13c) = 1;
    *(int *)(iVar11 + 0x138) = *(int *)(iVar11 + 0x138) + 1;
    *(int *)(iVar11 + 0x148) = *(int *)(iVar11 + 0x148) + 1;
    iVar5 = *(int *)(iVar11 + 0xd8);
    iVar9 = *(int *)(iVar11 + 0xd4);
    pfStack_f0 = (float *)0x593b62;
    iVar13 = FUN_004258a0();
    fVar1 = DAT_006e92e8 /
            ((float)iVar5 / (float)*(byte *)(iVar9 * 0x50 + 0x2f + *(int *)(iVar13 + 0x58)));
    pfStack_f8 = (float *)(DAT_006e92e4 * fVar1);
    pfStack_f4 = (float *)(fVar1 * fStack_d8);
    iStack_fc = 0x593ba6;
    pfStack_f0 = pfStack_f8;
    FUN_00401f00();
    *(float *)(iVar11 + 0x3c) = fStack_ac;
    *(float *)(iVar11 + 0x40) = fStack_a8;
    *(float *)(iVar11 + 0x44) = fStack_a4;
  }
  if (DAT_006e92e4 < *(float *)(param_2 + 0x48)) {
    pfVar7 = *(float **)(param_2 + 0x48);
    pfStack_f0 = (float *)0x593be0;
    piVar6 = (int *)FUN_00592920();
    pfStack_f0 = (float *)0x0;
    pfStack_f4 = (float *)0x4000;
    iStack_fc = 0x447a0000;
    pfStack_100 = (float *)0x593bf8;
    pfStack_f8 = pfVar7;
    pfStack_100 = (float *)(**(code **)(*piVar6 + 0x28))();
    uStack_108 = *(undefined4 *)(param_1 + 0x288);
    pfStack_104 = *(float **)(param_1 + 0x28c);
    uStack_10c = 0x593c11;
    FUN_0054d290();
  }
  if (local_c0 == 0.0) {
    pfStack_f0 = (float *)0x593c24;
    iVar5 = FUN_00592190();
    pfStack_f4 = (float *)0x593c37;
    pfStack_f0 = (float *)(iVar5 + 0xd0);
    iVar9 = FUN_00549470();
    pfStack_f4 = (float *)0x593c44;
    pfStack_f0 = (float *)(iVar5 + 0xd0);
    FUN_00549580();
    if (((*(byte *)(*(int *)(iVar5 + 0xd4) * 0x50 + 0x2e + *(int *)(iVar9 + 0x58)) & 1) != 0) &&
       ((*(uint *)(*(int *)(param_1 + 0x158) + 0x78) & 0x8000) != 0x8000)) {
      pfStack_f0 = (float *)0x593c80;
      piVar6 = (int *)FUN_00592920();
      pfStack_f0 = (float *)0x593c8a;
      iVar5 = (**(code **)(*piVar6 + 0x154))();
      pfStack_f4 = (float *)0x593c9d;
      pfStack_f0 = (float *)(iVar5 + 0xd0);
      iVar9 = FUN_00549470();
      pfStack_f4 = (float *)0x593caa;
      pfStack_f0 = (float *)(iVar5 + 0xd0);
      FUN_00549580();
      pfStack_f0 = (float *)(*(short *)(*(int *)(iVar5 + 0xd4) * 0x50 + 0x24 +
                                       *(int *)(iVar9 + 0x58)) + -3);
      pfStack_f4 = (float *)0x0;
      pfStack_f8 = (float *)0x593cc9;
      iVar5 = FUN_00647b10();
      pfStack_f0 = (float *)0x593cd7;
      piVar6 = (int *)FUN_00592920();
      pfStack_f0 = (float *)0x593ce1;
      iVar9 = (**(code **)(*piVar6 + 0x154))();
      *(undefined4 *)(iVar9 + 300) = 1;
      *(int *)(iVar9 + 0x138) = *(int *)(iVar9 + 0x138) + 1;
      *(undefined4 *)(iVar9 + 0x13c) = 1;
      *(int *)(iVar9 + 0x148) = *(int *)(iVar9 + 0x148) + 1;
      pfStack_f0 = (float *)((float)*(int *)(iVar9 + 0xd8) - DAT_006e92e8);
      pfStack_f4 = (float *)(float)iVar5;
      pfStack_f8 = (float *)0x593d2d;
      fVar14 = (float10)FUN_0064c6b0();
      *(float *)(iVar9 + 0xdc) = (float)fVar14;
    }
  }
  if (param_3 != 0) {
    pfStack_f0 = (float *)0x593d48;
    iVar5 = FUN_00592190();
    *(undefined4 *)(iVar5 + 300) = 1;
    *(int *)(iVar5 + 0x138) = *(int *)(iVar5 + 0x138) + 1;
    *(undefined4 *)(iVar5 + 0x13c) = 1;
    *(int *)(iVar5 + 0x148) = *(int *)(iVar5 + 0x148) + 1;
    pfStack_f0 = (float *)((float)*(int *)(iVar5 + 0xd8) - DAT_006e92e8);
    pfStack_f4 = (float *)0x0;
    pfStack_f8 = (float *)0x593d8c;
    fVar14 = (float10)FUN_0064c6b0();
    *(float *)(iVar5 + 0xdc) = (float)fVar14;
  }
LAB_00593d95:
  local_4 = 0xffffffff;
  pfStack_f0 = (float *)0x593da9;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

