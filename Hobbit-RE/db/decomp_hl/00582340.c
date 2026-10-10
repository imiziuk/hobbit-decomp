
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00582340(int *param_1)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar6;
  float *pfVar5;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  int *local_ac;
  uint local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  uint local_98;
  byte local_94;
  byte local_93;
  byte local_92;
  byte local_91;
  int *local_90;
  float *local_8c;
  float local_88 [4];
  float local_78;
  float local_74;
  int *local_68;
  int local_64;
  int local_60;
  float local_5c;
  float local_54;
  int local_50;
  undefined2 local_4c;
  byte abStack_48 [28];
  float afStack_2c [10];
  
  local_a8 = FUN_005a3db0();
  local_98 = 8;
  if ((int)(local_a8 + 4) < 9) {
    local_98 = local_a8 + 4;
  }
  FUN_005821f0();
  iVar8 = *param_1 + param_1[1];
  iVar12 = 0;
  *param_1 = iVar8;
  param_1[1] = 0;
  if (0 < iVar8) {
    piVar9 = param_1 + 3;
    piVar7 = param_1 + 7;
    do {
      if (*piVar7 == 0) {
        iVar13 = param_1[1];
        iVar3 = *piVar7;
        *piVar7 = param_1[iVar13 + iVar8 + 6];
        param_1[iVar13 + iVar8 + 6] = iVar3;
        iVar8 = *param_1;
        iVar13 = param_1[1];
        iVar3 = *piVar9;
        *(undefined2 *)piVar9 = *(undefined2 *)((int)param_1 + (iVar13 + iVar8) * 2 + 10);
        *(short *)((int)param_1 + (iVar13 + iVar8) * 2 + 10) = (short)iVar3;
        *param_1 = *param_1 + -1;
      }
      else {
        iVar12 = iVar12 + 1;
        piVar7 = piVar7 + 1;
        piVar9 = (int *)((int)piVar9 + 2);
      }
      iVar8 = *param_1;
    } while (iVar12 < param_1[1] + iVar8);
  }
  iVar8 = 0;
  if (0 < param_1[1] + *param_1) {
    piVar9 = param_1 + 7;
    do {
      if (*piVar9 == 0) {
        afStack_2c[iVar8 + 1] = 0.0;
        local_88[iVar8] = 0.0;
        abStack_48[iVar8 * 4 + 3] = 0xff;
        abStack_48[iVar8 * 4 + 2] = 0;
        abStack_48[iVar8 * 4 + 1] = 0;
        abStack_48[iVar8 * 4] = 0;
      }
      else {
        FUN_00401f00();
        FUN_00402160();
        fVar14 = (float10)FUN_00493e40(&local_a4,&local_ac);
        afStack_2c[iVar8 + 1] = (float)fVar14;
        bVar6 = (byte)((uint)local_ac >> 8);
        abStack_48[iVar8 * 4 + 1] = bVar6;
        abStack_48[iVar8 * 4] = (byte)local_ac;
        local_90 = (int *)(((uint)local_ac & 0xff) + (uint)bVar6 + ((uint)local_ac >> 0x10 & 0xff));
        abStack_48[iVar8 * 4 + 3] = (byte)((uint)local_ac >> 0x18);
        abStack_48[iVar8 * 4 + 2] = (byte)((uint)local_ac >> 0x10);
        local_88[iVar8] = (float)((float10)(int)local_90 * fVar14);
      }
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < param_1[1] + *param_1);
  }
  iVar8 = param_1[1] + *param_1;
  if (iVar8 != 1 && -1 < iVar8 + -1) {
    local_ac = param_1 + 3;
    local_8c = local_88;
    piVar9 = param_1 + 7;
    iVar12 = -0x1c - (int)param_1;
    local_60 = 1;
    local_50 = iVar12;
    do {
      iVar13 = local_60;
      if (local_60 < iVar8) {
        local_64 = iVar12 + (int)piVar9;
        piVar7 = piVar9 + 1;
        local_68 = piVar7;
        iVar8 = local_60;
        piVar10 = local_ac;
        local_90 = piVar9;
        do {
          piVar10 = (int *)((int)piVar10 + 2);
          local_68 = piVar7;
          if (*local_8c < local_88[iVar8] != (NAN(*local_8c) || NAN(local_88[iVar8]))) {
            fVar1 = *(float *)((int)afStack_2c + local_64 + 4);
            *(float *)((int)afStack_2c + local_64 + 4) = afStack_2c[iVar8 + 1];
            afStack_2c[iVar8 + 1] = fVar1;
            fVar1 = *local_8c;
            *local_8c = local_88[iVar8];
            local_88[iVar8] = fVar1;
            iVar12 = *local_ac;
            local_4c = (short)iVar12;
            *(undefined2 *)local_ac = *(undefined2 *)piVar10;
            *(short *)piVar10 = (short)iVar12;
            iVar12 = *piVar9;
            *piVar9 = *piVar7;
            *piVar7 = iVar12;
            local_91 = abStack_48[local_64 + 3];
            local_92 = abStack_48[local_64 + 2];
            local_93 = abStack_48[local_64 + 1];
            local_94 = abStack_48[local_64];
            FUN_00425250();
            FUN_00425250();
            piVar9 = local_90;
            iVar13 = local_60;
          }
          iVar8 = iVar8 + 1;
          piVar7 = local_68 + 1;
          local_68 = piVar7;
          iVar12 = local_50;
        } while (iVar8 < param_1[1] + *param_1);
      }
      local_ac = (int *)((int)local_ac + 2);
      local_8c = local_8c + 1;
      iVar8 = param_1[1] + *param_1;
      piVar9 = piVar9 + 1;
      local_60 = iVar13 + 1;
      local_90 = piVar9;
    } while (iVar13 < iVar8 + -1);
  }
  iVar8 = (*param_1 - local_a8) + param_1[1];
  if (0 < iVar8) {
    *param_1 = *param_1 - iVar8;
    param_1[1] = param_1[1] + iVar8;
  }
  iVar12 = (*param_1 - local_98) + param_1[1];
  iVar8 = 0;
  if (0 < iVar12) {
    param_1[1] = param_1[1] - iVar12;
    iVar8 = iVar12;
  }
  local_a8 = (uint)*(byte *)(param_1 + 0x15);
  local_a4 = (float)*(byte *)((int)param_1 + 0x56);
  iVar12 = *param_1 + param_1[1];
  local_a0 = (float)*(byte *)((int)param_1 + 0x55);
  local_9c = (float)local_a8;
  if (iVar12 < iVar12 + iVar8) {
    do {
      FUN_004945e0();
      local_a8 = local_98 & 0xff;
      iVar12 = iVar12 + 1;
      local_54 = (float)local_a8;
      local_ac = (int *)afStack_2c[iVar12];
      local_5c = (float)local_ac * (float)(local_98 >> 0x10 & 0xff);
      local_a4 = local_5c + local_a4;
      local_a0 = (float)(local_98 >> 8 & 0xff) * (float)local_ac + local_a0;
      local_9c = (float)local_a8 * (float)local_ac + local_9c;
    } while (iVar12 < param_1[1] + *param_1 + iVar8);
  }
  local_a8 = (uint)*(byte *)((int)param_1 + 0x5a);
  local_ac = (int *)(float)local_a8;
  *(undefined1 *)((int)param_1 + 0x57) = 0xff;
  uVar4 = __ftol();
  *(undefined1 *)((int)param_1 + 0x56) = uVar4;
  uVar4 = __ftol();
  *(undefined1 *)((int)param_1 + 0x55) = uVar4;
  uVar4 = __ftol();
  *(undefined1 *)(param_1 + 0x15) = uVar4;
  *(undefined1 *)((int)param_1 + 0x57) = 0;
  iVar8 = *param_1;
  local_54 = (float)param_1[0x14] - (float)param_1[0x11];
  local_a4 = ((float)param_1[0x12] - (float)param_1[0xf]) * _DAT_006ec118;
  local_a0 = ((float)param_1[0x13] - (float)param_1[0x10]) * _DAT_006ec118;
  local_9c = local_54 * _DAT_006ec118;
  local_88[0] = (float)param_1[0xf] - local_a4;
  local_88[1] = (float)param_1[0x10] - local_a0;
  local_88[2] = (float)param_1[0x11] - local_9c;
  local_88[3] = (float)param_1[0x12] + local_a4;
  local_78 = (float)param_1[0x13] + local_a0;
  local_74 = (float)param_1[0x14] + local_9c;
  if (iVar8 < param_1[1] + iVar8) {
    piVar9 = param_1 + iVar8 + 7;
    puVar11 = (undefined2 *)((int)param_1 + iVar8 * 2 + 0xc);
    do {
      pfVar5 = (float *)FUN_00494670();
      if ((((*pfVar5 < local_88[3] != (*pfVar5 == local_88[3])) &&
           (pfVar5[1] < local_78 != (pfVar5[1] == local_78))) &&
          (pfVar5[2] < local_74 != (pfVar5[2] == local_74))) &&
         (((local_88[0] <= *pfVar5 && (local_88[1] <= pfVar5[1])) && (local_88[2] <= pfVar5[2])))) {
        iVar12 = *param_1;
        uVar2 = *puVar11;
        *puVar11 = *(undefined2 *)((int)param_1 + iVar12 * 2 + 0xc);
        *(undefined2 *)((int)param_1 + iVar12 * 2 + 0xc) = uVar2;
        iVar12 = *param_1;
        iVar13 = *piVar9;
        *piVar9 = param_1[iVar12 + 7];
        param_1[iVar12 + 7] = iVar13;
        *param_1 = *param_1 + 1;
        param_1[1] = param_1[1] + -1;
      }
      iVar8 = iVar8 + 1;
      puVar11 = puVar11 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar8 < param_1[1] + *param_1);
  }
  if (DAT_007779d0 != '\0') {
    FUN_0064e7d0();
    iVar8 = 0;
    if (0 < param_1[1] + *param_1) {
      do {
        local_a8 = (uint)abStack_48[iVar8 * 4 + 2];
        FUN_0064e7d0(s___f__f__f__007406e4,(double)((float)local_a8 * afStack_2c[iVar8 + 1]),
                     (double)((float)abStack_48[iVar8 * 4 + 1] * afStack_2c[iVar8 + 1]),
                     (double)((float)abStack_48[iVar8 * 4] * afStack_2c[iVar8 + 1]));
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1[1] + *param_1);
    }
    FUN_0064e7d0();
  }
  FUN_00582290();
  return;
}

