
void __fastcall FUN_004300e0(int param_1)

{
  float10 fVar1;
  
  if ((DAT_0075bbc8 != 0) && (DAT_0075fbf4 != 0)) {
    return;
  }
  fVar1 = (float10)FUN_00434ca0(0x74);
  if (((NAN(fVar1) || NAN((float10)DAT_006e92e4)) != (fVar1 == (float10)DAT_006e92e4)) &&
     (*(int *)(param_1 + 0x69c) != 0)) {
    if (*(int *)(param_1 + 0x67c) != 0) {
      DAT_0075bba8 = 1;
    }
    if ((*(int *)(param_1 + 0x67c) != 0) && (DAT_0075bba8 != 0)) {
      DAT_0075bbac = 1;
    }
    if (((*(int *)(param_1 + 0x684) != 0) && (DAT_0075bba8 != 0)) && (DAT_0075bbac != 0)) {
      DAT_0075bbb0 = 1;
    }
    if (((*(int *)(param_1 + 0x684) != 0) && (DAT_0075bba8 != 0)) &&
       ((DAT_0075bbac != 0 && (DAT_0075bbb0 != 0)))) {
      DAT_0075bbb4 = 1;
    }
    if (((*(int *)(param_1 + 0x680) != 0) && (DAT_0075bba8 != 0)) &&
       ((DAT_0075bbac != 0 && ((DAT_0075bbb0 != 0 && (DAT_0075bbb4 != 0)))))) {
      DAT_0075bbb8 = 1;
    }
    if ((((*(int *)(param_1 + 0x688) != 0) && (DAT_0075bba8 != 0)) && (DAT_0075bbac != 0)) &&
       (((DAT_0075bbb0 != 0 && (DAT_0075bbb4 != 0)) && (DAT_0075bbb8 != 0)))) {
      DAT_0075bbbc = 1;
    }
    if (((*(int *)(param_1 + 0x680) != 0) && (DAT_0075bba8 != 0)) &&
       ((DAT_0075bbac != 0 &&
        ((((DAT_0075bbb0 != 0 && (DAT_0075bbb4 != 0)) && (DAT_0075bbb8 != 0)) && (DAT_0075bbbc != 0)
         ))))) {
      DAT_0075bbc0 = 1;
    }
    if (*(int *)(param_1 + 0x688) != 0) {
      if (DAT_0075bba8 == 0) goto LAB_004302b6;
      if (((DAT_0075bbac != 0) && (DAT_0075bbb0 != 0)) &&
         (((DAT_0075bbb4 != 0 && ((DAT_0075bbb8 != 0 && (DAT_0075bbbc != 0)))) &&
          (DAT_0075bbc0 != 0)))) {
        DAT_0075bbc4 = 1;
      }
    }
    if ((((DAT_0075bba8 != 0) && (DAT_0075bbac != 0)) && (DAT_0075bbb0 != 0)) &&
       (((DAT_0075bbb4 != 0 && (DAT_0075bbb8 != 0)) &&
        ((DAT_0075bbbc != 0 && ((DAT_0075bbc0 != 0 && (DAT_0075bbc4 != 0)))))))) {
      DAT_0075bbc8 = 1;
      goto LAB_004302c3;
    }
  }
LAB_004302b6:
  if (DAT_0075bbc8 == 0) {
    return;
  }
LAB_004302c3:
  fVar1 = (float10)FUN_00434ca0(0x74);
  if ((NAN(fVar1) || NAN((float10)DAT_006e92e4)) != (fVar1 == (float10)DAT_006e92e4)) {
    FUN_00434c40(0x26,0x3f800000);
    FUN_00434c40(0x27,0x3f800000);
    FUN_00434c40(0x28,0x3f800000);
    FUN_00434c40(0x29,0x3f800000);
    FUN_00434c40(0x2a,0x3f800000);
    FUN_00434c40(0x2b,0x3f800000);
    FUN_00434c40(0x1d,0x3f800000);
    FUN_00434c40(0x1e,0x3f800000);
    FUN_00434c40(0x1f,0x3f800000);
    FUN_00434c40(0x20,0x3f800000);
    FUN_00434c40(0x21,0x3f800000);
    FUN_00434c40(0x22,0x3f800000);
    FUN_00434c40(0x23,0x3f800000);
    FUN_00434c40(0x24,0x3f800000);
    FUN_00434c40(0x25,0x3f800000);
    FUN_00434c40(0x2c,0x3f800000);
    FUN_00434c40(0x2d,0x3f800000);
    FUN_00434c40(0x2e,0x3f800000);
  }
  if ((((DAT_0075bbc8 != 0) && (*(int *)(param_1 + 0x69c) != 0)) && (*(int *)(param_1 + 0x64c) != 0)
      ) && (DAT_0075bbcc = DAT_0075bbcc + 1, DAT_0075bbcc == 3)) {
    DAT_0075fbf4 = 1;
  }
  return;
}

