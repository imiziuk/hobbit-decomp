
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00429d00(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_28;
  undefined1 local_1c [12];
  undefined1 local_10 [16];
  
  param_1[0x1ec] = 0;
  if ((float)param_1[6] < (float)param_1[0x272] ==
      (NAN((float)param_1[6]) || NAN((float)param_1[0x272]))) {
    iVar5 = param_1[6];
  }
  else {
    iVar5 = param_1[0x272];
  }
  param_1[0x272] = iVar5;
  if ((float)param_1[6] <= (float)param_1[0x273]) {
    iVar5 = param_1[6];
  }
  else {
    iVar5 = param_1[0x273];
  }
  pfVar1 = (float *)(param_1 + 5);
  param_1[0x273] = iVar5;
  (**(code **)(*param_1 + 0x140))(pfVar1,0,local_1c,local_10);
  if ((param_1[0x2a] != 0 || param_1[0x2b] != 0) &&
     (iVar5 = FUN_004021c0(param_1[0x2a],param_1[0x2b]), iVar5 != 0)) {
    if (*(char *)(iVar5 + 0x7c) == '\x0e') {
      FUN_00491ad0(&iStack_38);
    }
    if ((*(char *)(iVar5 + 0x7c) == '.') && (*(char *)(iVar5 + 0x154) < '\0')) {
      FUN_0043a3f0(0x1b,s_C__projects_meridian_Support_Obj_00720b28,0x932);
      return;
    }
  }
  fVar6 = (float10)FUN_0056b610(param_1[0x185]);
  fStack_34 = (float)fVar6;
  FUN_00428790(0);
  FUN_004286f0(0);
  FUN_00428740(fStack_34);
  fVar2 = (float)param_1[0x184];
  fVar3 = *(float *)(param_1[0x114] + 0x44);
  fVar4 = (float)param_1[0x248];
  fStack_30 = fVar2 * 1.0 * fVar3;
  param_1[0x1ed] = (int)(fVar2 * 0.0 * fVar3 * fVar4 + (float)param_1[0x1ed]);
  param_1[0x1ee] = (int)(fVar2 * 0.0 * fVar3 * fVar4 + (float)param_1[0x1ee]);
  param_1[0x1ef] = (int)(fStack_30 * fVar4 + (float)param_1[0x1ef]);
  fVar2 = SQRT((float)param_1[0x1ef] * (float)param_1[0x1ef] +
               (float)param_1[0x1ed] * (float)param_1[0x1ed]);
  if (DAT_006e92e4 < fVar2) {
    fVar3 = DAT_006e92e8 / fVar2;
    param_1[0x1ed] = (int)(fVar3 * (float)param_1[0x1ed]);
    param_1[0x1ef] = (int)(fVar3 * (float)param_1[0x1ef]);
    fVar3 = *(float *)(param_1[0x114] + 0x48);
    if (fVar2 < fVar3 == (NAN(fVar2) || NAN(fVar3))) {
      fVar2 = *(float *)(param_1[0x114] + 0x48);
    }
    param_1[0x1ee] = 0;
    param_1[0x1ed] = (int)(fVar2 * (float)param_1[0x1ed]);
    param_1[0x1ef] = (int)(fVar2 * (float)param_1[0x1ef]);
  }
  if (((float)param_1[0x1d6] < DAT_006e92e4 != (NAN((float)param_1[0x1d6]) || NAN(DAT_006e92e4))) &&
     ((float)param_1[6] - fStack_28 < *(float *)(param_1[0x114] + 0x4c) !=
      (NAN((float)param_1[6] - fStack_28) || NAN(*(float *)(param_1[0x114] + 0x4c))))) {
    fStack_44 = *pfVar1 - *pfVar1;
    fStack_40 = (fStack_28 + _DAT_006e99bc) - (float)param_1[6];
    fStack_3c = (float)param_1[7] - (float)param_1[7];
    FUN_00469060(&stack0xffffffb0,&fStack_44,0,0xbf800000,0,1,1);
    (**(code **)(*param_1 + 0x14))(&stack0xffffffb0,0);
    FUN_00442550(1);
    fStack_40 = (float)param_1[0x1d5];
    iStack_38 = param_1[0x1d7];
    fStack_3c = 0.0;
    FUN_00442560(&fStack_40,0x3e800000);
    FUN_0043a3f0(7,s_C__projects_meridian_Support_Obj_00720b28,0x962);
  }
  return;
}

