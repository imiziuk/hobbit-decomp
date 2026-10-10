
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0041e0b0(int param_1,float *param_2,undefined4 param_3)

{
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fStack_c = *param_2;
  fStack_8 = param_2[1];
  fStack_4 = param_2[2];
  if ((((fStack_c < _DAT_006e9980 == (NAN(fStack_c) || NAN(_DAT_006e9980))) &&
       (fStack_c <= _DAT_006e997c)) &&
      (fStack_8 < _DAT_006e9978 == (NAN(fStack_8) || NAN(_DAT_006e9978)))) &&
     (((fStack_8 <= _DAT_006e9974 &&
       (fStack_4 < _DAT_006e9980 == (NAN(fStack_4) || NAN(_DAT_006e9980)))) &&
      (fStack_4 <= _DAT_006e997c)))) {
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(undefined4 *)(param_1 + 0x590) = 1;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
    *(float *)(param_1 + 0x464) = fStack_c;
    *(float *)(param_1 + 0x468) = fStack_8;
    *(float *)(param_1 + 0x46c) = fStack_4;
    FUN_004aa440(&fStack_c,param_3);
    return;
  }
  FUN_0044ca80();
  return;
}

