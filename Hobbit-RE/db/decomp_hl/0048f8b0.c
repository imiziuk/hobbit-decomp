
void __fastcall FUN_0048f8b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  fStack_100 = *(float *)(param_1 + 0x140);
  fStack_fc = *(float *)(param_1 + 0x144) * DAT_006e92e4;
  fStack_ec = *(float *)(param_1 + 0x144);
  fStack_d8 = *(float *)(param_1 + 0x148);
  fStack_f8 = *(float *)(param_1 + 0x148) * DAT_006e92e4;
  fStack_d4 = 0.0;
  fStack_e4 = 0.0;
  fStack_f4 = 0.0;
  fStack_f0 = *(float *)(param_1 + 0x140) * DAT_006e92e4;
  fStack_c4 = 1.0;
  fStack_e8 = fStack_f8;
  fStack_e0 = fStack_f0;
  fStack_dc = fStack_fc;
  fStack_d0 = fStack_f0;
  fStack_cc = fStack_fc;
  fStack_c8 = fStack_f8;
  FUN_004935d0(param_1 + 0x130);
  uVar4 = FUN_0064e040(auStack_40,auStack_80,&fStack_100);
  FUN_00406570(uVar4);
  if (((((NAN(fStack_f4) || NAN(DAT_006e92e4)) == (fStack_f4 == DAT_006e92e4)) ||
       ((NAN(fStack_e4) || NAN(DAT_006e92e4)) == (fStack_e4 == DAT_006e92e4))) ||
      ((NAN(fStack_d4) || NAN(DAT_006e92e4)) == (fStack_d4 == DAT_006e92e4))) ||
     ((NAN(fStack_c4) || NAN(DAT_006e92e8)) == (fStack_c4 == DAT_006e92e8))) {
    fStack_100 = fStack_f4 * *(float *)(param_1 + 0x14) + fStack_100;
    fStack_f0 = fStack_e4 * *(float *)(param_1 + 0x14) + fStack_f0;
    fStack_e0 = fStack_d4 * *(float *)(param_1 + 0x14) + fStack_e0;
    fVar1 = fStack_c4 * *(float *)(param_1 + 0x14);
    fStack_fc = fStack_f4 * *(float *)(param_1 + 0x18) + fStack_fc;
    fStack_ec = fStack_e4 * *(float *)(param_1 + 0x18) + fStack_ec;
    fStack_dc = fStack_d4 * *(float *)(param_1 + 0x18) + fStack_dc;
    fVar2 = fStack_c4 * *(float *)(param_1 + 0x18);
    fStack_f8 = fStack_f4 * *(float *)(param_1 + 0x1c) + fStack_f8;
    fStack_e8 = fStack_e4 * *(float *)(param_1 + 0x1c) + fStack_e8;
    fStack_d8 = fStack_d4 * *(float *)(param_1 + 0x1c) + fStack_d8;
    fVar3 = fStack_c4 * *(float *)(param_1 + 0x1c);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x18);
    fVar3 = *(float *)(param_1 + 0x1c);
  }
  fStack_cc = fStack_cc + fVar2;
  fStack_d0 = fStack_d0 + fVar1;
  fStack_c8 = fStack_c8 + fVar3;
  FUN_00424a30(&fStack_100);
  FUN_0064d6d0();
  FUN_005780e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&fStack_100,auStack_c0);
  iVar5 = FUN_00549470(param_1 + 0x150);
  if (iVar5 != 0) {
    FUN_00579a60(iVar5 + 0xa0,0,0);
  }
  FUN_00549580(param_1 + 0x150);
  FUN_005785b0();
  return;
}

