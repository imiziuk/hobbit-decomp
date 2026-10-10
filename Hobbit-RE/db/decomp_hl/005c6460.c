
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c6460(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 extraout_ST1;
  undefined8 uVar12;
  int local_38;
  float local_24 [2];
  float local_1c;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df7f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_clutter_mgr__OnAdvanceLogic_00746108);
  fVar1 = param_1[0x15];
  fVar2 = param_1[0x22];
  local_4 = 0;
  pfVar6 = (float *)FUN_0056bb40(local_24);
  fVar10 = (float10)*pfVar6;
  fVar11 = (float10)pfVar6[1];
  local_1c = pfVar6[2];
  if (((DAT_0077285c & 4) != 0) ||
     ((float10)_DAT_006f44b8 <
      SQRT(((float10)local_1c - (float10)param_1[2]) * ((float10)local_1c - (float10)param_1[2]) +
           (fVar11 - (float10)param_1[1]) * (fVar11 - (float10)param_1[1]) +
           (fVar10 - (float10)*param_1) * (fVar10 - (float10)*param_1)))) {
    fVar11 = (float10)FUN_005c5ec0();
    fVar10 = extraout_ST1;
  }
  *param_1 = (float)fVar10;
  param_1[2] = local_1c;
  param_1[1] = (float)fVar11;
  if (((uint)param_1[0x23] & 1) != 0) {
    FUN_005c5ed0();
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  FUN_005c6110();
  pfVar6 = (float *)FUN_0056bb40(local_18);
  local_24[0] = *pfVar6;
  local_1c = pfVar6[2];
  local_38 = 0;
  while( true ) {
    fVar9 = param_1[0x24];
    if ((int)DAT_007460ac <= (int)param_1[0x24]) {
      fVar9 = DAT_007460ac;
    }
    if ((int)fVar9 <= local_38) break;
    fVar9 = param_1[0x22];
    if (((int)param_1[0x16] < (int)fVar9) || (fVar3 = param_1[0x1b], fVar3 == 0.0)) {
LAB_005c66d6:
      fVar9 = (float)(((int)param_1[0x22] + 1) % (int)fVar1);
      param_1[0x22] = fVar9;
      if (fVar9 == fVar2) break;
    }
    else {
      iVar7 = (int)fVar9 >> (*(byte *)((int)param_1 + 0x66) & 0x1f);
      uVar12 = __allshl();
      if ((*(uint *)((int)fVar3 + iVar7 * 0x18) & (uint)uVar12) != 0 ||
          (*(uint *)((int)fVar3 + 4 + iVar7 * 0x18) & (uint)((ulonglong)uVar12 >> 0x20)) != 0)
      goto LAB_005c66d6;
      iVar7 = *(int *)((int)fVar3 + 8 +
                      ((int)fVar9 >> (*(byte *)((int)param_1 + 0x66) & 0x1f)) * 0x18);
      uVar4 = *(uint *)(iVar7 + ((uint)param_1[0x18] & (uint)fVar9) * 0x28);
      iVar7 = iVar7 + ((uint)param_1[0x18] & (uint)fVar9) * 0x28;
      if (((int)uVar4 <= (int)param_1[7]) && (param_1[0xc] != 0.0)) {
        iVar8 = (int)uVar4 >> (*(byte *)((int)param_1 + 0x2a) & 0x1f);
        uVar12 = __allshl();
        if ((*(uint *)((int)param_1[0xc] + iVar8 * 0x18) & (uint)uVar12) == 0 &&
            (*(uint *)((int)param_1[0xc] + 4 + iVar8 * 0x18) & (uint)((ulonglong)uVar12 >> 0x20)) ==
            0) {
          fVar9 = *(float *)(*(int *)((int)param_1[0xc] + 8 +
                                     ((int)uVar4 >> (*(byte *)((int)param_1 + 0x2a) & 0x1f)) * 0x18)
                             + 0xb0 + ((uint)param_1[9] & uVar4) * 0xb8);
          fVar5 = *(float *)(iVar7 + 0xc) - local_1c;
          fVar3 = *(float *)(iVar7 + 4) - local_24[0];
          fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
          if (*(short *)(iVar7 + 0x24) == 0) {
            fVar9 = _DAT_006f44bc * fVar9;
            if (fVar3 < fVar9 != (NAN(fVar3) || NAN(fVar9))) {
              FUN_005c6a60(param_1[0x22]);
            }
          }
          else if ((_DAT_006f44c4 * fVar9 < fVar3) && (*(char *)(iVar7 + 0x26) == -1)) {
            FUN_005c6fa0(param_1[0x22]);
          }
          goto LAB_005c66d6;
        }
      }
    }
    local_38 = local_38 + 1;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

