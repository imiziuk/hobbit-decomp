
void __thiscall FUN_00633d50(int param_1,float param_2)

{
  *(float *)(param_1 + 0x58) = param_2 + *(float *)(param_1 + 0x58);
  if (*(short *)(param_1 + 0x42) != 5) {
    if (*(short *)(param_1 + 0x42) != 6) {
      FUN_005be370();
      return;
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      *(float *)(param_1 + 0x50) = param_2 + *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x60) = param_2 + *(float *)(param_1 + 0x60);
      FUN_005be370();
      return;
    }
  }
  FUN_005be370();
  return;
}

