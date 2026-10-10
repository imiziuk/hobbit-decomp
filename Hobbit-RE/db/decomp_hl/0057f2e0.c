
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0057f2e0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_74;
  uint local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbf58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_34 = param_1;
  FUN_00649600(s_Collmgr_ApplyCollMeshToRay_007405a4);
  _DAT_007778d0 = _DAT_007778d0 + 1;
  local_4 = 0;
  if (((*(int *)(param_1 + 0x43d4) == 0) || (*(int *)(param_1 + 0x480) < 1)) &&
     (*(int *)(param_2 + 100) != 0)) {
    pfVar7 = (float *)FUN_0057dc80();
    fVar1 = *pfVar7 - _DAT_006e99bc;
    fVar2 = pfVar7[1] - _DAT_006e99bc;
    fVar3 = pfVar7[2] - _DAT_006e99bc;
    fVar4 = pfVar7[3] + _DAT_006e99bc;
    fVar5 = pfVar7[4] + _DAT_006e99bc;
    fVar6 = pfVar7[5] + _DAT_006e99bc;
    if ((((*(float *)(param_2 + 0xc) <= fVar4) &&
         (*(float *)(param_2 + 0x18) < fVar1 == (NAN(*(float *)(param_2 + 0x18)) || NAN(fVar1)))) &&
        ((*(float *)(param_2 + 0x14) <= fVar6 &&
         ((*(float *)(param_2 + 0x20) < fVar3 == (NAN(*(float *)(param_2 + 0x20)) || NAN(fVar3)) &&
          (*(float *)(param_2 + 0x10) <= fVar5)))))) &&
       (*(float *)(param_2 + 0x1c) < fVar2 == (NAN(*(float *)(param_2 + 0x1c)) || NAN(fVar2)))) {
      local_3c = FUN_0057dca0();
      if ((short)local_3c == 0) {
        FUN_00648600(&DAT_007986c8,0xff,54000);
      }
      iVar8 = __ftol();
      iVar9 = __ftol();
      iVar10 = __ftol();
      iVar11 = __ftol();
      iVar12 = __ftol();
      iVar13 = __ftol();
      local_94 = iVar8 - 0x400U & ((int)(iVar8 - 0x400U) < 0) - 1;
      iVar8 = *(int *)(param_2 + 0x54);
      local_90 = ((int)(iVar9 - 0x400U) < 0) - 1 & iVar9 - 0x400U;
      uVar14 = iVar8 - 1;
      uVar15 = ((int)(iVar10 - 0x400U) < 0) - 1 & iVar10 - 0x400U;
      local_74 = iVar11 - 0x400U;
      if ((int)uVar14 < (int)(iVar11 - 0x400U)) {
        local_74 = uVar14;
      }
      iVar9 = *(int *)(param_2 + 0x58);
      local_98 = iVar12 - 0x400U;
      if ((int)(iVar9 - 1U) < (int)(iVar12 - 0x400U)) {
        local_98 = iVar9 - 1U;
      }
      uVar16 = *(int *)(param_2 + 0x5c) - 1;
      local_a0 = iVar13 - 0x400U;
      if ((int)uVar16 < (int)(iVar13 - 0x400U)) {
        local_a0 = uVar16;
      }
      if ((int)uVar14 < (int)local_94) {
        local_94 = uVar14;
      }
      if ((int)(iVar9 - 1U) < (int)local_90) {
        local_90 = iVar9 - 1U;
      }
      if ((int)uVar16 < (int)uVar15) {
        uVar15 = uVar16;
      }
      if ((int)local_74 <= (int)local_94) {
        local_94 = local_74;
      }
      if ((int)local_98 <= (int)local_90) {
        local_90 = local_98;
      }
      if ((int)local_a0 <= (int)uVar15) {
        uVar15 = local_a0;
      }
      iVar9 = iVar9 * iVar8 * uVar15;
      for (; (int)uVar15 <= (int)local_a0; uVar15 = uVar15 + 1) {
        iVar8 = iVar8 * local_90 + iVar9;
        for (uVar14 = local_90; (int)uVar14 <= (int)local_98; uVar14 = uVar14 + 1) {
          if ((int)local_94 <= (int)local_74) {
            iVar10 = (iVar8 + local_94) * 2;
            local_58 = local_94;
            do {
              uVar16 = (uint)*(ushort *)(iVar10 + *(int *)(param_2 + 0x84));
              local_38 = *(int *)(param_2 + 0x8c) +
                         (uint)*(ushort *)(iVar10 + *(int *)(param_2 + 0x88)) * 2;
              iVar11 = 0;
              if (uVar16 != 0) {
                do {
                  uVar17 = (uint)*(ushort *)(local_38 + iVar11 * 2);
                  if (*(short *)(&DAT_007986c8 + uVar17 * 2) != (short)local_3c) {
                    *(short *)(&DAT_007986c8 + uVar17 * 2) = (short)local_3c;
                    local_54 = 3.4028235e+38;
                    local_50 = 3.4028235e+38;
                    local_4c = 3.4028235e+38;
                    local_48 = -3.4028235e+38;
                    local_44 = -3.4028235e+38;
                    local_40 = -3.4028235e+38;
                    FUN_005a4110(uVar17,local_30,&local_54);
                    iVar12 = local_34;
                    if (((((local_54 <= fVar4) &&
                          (local_48 < fVar1 == (NAN(local_48) || NAN(fVar1)))) &&
                         (local_4c <= fVar6)) &&
                        ((local_40 < fVar3 == (NAN(local_40) || NAN(fVar3)) && (local_50 <= fVar5)))
                        ) && ((local_44 < fVar2 == (NAN(local_44) || NAN(fVar2)) &&
                              ((FUN_0057cb20(local_30,local_24,local_18,0,0,uVar17),
                               *(int *)(iVar12 + 0x43d4) != 0 && (0 < *(int *)(iVar12 + 0x480)))))))
                    goto LAB_0057f7cb;
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < (int)uVar16);
              }
              iVar10 = iVar10 + 2;
              local_58 = local_58 + 1;
            } while ((int)local_58 <= (int)local_74);
          }
          iVar8 = iVar8 + *(int *)(param_2 + 0x54);
        }
        iVar8 = *(int *)(param_2 + 0x54);
        iVar9 = iVar9 + *(int *)(param_2 + 0x58) * iVar8;
      }
    }
  }
LAB_0057f7cb:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

