
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004577b0(int *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0320;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_audio_emitter__OnAdvanceLogic_00725794);
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x43) & 2) == 0) goto switchD_004579fd_default;
  fVar1 = (float)param_1[0x36];
  uVar2 = param_1[0x37];
  if (fVar1 != 0.0 || uVar2 != 0) {
    local_24 = fVar1;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    iVar5 = (int)*(short *)(&DAT_0076cd88 + (((uint)fVar1 ^ uVar2) * -0xfb & 0xfff) * 2);
    for (iVar6 = iVar5; iVar6 != -1; iVar6 = (int)*(short *)(DAT_0076f648 + iVar6 * 0x14 + 0xe)) {
    }
    while (iVar5 != -1) {
      piVar8 = (int *)(DAT_0076f648 + iVar5 * 0x14);
      iVar6 = *piVar8;
      if (((iVar6 != 0) && (*(float *)(iVar6 + 8) == local_24)) && (*(uint *)(iVar6 + 0xc) == uVar2)
         ) {
        if (iVar5 != -1) {
          uVar2 = *(uint *)(DAT_0076f648 + iVar5 * 0x14);
          local_4 = (uint)local_4._1_3_ << 8;
          piVar8 = (int *)(-(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2);
          FUN_00649720();
          goto LAB_004578c4;
        }
        break;
      }
      iVar5 = (int)*(short *)((int)piVar8 + 0xe);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    piVar8 = (int *)0x0;
LAB_004578c4:
    pfVar7 = (float *)(**(code **)(*piVar8 + 0x28))();
    fStack_1c = pfVar7[2] + (float)param_1[0x3a];
    fStack_20 = pfVar7[1] + (float)param_1[0x39];
    local_24 = *pfVar7 + (float)param_1[0x38];
    (**(code **)(*param_1 + 0x14))(&local_24,0);
    iVar6 = FUN_00659e10(param_1[0x4c]);
    if (iVar6 != 0) {
      FUN_0065a290(param_1[0x4c],param_1 + 5);
    }
  }
  bVar4 = false;
  FUN_0056bb40(&local_24);
  FUN_0056bb40(&fStack_18);
  if (((((fStack_18 < (float)param_1[0x14] != (fStack_18 == (float)param_1[0x14])) &&
        (fStack_14 < (float)param_1[0x15] != (fStack_14 == (float)param_1[0x15]))) &&
       ((fStack_10 < (float)param_1[0x16] != (fStack_10 == (float)param_1[0x16]) &&
        (((float)param_1[0x11] <= fStack_18 && ((float)param_1[0x12] <= fStack_14)))))) &&
      ((float)param_1[0x13] <= fStack_10)) &&
     (fVar1 = (fStack_10 - (float)param_1[7]) * (fStack_10 - (float)param_1[7]) +
              (fStack_14 - (float)param_1[6]) * (fStack_14 - (float)param_1[6]) +
              (fStack_18 - (float)param_1[5]) * (fStack_18 - (float)param_1[5]),
     fVar3 = (float)param_1[0x2b] * (float)param_1[0x2b], fVar1 < fVar3 != (fVar1 == fVar3))) {
    bVar4 = true;
  }
  switch(param_1[0x32]) {
  case 0:
    goto switchD_004579fd_caseD_0;
  case 1:
    if (bVar4) {
      iVar6 = FUN_00659f30(param_1[0x4c]);
      if (iVar6 == 0) {
        iVar6 = FUN_00659630(*(undefined4 *)param_1[0x3e],param_1 + 5,1);
        fVar1 = (float)param_1[0x2d] * _DAT_006e99bc;
        param_1[0x4c] = iVar6;
        FUN_0065a2f0(iVar6,param_1[0x2c],fVar1);
      }
      FUN_004576c0();
    }
    else {
      iVar6 = FUN_00659e10();
      if ((iVar6 != 0) || (iVar6 = FUN_00659e70(param_1[0x4c]), iVar6 != 0)) {
        FUN_00659c80(param_1[0x4c],0);
      }
      param_1[0x4c] = 0;
    }
    break;
  case 2:
    fVar1 = (float)param_1[0x50];
    if (bVar4) {
      if (fVar1 < DAT_006e92e8 == (NAN(fVar1) || NAN(DAT_006e92e8))) {
        iVar6 = 2;
      }
      else {
        iVar6 = 1;
      }
    }
    else if (fVar1 <= (float)param_1[0x34]) {
      iVar6 = 0;
    }
    else {
      iVar6 = 3;
    }
    switch(param_1[0x4f]) {
    case 0:
      if (bVar4) {
        param_1[0x4f] = 1;
        param_1[0x51] = 0;
        param_1[0x50] = param_1[0x34];
        iVar5 = FUN_00659600(*(undefined4 *)param_1[0x3e],1);
        param_1[0x4c] = iVar5;
      }
      break;
    case 1:
      param_2 = param_2 + (float)param_1[0x51];
      param_1[0x51] = (int)param_2;
      if (iVar6 == 1) {
        if ((float)param_1[0x33] <= param_2) {
          iVar6 = 2;
          goto LAB_00457c76;
        }
        param_1[0x50] =
             (int)((param_2 / (float)param_1[0x33]) * DAT_006e92e4 + (float)param_1[0x34]);
      }
      break;
    case 2:
      if (!bVar4) {
        param_1[0x4f] = 3;
LAB_00457c76:
        param_1[0x51] = param_1[0x33];
      }
      break;
    case 3:
      fVar1 = (float)param_1[0x51] - param_2;
      param_1[0x51] = (int)fVar1;
      if (iVar6 == 3) {
        if (fVar1 < DAT_006e92e4 == (fVar1 == DAT_006e92e4)) {
          param_1[0x50] =
               (int)((fVar1 / (float)param_1[0x33]) * (DAT_006e92e8 - (float)param_1[0x34]) +
                    (float)param_1[0x34]);
        }
        else {
          FUN_00659c80(param_1[0x4c],0);
          param_1[0x4c] = 0;
          param_1[0x51] = 0;
          param_1[0x50] = param_1[0x34];
          iVar6 = 0;
        }
      }
      else if (iVar6 == 0) {
        FUN_00659c80(param_1[0x4c],0);
        param_1[0x4c] = 0;
        param_1[0x51] = 0;
        param_1[0x50] = param_1[0x34];
      }
      else {
        param_1[0x4f] = 1;
        param_1[0x51] = (int)(fVar1 + param_2);
      }
    }
    if (param_1[0x4c] != 0) {
      FUN_0065a050(param_1[0x4c],param_1[0x50]);
    }
    param_1[0x4f] = iVar6;
    break;
  case 3:
    if (param_1[0x42] != 0) break;
switchD_004579fd_caseD_0:
    if (param_1[0x4c] != 0) {
      iVar6 = FUN_00659e10(param_1[0x4c]);
      if (iVar6 == 0) {
        param_1[0x4c] = 0;
      }
      else {
        FUN_004576c0();
        iVar6 = FUN_004582f0();
        if (iVar6 != 0) break;
      }
    }
    if ((bVar4) &&
       (fVar1 = (float)param_1[0x48], param_1[0x48] = (int)(param_2 + fVar1),
       (float)param_1[0x49] <= param_2 + fVar1)) {
      FUN_00457f00();
      FUN_00457690();
    }
  }
switchD_004579fd_default:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

