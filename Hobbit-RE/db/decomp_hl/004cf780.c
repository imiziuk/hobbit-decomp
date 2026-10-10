
void __fastcall FUN_004cf780(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  int iStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [64];
  
  iStack_c0 = param_1[0x4c];
  fStack_bc = (float)param_1[0x4d] * DAT_006e92e4;
  iStack_ac = param_1[0x4d];
  iStack_98 = param_1[0x4e];
  iStack_c4 = param_1[0x1c];
  fStack_b8 = (float)param_1[0x4e] * DAT_006e92e4;
  iVar1 = param_1[0x65];
  uStack_94 = 0;
  fStack_b0 = (float)param_1[0x4c] * DAT_006e92e4;
  uStack_a4 = 0;
  uStack_b4 = 0;
  uStack_84 = 0x3f800000;
  if (iVar1 == param_1[0x66]) {
    if (iVar1 == 0) {
      iStack_c8 = param_1[0x5b];
    }
    else {
      iStack_c8 = param_1[0x60];
    }
  }
  else {
    iStack_c8 = param_1[0x6b];
  }
  if (iVar1 == param_1[0x66]) {
    if (iVar1 == 0) {
      iStack_d8 = param_1[0x58];
      iStack_d4 = param_1[0x59];
      iStack_d0 = param_1[0x5a];
      iStack_cc = param_1[0x5c];
    }
    else {
      iStack_d8 = param_1[0x5d];
      iStack_d4 = param_1[0x5e];
      iStack_d0 = param_1[0x5f];
      iStack_cc = param_1[0x61];
    }
  }
  else {
    iStack_d8 = param_1[0x68];
    iStack_d4 = param_1[0x69];
    iStack_d0 = param_1[0x6a];
    iStack_cc = param_1[0x6c];
  }
  fStack_a8 = fStack_b8;
  fStack_a0 = fStack_b0;
  fStack_9c = fStack_bc;
  fStack_90 = fStack_b0;
  fStack_8c = fStack_bc;
  fStack_88 = fStack_b8;
  FUN_00463c20(&iStack_cc);
  uVar2 = FUN_0064e040(auStack_40,auStack_80,&iStack_c0);
  FUN_00406570(uVar2);
  FUN_00420470(&iStack_d8);
  if (param_1[0x65] != param_1[0x66]) {
    (**(code **)(*param_1 + 0x9c))(0);
  }
  piVar3 = (int *)(**(code **)(*param_1 + 0x128))(&iStack_c0,1);
  (**(code **)(*piVar3 + 4))(param_1);
  return;
}

