
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e8f80(int param_1,float param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  float local_3c;
  float local_18;
  float local_14;
  float local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5bf8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_water__OnAdvanceLogic_0072ec28);
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x1d2) & 0x20) != 0) {
    fVar2 = *(float *)(param_1 + 0x1bc) - *(float *)(param_1 + 0x1b8);
    if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
      fVar2 = -fVar2;
    }
    if (_DAT_006e9350 < fVar2) {
      fVar3 = param_2 * *(float *)(param_1 + 0x1c0);
      if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
        fVar2 = fVar3;
      }
      if (*(float *)(param_1 + 0x1b8) < *(float *)(param_1 + 0x1bc) ==
          (NAN(*(float *)(param_1 + 0x1b8)) || NAN(*(float *)(param_1 + 0x1bc)))) {
        *(undefined4 *)(param_1 + 0x31c) = 1;
        *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x1b8) - fVar2;
      }
      else {
        *(undefined4 *)(param_1 + 0x31c) = 1;
        *(float *)(param_1 + 0x1b8) = fVar2 + *(float *)(param_1 + 0x1b8);
      }
    }
    pfVar7 = &local_18;
    FUN_0065fce0(0,pfVar7);
    FUN_00672260(pfVar7);
    pfVar7 = (float *)FUN_005c0150();
    local_10 = local_10 - (pfVar7[5] + pfVar7[2]) * _DAT_006e936c;
    local_14 = local_14 - (pfVar7[4] + pfVar7[1]) * _DAT_006e936c;
    local_18 = local_18 - (*pfVar7 + pfVar7[3]) * _DAT_006e936c;
    local_3c = SQRT(local_10 * local_10 + local_14 * local_14 + local_18 * local_18);
    iVar8 = FUN_0041bcb0();
    if (iVar8 != 0) {
      piVar9 = (int *)FUN_0041bcc0();
      pfVar7 = (float *)(**(code **)(*piVar9 + 0x28))();
      fVar2 = *pfVar7;
      fVar3 = pfVar7[1];
      fVar4 = pfVar7[2];
      pfVar7 = (float *)FUN_005c0150();
      fVar4 = fVar4 - (pfVar7[5] + pfVar7[2]) * _DAT_006e936c;
      fVar3 = fVar3 - (pfVar7[4] + pfVar7[1]) * _DAT_006e936c;
      fVar2 = fVar2 - (*pfVar7 + pfVar7[3]) * _DAT_006e936c;
      fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      if (fVar2 < local_3c != (NAN(fVar2) || NAN(local_3c))) {
        local_3c = fVar2;
      }
    }
    fVar2 = _DAT_006ec0e0;
    if ((local_3c <= *(float *)(param_1 + 0x1c4)) || (*(int *)(param_1 + 0x31c) != 0)) {
      cVar6 = '\0';
    }
    else {
      cVar6 = '\x01';
    }
    *(byte *)(param_1 + 0x1d2) = *(byte *)(param_1 + 0x1d2) & 0x7f ^ cVar6 << 7;
    *(undefined4 *)(param_1 + 0x31c) = 0;
    if (fVar2 < param_2) {
      FUN_004e8d10(param_2);
      FUN_004e8e30(param_2);
    }
    bVar1 = *(byte *)(param_1 + 0x1d2);
    if (((-1 < (char)bVar1) && ((bVar1 & 2) != 0)) && ((bVar1 & 1) != 0)) {
      FUN_00649600(s_water__Logic___ProcessHeightfiel_0072ec04);
      iVar8 = 1;
      if (1 < *(short *)(param_1 + 0x1ce) + -1) {
        do {
          iVar12 = *(short *)(param_1 + 0x1cc) * iVar8;
          for (iVar10 = *(short *)(param_1 + 0x1cc) + -2; iVar10 != 0; iVar10 = iVar10 + -1) {
            iVar12 = iVar12 + 1;
            iVar5 = *(int *)(param_1 + 0x270);
            pfVar7 = (float *)(*(int *)(param_1 + 0x274) + iVar12 * 4);
            fVar2 = ((*(float *)(iVar5 + (iVar12 - *(short *)(param_1 + 0x1cc)) * 4) +
                      *(float *)(iVar5 + (*(short *)(param_1 + 0x1cc) + iVar12) * 4) +
                      *(float *)(iVar5 + 4 + iVar12 * 4) + *(float *)(iVar5 + -4 + iVar12 * 4)) *
                     _DAT_006e9550 - *(float *)(iVar5 + iVar12 * 4)) * _DAT_0072eb2c;
            *pfVar7 = _DAT_0072eb28 * *pfVar7;
            pfVar7 = (float *)(*(int *)(param_1 + 0x274) + iVar12 * 4);
            *pfVar7 = fVar2 + *pfVar7;
            pfVar7 = (float *)(*(int *)(param_1 + 0x270) + iVar12 * 4);
            *pfVar7 = _DAT_0072eb30 * *(float *)(*(int *)(param_1 + 0x274) + iVar12 * 4) * param_2 +
                      *pfVar7;
            pfVar7 = (float *)(*(int *)(param_1 + 0x270) + iVar12 * 4);
            fVar2 = -*(float *)(param_1 + 0x1c8);
            fVar3 = fVar2;
            if (fVar2 <= *pfVar7) {
              fVar3 = *pfVar7;
            }
            if (*(float *)(param_1 + 0x1c8) < fVar3 ==
                (NAN(*(float *)(param_1 + 0x1c8)) || NAN(fVar3))) {
              if (fVar2 <= *pfVar7) {
                fVar2 = *pfVar7;
              }
            }
            else {
              fVar2 = *(float *)(param_1 + 0x1c8);
            }
            *pfVar7 = fVar2;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(short *)(param_1 + 0x1ce) + -1);
      }
      puVar13 = *(undefined4 **)(param_1 + 0x270);
      puVar11 = (undefined4 *)
                ((*(short *)(param_1 + 0x1ce) * 4 + -4) * (int)*(short *)(param_1 + 0x1cc) +
                (int)puVar13);
      iVar8 = 0;
      if (0 < *(short *)(param_1 + 0x1cc)) {
        do {
          *puVar13 = 0;
          *puVar11 = 0;
          puVar13 = puVar13 + 1;
          puVar11 = puVar11 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(short *)(param_1 + 0x1cc));
      }
      puVar11 = *(undefined4 **)(param_1 + 0x270);
      iVar8 = 0;
      puVar13 = puVar11 + *(short *)(param_1 + 0x1cc) + -1;
      if (0 < *(short *)(param_1 + 0x1ce)) {
        do {
          *puVar11 = 0;
          *puVar13 = 0;
          puVar11 = puVar11 + *(short *)(param_1 + 0x1cc);
          puVar13 = puVar13 + *(short *)(param_1 + 0x1cc);
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(short *)(param_1 + 0x1ce));
      }
      FUN_00649720();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

