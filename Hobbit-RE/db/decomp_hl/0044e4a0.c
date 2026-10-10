
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044e4a0(int param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  undefined4 *puVar18;
  int iVar19;
  int local_b0;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_90;
  int local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  float local_10;
  undefined1 local_c [12];
  
  if (*(int *)(param_1 + 0x5e94) != 0) {
    pfVar16 = (float *)(param_1 + 0x59c4);
    iVar14 = 0;
    pfVar17 = pfVar16;
    do {
      if (DAT_006e92e4 < *pfVar17) {
        iVar14 = FUN_00549470(param_1 + 0x5e90);
        if (iVar14 == 0) {
          return;
        }
        iVar11 = FUN_0065f190(s_DBilboWebs_00724b3b + 1);
        if (iVar11 == 0) {
          return;
        }
        pfVar17 = &local_30;
        FUN_0065fd00(0,pfVar17);
        FUN_00672260(pfVar17);
        local_80 = 0;
        iVar19 = DAT_007f23d4;
        iVar11 = DAT_007f23cc;
        do {
          if (*pfVar16 < DAT_006e92e4 == (*pfVar16 == DAT_006e92e4)) {
            *(int *)(&DAT_007f23e0 + iVar19 * 4) = iVar11;
            iVar15 = iVar11 + -0x60;
            DAT_007f23d4 = iVar19 + 1;
            iVar19 = 0;
            puVar18 = (undefined4 *)(iVar11 + -0x58);
            DAT_007f23cc = iVar15;
            do {
              puVar12 = (undefined4 *)FUN_005a3020(local_c,iVar19);
              puVar18[-2] = *puVar12;
              puVar18[-1] = puVar12[1];
              *puVar18 = puVar12[2];
              iVar19 = iVar19 + 1;
              puVar18 = puVar18 + 3;
            } while (iVar19 < 8);
            iVar11 = *(int *)(param_1 + 0x5994 + ((int)pfVar16[2] + local_80) * 4);
            iVar19 = 0;
            local_70 = 0.0;
            local_74 = 0.0;
            local_78 = 0.0;
            local_90 = DAT_00724b24;
            pfVar17 = (float *)(iVar11 + 0x14);
            do {
              fVar3 = local_70;
              fVar8 = local_74;
              local_a4 = 0.0;
              local_a8 = 0.0;
              fVar4 = DAT_006e92e4;
              if (iVar19 < 7) {
                iVar2 = iVar19 * 3 + 3;
                iVar13 = iVar15 + iVar2 * 4;
                fVar4 = *(float *)(iVar15 + iVar2 * 4) - *(float *)(iVar15 + iVar19 * 0xc);
                pfVar1 = (float *)(iVar15 + iVar19 * 0xc);
                fVar7 = *(float *)(iVar13 + 4) - pfVar1[1];
                fVar6 = *(float *)(iVar13 + 8) - pfVar1[2];
                fVar5 = (local_28 - pfVar1[2]) * fVar7 - (local_2c - pfVar1[1]) * fVar6;
                local_a8 = fVar6 * (local_30 - *pfVar1) - (local_28 - pfVar1[2]) * fVar4;
                local_a4 = (local_2c - pfVar1[1]) * fVar4 - fVar7 * (local_30 - *pfVar1);
                fVar4 = DAT_006e92e8 /
                        SQRT(fVar5 * fVar5 + local_a8 * local_a8 + local_a4 * local_a4);
                iVar13 = FUN_0064cf30(fVar4);
                if (iVar13 == 0) {
                  local_a8 = 0.0;
                  local_a4 = 0.0;
                  fVar4 = DAT_006e92e4;
                }
                else {
                  local_a8 = local_a8 * fVar4;
                  local_a4 = local_a4 * fVar4;
                  fVar4 = fVar5 * fVar4;
                }
              }
              local_78 = local_78 + fVar4;
              local_74 = local_a8;
              local_70 = local_a4;
              fVar8 = fVar8 + local_a8;
              local_a4 = fVar3 + local_a4;
              fVar3 = DAT_006e92e8 / SQRT(local_78 * local_78 + fVar8 * fVar8 + local_a4 * local_a4)
              ;
              iVar13 = FUN_0064cf30(fVar3);
              if (iVar13 == 0) {
                local_a4 = 0.0;
                fVar5 = DAT_006e92e4;
                fVar8 = DAT_006e92e4;
              }
              else {
                local_a4 = local_a4 * fVar3;
                fVar5 = fVar3 * local_78;
                fVar8 = fVar8 * fVar3;
              }
              local_9c = local_90;
              if (iVar19 == 0) {
                local_9c = DAT_00724b2c;
              }
              pfVar1 = (float *)(iVar15 + iVar19 * 0xc);
              iVar19 = iVar19 + 1;
              fVar3 = pfVar1[1];
              local_1c = local_a4 * local_9c + pfVar1[2];
              pfVar17[-5] = fVar5 * local_9c + *pfVar1;
              pfVar17[-3] = local_1c;
              pfVar17[-4] = fVar8 * local_9c + fVar3;
              fVar3 = pfVar1[1];
              local_10 = pfVar1[2] - local_a4 * local_9c;
              pfVar17[-2] = *pfVar1 - fVar5 * local_9c;
              *pfVar17 = local_10;
              pfVar17[-1] = fVar3 - fVar8 * local_9c;
              local_90 = _DAT_00724b28 + local_90;
              pfVar17 = pfVar17 + 6;
              local_78 = fVar4;
            } while (iVar19 < 8);
            FUN_0066c3a0(4,0x26);
            FUN_0066db80(iVar14,0);
            if (DAT_0075c824 != 0) {
              (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x13,5);
              (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x14,2);
            }
            (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0xe,0);
            (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x16,1);
            local_b0 = 0;
            do {
              fVar8 = _DAT_006ec11c * (float)local_b0;
              uVar10 = __ftol();
              uVar9 = DAT_00724b30;
              FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar10,DAT_00724b30),DAT_00724b30),
                                    DAT_00724b30));
              FUN_0066dd10(0,fVar8);
              FUN_0066de80(iVar11);
              FUN_0066ddd0(CONCAT31(CONCAT21(CONCAT11(uVar10,uVar9),uVar9),uVar9));
              FUN_0066dd10(0x3f800000,fVar8);
              FUN_0066de80(iVar11 + 0xc);
              local_b0 = local_b0 + 1;
              iVar11 = iVar11 + 0x18;
            } while (local_b0 < 8);
            FUN_0066d9a0();
            iVar11 = *(int *)(&DAT_007f23dc + DAT_007f23d4 * 4);
            iVar19 = DAT_007f23d4 + -1;
            DAT_007f23cc = iVar11;
            DAT_007f23d4 = iVar19;
          }
          local_80 = local_80 + 0x14;
          pfVar16 = pfVar16 + 0x14;
        } while (local_80 < 0x140);
        FUN_00549580(param_1 + 0x5e90);
        FUN_0065f430();
        return;
      }
      iVar14 = iVar14 + 1;
      pfVar17 = pfVar17 + 0x14;
    } while (iVar14 < 0x10);
  }
  return;
}

