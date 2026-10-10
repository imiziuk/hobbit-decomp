
void __thiscall FUN_005b77a0(float param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  float *pfStack_134;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  float local_12c;
  int *piStack_128;
  float *pfStack_124;
  float *local_120;
  float *pfStack_11c;
  float fStack_118;
  int iStack_114;
  int iStack_110;
  float *pfStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  int iStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int iStack_b0;
  int iStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_108 = *(float *)((int)param_1 + 0xd8);
  pfVar10 = (float *)(param_3 * 0x10 + *(int *)(param_2 + 0xa4));
  piVar9 = (int *)(*(int *)((int)param_1 + 0xe4) + param_3 * 4);
  iVar6 = (0 < *(int *)((int)param_1 + 0x1c) + *(int *)((int)param_1 + 0x18)) + 1;
  if (*piVar9 != iVar6) {
    *piVar9 = iVar6;
    local_12c = 0.0;
    iVar6 = *(int *)((int)param_1 + 0x1c) + *(int *)((int)param_1 + 0x18);
    local_120 = pfVar10;
    local_a8 = param_1;
    (**(code **)(**(int **)(*(int *)((int)param_1 + 0x140) + param_3 * 4) + 4))
              (&local_12c,CONCAT31((int3)((uint)iVar6 >> 8),0 < iVar6));
    pfVar10 = (float *)pfVar10[2];
    iStack_dc = piStack_128[1] * 8 + 0x20;
    iStack_114 = piStack_128[1] * 8 + 0x3c;
    if (*(int *)((int)param_1 + 0x74) == 1) {
      uStack_12d = *(undefined1 *)((int)param_1 + 0x73);
      uStack_12e = *(undefined1 *)((int)param_1 + 0x72);
      uStack_12f = *(undefined1 *)((int)param_1 + 0x71);
      uStack_130 = *(undefined1 *)((int)param_1 + 0x70);
    }
    else {
      FUN_00425250((int)param_1 + 0x6c);
    }
    cVar5 = FUN_0065c340();
    fVar4 = DAT_006e92e8;
    fVar3 = DAT_006e92e4;
    if (cVar5 == '\0') {
      fStack_118 = 0.0;
      if (0 < *piStack_128) {
        local_120 = (float *)-(int)pfVar10;
        iStack_ac = -iStack_114;
        piVar9 = piStack_128;
        do {
          pfStack_10c = (float *)(iStack_114 + (int)pfVar10);
          local_108 = 0.0;
          fStack_104 = 0.0;
          fStack_100 = 0.0;
          fStack_fc = 1.0;
          fStack_f8 = 0.0;
          fStack_f4 = 0.0;
          fStack_f0 = 0.0;
          fStack_ec = 0.0;
          pfStack_11c = (float *)0x0;
          if (0 < (int)pfVar10[8]) {
            pfStack_124 = pfVar10 + 10;
            do {
              fStack_d4 = pfVar10[1];
              fStack_d0 = pfVar10[2];
              fStack_d8 = *pfVar10;
              fStack_cc = pfVar10[3];
              fStack_98 = pfVar10[4];
              fStack_94 = pfVar10[5];
              fStack_90 = pfVar10[6];
              fStack_8c = pfVar10[7];
              local_12c = *pfStack_124;
              FUN_005b80c0(&fStack_c8,&fStack_d8);
              CRect::CRect((CRect *)&fStack_88,(int)(fStack_c8 * local_12c),
                           (int)(fStack_c4 * local_12c),(int)(fStack_c0 * local_12c),
                           (int)(fStack_bc * local_12c));
              FUN_005b8090(&fStack_88);
              FUN_005b80c0(&local_a8,&fStack_98);
              CRect::CRect((CRect *)&fStack_78,(int)(local_a8 * local_12c),
                           (int)(fStack_a4 * local_12c),(int)(fStack_a0 * local_12c),
                           (int)(fStack_9c * local_12c));
              FUN_005b8090(&fStack_78);
              pfStack_11c = (float *)((int)pfStack_11c + 1);
              pfStack_124 = pfStack_124 + 1;
              piVar9 = piStack_128;
            } while ((int)pfStack_11c < (int)pfVar10[8]);
          }
          *pfStack_134 = local_108;
          pfStack_134[1] = fStack_104;
          pfStack_134[2] = fStack_100;
          pfStack_134[3] = fStack_f8;
          pfStack_134[4] = fStack_f4;
          pfStack_134[5] = fStack_f0;
          *(undefined1 *)((int)pfStack_134 + 0x1b) = uStack_12d;
          *(undefined1 *)((int)pfStack_134 + 0x1a) = uStack_12e;
          *(undefined1 *)((int)pfStack_134 + 0x19) = uStack_12f;
          *(undefined1 *)(pfStack_134 + 6) = uStack_130;
          *(undefined1 *)((int)pfStack_134 + 0x1f) = 0xff;
          *(undefined1 *)((int)pfStack_134 + 0x1e) = 0xff;
          *(undefined1 *)((int)pfStack_134 + 0x1d) = 0xff;
          *(undefined1 *)(pfStack_134 + 7) = 0xff;
          iVar6 = 0;
          if (0 < piVar9[1]) {
            pfVar10 = pfVar10 + 0xf;
            do {
              pfVar8 = (float *)((int)(pfVar10 + -7) + (int)local_120 + (int)pfStack_134);
              *pfVar8 = *pfVar10;
              pfVar8[1] = pfVar10[1];
              iVar6 = iVar6 + 1;
              pfVar10 = pfVar10 + 2;
              piVar9 = piStack_128;
            } while (iVar6 < piStack_128[1]);
          }
          pfStack_134 = (float *)((int)pfStack_134 + iStack_dc);
          local_120 = (float *)(iStack_ac + (int)local_120);
          fStack_118 = (float)((int)fStack_118 + 1);
          pfVar10 = pfStack_10c;
        } while ((int)fStack_118 < *piVar9);
      }
    }
    else {
      pfStack_124 = (float *)0x0;
      if (0 < *piStack_128) {
        fStack_c8 = DAT_006e92e4;
        fStack_c4 = DAT_006e92e4;
        fStack_c0 = DAT_006e92e4;
        fStack_bc = DAT_006e92e8;
        local_12c = (float)-(int)pfVar10;
        fStack_d8 = DAT_006e92e4;
        fStack_d4 = DAT_006e92e4;
        fStack_d0 = DAT_006e92e4;
        pfStack_10c = (float *)-iStack_114;
        fStack_cc = DAT_006e92e4;
        do {
          pfStack_11c = (float *)(iStack_114 + (int)pfVar10);
          fStack_f8 = fVar3;
          fStack_f4 = fVar3;
          fStack_f0 = fVar3;
          fStack_ec = fVar4;
          iVar6 = 0;
          local_108 = fVar3;
          fStack_104 = fVar3;
          fStack_100 = fVar3;
          fStack_fc = fVar3;
          if (0 < (int)pfVar10[8]) {
            fStack_68 = *pfVar10;
            fStack_98 = pfVar10[1];
            local_a8 = pfVar10[2];
            fStack_48 = pfVar10[3];
            fStack_88 = pfVar10[4];
            fStack_58 = pfVar10[5];
            fStack_38 = pfVar10[6];
            fStack_28 = pfVar10[7];
            local_120 = pfVar10 + 10;
            do {
              iVar7 = (uint)*(byte *)((int)pfVar10 + iVar6 + 0x24) * 0x40;
              pfVar8 = (float *)(iVar7 + 0x10 + iStack_110);
              fStack_78 = *pfVar8;
              fStack_74 = pfVar8[1];
              fStack_70 = pfVar8[2];
              fStack_6c = pfVar8[3];
              pfVar1 = (float *)(iVar7 + 0x20 + iStack_110);
              pfVar8 = (float *)(iVar7 + iStack_110);
              pfVar2 = (float *)(iVar7 + 0x30 + iStack_110);
              fStack_118 = *local_120;
              fStack_f8 = fStack_f8 +
                          (fStack_68 * *pfVar8 + fStack_98 * fStack_78 + local_a8 * *pfVar1 +
                          fStack_48 * *pfVar2) * fStack_118;
              fStack_f4 = fStack_f4 +
                          (fStack_68 * pfVar8[1] + fStack_98 * fStack_74 + local_a8 * pfVar1[1] +
                          fStack_48 * pfVar2[1]) * fStack_118;
              fStack_f0 = fStack_f0 +
                          (fStack_68 * pfVar8[2] + fStack_98 * fStack_70 + local_a8 * pfVar1[2] +
                          fStack_48 * pfVar2[2]) * fStack_118;
              fStack_ec = fStack_ec +
                          (fStack_68 * pfVar8[3] + fStack_98 * fStack_6c + local_a8 * pfVar1[3] +
                          fStack_48 * pfVar2[3]) * fStack_118;
              iVar6 = iVar6 + 1;
              local_120 = local_120 + 1;
              local_108 = local_108 +
                          (fStack_88 * *pfVar8 + fStack_58 * fStack_78 + fStack_38 * *pfVar1 +
                          fStack_28 * *pfVar2) * fStack_118;
              fStack_104 = fStack_104 +
                           (fStack_88 * pfVar8[1] + fStack_58 * fStack_74 + fStack_38 * pfVar1[1] +
                           fStack_28 * pfVar2[1]) * fStack_118;
              fStack_100 = fStack_100 +
                           (fStack_88 * pfVar8[2] + fStack_58 * fStack_70 + fStack_38 * pfVar1[2] +
                           fStack_28 * pfVar2[2]) * fStack_118;
              fStack_fc = fStack_fc +
                          (fStack_88 * pfVar8[3] + fStack_58 * fStack_6c + fStack_38 * pfVar1[3] +
                          fStack_28 * pfVar2[3]) * fStack_118;
              fStack_a4 = local_a8;
              fStack_a0 = local_a8;
              fStack_9c = local_a8;
              fStack_94 = fStack_98;
              fStack_90 = fStack_98;
              fStack_8c = fStack_98;
              fStack_84 = fStack_88;
              fStack_80 = fStack_88;
              fStack_7c = fStack_88;
              fStack_64 = fStack_68;
              fStack_60 = fStack_68;
              fStack_5c = fStack_68;
              fStack_54 = fStack_58;
              fStack_50 = fStack_58;
              fStack_4c = fStack_58;
              fStack_44 = fStack_48;
              fStack_40 = fStack_48;
              fStack_3c = fStack_48;
              fStack_34 = fStack_38;
              fStack_30 = fStack_38;
              fStack_2c = fStack_38;
              fStack_24 = fStack_28;
              fStack_20 = fStack_28;
              fStack_1c = fStack_28;
            } while (iVar6 < (int)pfVar10[8]);
          }
          *pfStack_134 = fStack_f8;
          pfStack_134[1] = fStack_f4;
          pfStack_134[2] = fStack_f0;
          pfStack_134[3] = local_108;
          pfStack_134[4] = fStack_104;
          pfStack_134[5] = fStack_100;
          *(undefined1 *)((int)pfStack_134 + 0x1b) = uStack_12d;
          *(undefined1 *)((int)pfStack_134 + 0x1a) = uStack_12e;
          *(undefined1 *)((int)pfStack_134 + 0x19) = uStack_12f;
          *(undefined1 *)(pfStack_134 + 6) = uStack_130;
          *(undefined1 *)((int)pfStack_134 + 0x1f) = 0xff;
          *(undefined1 *)((int)pfStack_134 + 0x1e) = 0xff;
          *(undefined1 *)((int)pfStack_134 + 0x1d) = 0xff;
          *(undefined1 *)(pfStack_134 + 7) = 0xff;
          iVar6 = 0;
          if (0 < piStack_128[1]) {
            pfVar10 = pfVar10 + 0xf;
            do {
              pfVar8 = (float *)((int)local_12c + -0x1c + (int)pfVar10 + (int)pfStack_134);
              *pfVar8 = *pfVar10;
              pfVar8[1] = pfVar10[1];
              iVar6 = iVar6 + 1;
              pfVar10 = pfVar10 + 2;
            } while (iVar6 < piStack_128[1]);
          }
          pfStack_134 = (float *)((int)pfStack_134 + iStack_dc);
          local_12c = (float)((int)pfStack_10c + (int)local_12c);
          pfStack_124 = (float *)((int)pfStack_124 + 1);
          pfVar10 = pfStack_11c;
        } while ((int)pfStack_124 < *piStack_128);
      }
    }
    (**(code **)(**(int **)(*(int *)(iStack_b0 + 0x140) + param_3 * 4) + 8))();
    FUN_005a3490();
  }
  return;
}

