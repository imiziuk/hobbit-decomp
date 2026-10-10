
void __fastcall FUN_00490240(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  fStack_c0 = (float)param_1[0x50];
  fStack_bc = (float)param_1[0x51] * DAT_006e92e4;
  fStack_ac = (float)param_1[0x51];
  fStack_98 = (float)param_1[0x52];
  fStack_b8 = (float)param_1[0x52] * DAT_006e92e4;
  fStack_94 = 0.0;
  fStack_a4 = 0.0;
  fStack_b0 = (float)param_1[0x50] * DAT_006e92e4;
  fStack_b4 = 0.0;
  fStack_84 = 1.0;
  fStack_a8 = fStack_b8;
  fStack_a0 = fStack_b0;
  fStack_9c = fStack_bc;
  fStack_90 = fStack_b0;
  fStack_8c = fStack_bc;
  fStack_88 = fStack_b8;
  FUN_004935d0(param_1 + 0x4c);
  uVar5 = FUN_0064e040(auStack_40,auStack_80,&fStack_c0);
  FUN_00406570(uVar5);
  if (((((NAN(fStack_b4) || NAN(DAT_006e92e4)) == (fStack_b4 == DAT_006e92e4)) ||
       ((NAN(fStack_a4) || NAN(DAT_006e92e4)) == (fStack_a4 == DAT_006e92e4))) ||
      ((NAN(fStack_94) || NAN(DAT_006e92e4)) == (fStack_94 == DAT_006e92e4))) ||
     ((NAN(fStack_84) || NAN(DAT_006e92e8)) == (fStack_84 == DAT_006e92e8))) {
    fStack_c0 = fStack_b4 * (float)param_1[5] + fStack_c0;
    fStack_b0 = fStack_a4 * (float)param_1[5] + fStack_b0;
    fStack_a0 = fStack_94 * (float)param_1[5] + fStack_a0;
    fVar2 = fStack_84 * (float)param_1[5];
    fStack_bc = fStack_b4 * (float)param_1[6] + fStack_bc;
    fStack_ac = fStack_a4 * (float)param_1[6] + fStack_ac;
    fStack_9c = fStack_94 * (float)param_1[6] + fStack_9c;
    fVar3 = fStack_84 * (float)param_1[6];
    fStack_b8 = fStack_b4 * (float)param_1[7] + fStack_b8;
    fStack_a8 = fStack_a4 * (float)param_1[7] + fStack_a8;
    fStack_98 = fStack_94 * (float)param_1[7] + fStack_98;
    fVar4 = fStack_84 * (float)param_1[7];
  }
  else {
    fVar2 = (float)param_1[5];
    fVar3 = (float)param_1[6];
    fVar4 = (float)param_1[7];
  }
  fStack_8c = fStack_8c + fVar3;
  fStack_90 = fStack_90 + fVar2;
  fStack_88 = fStack_88 + fVar4;
  piVar1 = param_1 + 0x54;
  iVar6 = FUN_00549470(piVar1);
  if (iVar6 == 0) {
    FUN_00549580(piVar1);
    (**(code **)(*param_1 + 0x5c))();
    return;
  }
  FUN_005a52d0(&fStack_c0,1,1,0,0);
  FUN_00549580(piVar1);
  FUN_00669cf0(param_1 + 0x11,0xffffffff);
  return;
}

