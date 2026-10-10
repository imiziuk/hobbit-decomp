
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005c5740(int *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  void *pvVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int local_b34;
  undefined1 local_b30 [4];
  float local_b2c;
  float local_b28;
  float local_b24;
  float local_b20;
  float local_b18;
  undefined1 local_b10 [512];
  int local_910;
  undefined4 local_90c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df70b;
  local_c = ExceptionList;
  local_b10[0] = 0;
  ExceptionList = &local_c;
  if ((param_3 != 0) && (ExceptionList = &local_c, iVar4 = FUN_00647cf0(param_3), 0 < iVar4)) {
    FUN_006489b0(param_3,local_b10);
    FUN_00647dc0(local_b10,&DAT_00731054);
  }
  iVar7 = 1;
  FUN_0064f350(local_b30,4,1,param_2);
  FUN_0064f350(param_1,0x90,1,param_2);
  FUN_0064f350(local_b30,4,1,param_2);
  iVar4 = *param_1;
  FUN_005a3470();
  local_b34 = __ftol();
  if (local_b34 < iVar4 / 3) {
    local_b34 = iVar4 / 3;
  }
  if (local_b34 < 1) {
    local_b34 = 1;
  }
  else if (iVar4 < local_b34) {
    local_b34 = iVar4;
  }
  pvVar5 = operator_new(iVar4 * 0xc);
  param_1[1] = (int)pvVar5;
  *(int *)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
  DAT_007f23d4 = DAT_007f23d4 + 1;
  iVar8 = DAT_007f23cc - (*param_1 * 4 + 0xfU & 0xfffffff0);
  iVar4 = 0;
  DAT_007f23cc = iVar8;
  if (0 < *param_1) {
    do {
      *(int *)(iVar8 + iVar4 * 4) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_1);
  }
  FUN_00647b50();
  if (1 < *param_1) {
    do {
      iVar4 = FUN_00647ba0(0,iVar7);
      uVar2 = *(undefined4 *)(iVar8 + iVar7 * 4);
      *(undefined4 *)(iVar8 + iVar7 * 4) = *(undefined4 *)(iVar8 + iVar4 * 4);
      *(undefined4 *)(iVar8 + iVar4 * 4) = uVar2;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *param_1);
  }
  iVar4 = 0;
  if (0 < *param_1) {
    do {
      FUN_0064f350(&local_b2c,0xc,1,param_2);
      pfVar6 = (float *)(param_1[1] + *(int *)(iVar8 + iVar4 * 4) * 0xc);
      *pfVar6 = local_b2c;
      pfVar6[1] = local_b28;
      pfVar6[2] = local_b24;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_1);
  }
  DAT_007f23cc = *(int *)(&DAT_007f23dc + DAT_007f23d4 * 4);
  DAT_007f23d4 = DAT_007f23d4 + -1;
  *param_1 = local_b34;
  FUN_0064f350(local_b30,4,1,param_2);
  FUN_00557e00();
  local_4 = 0;
  FUN_005582b0(param_2,local_b10);
  local_90c = 1;
  param_1[0x1b] = local_910;
  FUN_0064f350(local_b30,4,1,param_2);
  iVar4 = *param_1;
  pfVar6 = (float *)param_1[1];
  if (0 < iVar4) {
    do {
      if (*pfVar6 < (float)param_1[0x1c] != (NAN(*pfVar6) || NAN((float)param_1[0x1c]))) {
        param_1[0x1c] = (int)*pfVar6;
      }
      if (pfVar6[1] < (float)param_1[0x1d] != (NAN(pfVar6[1]) || NAN((float)param_1[0x1d]))) {
        param_1[0x1d] = (int)pfVar6[1];
      }
      if (pfVar6[2] < (float)param_1[0x1e] != (NAN(pfVar6[2]) || NAN((float)param_1[0x1e]))) {
        param_1[0x1e] = (int)pfVar6[2];
      }
      if ((float)param_1[0x1f] < *pfVar6) {
        param_1[0x1f] = (int)*pfVar6;
      }
      if ((float)param_1[0x20] < pfVar6[1]) {
        param_1[0x20] = (int)pfVar6[1];
      }
      if ((float)param_1[0x21] < pfVar6[2]) {
        param_1[0x21] = (int)pfVar6[2];
      }
      pfVar6 = pfVar6 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_b2c = 3.4028235e+38;
  local_b28 = 3.4028235e+38;
  local_b24 = 3.4028235e+38;
  local_b20 = -3.4028235e+38;
  local_b18 = -3.4028235e+38;
  pfVar6 = (float *)(param_1 + 2);
  iVar4 = 5;
  fVar1 = _DAT_006ec010;
  do {
    if (*pfVar6 < local_b2c != (NAN(*pfVar6) || NAN(local_b2c))) {
      local_b2c = *pfVar6;
    }
    if (pfVar6[1] < local_b28 != (NAN(pfVar6[1]) || NAN(local_b28))) {
      local_b28 = pfVar6[1];
    }
    if (pfVar6[2] < local_b24 != (NAN(pfVar6[2]) || NAN(local_b24))) {
      local_b24 = pfVar6[2];
    }
    if (local_b20 < *pfVar6) {
      local_b20 = *pfVar6;
    }
    if (fVar1 < pfVar6[1] != (NAN(fVar1) || NAN(pfVar6[1]))) {
      fVar1 = pfVar6[1];
    }
    if (local_b18 < pfVar6[2]) {
      local_b18 = pfVar6[2];
    }
    pfVar6 = pfVar6 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  fVar3 = local_b20 - local_b2c;
  param_1[0x1c] = (int)((float)param_1[0x1c] - fVar3);
  param_1[0x1f] = (int)(fVar3 + (float)param_1[0x1f]);
  param_1[0x1d] = (int)((float)param_1[0x1d] - (fVar1 - local_b28));
  param_1[0x20] = (int)((fVar1 - local_b28) + (float)param_1[0x20]);
  param_1[0x1e] = (int)((float)param_1[0x1e] - fVar3);
  param_1[0x21] = (int)(fVar3 + (float)param_1[0x21]);
  param_1[0x10] = (int)((float)param_1[0x10] - fVar3 * _DAT_006e95a8);
  FUN_005c5b30();
  local_4 = 0xffffffff;
  FUN_00557f20();
  ExceptionList = local_c;
  return;
}

