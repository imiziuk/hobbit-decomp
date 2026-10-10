
undefined4 __thiscall FUN_0062b910(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
    fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
    *(float *)(param_1 + 0x6c) = (float)fVar1;
    return 8;
  }
  return param_2;
}

