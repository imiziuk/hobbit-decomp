
void __fastcall FUN_004b7860(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  float fStack_104;
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
  
  if ((DAT_00777238 == 5) || (DAT_00777238 == 7)) {
    fStack_104 = *(float *)(param_1 + 400);
    fStack_d8 = 0.0;
    fStack_100 = fStack_104 * DAT_006e92e4;
    fStack_e8 = 0.0;
    fStack_f8 = 0.0;
    fStack_c8 = 1.0;
    fStack_fc = fStack_100;
    fStack_f4 = fStack_100;
    fStack_f0 = fStack_104;
    fStack_ec = fStack_100;
    fStack_e4 = fStack_100;
    fStack_e0 = fStack_100;
    fStack_dc = fStack_104;
    fStack_d4 = fStack_100;
    fStack_d0 = fStack_100;
    fStack_cc = fStack_100;
    fStack_c4 = fStack_104;
    FUN_00463c20(param_1 + 0x68);
    uVar4 = FUN_0064e040(auStack_40,auStack_80,&fStack_104);
    FUN_00406570(uVar4);
    if (((NAN(fStack_f8) || NAN(DAT_006e92e4)) == (fStack_f8 == DAT_006e92e4)) ||
       ((((NAN(fStack_e8) || NAN(DAT_006e92e4)) == (fStack_e8 == DAT_006e92e4) ||
         ((NAN(fStack_d8) || NAN(DAT_006e92e4)) == (fStack_d8 == DAT_006e92e4))) ||
        ((NAN(fStack_c8) || NAN(DAT_006e92e8)) == (fStack_c8 == DAT_006e92e8))))) {
      fStack_104 = fStack_f8 * *(float *)(param_1 + 0x14) + fStack_104;
      fStack_f4 = fStack_e8 * *(float *)(param_1 + 0x14) + fStack_f4;
      fStack_e4 = fStack_d8 * *(float *)(param_1 + 0x14) + fStack_e4;
      fVar1 = fStack_c8 * *(float *)(param_1 + 0x14);
      fStack_100 = fStack_f8 * *(float *)(param_1 + 0x18) + fStack_100;
      fStack_f0 = fStack_e8 * *(float *)(param_1 + 0x18) + fStack_f0;
      fStack_e0 = fStack_d8 * *(float *)(param_1 + 0x18) + fStack_e0;
      fVar2 = fStack_c8 * *(float *)(param_1 + 0x18);
      fStack_fc = fStack_f8 * *(float *)(param_1 + 0x1c) + fStack_fc;
      fStack_ec = fStack_e8 * *(float *)(param_1 + 0x1c) + fStack_ec;
      fStack_dc = fStack_d8 * *(float *)(param_1 + 0x1c) + fStack_dc;
      fVar3 = fStack_c8 * *(float *)(param_1 + 0x1c);
    }
    else {
      fVar1 = *(float *)(param_1 + 0x14);
      fVar2 = *(float *)(param_1 + 0x18);
      fVar3 = *(float *)(param_1 + 0x1c);
    }
    fStack_d0 = fStack_d0 + fVar2;
    fStack_d4 = fStack_d4 + fVar1;
    fStack_cc = fStack_cc + fVar3;
    fStack_c0 = fStack_104;
    fStack_bc = fStack_100;
    fStack_b4 = fStack_f8;
    fStack_b8 = fStack_fc;
    fStack_b0 = fStack_f4;
    fStack_a8 = fStack_ec;
    fStack_ac = fStack_f0;
    fStack_a4 = fStack_e8;
    fStack_9c = fStack_e0;
    fStack_a0 = fStack_e4;
    fStack_98 = fStack_dc;
    fStack_94 = fStack_d8;
    fStack_84 = fStack_c8;
    fStack_90 = fStack_d4;
    fStack_8c = fStack_d0;
    fStack_88 = fStack_cc;
    FUN_0064d480();
    FUN_005780e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&fStack_104,&fStack_c0)
    ;
    iVar5 = FUN_00549470(param_1 + 0xa8);
    if (iVar5 != 0) {
      FUN_005a4350();
    }
    FUN_00549580(param_1 + 0xa8);
    FUN_005785b0();
  }
  return;
}

