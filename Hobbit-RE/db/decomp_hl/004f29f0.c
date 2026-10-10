
void __thiscall FUN_004f29f0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = DAT_006e92e8;
  if ((NAN(*(float *)(param_1 + 0x81c)) || NAN(DAT_006e92e4)) ==
      (*(float *)(param_1 + 0x81c) == DAT_006e92e4)) {
    fVar2 = param_2 * *(float *)(param_1 + 0x81c) + *(float *)(param_1 + 0x818);
    *(float *)(param_1 + 0x818) = fVar2;
    if (fVar2 <= fVar1) {
      if (fVar2 < DAT_006e92e4 == (NAN(fVar2) || NAN(DAT_006e92e4))) goto LAB_004f2a6d;
      *(undefined4 *)(param_1 + 0x818) = 0;
      *(undefined4 *)(param_1 + 0x824) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x818) = 0x3f800000;
      if (*(int *)(param_1 + 0x824) != 0) {
        *(float *)(param_1 + 0x81c) = -*(float *)(param_1 + 0x81c);
        goto LAB_004f2a6d;
      }
    }
    *(undefined4 *)(param_1 + 0x81c) = 0;
  }
LAB_004f2a6d:
  fVar1 = param_2 * *(float *)(param_1 + 0x830) + *(float *)(param_1 + 0x828);
  *(float *)(param_1 + 0x828) = fVar1;
  if ((DAT_006e92e4 < *(float *)(param_1 + 0x830)) && (*(float *)(param_1 + 0x82c) < fVar1)) {
    *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x82c);
    *(undefined4 *)(param_1 + 0x830) = 0;
  }
  if ((*(float *)(param_1 + 0x830) < DAT_006e92e4 !=
       (NAN(*(float *)(param_1 + 0x830)) || NAN(DAT_006e92e4))) &&
     (*(float *)(param_1 + 0x828) < *(float *)(param_1 + 0x82c) !=
      (NAN(*(float *)(param_1 + 0x828)) || NAN(*(float *)(param_1 + 0x82c))))) {
    *(undefined4 *)(param_1 + 0x828) = *(undefined4 *)(param_1 + 0x82c);
    *(undefined4 *)(param_1 + 0x830) = 0;
  }
  FUN_004f7d60();
  return;
}

