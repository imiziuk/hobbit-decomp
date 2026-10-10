
void __fastcall FUN_00422590(int *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 local_34 [4];
  float fStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 local_10 [16];
  
  FUN_00425e90(6);
  lVar4 = FUN_00468420();
  if (lVar4 != 0) {
    uVar5 = FUN_00468420();
    iVar3 = FUN_004021c0(uVar5);
    if (iVar3 == 0) {
      FUN_00468420();
      FUN_00468430(0,0);
    }
    else {
      FUN_00468410();
      FUN_00468420();
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x140))(param_1 + 5,1,local_34,local_10);
  if (iVar3 == 0) {
    fStack_20 = 0.0;
    fStack_1c = 1.0;
    fStack_18 = 0.0;
    fStack_14 = -((float)param_1[5] * DAT_006e92e4 + (float)param_1[7] * DAT_006e92e4 +
                 (float)param_1[6]);
  }
  iVar3 = param_1[0x114];
  iVar1 = param_1[0x235];
  fVar2 = fStack_18 * (float)param_1[0x1d7] +
          fStack_20 * (float)param_1[0x1d5] + fStack_1c * (float)param_1[0x1d6];
  fStack_24 = fStack_18 * fVar2;
  fStack_30 = (float)param_1[0x1d7] - fStack_24;
  param_1[0x1d6] = (int)(fStack_1c * *(float *)(iVar3 + 0x3c));
  if (((iVar1 == 1) || (iVar1 == 0x11)) || (iVar1 == 7)) {
    param_1[0x1d5] = 0;
    param_1[0x1d7] = 0;
  }
  else {
    param_1[0x1d5] = (int)(((float)param_1[0x1d5] - fStack_20 * fVar2) * *(float *)(iVar3 + 0x40));
    param_1[0x1d7] = (int)(fStack_30 * *(float *)(iVar3 + 0x40));
  }
  if (param_1[0x11b4] == 0) {
    FUN_0043a3f0(5,s_C__projects_meridian_Support_Obj_007200c0,0xe69);
    FUN_00425c80();
    return;
  }
  FUN_0043a3f0(0x13,s_C__projects_meridian_Support_Obj_007200c0,0xe6d);
  FUN_00425c80();
  return;
}

