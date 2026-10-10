
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00411360(int param_1,float param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined4 *puVar14;
  int iVar15;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar11 = (int *)(param_1 + 0x264);
  puVar14 = (undefined4 *)(param_1 + 0x1c8);
  pfVar13 = (float *)(param_1 + 0x214);
  iStack_34 = 3;
  do {
    if (*piVar11 == 0) {
      iVar5 = FUN_004021c0(puVar14[0xc],puVar14[0xd]);
      if ((iVar5 != 0) && (iVar5 = FUN_004de640(), iVar5 != 0)) {
        FUN_00659600(s_AppleFall_0071ee8c,1);
        *piVar11 = 1;
        piVar11[-3] = 0;
      }
    }
    else if (*piVar11 == 1) {
      fVar3 = param_2 + (float)piVar11[-3];
      piVar11[-3] = (int)fVar3;
      fVar3 = fVar3 * fVar3 * _DAT_006e9590;
      fStack_30 = pfVar13[8] - pfVar13[-1];
      fStack_2c = pfVar13[9] - *pfVar13;
      fStack_28 = pfVar13[10] - pfVar13[1];
      fVar2 = fStack_30 * fStack_30 + fStack_2c * fStack_2c + fStack_28 * fStack_28;
      if (fVar3 * fVar3 < fVar2 == (NAN(fVar3 * fVar3) || NAN(fVar2))) {
        FUN_004021c0(*puVar14,puVar14[1]);
        FUN_004d22c0(1);
        FUN_004021c0(puVar14[6],puVar14[7]);
        FUN_004d22c0(0);
        FUN_00659600(s_AppleLand_0071ee80,1);
        *piVar11 = 2;
      }
      else {
        fVar2 = DAT_006e92e8 / SQRT(fVar2);
        iVar5 = FUN_0064cf30(fVar2);
        if (iVar5 == 0) {
          fStack_30 = 0.0;
          fStack_2c = 0.0;
          fStack_28 = 0.0;
        }
        else {
          fVar2 = fVar2 * fVar3;
          fStack_30 = fStack_30 * fVar2;
          fStack_2c = fStack_2c * fVar2;
          fStack_28 = fStack_28 * fVar2;
        }
        piVar6 = (int *)FUN_004021c0(*puVar14,puVar14[1]);
        fStack_18 = fStack_30 + pfVar13[-1];
        fStack_14 = fStack_2c + *pfVar13;
        fStack_10 = fStack_28 + pfVar13[1];
        (**(code **)(*piVar6 + 0x14))(&fStack_18,0);
      }
    }
    pfVar13 = pfVar13 + 3;
    puVar14 = puVar14 + 2;
    piVar11 = piVar11 + 1;
    iStack_34 = iStack_34 + -1;
  } while (iStack_34 != 0);
  iVar5 = FUN_004021c0(*(undefined4 *)(param_1 + 0x158),*(undefined4 *)(param_1 + 0x15c));
  if (iVar5 != 0) {
    iVar7 = FUN_0041bcc0();
    iVar5 = *(int *)(iVar7 + 0xac);
    iVar7 = *(int *)(iVar7 + 0xa8);
    iVar15 = 0;
    iVar8 = FUN_0041bcc0();
    iVar8 = *(int *)(iVar8 + 0x8c4);
    piVar11 = (int *)(param_1 + 0x120);
    do {
      if ((*piVar11 == iVar7) && (piVar11[1] == iVar5)) {
        iVar9 = FUN_004021c0(*(undefined4 *)(param_1 + 0x120 + iVar15 * 8),
                             *(undefined4 *)(param_1 + 0x124 + iVar15 * 8));
        iVar10 = FUN_0041bcc0();
        fStack_18 = *(float *)(iVar10 + 0x44) + _DAT_006e9554;
        fStack_c = *(float *)(iVar10 + 0x50);
        fStack_14 = *(float *)(iVar10 + 0x48) - _DAT_006e958c;
        fStack_10 = *(float *)(iVar10 + 0x4c) + _DAT_006e9554;
        fStack_20 = *(float *)(iVar9 + 0x54);
        fStack_8 = *(float *)(iVar10 + 0x54) - _DAT_006e9588;
        fStack_4 = *(float *)(iVar10 + 0x58) - _DAT_006e9554;
        fVar3 = fStack_20 - *(float *)(iVar9 + 0x48);
        if (fVar3 < _DAT_006e9554 != (NAN(fVar3) || NAN(_DAT_006e9554))) {
          fStack_20 = (_DAT_006e9554 - fVar3) + fStack_20;
        }
        if (((((fStack_c - _DAT_006e9554 < *(float *)(iVar9 + 0x44)) ||
              (*(float *)(iVar9 + 0x50) < fStack_18 !=
               (NAN(*(float *)(iVar9 + 0x50)) || NAN(fStack_18)))) ||
             (fStack_4 < *(float *)(iVar9 + 0x4c))) ||
            ((*(float *)(iVar9 + 0x58) < fStack_10 !=
              (NAN(*(float *)(iVar9 + 0x58)) || NAN(fStack_10)) ||
             (fStack_8 < *(float *)(iVar9 + 0x48))))) ||
           (fStack_20 < fStack_14 != (NAN(fStack_20) || NAN(fStack_14)))) {
          if (*(int *)(param_1 + 0x160) == 0 && *(int *)(param_1 + 0x164) == 0) break;
          bVar4 = false;
          *(undefined4 *)(param_1 + 0x160) = 0;
          *(undefined4 *)(param_1 + 0x164) = 0;
        }
        else {
          bVar4 = true;
          if ((*(int *)(param_1 + 0x160) == iVar7) && (*(int *)(param_1 + 0x164) == iVar5))
          goto LAB_0041182e;
          *(int *)(param_1 + 0x160) = iVar7;
          *(int *)(param_1 + 0x164) = iVar5;
        }
        switch(*(undefined4 *)(param_1 + 400 + iVar15 * 4)) {
        case 0:
        case 4:
          *(undefined4 *)(param_1 + 400 + iVar15 * 4) = 0;
          uVar12 = 1;
          break;
        default:
          goto switchD_0041175d_caseD_1;
        case 2:
        case 3:
          *(undefined4 *)(param_1 + 400 + iVar15 * 4) = 2;
          uVar12 = 3;
        }
        FUN_004118d0(iVar15,uVar12);
switchD_0041175d_caseD_1:
        if (bVar4) goto LAB_0041182e;
        break;
      }
      iVar15 = iVar15 + 1;
      piVar11 = piVar11 + 2;
    } while (iVar15 < 7);
    if (*(int *)(param_1 + 0x160) != 0 || *(int *)(param_1 + 0x164) != 0) {
      iVar5 = 0;
      piVar11 = (int *)(param_1 + 0x120);
      do {
        if ((*(int *)(param_1 + 0x160) == *piVar11) && (*(int *)(param_1 + 0x164) == piVar11[1])) {
          switch(*(undefined4 *)(param_1 + 400 + iVar5 * 4)) {
          case 0:
          case 4:
            *(undefined4 *)(param_1 + 400 + iVar5 * 4) = 0;
            uVar12 = 1;
            break;
          default:
            goto switchD_004117c8_caseD_1;
          case 2:
          case 3:
            *(undefined4 *)(param_1 + 400 + iVar5 * 4) = 2;
            uVar12 = 3;
          }
          FUN_004118d0(iVar5,uVar12);
          break;
        }
        iVar5 = iVar5 + 1;
        piVar11 = piVar11 + 2;
      } while (iVar5 < 7);
switchD_004117c8_caseD_1:
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    if (iVar8 != 0) {
      iVar5 = 0;
      piVar11 = (int *)(param_1 + 400);
      do {
        if ((*piVar11 != 0) && (*piVar11 != 4)) {
          FUN_004118d0(iVar5,4);
        }
        iVar5 = iVar5 + 1;
        piVar11 = piVar11 + 1;
      } while (iVar5 < 7);
    }
LAB_0041182e:
    FUN_00411ba0(param_2);
    if ((*(int *)(param_1 + 0x170) == 0) &&
       (((byte)*(undefined4 *)(param_1 + 0x16c) & 0x7f) == 0x7f)) {
      iVar5 = FUN_0041bcc0();
      uVar12 = *(undefined4 *)(iVar5 + 8);
      uVar1 = *(undefined4 *)(iVar5 + 0xc);
      piVar11 = (int *)FUN_0041bcc0();
      uVar12 = (**(code **)(*piVar11 + 0x28))(uVar12,uVar1,1);
      FUN_004b2a60(100,uVar12);
      *(undefined4 *)(param_1 + 0x170) = 1;
      FUN_00659600(s_QuestItemSuccess_0071e4dc,1);
    }
  }
  return;
}

