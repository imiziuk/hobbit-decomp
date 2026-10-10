
void __fastcall FUN_004b75b0(int param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  bool bVar7;
  float afStack_c4 [17];
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  FUN_00581f30(param_1 + 0xf4);
  afStack_c4[0] = *(float *)(param_1 + 400);
  afStack_c4[1] = afStack_c4[0] * DAT_006e92e4;
  afStack_c4[0xb] = 0.0;
  afStack_c4[7] = 0.0;
  afStack_c4[3] = 0.0;
  afStack_c4[0xf] = 1.0;
  afStack_c4[2] = afStack_c4[1];
  afStack_c4[4] = afStack_c4[1];
  afStack_c4[5] = afStack_c4[0];
  afStack_c4[6] = afStack_c4[1];
  afStack_c4[8] = afStack_c4[1];
  afStack_c4[9] = afStack_c4[1];
  afStack_c4[10] = afStack_c4[0];
  afStack_c4[0xc] = afStack_c4[1];
  afStack_c4[0xd] = afStack_c4[1];
  afStack_c4[0xe] = afStack_c4[1];
  afStack_c4[0x10] = afStack_c4[0];
  FUN_00463c20(param_1 + 0x68);
  pfVar3 = (float *)FUN_0064e040(auStack_40,auStack_80,afStack_c4);
  pfVar2 = DAT_007f23d8;
  if ((afStack_c4 != pfVar3) && (pfVar5 = pfVar3 + 0x10, pfVar3 != pfVar5)) {
    pfVar4 = afStack_c4 + 2;
    iVar6 = (int)pfVar3 - (int)afStack_c4;
    do {
      pfVar4[-2] = *pfVar3;
      pfVar4[-1] = pfVar3[1];
      *pfVar4 = *(float *)(iVar6 + (int)pfVar4);
      pfVar4[1] = pfVar3[3];
      pfVar3 = pfVar3 + 4;
      pfVar4 = pfVar4 + 4;
    } while (pfVar3 != pfVar5);
  }
  if (((((NAN(afStack_c4[3]) || NAN(DAT_006e92e4)) == (afStack_c4[3] == DAT_006e92e4)) ||
       ((NAN(afStack_c4[7]) || NAN(DAT_006e92e4)) == (afStack_c4[7] == DAT_006e92e4))) ||
      ((NAN(afStack_c4[0xb]) || NAN(DAT_006e92e4)) == (afStack_c4[0xb] == DAT_006e92e4))) ||
     ((NAN(afStack_c4[0xf]) || NAN(DAT_006e92e8)) == (afStack_c4[0xf] == DAT_006e92e8))) {
    afStack_c4[0] = afStack_c4[3] * *(float *)(param_1 + 0x14) + afStack_c4[0];
    afStack_c4[4] = afStack_c4[7] * *(float *)(param_1 + 0x14) + afStack_c4[4];
    afStack_c4[8] = afStack_c4[0xb] * *(float *)(param_1 + 0x14) + afStack_c4[8];
    afStack_c4[0xc] = afStack_c4[0xf] * *(float *)(param_1 + 0x14) + afStack_c4[0xc];
    afStack_c4[1] = afStack_c4[3] * *(float *)(param_1 + 0x18) + afStack_c4[1];
    afStack_c4[5] = afStack_c4[7] * *(float *)(param_1 + 0x18) + afStack_c4[5];
    afStack_c4[9] = afStack_c4[0xb] * *(float *)(param_1 + 0x18) + afStack_c4[9];
    afStack_c4[0xd] = afStack_c4[0xf] * *(float *)(param_1 + 0x18) + afStack_c4[0xd];
    afStack_c4[2] = afStack_c4[3] * *(float *)(param_1 + 0x1c) + afStack_c4[2];
    afStack_c4[6] = afStack_c4[7] * *(float *)(param_1 + 0x1c) + afStack_c4[6];
    afStack_c4[10] = afStack_c4[0xb] * *(float *)(param_1 + 0x1c) + afStack_c4[10];
    fVar1 = afStack_c4[0xf] * *(float *)(param_1 + 0x1c);
  }
  else {
    afStack_c4[0xc] = afStack_c4[0xc] + *(float *)(param_1 + 0x14);
    afStack_c4[0xd] = afStack_c4[0xd] + *(float *)(param_1 + 0x18);
    fVar1 = *(float *)(param_1 + 0x1c);
  }
  afStack_c4[0xe] = afStack_c4[0xe] + fVar1;
  bVar7 = DAT_007f23d8 != afStack_c4;
  pfVar3 = DAT_007f23d8 + 0x10;
  *(float **)(param_1 + 0xc0) = DAT_007f23d8;
  DAT_007f23d8 = pfVar3;
  if (bVar7) {
    pfVar5 = afStack_c4;
    pfVar3 = pfVar2 + 2;
    do {
      pfVar3[-2] = *pfVar5;
      pfVar3[-1] = pfVar5[1];
      *pfVar3 = *(float *)(((int)afStack_c4 - (int)pfVar2) + (int)pfVar3);
      pfVar3[1] = *(float *)((int)afStack_c4 + (4 - (int)pfVar2) + (int)pfVar3);
      pfVar5 = pfVar5 + 4;
      pfVar3 = pfVar3 + 4;
    } while (pfVar5 != afStack_c4 + 0x10);
  }
  *(undefined4 *)(param_1 + 0xc4) = 1;
  iVar6 = FUN_00549470(param_1 + 0xa8);
  *(int *)(param_1 + 0xe4) = iVar6;
  if (iVar6 != 0) {
    FUN_0052e160(param_1 + 0x44);
    FUN_005c1a90(0);
    (**(code **)(*(int *)(param_1 + 0xac) + 4))(param_1);
  }
  return;
}

