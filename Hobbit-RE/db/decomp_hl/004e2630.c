
void __fastcall FUN_004e2630(int *param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  float fStack_cc;
  undefined4 local_c0 [16];
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  local_c0[0xc] = 0;
  local_c0[8] = 0;
  local_c0[4] = 0;
  local_c0[0xd] = 0;
  local_c0[9] = 0;
  local_c0[1] = 0;
  local_c0[0xe] = 0;
  local_c0[6] = 0;
  local_c0[2] = 0;
  local_c0[0xb] = 0;
  local_c0[7] = 0;
  local_c0[3] = 0;
  local_c0[0] = 0x3f800000;
  local_c0[5] = 0x3f800000;
  local_c0[10] = 0x3f800000;
  local_c0[0xf] = 0x3f800000;
  FUN_00463c20(param_1 + 0x1a);
  puVar7 = (undefined4 *)FUN_0064e040(local_40,local_80,local_c0);
  if ((local_c0 != puVar7) && (puVar1 = puVar7 + 0x10, puVar7 != puVar1)) {
    puVar9 = local_c0 + 2;
    iVar10 = (int)puVar7 - (int)local_c0;
    do {
      puVar9[-2] = *puVar7;
      puVar9[-1] = puVar7[1];
      *puVar9 = *(undefined4 *)(iVar10 + (int)puVar9);
      puVar9[1] = puVar7[3];
      puVar7 = puVar7 + 4;
      puVar9 = puVar9 + 4;
    } while (puVar7 != puVar1);
  }
  (**(code **)(*param_1 + 0x40))();
  fStack_cc = -(float)param_1[0x2b];
  fVar3 = -(float)param_1[0x2c];
  fVar2 = -(float)param_1[0x2d];
  fVar6 = fVar2;
  if ((float)param_1[0x2d] <= fVar2) {
    fVar6 = (float)param_1[0x2d];
  }
  fVar5 = fVar3;
  if ((float)param_1[0x2c] <= fVar3) {
    fVar5 = (float)param_1[0x2c];
  }
  fVar4 = fStack_cc;
  if (fStack_cc < (float)param_1[0x2b] == (NAN(fStack_cc) || NAN((float)param_1[0x2b]))) {
    fVar4 = (float)param_1[0x2b];
  }
  param_1[0xb] = (int)fVar4;
  param_1[0xc] = (int)fVar5;
  param_1[0xd] = (int)fVar6;
  if ((float)param_1[0x2d] < fVar2 == (NAN((float)param_1[0x2d]) || NAN(fVar2))) {
    fVar2 = (float)param_1[0x2d];
  }
  if ((float)param_1[0x2c] < fVar3 == (NAN((float)param_1[0x2c]) || NAN(fVar3))) {
    fVar3 = (float)param_1[0x2c];
  }
  if (fStack_cc <= (float)param_1[0x2b]) {
    fStack_cc = (float)param_1[0x2b];
  }
  FUN_00404870(fStack_cc,fVar3,fVar2);
  FUN_004936f0(local_c0);
  piVar8 = (int *)(**(code **)(*param_1 + 0x38))();
  param_1[0x11] = *piVar8;
  param_1[0x12] = piVar8[1];
  param_1[0x13] = piVar8[2];
  param_1[0x14] = piVar8[3];
  param_1[0x15] = piVar8[4];
  param_1[0x16] = piVar8[5];
  param_1[0x11] = (int)((float)param_1[0x11] + (float)param_1[5]);
  param_1[0x12] = (int)((float)param_1[6] + (float)param_1[0x12]);
  param_1[0x13] = (int)((float)param_1[7] + (float)param_1[0x13]);
  FUN_0042faf0(param_1 + 5);
  (**(code **)(*param_1 + 0x44))();
  return;
}

