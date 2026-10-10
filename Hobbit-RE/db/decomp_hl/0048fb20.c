
void __fastcall FUN_0048fb20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
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
  
  fStack_c0 = *(float *)(param_1 + 0x140);
  fStack_bc = *(float *)(param_1 + 0x144) * DAT_006e92e4;
  fStack_ac = *(float *)(param_1 + 0x144);
  fStack_98 = *(float *)(param_1 + 0x148);
  fStack_b8 = *(float *)(param_1 + 0x148) * DAT_006e92e4;
  fStack_94 = 0.0;
  fStack_a4 = 0.0;
  fStack_b0 = *(float *)(param_1 + 0x140) * DAT_006e92e4;
  fStack_b4 = 0.0;
  fStack_84 = 1.0;
  fStack_a8 = fStack_b8;
  fStack_a0 = fStack_b0;
  fStack_9c = fStack_bc;
  fStack_90 = fStack_b0;
  fStack_8c = fStack_bc;
  fStack_88 = fStack_b8;
  FUN_004935d0(param_1 + 0x130);
  uVar4 = FUN_0064e040(auStack_40,auStack_80,&fStack_c0);
  FUN_00406570(uVar4);
  if (((((NAN(fStack_b4) || NAN(DAT_006e92e4)) == (fStack_b4 == DAT_006e92e4)) ||
       ((NAN(fStack_a4) || NAN(DAT_006e92e4)) == (fStack_a4 == DAT_006e92e4))) ||
      ((NAN(fStack_94) || NAN(DAT_006e92e4)) == (fStack_94 == DAT_006e92e4))) ||
     ((NAN(fStack_84) || NAN(DAT_006e92e8)) == (fStack_84 == DAT_006e92e8))) {
    fStack_c0 = fStack_b4 * *(float *)(param_1 + 0x14) + fStack_c0;
    fStack_b0 = fStack_a4 * *(float *)(param_1 + 0x14) + fStack_b0;
    fStack_a0 = fStack_94 * *(float *)(param_1 + 0x14) + fStack_a0;
    fVar1 = fStack_84 * *(float *)(param_1 + 0x14);
    fStack_bc = fStack_b4 * *(float *)(param_1 + 0x18) + fStack_bc;
    fStack_ac = fStack_a4 * *(float *)(param_1 + 0x18) + fStack_ac;
    fStack_9c = fStack_94 * *(float *)(param_1 + 0x18) + fStack_9c;
    fVar2 = fStack_84 * *(float *)(param_1 + 0x18);
    fStack_b8 = fStack_b4 * *(float *)(param_1 + 0x1c) + fStack_b8;
    fStack_a8 = fStack_a4 * *(float *)(param_1 + 0x1c) + fStack_a8;
    fStack_98 = fStack_94 * *(float *)(param_1 + 0x1c) + fStack_98;
    fVar3 = fStack_84 * *(float *)(param_1 + 0x1c);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x18);
    fVar3 = *(float *)(param_1 + 0x1c);
  }
  fStack_8c = fStack_8c + fVar2;
  fStack_90 = fStack_90 + fVar1;
  fStack_88 = fStack_88 + fVar3;
  iVar5 = FUN_00549470(param_1 + 0x150);
  if (iVar5 != 0) {
    FUN_005a4930(&fStack_c0,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  FUN_00549580(param_1 + 0x150);
  return;
}

