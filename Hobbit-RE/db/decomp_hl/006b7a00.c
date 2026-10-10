
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006b7a00(int param_1,int *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  int iVar22;
  float fVar23;
  float fVar24;
  float *pfVar25;
  int iVar26;
  float *pfVar27;
  float fVar28;
  float *pfVar29;
  undefined4 *puVar30;
  float *pfVar31;
  float10 fVar32;
  float10 fVar33;
  undefined1 auStack_58 [12];
  float afStack_4c [8];
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8428;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_fx_spemitter__EmissionLogic_00757c20);
  local_4 = 0;
  pfVar25 = (float *)FUN_006bae20(param_2);
  iVar22 = *(int *)(param_1 + 4);
  if ((*(int *)(param_1 + 0xb8) != 0) && (iVar26 = (**(code **)(*param_2 + 8))(), iVar26 == 0)) {
    if (*(int *)(param_1 + 0x108) == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    fVar32 = (float10)(**(code **)*param_2)();
    if ((float10)*(float *)(iVar22 + 0x7c) <= fVar32) {
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    if ((*(byte *)(iVar22 + 0x84) & 1) != 0) {
      if ((afStack_4c != pfVar25) && (pfVar25 != pfVar25 + 0x10)) {
        pfVar27 = afStack_4c + 2;
        pfVar29 = pfVar25;
        do {
          pfVar31 = pfVar29 + 4;
          pfVar27[-2] = *pfVar29;
          pfVar27[-1] = pfVar29[1];
          *pfVar27 = *(float *)(((int)pfVar25 - (int)afStack_4c) + (int)pfVar27);
          pfVar27[1] = pfVar29[3];
          pfVar27 = pfVar27 + 4;
          pfVar29 = pfVar31;
        } while (pfVar31 != pfVar25 + 0x10);
      }
      fStack_14 = 0.0;
      fStack_18 = 0.0;
      fStack_1c = 0.0;
    }
    *(float *)(param_1 + 0xac) = param_3 + *(float *)(param_1 + 0xac);
    do {
      do {
        if ((*(int *)(param_1 + 0xb8) == 0) ||
           (fVar28 = *(float *)(param_1 + 0x10c + *(int *)(param_1 + 0x104) * 0x44),
           iVar26 = param_1 + 0x10c + *(int *)(param_1 + 0x104) * 0x44,
           fVar28 < *(float *)(param_1 + 0xac) == (NAN(fVar28) || NAN(*(float *)(param_1 + 0xac)))))
        goto LAB_006b7ec3;
        if (*(int *)(iVar26 + 4) != 0) {
          *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
        }
        *(undefined4 *)(iVar26 + 4) = 1;
        fVar32 = (float10)FUN_00647b30(*(undefined4 *)(iVar22 + 0x94),*(undefined4 *)(iVar22 + 0x98)
                                      );
        *(float *)(iVar26 + 0x40) = (float)fVar32;
        *(float *)(iVar26 + 8) =
             *(float *)(param_1 + 0xac) -
             *(float *)(param_1 + 0x10c + *(int *)(param_1 + 0x104) * 0x44);
        if ((*(byte *)(iVar22 + 0x84) & 4) == 0) {
          fVar28 = 0.0;
          *(undefined4 *)(iVar26 + 0x10) = 0;
          *(undefined4 *)(iVar26 + 0xc) = 0;
        }
        else {
          fVar32 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
          fVar28 = (float)fVar32;
          fVar32 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
          fVar33 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
          *(float *)(iVar26 + 0xc) = (float)fVar33;
          *(float *)(iVar26 + 0x10) = (float)fVar32;
        }
        pfVar27 = (float *)(iVar26 + 0xc);
        *(float *)(iVar26 + 0x14) = fVar28;
        fVar32 = (float10)FUN_00647b30(*(undefined4 *)(iVar22 + 0x9c),*(undefined4 *)(iVar22 + 0xa8)
                                      );
        *(float *)(iVar26 + 0x18) = (float)fVar32;
        fVar32 = (float10)FUN_00647b30(*(undefined4 *)(iVar22 + 0xa0),*(undefined4 *)(iVar22 + 0xac)
                                      );
        *(float *)(iVar26 + 0x1c) = (float)fVar32;
        fVar32 = (float10)FUN_00647b30(*(undefined4 *)(iVar22 + 0xa4),*(undefined4 *)(iVar22 + 0xb0)
                                      );
        *(float *)(iVar26 + 0x20) = (float)fVar32;
        if ((*(byte *)(iVar22 + 0x84) & 1) != 0) {
          fVar28 = *(float *)(iVar26 + 0x18);
          fVar1 = *(float *)(iVar26 + 0x1c);
          fVar2 = *(float *)(iVar26 + 0x18);
          *(float *)(iVar26 + 0x18) =
               fStack_2c * *(float *)(iVar26 + 0x20) +
               afStack_4c[4] * *(float *)(iVar26 + 0x1c) + afStack_4c[0] * *(float *)(iVar26 + 0x18)
               + fStack_1c;
          *(float *)(iVar26 + 0x1c) =
               fStack_28 * *(float *)(iVar26 + 0x20) +
               afStack_4c[5] * *(float *)(iVar26 + 0x1c) + afStack_4c[1] * fVar2 + fStack_18;
          *(float *)(iVar26 + 0x20) =
               fStack_24 * *(float *)(iVar26 + 0x20) +
               afStack_4c[6] * fVar1 + afStack_4c[2] * fVar28 + fStack_14;
          if (((*(int *)(param_1 + 0xbc) == 0) || (param_3 <= DAT_006e92e4)) ||
             (fVar28 = *(float *)(param_1 + 0xb4) * _DAT_006ec084,
             fVar28 < param_3 == (NAN(fVar28) || NAN(param_3)))) {
            pfVar29 = (float *)FUN_0041b9f0(auStack_58,pfVar27);
            *pfVar27 = *pfVar29;
            *(float *)(iVar26 + 0x10) = pfVar29[1];
            *(float *)(iVar26 + 0x14) = pfVar29[2];
          }
          else {
            fVar23 = *(float *)(iVar26 + 8) / param_3;
            fVar28 = *(float *)(param_1 + 0xe8);
            fVar1 = *(float *)(param_1 + 0xd8);
            fVar2 = *(float *)(iVar26 + 0x10);
            fVar3 = *(float *)(param_1 + 200);
            fVar4 = *pfVar27;
            fVar5 = *(float *)(param_1 + 0xf8);
            fVar6 = *(float *)(param_1 + 0xe4);
            fVar7 = *(float *)(param_1 + 0xd4);
            fVar8 = *(float *)(param_1 + 0xc4);
            fVar9 = *pfVar27;
            fVar10 = *(float *)(param_1 + 0xf4);
            fVar11 = pfVar25[10];
            fVar12 = pfVar25[6];
            fVar13 = *(float *)(iVar26 + 0x10);
            fVar14 = pfVar25[2];
            fVar15 = *pfVar27;
            fVar16 = pfVar25[0xe];
            fVar17 = pfVar25[9];
            fVar18 = pfVar25[5];
            fVar19 = pfVar25[1];
            fVar20 = *pfVar27;
            fVar21 = pfVar25[0xd];
            fVar24 = DAT_006e92e8 - fVar23;
            *pfVar27 = (*pfVar27 * *(float *)(param_1 + 0xc0) +
                        *(float *)(param_1 + 0xd0) * *(float *)(iVar26 + 0x10) +
                        *(float *)(param_1 + 0xe0) * *(float *)(iVar26 + 0x14) +
                       *(float *)(param_1 + 0xf0)) * fVar23 +
                       (*pfVar25 * *pfVar27 +
                        pfVar25[4] * *(float *)(iVar26 + 0x10) +
                        pfVar25[8] * *(float *)(iVar26 + 0x14) + pfVar25[0xc]) * fVar24;
            *(float *)(iVar26 + 0x10) =
                 (fVar8 * fVar9 +
                  fVar7 * *(float *)(iVar26 + 0x10) + fVar6 * *(float *)(iVar26 + 0x14) + fVar10) *
                 fVar23 + (fVar19 * fVar20 +
                           fVar18 * *(float *)(iVar26 + 0x10) + fVar17 * *(float *)(iVar26 + 0x14) +
                          fVar21) * fVar24;
            *(float *)(iVar26 + 0x14) =
                 (fVar3 * fVar4 + fVar1 * fVar2 + fVar28 * *(float *)(iVar26 + 0x14) + fVar5) *
                 fVar23 + (fVar14 * fVar15 + fVar12 * fVar13 + fVar11 * *(float *)(iVar26 + 0x14) +
                          fVar16) * fVar24;
          }
        }
        iVar26 = *(int *)(param_1 + 0x104) + 1;
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
        *(int *)(param_1 + 0x104) = iVar26;
      } while (iVar26 < *(int *)(param_1 + 0x108));
      *(undefined4 *)(param_1 + 0x104) = 0;
      *(float *)(param_1 + 0xac) = *(float *)(param_1 + 0xac) - *(float *)(param_1 + 0xb0);
    } while ((*(byte *)(iVar22 + 0x84) & 8) == 0);
    *(undefined4 *)(param_1 + 0xb8) = 0;
LAB_006b7ec3:
    if ((*(byte *)(iVar22 + 0x84) & 1) != 0) {
      *(undefined4 *)(param_1 + 0xbc) = 1;
      if (((float *)(param_1 + 0xc0) != pfVar25) && (pfVar25 != pfVar25 + 0x10)) {
        puVar30 = (undefined4 *)(param_1 + 200);
        pfVar27 = pfVar25;
        do {
          pfVar29 = pfVar27 + 4;
          puVar30[-2] = *pfVar27;
          puVar30[-1] = pfVar27[1];
          *puVar30 = *(undefined4 *)(((int)pfVar25 - (param_1 + 0xc0)) + (int)puVar30);
          puVar30[1] = pfVar27[3];
          puVar30 = puVar30 + 4;
          pfVar27 = pfVar29;
        } while (pfVar29 != pfVar25 + 0x10);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

