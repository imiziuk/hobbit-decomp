
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00468460(int param_1,float *param_2,int param_3,float *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0dc8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_Character__FindGround_007267fc);
  *(undefined1 *)(param_1 + 0xb0) = 0xf;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  local_28 = param_2[2];
  local_2c = param_2[1] + _DAT_006e9554;
  local_4 = 0;
  local_30 = *param_2;
  local_20 = param_2[1] - _DAT_006e9988;
  fVar2 = local_2c - local_20;
  local_24 = local_30;
  local_1c = local_28;
  FUN_00401f00(*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x44),
               *(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x48),
               *(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x4c));
  param_2 = (float *)(local_14 - _DAT_006e9554);
  if ((float)param_2 <= _DAT_006e9554) {
    param_2 = (float *)0x41200000;
  }
  FUN_00579080(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_30,&local_24,
               param_2,*(undefined4 *)(param_1 + 0xe0),0x2e00001);
  FUN_005798f0(8);
  if (DAT_0072623c != 0) {
    _DAT_007778c8 = 1;
    _DAT_007778cc = 0;
    if (*(char *)(param_1 + 0x7c) == '\x12') {
      iVar5 = FUN_0041bcc0();
      _DAT_007778cc = 2;
      if (*(int *)(iVar5 + 0x8d4) == 0x28) {
        _DAT_007778cc = 10;
      }
    }
    else {
      _DAT_007778cc = 0;
      if (*(char *)(param_1 + 0x7c) == '\x1c') {
        _DAT_007778cc = 1;
      }
    }
  }
  FUN_00577e70();
  iVar5 = -1;
  iVar9 = -1;
  if (DAT_00773970 == 0) goto LAB_0046882b;
  iVar7 = 0;
  if (0 < DAT_00773970) {
    pfVar8 = (float *)&DAT_00773504;
    do {
      if (*pfVar8 < _DAT_006e9380 == (NAN(*pfVar8) || NAN(_DAT_006e9380))) {
        if ((iVar5 == -1) && (*(float *)(param_1 + 0xd4) <= *pfVar8)) {
          iVar5 = iVar7;
        }
        if ((iVar9 == -1) &&
           (*pfVar8 < *(float *)(param_1 + 0xd4) !=
            (NAN(*pfVar8) || NAN(*(float *)(param_1 + 0xd4))))) {
          iVar9 = iVar7;
        }
      }
      iVar7 = iVar7 + 1;
      pfVar8 = pfVar8 + 0x12;
    } while (iVar7 < DAT_00773970);
  }
  iVar7 = iVar5;
  if (param_3 == 0) {
    if (iVar5 == -1) {
LAB_00468680:
      iVar7 = iVar9;
      if (iVar9 == iVar5) goto LAB_00468686;
    }
    else if (iVar9 != -1) {
      fVar3 = DAT_006e92e8 / fVar2;
      if ((float)(&DAT_007734f0)[iVar5 * 0x12] - (float)(&DAT_007734f0)[iVar9 * 0x12] < fVar3 !=
          (NAN((float)(&DAT_007734f0)[iVar5 * 0x12] - (float)(&DAT_007734f0)[iVar9 * 0x12]) ||
          NAN(fVar3))) goto LAB_00468686;
      goto LAB_00468680;
    }
  }
  else {
LAB_00468686:
    if (iVar9 != -1) {
      fVar3 = (float)(&DAT_007734f8)[iVar9 * 0x12] - (float)(&DAT_007734f8)[iVar5 * 0x12];
      if (fVar3 < DAT_006e92e4 != (NAN(fVar3) || NAN(DAT_006e92e4))) {
        fVar3 = -fVar3;
      }
      if ((fVar3 < _DAT_006ec08c != (NAN(fVar3) || NAN(_DAT_006ec08c))) &&
         (uVar6 = FUN_0057dcc0(&DAT_00773520 + iVar9 * 0x12,(&DAT_00773528)[iVar9 * 0x12]),
         (uVar6 & 0x20) != 0)) {
        iVar7 = iVar9;
      }
    }
  }
  if (iVar7 != -1) {
    fVar2 = (float)(&DAT_007734f0)[iVar7 * 0x12] - _DAT_006e95a8 / fVar2;
    if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
      fVar2 = DAT_006e92e4;
    }
    puVar1 = (undefined4 *)(param_1 + 0xa8);
    *param_4 = (local_24 - local_30) * fVar2 + local_30;
    param_4[1] = (local_20 - local_2c) * fVar2 + local_2c;
    param_4[2] = local_28 + (local_1c - local_28) * fVar2;
    *param_5 = (&DAT_00773500)[iVar7 * 0x12];
    param_5[1] = (&DAT_00773504)[iVar7 * 0x12];
    param_5[2] = (&DAT_00773508)[iVar7 * 0x12];
    param_5[3] = (&DAT_0077350c)[iVar7 * 0x12];
    *puVar1 = (&DAT_00773520)[iVar7 * 0x12];
    *(undefined4 *)(param_1 + 0xac) = (&DAT_00773524)[iVar7 * 0x12];
    uVar4 = FUN_0057dd10(puVar1,(&DAT_00773528)[iVar7 * 0x12]);
    *(undefined1 *)(param_1 + 0xb0) = uVar4;
    uVar4 = FUN_0057dcc0(puVar1,(&DAT_00773528)[iVar7 * 0x12]);
    *(undefined1 *)(param_1 + 0xb1) = uVar4;
    *(undefined4 *)(param_1 + 0xb4) = (&DAT_00773500)[iVar7 * 0x12];
    *(undefined4 *)(param_1 + 0xb8) = (&DAT_00773504)[iVar7 * 0x12];
    *(undefined4 *)(param_1 + 0xbc) = (&DAT_00773508)[iVar7 * 0x12];
    *(undefined4 *)(param_1 + 0xc0) = (&DAT_0077350c)[iVar7 * 0x12];
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 1;
  }
LAB_0046882b:
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0xf;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  *param_4 = local_24;
  param_4[2] = local_1c;
  param_4[1] = local_20;
  param_5[1] = 0x3f800000;
  param_5[2] = 0;
  *param_5 = 0;
  local_4 = 0xffffffff;
  param_5[3] = -(param_4[2] * DAT_006e92e4 + *param_4 * DAT_006e92e4 + param_4[1]);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = param_5[1];
  *(undefined4 *)(param_1 + 0xbc) = param_5[2];
  *(undefined4 *)(param_1 + 0xc0) = param_5[3];
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

