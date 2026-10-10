
undefined4 __fastcall FUN_005afae0(int param_1)

{
  if ((*(uint *)(param_1 + 0x130) & 8) != 0) {
    *(uint *)(param_1 + 0x130) = *(uint *)(param_1 + 0x130) & 0xfffffff7;
    return 1;
  }
  return 0;
}

