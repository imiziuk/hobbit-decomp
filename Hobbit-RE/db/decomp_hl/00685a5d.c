
undefined4 __fastcall FUN_00685a5d(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint uVar44;
  void *pvVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  float *pfVar49;
  int iVar50;
  float *pfVar51;
  int iVar52;
  int *piVar53;
  float *pfVar54;
  float *pfVar55;
  undefined4 uVar56;
  void *pvVar57;
  void *pvVar58;
  float *local_40;
  void *local_3c;
  void *local_34;
  void *local_30;
  uint local_2c;
  float *local_28;
  void *local_24;
  uint local_20;
  uint local_1c;
  void *local_18;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  local_28 = (float *)0x0;
  local_3c = (void *)0x0;
  if (((*(int *)(param_1[1] + 8) == 1) && (*(int *)(*param_1 + 8) == 1)) &&
     (uVar44 = param_1[2], (char)uVar44 == '\x03')) {
    iVar46 = FUN_0068564b(~(uVar44 >> 0x10) & 1);
    iVar47 = FUN_0068564b(~(uVar44 >> 0x11) & 1);
    iVar48 = FUN_0068564b(~(uVar44 >> 0x12) & 1);
    if (((iVar46 == 0) || (iVar47 == 0)) ||
       ((iVar48 == 0 ||
        ((local_28 = (float *)operator_new(*(int *)(param_1[1] + 0x1050) << 4),
         local_28 == (float *)0x0 ||
         (local_3c = operator_new(*(int *)(*param_1 + 0x1050) << 6), local_3c == (void *)0x0)))))) {
      uVar56 = 0x8007000e;
    }
    else {
      iVar50 = *(int *)(*param_1 + 0x1050);
      local_20 = 0;
      local_18 = (void *)(iVar50 * 0x10 + (int)local_3c);
      local_34 = (void *)(iVar50 * 0x20 + (int)local_3c);
      pvVar57 = (void *)(iVar50 * 0x30 + (int)local_3c);
      iVar50 = param_1[1];
      if (*(int *)(iVar50 + 0x1058) != 0) {
        local_8 = (undefined4 *)(iVar48 + 8);
        local_30 = pvVar57;
        local_24 = local_3c;
        do {
          local_2c = 0;
          local_10 = -1;
          local_c = -1;
          if (*(int *)(iVar50 + 0x1054) != 0) {
            piVar53 = (int *)(iVar47 + 8);
            do {
              iVar52 = local_c;
              pvVar45 = local_18;
              iVar50 = piVar53[-2];
              local_1c = 0;
              pvVar58 = pvVar57;
              if (iVar50 != local_10) {
                if (iVar50 == local_c) {
                  local_c = -1;
                  local_10 = iVar52;
                  local_18 = local_24;
                  local_24 = pvVar45;
                  local_30 = local_34;
                  pvVar58 = local_34;
                  local_34 = pvVar57;
                }
                else {
                  (**(code **)(*(int *)*param_1 + 4))(iVar50,local_8[-2],local_24);
                  (**(code **)(*(int *)*param_1 + 4))(iVar50,*local_8,local_34);
                  local_10 = iVar50;
                }
              }
              iVar50 = *piVar53;
              if (iVar50 != local_c) {
                (**(code **)(*(int *)*param_1 + 4))(iVar50,local_8[-2],local_18);
                (**(code **)(*(int *)*param_1 + 4))(iVar50,*local_8,pvVar58);
                local_c = iVar50;
              }
              pvVar57 = pvVar58;
              if (*(int *)(param_1[1] + 0x1050) != 0) {
                pfVar49 = (float *)(iVar46 + 0xc);
                local_40 = local_28;
                do {
                  fVar6 = *pfVar49;
                  iVar50 = (int)pfVar49[-1] * 0x10;
                  pfVar1 = (float *)(iVar50 + (int)pvVar58);
                  fVar7 = pfVar1[1];
                  fVar8 = pfVar1[2];
                  fVar9 = pfVar1[3];
                  fVar10 = pfVar49[-2];
                  iVar52 = (int)pfVar49[-3] * 0x10;
                  pfVar2 = (float *)(iVar52 + (int)pvVar58);
                  fVar11 = pfVar2[1];
                  fVar12 = pfVar2[2];
                  fVar13 = pfVar2[3];
                  pfVar3 = (float *)(iVar50 + (int)local_34);
                  fVar14 = (float)piVar53[1];
                  fVar15 = *pfVar49;
                  fVar16 = pfVar3[1];
                  fVar17 = pfVar3[2];
                  fVar18 = pfVar3[3];
                  pfVar4 = (float *)(iVar52 + (int)local_34);
                  fVar19 = pfVar49[-2];
                  fVar20 = pfVar4[1];
                  fVar21 = pfVar4[2];
                  fVar22 = pfVar4[3];
                  fVar23 = (float)piVar53[-1];
                  fVar24 = (float)local_8[1];
                  fVar25 = *pfVar49;
                  pfVar54 = (float *)((int)local_18 + iVar50);
                  fVar26 = pfVar54[1];
                  fVar27 = pfVar54[2];
                  fVar28 = pfVar54[3];
                  fVar29 = pfVar49[-2];
                  pfVar55 = (float *)((int)local_18 + iVar52);
                  fVar30 = pfVar55[1];
                  fVar31 = pfVar55[2];
                  fVar32 = pfVar55[3];
                  pfVar51 = (float *)(iVar50 + (int)local_24);
                  fVar33 = (float)piVar53[1];
                  fVar34 = *pfVar49;
                  fVar35 = pfVar51[1];
                  fVar36 = pfVar51[2];
                  fVar37 = pfVar51[3];
                  fVar38 = pfVar49[-2];
                  pfVar5 = (float *)(iVar52 + (int)local_24);
                  fVar39 = pfVar5[1];
                  fVar40 = pfVar5[2];
                  fVar41 = pfVar5[3];
                  fVar42 = (float)piVar53[-1];
                  fVar43 = (float)local_8[-1];
                  pfVar49 = pfVar49 + 4;
                  local_1c = local_1c + 1;
                  *local_40 = ((fVar38 * *pfVar5 + fVar34 * *pfVar51) * fVar42 +
                              (fVar29 * *pfVar55 + fVar25 * *pfVar54) * fVar33) * fVar43 +
                              ((fVar19 * *pfVar4 + fVar15 * *pfVar3) * fVar23 +
                              (fVar10 * *pfVar2 + fVar6 * *pfVar1) * fVar14) * fVar24;
                  local_40[1] = ((fVar38 * fVar39 + fVar34 * fVar35) * fVar42 +
                                (fVar29 * fVar30 + fVar25 * fVar26) * fVar33) * fVar43 +
                                ((fVar19 * fVar20 + fVar15 * fVar16) * fVar23 +
                                (fVar10 * fVar11 + fVar6 * fVar7) * fVar14) * fVar24;
                  local_40[2] = ((fVar38 * fVar40 + fVar34 * fVar36) * fVar42 +
                                (fVar29 * fVar31 + fVar25 * fVar27) * fVar33) * fVar43 +
                                ((fVar19 * fVar21 + fVar15 * fVar17) * fVar23 +
                                (fVar10 * fVar12 + fVar6 * fVar8) * fVar14) * fVar24;
                  local_40[3] = ((fVar38 * fVar41 + fVar34 * fVar37) * fVar42 +
                                (fVar29 * fVar32 + fVar25 * fVar28) * fVar33) * fVar43 +
                                ((fVar19 * fVar22 + fVar15 * fVar18) * fVar23 +
                                (fVar10 * fVar13 + fVar6 * fVar9) * fVar14) * fVar24;
                  pvVar58 = local_30;
                  pvVar57 = local_30;
                  local_40 = local_40 + 4;
                } while (local_1c < *(uint *)(param_1[1] + 0x1050));
              }
              (**(code **)(*(int *)param_1[1] + 8))(local_2c,local_20,local_28);
              piVar53 = piVar53 + 4;
              local_2c = local_2c + 1;
            } while (local_2c < *(uint *)(param_1[1] + 0x1054));
          }
          local_8 = local_8 + 4;
          local_20 = local_20 + 1;
          iVar50 = param_1[1];
        } while (local_20 < *(uint *)(iVar50 + 0x1058));
      }
      uVar56 = 0;
    }
    FUN_006bf840(iVar46);
    FUN_006bf840(iVar47);
    FUN_006bf840(iVar48);
    FUN_006bf840(local_28);
    FUN_006bf840(local_3c);
  }
  else {
    uVar56 = 0x80004005;
  }
  return uVar56;
}

