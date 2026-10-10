
undefined4 __thiscall
FUN_004efaa0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,float param_5)

{
  float fVar1;
  bool bVar2;
  int in_stack_00000020;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  fVar1 = *(float *)(param_1 + 0xa8) * *param_4 +
          *(float *)(param_1 + 0xb0) * param_4[2] + *(float *)(param_1 + 0xac) * param_4[1] +
          *(float *)(param_1 + 0xb4);
  if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
    fVar1 = -fVar1;
  }
  if (fVar1 <= param_5) {
    bVar2 = false;
    if (((in_stack_00000020 == 1) || (in_stack_00000020 == 4)) && (*(int *)(param_1 + 0x184) != 0))
    {
      bVar2 = true;
    }
    if (((in_stack_00000020 == 2) || (in_stack_00000020 == 5)) && (*(int *)(param_1 + 0x188) != 0))
    {
      bVar2 = true;
    }
    if (((in_stack_00000020 == 3) || (in_stack_00000020 == 6)) && (*(int *)(param_1 + 0x18c) != 0))
    {
      bVar2 = true;
    }
    if ((*(int *)(param_1 + 400) != 0) || (bVar2)) {
      FUN_004ef370(param_4);
      return 1;
    }
    fStack_18 = *param_4 - param_5;
    fStack_14 = param_4[1] - param_5;
    fStack_1c = param_4[2] - param_5;
    fStack_10 = fStack_1c;
    FUN_00401f00(param_5 + *param_4,param_5 + param_4[1],param_5 + param_4[2]);
    uStack_24 = 0;
    uStack_20 = 0;
    fStack_1c = 0.0;
    FUN_004f0080(param_4,&uStack_24,&fStack_18);
  }
  return 0;
}

