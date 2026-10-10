
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cb4a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int local_2c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_rope__Simulate_0072d354);
  if (*(float *)(param_1 + 0x13c) < _DAT_006eeac0 !=
      (NAN(*(float *)(param_1 + 0x13c)) || NAN(_DAT_006eeac0))) goto LAB_004cb96d;
  FUN_004c8a20();
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    iVar12 = 0;
    do {
      iVar10 = *(int *)(param_1 + 0x124);
      *(undefined4 *)(iVar10 + iVar12) = *(undefined4 *)(iVar10 + 0xc + iVar12);
      *(undefined4 *)(iVar10 + 4 + iVar12) = *(undefined4 *)(iVar10 + 0x10 + iVar12);
      *(undefined4 *)(iVar10 + 8 + iVar12) = *(undefined4 *)(iVar10 + 0x14 + iVar12);
      fVar3 = _DAT_0072d0ec;
      pfVar11 = (float *)(iVar12 + 0x18 + *(int *)(param_1 + 0x124));
      *pfVar11 = _DAT_0072d0ec * *(float *)(iVar12 + 0x18 + *(int *)(param_1 + 0x124));
      pfVar11[1] = fVar3 * pfVar11[1];
      pfVar11[2] = fVar3 * pfVar11[2];
      fVar3 = *(float *)(param_1 + 0x13c) * DAT_006e92e4;
      pfVar11 = (float *)(iVar12 + 0x18 + *(int *)(param_1 + 0x124));
      fVar4 = *(float *)(param_1 + 0x13c) * _DAT_006ec0ec;
      *pfVar11 = fVar3 + *pfVar11;
      pfVar11[1] = fVar4 + pfVar11[1];
      pfVar11[2] = fVar3 + pfVar11[2];
      fVar3 = *(float *)(param_1 + 0x13c);
      iVar10 = *(int *)(param_1 + 0x124) + iVar12;
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 + 0x2c;
      *(float *)(iVar10 + 0xc) = fVar3 * *(float *)(iVar10 + 0x18) + *(float *)(iVar10 + 0xc);
      *(float *)(iVar10 + 0x10) = fVar3 * *(float *)(iVar10 + 0x1c) + *(float *)(iVar10 + 0x10);
      *(float *)(iVar10 + 0x14) = fVar3 * *(float *)(iVar10 + 0x20) + *(float *)(iVar10 + 0x14);
    } while (iVar13 < *(int *)(param_1 + 0x120));
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    iVar13 = *(int *)(param_1 + 0x124);
    *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(param_1 + 0xac);
    *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(param_1 + 0xb0);
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
LAB_004cb638:
    local_2c = 0;
    do {
      iVar13 = 1;
      fVar3 = (float)local_2c * _DAT_006e9340 * _DAT_006eeabc;
      fVar4 = _DAT_006e936c + fVar3;
      fVar3 = _DAT_006e936c - fVar3;
      if (1 < *(int *)(param_1 + 0x120)) {
        iVar12 = 0x2c;
        do {
          iVar10 = iVar12 + *(int *)(param_1 + 0x124);
          fVar5 = *(float *)(iVar12 + -0x18 + *(int *)(param_1 + 0x124)) - *(float *)(iVar10 + 0x14)
          ;
          fVar6 = *(float *)(iVar10 + -0x1c) - *(float *)(iVar10 + 0x10);
          fVar7 = *(float *)(iVar10 + -0x20) - *(float *)(iVar10 + 0xc);
          fVar8 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
          if (fVar8 < _DAT_006e9350 != (NAN(fVar8) || NAN(_DAT_006e9350))) {
            fVar8 = _DAT_006e9350;
          }
          iVar13 = iVar13 + 1;
          fVar8 = DAT_006e92e8 - *(float *)(iVar10 + 0x24) / fVar8;
          fVar9 = fVar4 * fVar8;
          *(float *)(iVar10 + 0xc) = fVar7 * fVar9 + *(float *)(iVar10 + 0xc);
          *(float *)(iVar10 + 0x10) = fVar6 * fVar9 + *(float *)(iVar10 + 0x10);
          *(float *)(iVar10 + 0x14) = fVar5 * fVar9 + *(float *)(iVar10 + 0x14);
          pfVar11 = (float *)(iVar12 + -0x20 + *(int *)(param_1 + 0x124));
          iVar12 = iVar12 + 0x2c;
          fVar8 = fVar8 * fVar3;
          *pfVar11 = *pfVar11 - fVar8 * fVar7;
          pfVar11[1] = pfVar11[1] - fVar8 * fVar6;
          pfVar11[2] = pfVar11[2] - fVar5 * fVar8;
        } while (iVar13 < *(int *)(param_1 + 0x120));
      }
      if (*(int *)(param_1 + 0xc0) != 0) {
        iVar13 = *(int *)(param_1 + 0x124);
        *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(param_1 + 0xa8);
        *(undefined4 *)(iVar13 + 0x10) = *(undefined4 *)(param_1 + 0xac);
        *(undefined4 *)(iVar13 + 0x14) = *(undefined4 *)(param_1 + 0xb0);
      }
      local_2c = local_2c + 1;
    } while (local_2c < 6);
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x124) + -0x20 + *(int *)(param_1 + 0x120) * 0x2c);
    *puVar2 = *(undefined4 *)(param_1 + 0xb4);
    puVar2[1] = *(undefined4 *)(param_1 + 0xb8);
    puVar2[2] = *(undefined4 *)(param_1 + 0xbc);
    if (*(int *)(param_1 + 0xc4) == 0) goto LAB_004cb638;
    iVar13 = 0xc;
    do {
      iVar12 = 1;
      if (1 < *(int *)(param_1 + 0x120)) {
        iVar10 = 0x2c;
        do {
          iVar1 = iVar10 + *(int *)(param_1 + 0x124);
          fVar4 = *(float *)(iVar10 + -0x18 + *(int *)(param_1 + 0x124)) - *(float *)(iVar1 + 0x14);
          fVar3 = *(float *)(iVar1 + -0x1c) - *(float *)(iVar1 + 0x10);
          fVar6 = *(float *)(iVar1 + -0x20) - *(float *)(iVar1 + 0xc);
          fVar5 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar6 * fVar6);
          if (fVar5 < _DAT_006e9350 != (NAN(fVar5) || NAN(_DAT_006e9350))) {
            fVar5 = _DAT_006e9350;
          }
          iVar12 = iVar12 + 1;
          fVar5 = (DAT_006e92e8 - *(float *)(iVar1 + 0x24) / fVar5) * _DAT_006e936c;
          *(float *)(iVar1 + 0xc) = fVar6 * fVar5 + *(float *)(iVar1 + 0xc);
          *(float *)(iVar1 + 0x10) = fVar5 * fVar3 + *(float *)(iVar1 + 0x10);
          *(float *)(iVar1 + 0x14) = fVar5 * fVar4 + *(float *)(iVar1 + 0x14);
          iVar1 = iVar10 + -0x20;
          pfVar11 = (float *)(iVar10 + -0x20 + *(int *)(param_1 + 0x124));
          iVar10 = iVar10 + 0x2c;
          *pfVar11 = *(float *)(iVar1 + *(int *)(param_1 + 0x124)) - fVar6 * fVar5;
          pfVar11[1] = pfVar11[1] - fVar5 * fVar3;
          pfVar11[2] = pfVar11[2] - fVar5 * fVar4;
        } while (iVar12 < *(int *)(param_1 + 0x120));
      }
      if (*(int *)(param_1 + 0xc0) != 0) {
        iVar12 = *(int *)(param_1 + 0x124);
        *(undefined4 *)(iVar12 + 0xc) = *(undefined4 *)(param_1 + 0xa8);
        *(undefined4 *)(iVar12 + 0x10) = *(undefined4 *)(param_1 + 0xac);
        *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(param_1 + 0xb0);
      }
      if (*(int *)(param_1 + 0xc4) != 0) {
        puVar2 = (undefined4 *)
                 (*(int *)(param_1 + 0x124) + -0x20 + *(int *)(param_1 + 0x120) * 0x2c);
        *puVar2 = *(undefined4 *)(param_1 + 0xb4);
        puVar2[1] = *(undefined4 *)(param_1 + 0xb8);
        puVar2[2] = *(undefined4 *)(param_1 + 0xbc);
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  fVar3 = DAT_006e92e8 / *(float *)(param_1 + 0x13c);
  iVar13 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    iVar12 = 0;
    do {
      fVar4 = *(float *)(*(int *)(param_1 + 0x124) + 0x14 + iVar12);
      pfVar11 = (float *)(*(int *)(param_1 + 0x124) + iVar12);
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 + 0x2c;
      pfVar11[6] = (pfVar11[3] - *pfVar11) * fVar3;
      pfVar11[7] = (pfVar11[4] - pfVar11[1]) * fVar3;
      pfVar11[8] = (fVar4 - pfVar11[2]) * fVar3;
    } while (iVar13 < *(int *)(param_1 + 0x120));
  }
LAB_004cb96d:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

