
void __thiscall FUN_004fa4f0(undefined1 *param_1,float param_2)

{
  float fVar1;
  undefined1 uVar2;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  fVar1 = *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x60) = param_2 + fVar1;
  fVar1 = ((param_2 + fVar1) - *(float *)(param_1 + 0x30)) / *(float *)(param_1 + 100);
  if ((fVar1 < DAT_006e92e4) || (fVar1 < DAT_006e92e8 == (fVar1 == DAT_006e92e8))) {
    if (DAT_006e92e8 < fVar1) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x20);
    }
  }
  else {
    *(float *)(param_1 + 0x14) =
         (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x24)) * fVar1 +
         *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x18) =
         (*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x28)) * fVar1 +
         *(float *)(param_1 + 0x28);
  }
  fVar1 = (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x58)) / *(float *)(param_1 + 100);
  if ((fVar1 < DAT_006e92e4) || (fVar1 < DAT_006e92e8 == (fVar1 == DAT_006e92e8))) {
    if (DAT_006e92e8 < fVar1) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x48);
    }
  }
  else {
    *(float *)(param_1 + 0x3c) =
         (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x4c)) * fVar1 +
         *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x40) =
         (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x50)) * fVar1 +
         *(float *)(param_1 + 0x50);
  }
  fVar1 = (*(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x10)) / *(float *)(param_1 + 100);
  if ((DAT_006e92e4 <= fVar1) && (fVar1 < DAT_006e92e8 != (fVar1 == DAT_006e92e8))) {
    uVar2 = __ftol();
    param_1[2] = uVar2;
    uVar2 = __ftol();
    param_1[1] = uVar2;
    uVar2 = __ftol();
    *param_1 = uVar2;
    uVar2 = __ftol();
    param_1[3] = uVar2;
    return;
  }
  if (DAT_006e92e8 < fVar1) {
    param_1[3] = param_1[7];
    param_1[2] = param_1[6];
    param_1[1] = param_1[5];
    *param_1 = param_1[4];
  }
  return;
}

