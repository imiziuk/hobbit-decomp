
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042e260(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fStack_24;
  float local_1c;
  float fStack_18;
  float fStack_14;
  undefined1 local_c [12];
  
  piVar1 = param_1 + 5;
  FUN_0042c8b0(piVar1,param_1[0x11d],1);
  if ((float)param_1[0x184] < *(float *)(param_1[0x114] + 0xc) !=
      (NAN((float)param_1[0x184]) || NAN(*(float *)(param_1[0x114] + 0xc)))) {
    param_1[0x284] = 1;
  }
  (**(code **)(*param_1 + 0x140))(piVar1,1,local_c,&local_1c);
  if ((float)param_1[6] - fStack_18 < _DAT_006e99bc !=
      (NAN((float)param_1[6] - fStack_18) || NAN(_DAT_006e99bc))) {
    param_1[0x160] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x164] = 1;
    param_1[0x167] = param_1[0x167] + 1;
    param_1[0x121] = 0;
    param_1[0x122] = 0;
    param_1[0x123] = 0;
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00720e1c,0x33c);
    return;
  }
  if (param_1[0x201] == 0) {
    FUN_0043a3f0(0xe,s_C__projects_meridian_Support_Obj_00720e1c,0x344);
    return;
  }
  if (((param_1[0x1be] != 0) && (param_1[0x1c2] == 0)) && (param_1[0x1c3] == 0)) {
    param_1[0x180] = 0;
  }
  if ((NAN((float)param_1[0x184]) || NAN(DAT_006e92e4)) == ((float)param_1[0x184] == DAT_006e92e4))
  {
    fVar7 = (float10)(**(code **)(*param_1 + 0x10c))();
    fStack_18 = (float)fVar7;
    local_1c = 0.0;
    fStack_14 = 0.0;
    FUN_00429030(&local_1c);
    unaff_EDI = DAT_006e92e8 / 1.0;
    iVar4 = FUN_0064cf30(unaff_EDI);
    if (iVar4 == 0) {
      fVar13 = 0.0;
      fVar12 = 0.0;
      fStack_24 = 0.0;
    }
    else {
      fVar13 = unaff_EDI * 0.0;
      fVar12 = unaff_EDI * 0.0;
      fStack_24 = unaff_EDI * 1.0;
    }
    if (param_1[0x1be] == 0) {
      fVar13 = fVar13 * (float)param_1[0x18c] +
               fStack_24 * (float)param_1[0x18e] + fVar12 * (float)param_1[0x18d];
    }
    else {
      fVar13 = DAT_006e92e4;
      if (DAT_006e92e4 < (float)param_1[0x181]) {
        fVar13 = *(float *)(param_1[0x114] + 0x124) + DAT_006e92e8;
      }
    }
    if ((_DAT_006e936c < (float)param_1[0x247]) && (*(float *)(param_1[0x114] + 0x124) < fVar13)) {
      iVar4 = FUN_00442640();
      if (iVar4 == 0) {
        return;
      }
      param_1[0x160] = 1;
      param_1[0x163] = param_1[0x163] + 1;
      param_1[0x164] = 1;
      param_1[0x167] = param_1[0x167] + 1;
      param_1[0x121] = 0;
      param_1[0x122] = 0;
      param_1[0x123] = 0;
      FUN_0043a3f0(0xd,s_C__projects_meridian_Support_Obj_00720e1c,0x365);
      return;
    }
  }
  if (((_DAT_006e936c < (float)param_1[0x247]) &&
      ((float)param_1[0x183] < DAT_006e92e4 != (NAN((float)param_1[0x183]) || NAN(DAT_006e92e4))))
     && ((float)param_1[0x181] < _DAT_006ebfc8 != (NAN((float)param_1[0x181]) || NAN(_DAT_006ebfc8))
        )) {
    unaff_ESI = (float)param_1[0x11d];
    iVar4 = FUN_00442a80(piVar1,unaff_ESI,*(undefined4 *)(param_1[0x114] + 0x90),
                         *(undefined4 *)(param_1[0x114] + 0x94),1,2,&stack0xffffffd4,&local_1c);
    if (iVar4 != 0) {
      param_1[0x160] = 1;
      param_1[0x163] = param_1[0x163] + 1;
      param_1[0x164] = 1;
      param_1[0x167] = param_1[0x167] + 1;
      param_1[0x121] = 0;
      param_1[0x122] = 0;
      param_1[0x123] = 0;
      FUN_0043a3f0(9,s_C__projects_meridian_Support_Obj_00720e1c,0x37c);
      return;
    }
  }
  if (param_1[400] != 0) {
    param_1[0xe8c] = 0x3f000000;
    fVar13 = (float)param_1[0x11d] + _DAT_006e9368;
    param_1[0x160] = 1;
    param_1[0x11d] = (int)fVar13;
    param_1[0x164] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x167] = param_1[0x167] + 1;
    param_1[0x1d7] = *(int *)(param_1[0x114] + 0xa4);
    param_1[0x1d5] = 0;
    param_1[0x1d6] = 0;
    FUN_0064c8e0(param_1[0x11d],&stack0xffffffd0,&stack0xffffffcc);
    fVar13 = (float)param_1[0x1d5];
    param_1[0x1d5] = (int)(fVar13 * unaff_EDI + unaff_ESI * (float)param_1[0x1d7]);
    param_1[0x1d7] = (int)((float)param_1[0x1d7] * unaff_EDI - fVar13 * unaff_ESI);
    param_1[0x160] = 1;
    param_1[0x163] = param_1[0x163] + 1;
    param_1[0x164] = 1;
    param_1[0x167] = param_1[0x167] + 1;
    param_1[0x121] = 0;
    param_1[0x122] = 0;
    param_1[0x123] = 0;
    FUN_0043a3f0(5,s_C__projects_meridian_Support_Obj_00720e1c,0x38c);
    return;
  }
  if (param_1[0x194] != 0) {
    param_1[0x1d5] = 0;
    param_1[0x1d6] = 0;
    param_1[0x1d7] = 0;
    param_1[0xe8c] = 0x3f000000;
    FUN_0043a3f0(0xe,s_C__projects_meridian_Support_Obj_00720e1c,0x396);
    return;
  }
  if ((NAN((float)param_1[0x184]) || NAN(DAT_006e92e4)) == ((float)param_1[0x184] == DAT_006e92e4))
  {
    if (param_1[0x1be] == 0) {
      fVar7 = (float10)(**(code **)(*param_1 + 0x10c))();
      fStack_18 = (float)fVar7;
      local_1c = 0.0;
      fStack_14 = 0.0;
      FUN_00429030(&local_1c);
      fStack_24 = DAT_006e92e8 / 1.0;
      iVar4 = FUN_0064cf30(fStack_24);
      if (iVar4 == 0) {
        fStack_14 = 0.0;
        fVar13 = 0.0;
        fStack_24 = 0.0;
      }
      else {
        fStack_14 = fStack_24 * 0.0;
        fVar13 = fStack_24 * 0.0;
        fStack_24 = fStack_24 * 1.0;
      }
      local_1c = fVar13 * DAT_006e92e4 - fStack_24;
      fStack_18 = fStack_24 * DAT_006e92e4 - fStack_14 * DAT_006e92e4;
      fStack_14 = fStack_14 - fVar13 * DAT_006e92e4;
      fVar3 = DAT_006e92e8 /
              SQRT(fStack_18 * fStack_18 + fStack_14 * fStack_14 + local_1c * local_1c);
      iVar4 = FUN_0064cf30(fVar3);
      fVar13 = DAT_006e92e4;
      fVar12 = DAT_006e92e4;
      fVar2 = DAT_006e92e4;
      if (iVar4 != 0) {
        fVar13 = fStack_14 * fVar3;
        fVar12 = fStack_18 * fVar3;
        fVar2 = local_1c * fVar3;
      }
      fVar13 = fVar2 * (float)param_1[0x18c] +
               fVar12 * (float)param_1[0x18d] + fVar13 * (float)param_1[0x18e];
    }
    else if ((float)param_1[0x180] <= DAT_006e92e4) {
      fVar13 = DAT_006e92e4;
      if ((float)param_1[0x180] < DAT_006e92e4 != (NAN((float)param_1[0x180]) || NAN(DAT_006e92e4)))
      {
        fVar13 = -*(float *)(param_1[0x114] + 0x128) - DAT_006e92e8;
      }
    }
    else {
      fVar13 = *(float *)(param_1[0x114] + 0x128) + DAT_006e92e8;
    }
    if (fVar13 <= *(float *)(param_1[0x114] + 0x128)) {
      fVar12 = -*(float *)(param_1[0x114] + 0x128);
      if (fVar13 < fVar12 == (NAN(fVar13) || NAN(fVar12))) {
        iVar4 = param_1[0x158];
        if (*(int *)(iVar4 + 8) != -1) {
          FUN_00549470(iVar4 + 4);
          FUN_00549580(iVar4 + 4);
          iVar6 = FUN_0053cc70(s_edge_mount_easy_00720e78);
          if (*(int *)(iVar4 + 8) == iVar6) {
            if (param_1[0x14d] < 1) {
              iVar4 = param_1[0x14b];
              goto LAB_0042ea91;
            }
            goto LAB_0042ea9e;
          }
        }
        goto LAB_0042eb40;
      }
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar8 = s_EDGE_LEFT_00720e88;
    }
    else {
      FUN_00549470(param_1 + 0x115);
      FUN_00549580(param_1 + 0x115);
      pcVar8 = s_EDGE_RIGHT_00720e94;
    }
    uVar11 = 0x3e000000;
    uVar10 = 1;
    uVar9 = 1;
    uVar5 = FUN_0053cc70(pcVar8);
    FUN_00540840(uVar5,uVar9,uVar10,uVar11);
    param_1[0x1e5] = (int)((float)param_1[0x184] * _DAT_006e99b4);
  }
  else {
    iVar4 = param_1[0x158];
    if (*(int *)(iVar4 + 8) != -1) {
      FUN_00549470(iVar4 + 4);
      FUN_00549580(iVar4 + 4);
      iVar6 = FUN_0053cc70(s_edge_mount_easy_00720e78);
      if (*(int *)(iVar4 + 8) == iVar6) {
        if (param_1[0x14d] < 1) {
          iVar4 = param_1[0x14b];
LAB_0042ea91:
          if ((float)(iVar4 + -2) < (float)param_1[0x14c] ==
              ((float)(iVar4 + -2) == (float)param_1[0x14c])) goto LAB_0042eae8;
        }
LAB_0042ea9e:
        param_1[0x1e5] = 0x3f800000;
        FUN_00549470(param_1 + 0x115);
        FUN_00549580(param_1 + 0x115);
        uVar11 = 0x3e000000;
        uVar10 = 1;
        uVar9 = 1;
        uVar5 = FUN_0053cc70(s_EDGE_IDLE_00720e6c);
        FUN_00540840(uVar5,uVar9,uVar10,uVar11);
        goto LAB_0042eae8;
      }
    }
LAB_0042eb40:
    param_1[0x1e5] = 0x3f800000;
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    uVar11 = 0x3e000000;
    uVar10 = 1;
    uVar9 = 1;
    uVar5 = FUN_0053cc70(s_EDGE_IDLE_00720e6c);
    FUN_00540840(uVar5,uVar9,uVar10,uVar11);
  }
LAB_0042eae8:
  iVar4 = param_1[0x114];
  param_1[0x160] = 1;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x164] = 1;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x121] = *(int *)(iVar4 + 0xfc);
  param_1[0x122] = *(int *)(iVar4 + 0x100);
  param_1[0x123] = *(int *)(iVar4 + 0x104);
  return;
}

