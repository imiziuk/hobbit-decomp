
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0057de30(int param_1,int param_2)

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
  uint uVar18;
  uint local_98;
  int local_94;
  uint local_78;
  int local_70;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbef8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Collmgr_ApplyCollMeshToCylinder_00740540);
  local_4 = 0;
  if ((*(int *)(param_2 + 100) != 0) &&
     (fVar1 = *(float *)(*(int *)(param_1 + 0x42d0) * 0x164 + 0x3ddc + param_1),
     fVar1 < _DAT_006e9360 == (NAN(fVar1) || NAN(_DAT_006e9360)))) {
    pfVar7 = (float *)FUN_0057dc80();
    fVar1 = *pfVar7 - _DAT_006e99bc;
    fVar2 = pfVar7[1] - _DAT_006e99bc;
    fVar3 = pfVar7[2] - _DAT_006e99bc;
    fVar4 = pfVar7[3] + _DAT_006e99bc;
    fVar5 = pfVar7[4] + _DAT_006e99bc;
    fVar6 = pfVar7[5] + _DAT_006e99bc;
    if (((*(float *)(param_2 + 0xc) <= fVar4) &&
        (((*(float *)(param_2 + 0x18) < fVar1 == (NAN(*(float *)(param_2 + 0x18)) || NAN(fVar1)) &&
          (*(float *)(param_2 + 0x14) <= fVar6)) &&
         (*(float *)(param_2 + 0x20) < fVar3 == (NAN(*(float *)(param_2 + 0x20)) || NAN(fVar3))))))
       && ((*(float *)(param_2 + 0x10) <= fVar5 &&
           (*(float *)(param_2 + 0x1c) < fVar2 == (NAN(*(float *)(param_2 + 0x1c)) || NAN(fVar2)))))
       ) {
      local_38 = FUN_0057dca0();
      if ((short)local_38 == 0) {
        FUN_00648600(&DAT_007986c8,0xff,54000);
      }
      iVar8 = __ftol();
      iVar9 = __ftol();
      iVar10 = __ftol();
      iVar11 = __ftol();
      iVar12 = __ftol();
      iVar13 = __ftol();
      uVar15 = ((int)(iVar8 - 0x400U) < 0) - 1 & iVar8 - 0x400U;
      local_98 = ((int)(iVar9 - 0x400U) < 0) - 1 & iVar9 - 0x400U;
      uVar16 = iVar10 - 0x400U & ((int)(iVar10 - 0x400U) < 0) - 1;
      iVar8 = *(int *)(param_2 + 0x54);
      uVar17 = iVar8 - 1;
      local_78 = iVar11 - 0x400U;
      if ((int)uVar17 < (int)(iVar11 - 0x400U)) {
        local_78 = uVar17;
      }
      iVar9 = *(int *)(param_2 + 0x58);
      local_94 = iVar12 + -0x400;
      if (iVar9 + -1 < iVar12 + -0x400) {
        local_94 = iVar9 + -1;
      }
      uVar18 = *(int *)(param_2 + 0x5c) - 1;
      uVar14 = iVar13 - 0x400U;
      if ((int)uVar18 < (int)(iVar13 - 0x400U)) {
        uVar14 = uVar18;
      }
      if ((int)uVar17 < (int)uVar15) {
        uVar15 = uVar17;
      }
      if ((int)(iVar9 - 1U) < (int)local_98) {
        local_98 = iVar9 - 1U;
      }
      if ((int)uVar18 < (int)uVar16) {
        uVar16 = uVar18;
      }
      iVar9 = iVar9 * iVar8 * uVar16;
      if ((int)uVar16 <= (int)uVar14) {
        local_70 = (uVar14 - uVar16) + 1;
        do {
          iVar8 = iVar8 * local_98 + iVar9;
          if ((int)local_98 <= local_94) {
            iVar10 = (local_94 - local_98) + 1;
            do {
              if ((int)uVar15 <= (int)local_78) {
                iVar11 = (iVar8 + uVar15) * 2;
                iVar12 = (local_78 - uVar15) + 1;
                do {
                  uVar17 = (uint)*(ushort *)(iVar11 + *(int *)(param_2 + 0x84));
                  local_34 = *(int *)(param_2 + 0x8c) +
                             (uint)*(ushort *)(iVar11 + *(int *)(param_2 + 0x88)) * 2;
                  iVar13 = 0;
                  if (uVar17 != 0) {
                    do {
                      uVar16 = (uint)*(ushort *)(local_34 + iVar13 * 2);
                      if (*(short *)(&DAT_007986c8 + uVar16 * 2) != (short)local_38) {
                        *(short *)(&DAT_007986c8 + uVar16 * 2) = (short)local_38;
                        local_50 = 3.4028235e+38;
                        local_4c = 3.4028235e+38;
                        local_48 = 3.4028235e+38;
                        local_44 = -3.4028235e+38;
                        local_40 = -3.4028235e+38;
                        local_3c = -3.4028235e+38;
                        FUN_005a4110(uVar16,local_30,&local_50);
                        if (((local_50 <= fVar4) &&
                            (local_44 < fVar1 == (NAN(local_44) || NAN(fVar1)))) &&
                           ((local_48 <= fVar6 &&
                            (((local_3c < fVar3 == (NAN(local_3c) || NAN(fVar3)) &&
                              (local_4c <= fVar5)) &&
                             (local_40 < fVar2 == (NAN(local_40) || NAN(fVar2)))))))) {
                          FUN_0057ae50(local_30,0,0,uVar16);
                        }
                      }
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < (int)uVar17);
                  }
                  iVar11 = iVar11 + 2;
                  iVar12 = iVar12 + -1;
                } while (iVar12 != 0);
              }
              iVar8 = iVar8 + *(int *)(param_2 + 0x54);
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          iVar8 = *(int *)(param_2 + 0x54);
          iVar9 = iVar9 + *(int *)(param_2 + 0x58) * iVar8;
          local_70 = local_70 + -1;
        } while (local_70 != 0);
      }
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

