
void __fastcall FUN_004baec0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 local_8c;
  float local_88;
  undefined4 local_84;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  pfVar1 = (float *)(param_1 + 0x1d4);
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *pfVar1 = 1.0;
  *(undefined4 *)(param_1 + 0x1e8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1fc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x210) = 0x3f800000;
  fVar2 = -*(float *)(param_1 + 0x264);
  if ((((NAN(*(float *)(param_1 + 0x1e0)) || NAN(DAT_006e92e4)) ==
        (*(float *)(param_1 + 0x1e0) == DAT_006e92e4)) ||
      ((NAN(*(float *)(param_1 + 0x1f0)) || NAN(DAT_006e92e4)) ==
       (*(float *)(param_1 + 0x1f0) == DAT_006e92e4))) ||
     ((NAN(*(float *)(param_1 + 0x200)) || NAN(DAT_006e92e4)) ==
      (*(float *)(param_1 + 0x200) == DAT_006e92e4))) {
    fVar3 = *(float *)(param_1 + 0x1e0) * DAT_006e92e4;
    *pfVar1 = fVar3 + *pfVar1;
    fVar4 = *(float *)(param_1 + 0x1f0) * DAT_006e92e4;
    *(float *)(param_1 + 0x1e4) = fVar4 + *(float *)(param_1 + 0x1e4);
    fVar5 = *(float *)(param_1 + 0x200) * DAT_006e92e4;
    *(float *)(param_1 + 500) = fVar5 + *(float *)(param_1 + 500);
    fVar6 = *(float *)(param_1 + 0x210) * DAT_006e92e4;
    *(float *)(param_1 + 0x204) = fVar6 + *(float *)(param_1 + 0x204);
    *(float *)(param_1 + 0x1d8) = fVar2 * *(float *)(param_1 + 0x1e0) + *(float *)(param_1 + 0x1d8);
    *(float *)(param_1 + 0x1e8) = fVar2 * *(float *)(param_1 + 0x1f0) + *(float *)(param_1 + 0x1e8);
    *(float *)(param_1 + 0x1f8) = fVar2 * *(float *)(param_1 + 0x200) + *(float *)(param_1 + 0x1f8);
    *(float *)(param_1 + 0x208) = fVar2 * *(float *)(param_1 + 0x210) + *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0x1dc) = fVar3 + *(float *)(param_1 + 0x1dc);
    *(float *)(param_1 + 0x1ec) = fVar4 + *(float *)(param_1 + 0x1ec);
    *(float *)(param_1 + 0x1fc) = fVar5 + *(float *)(param_1 + 0x1fc);
    *(float *)(param_1 + 0x20c) = fVar6 + *(float *)(param_1 + 0x20c);
  }
  else {
    *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x204);
    *(float *)(param_1 + 0x208) = fVar2 + *(float *)(param_1 + 0x208);
    *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  }
  FUN_004935d0(param_1 + 0x220);
  uVar7 = FUN_0064e040(local_40,local_80,pfVar1);
  FUN_00406570(uVar7);
  local_8c = *(undefined4 *)(param_1 + 0x14);
  local_88 = *(float *)(param_1 + 0x264) + *(float *)(param_1 + 0x18);
  local_84 = *(undefined4 *)(param_1 + 0x1c);
  FUN_00420470(&local_8c);
  return;
}

