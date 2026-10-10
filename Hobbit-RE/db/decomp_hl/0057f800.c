
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057f800(int param_1)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint local_174;
  uint local_170;
  int local_168;
  int local_140;
  uint local_12c;
  int local_114;
  int local_10c;
  undefined1 local_5c [16];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbf7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  if (*(int *)(param_1 + 100) != 0) {
    pfVar9 = (float *)FUN_0057dc80();
    fVar2 = *pfVar9 - _DAT_006e99bc;
    fVar3 = pfVar9[1] - _DAT_006e99bc;
    fVar4 = pfVar9[2] - _DAT_006e99bc;
    fVar5 = pfVar9[3] + _DAT_006e99bc;
    fVar6 = pfVar9[4] + _DAT_006e99bc;
    fVar7 = pfVar9[5] + _DAT_006e99bc;
    if ((((*(float *)(param_1 + 0xc) <= fVar5) &&
         (*(float *)(param_1 + 0x18) < fVar2 == (NAN(*(float *)(param_1 + 0x18)) || NAN(fVar2)))) &&
        (*(float *)(param_1 + 0x14) <= fVar7)) &&
       (((*(float *)(param_1 + 0x20) < fVar4 == (NAN(*(float *)(param_1 + 0x20)) || NAN(fVar4)) &&
         (*(float *)(param_1 + 0x10) <= fVar6)) &&
        (*(float *)(param_1 + 0x1c) < fVar3 == (NAN(*(float *)(param_1 + 0x1c)) || NAN(fVar3)))))) {
      sVar8 = FUN_0057dca0();
      if (sVar8 == 0) {
        FUN_00648600();
      }
      iVar10 = __ftol();
      iVar11 = __ftol();
      iVar12 = __ftol();
      iVar13 = __ftol();
      iVar14 = __ftol();
      iVar15 = __ftol();
      local_174 = ((int)(iVar10 - 0x400U) < 0) - 1 & iVar10 - 0x400U;
      local_12c = ((int)(iVar11 - 0x400U) < 0) - 1 & iVar11 - 0x400U;
      uVar18 = ((int)(iVar12 - 0x400U) < 0) - 1 & iVar12 - 0x400U;
      iVar10 = *(int *)(param_1 + 0x54);
      uVar20 = iVar10 - 1;
      local_170 = iVar13 - 0x400U;
      if ((int)uVar20 < (int)(iVar13 - 0x400U)) {
        local_170 = uVar20;
      }
      iVar11 = *(int *)(param_1 + 0x58);
      local_140 = iVar14 + -0x400;
      if (iVar11 + -1 < iVar14 + -0x400) {
        local_140 = iVar11 + -1;
      }
      uVar19 = *(int *)(param_1 + 0x5c) - 1;
      uVar16 = iVar15 - 0x400U;
      if ((int)uVar19 < (int)(iVar15 - 0x400U)) {
        uVar16 = uVar19;
      }
      if ((int)uVar20 < (int)local_174) {
        local_174 = uVar20;
      }
      if ((int)(iVar11 - 1U) < (int)local_12c) {
        local_12c = iVar11 - 1U;
      }
      if ((int)uVar19 < (int)uVar18) {
        uVar18 = uVar19;
      }
      iVar11 = iVar11 * iVar10 * uVar18;
      if ((int)uVar18 <= (int)uVar16) {
        local_168 = (uVar16 - uVar18) + 1;
        do {
          iVar10 = iVar10 * local_12c + iVar11;
          if ((int)local_12c <= local_140) {
            iVar12 = (local_140 - local_12c) + 1;
            do {
              if ((int)local_174 <= (int)local_170) {
                iVar13 = (iVar10 + local_174) * 2;
                local_10c = (local_170 - local_174) + 1;
                do {
                  uVar1 = *(ushort *)(iVar13 + *(int *)(param_1 + 0x88));
                  uVar20 = (uint)*(ushort *)(iVar13 + *(int *)(param_1 + 0x84));
                  iVar14 = *(int *)(param_1 + 0x8c);
                  iVar15 = 0;
                  if (uVar20 != 0) {
                    do {
                      uVar18 = (uint)*(ushort *)(iVar14 + (uint)uVar1 * 2 + iVar15 * 2);
                      if (*(short *)(&DAT_007986c8 + uVar18 * 2) != sVar8) {
                        *(short *)(&DAT_007986c8 + uVar18 * 2) = sVar8;
                        FUN_005a4110();
                        if (((3.4028235e+38 <= fVar5) && (-3.4028235e+38 < fVar2 == NAN(fVar2))) &&
                           (((3.4028235e+38 <= fVar7 &&
                             (((-3.4028235e+38 < fVar4 == NAN(fVar4) && (3.4028235e+38 <= fVar6)) &&
                              (-3.4028235e+38 < fVar3 == NAN(fVar3))))) &&
                            (iVar17 = FUN_00607260(), iVar17 != 0)))) {
                          if (local_114 == 0) {
                            FUN_00401f00();
                            FUN_00401f00();
                            FUN_00401f00();
                            FUN_004357e0();
                            FUN_0042e1f0();
                            FUN_00402020();
                          }
                          else {
                            FUN_0064cf30();
                          }
                          FUN_00401f00();
                          FUN_00401f00();
                          FUN_00401f00();
                          FUN_004357e0();
                          FUN_0042e1f0();
                          FUN_00402020();
                          FUN_0057ddb0();
                          FUN_0042fda0(local_5c);
                          FUN_0042fda0(local_4c);
                          FUN_0057da20();
                        }
                      }
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < (int)uVar20);
                  }
                  iVar13 = iVar13 + 2;
                  local_10c = local_10c + -1;
                } while (local_10c != 0);
              }
              iVar10 = iVar10 + *(int *)(param_1 + 0x54);
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          iVar10 = *(int *)(param_1 + 0x54);
          iVar11 = iVar11 + *(int *)(param_1 + 0x58) * iVar10;
          local_168 = local_168 + -1;
        } while (local_168 != 0);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

