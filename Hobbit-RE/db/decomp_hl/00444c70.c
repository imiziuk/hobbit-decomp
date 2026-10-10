
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00444c70(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  float *pfVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  float10 fVar14;
  undefined1 local_110 [4];
  int *local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  float local_fc [7];
  int local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined1 local_8c [12];
  int local_80 [32];
  
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  FUN_004357e0(param_1 + 0x119);
  piVar13 = param_1 + 0x115;
  local_10c = piVar13;
  FUN_00540900((float)param_1[0x1e5] * (float)param_1[0x248],&local_bc,local_110);
  local_108 = local_b0;
  local_104 = local_ac;
  local_100 = local_a8;
  if ((param_1[0x133a] != 0) && (param_1[0x215] == 0)) {
    param_1[0x217] = param_1[0x133d];
    piVar5 = param_1 + 0x133e;
    param_1[0x215] = 1;
    param_1[0x216] = param_1[0x133c];
    if ((param_1 + 0x218 != piVar5) && (piVar5 != param_1 + 0x134e)) {
      piVar7 = param_1 + 0x21a;
      iVar12 = (int)piVar5 - (int)(param_1 + 0x218);
      do {
        piVar7[-2] = *piVar5;
        piVar7[-1] = piVar5[1];
        *piVar7 = *(int *)(iVar12 + (int)piVar7);
        piVar7[1] = piVar5[3];
        piVar5 = piVar5 + 4;
        piVar7 = piVar7 + 4;
      } while (piVar5 != param_1 + 0x134e);
    }
  }
  if (param_1[0x215] != 0) {
    param_1[0x1350] = 0;
    param_1[0x134f] = 0;
    param_1[0x134e] = 0;
    piVar5 = (int *)FUN_004021c0(param_1[0x216],param_1[0x217]);
    if ((char)piVar5[0x1f] == '\x0e') {
      (**(code **)(*piVar5 + 0x34))(local_80);
    }
    else if ((char)piVar5[0x1f] == '\x05') {
      (**(code **)(*piVar5 + 0x118))(local_80);
    }
    local_fc[0] = (float)param_1[0x218];
    local_fc[2] = (float)param_1[0x21a];
    local_fc[1] = (float)param_1[0x219];
    piVar5 = param_1 + 0x218;
    local_fc[3] = (float)param_1[0x21b];
    local_fc[5] = (float)param_1[0x21d];
    local_fc[4] = (float)param_1[0x21c];
    local_fc[6] = (float)param_1[0x21e];
    local_dc = (float)param_1[0x220];
    local_e0 = param_1[0x21f];
    local_d8 = (float)param_1[0x221];
    local_d0 = param_1[0x223];
    local_d4 = (float)param_1[0x222];
    local_cc = (float)param_1[0x224];
    local_c4 = (float)param_1[0x226];
    local_c8 = (float)param_1[0x225];
    local_c0 = param_1[0x227];
    FUN_0064d6d0();
    pfVar6 = (float *)FUN_0064e040(local_80 + 0x10,local_80,local_fc);
    if ((local_fc != pfVar6) && (pfVar1 = pfVar6 + 0x10, pfVar6 != pfVar1)) {
      pfVar10 = local_fc + 2;
      iVar12 = (int)pfVar6 - (int)local_fc;
      do {
        pfVar10[-2] = *pfVar6;
        pfVar10[-1] = pfVar6[1];
        *pfVar10 = *(float *)(iVar12 + (int)pfVar10);
        pfVar10[1] = pfVar6[3];
        pfVar6 = pfVar6 + 4;
        pfVar10 = pfVar10 + 4;
        piVar13 = local_10c;
      } while (pfVar6 != pfVar1);
    }
    FUN_00401f00(local_fc[4] * (float)param_1[6] +
                 local_fc[0] * (float)param_1[5] + local_dc * (float)param_1[7] + local_cc,
                 local_fc[5] * (float)param_1[6] +
                 local_d8 * (float)param_1[7] + local_fc[1] * (float)param_1[5] + local_c8,
                 local_fc[6] * (float)param_1[6] +
                 local_d4 * (float)param_1[7] + local_fc[2] * (float)param_1[5] + local_c4);
    FUN_00401f00(fStack_98 - (float)param_1[5],fStack_94 - (float)param_1[6],
                 fStack_90 - (float)param_1[7]);
    param_1[0x1350] = iStack_9c;
    param_1[0x134e] = iStack_a4;
    param_1[0x134f] = iStack_a0;
    FUN_00401f00((float)param_1[5] + (float)param_1[0x134e],
                 (float)param_1[6] + (float)param_1[0x134f],
                 (float)param_1[7] + (float)param_1[0x1350]);
    (**(code **)(*param_1 + 0x14))(local_8c,0);
    if (piVar5 != local_80) {
      piVar11 = local_80;
      piVar7 = param_1 + 0x21a;
      do {
        piVar7[-2] = *piVar11;
        piVar7[-1] = piVar11[1];
        *piVar7 = *(int *)(((int)local_80 - (int)piVar5) + (int)piVar7);
        piVar7[1] = *(int *)((int)local_80 + (4 - (int)piVar5) + (int)piVar7);
        piVar11 = piVar11 + 4;
        piVar7 = piVar7 + 4;
      } while (piVar11 != local_80 + 0x10);
    }
  }
  puVar8 = (undefined4 *)FUN_00402130(local_8c,param_1 + 5,&local_bc);
  local_108 = *puVar8;
  local_104 = puVar8[1];
  local_100 = puVar8[2];
  (**(code **)(*param_1 + 0x14))(&local_108,0);
  uVar9 = FUN_00405080(&fStack_94,local_110,&local_b8,param_1[0x248]);
  uVar9 = FUN_004451d0(&local_ac,uVar9);
  FUN_004357e0(uVar9);
  fVar3 = (float)param_1[0x11d];
  fVar14 = (float10)FUN_00445150(((float)param_1[0x1eb] - fVar3) + _DAT_006e9368);
  fVar2 = (float)(fVar14 - (float10)_DAT_006e9368);
  fVar4 = (float)param_1[0x1ec] * (float)param_1[0x248];
  if (fVar2 < DAT_006e92e4) {
    fVar4 = -fVar4;
    if (fVar2 <= fVar4) goto LAB_00445106;
  }
  else if (fVar2 < fVar4 == (NAN(fVar2) || NAN(fVar4))) goto LAB_00445106;
  fVar4 = fVar2;
LAB_00445106:
  piVar13[0x4b] = 1;
  piVar13[0x4f] = 1;
  piVar13[8] = (int)(fVar4 + fVar3);
  piVar13[0x4e] = piVar13[0x4e] + 1;
  piVar13[0x52] = piVar13[0x52] + 1;
  return;
}

