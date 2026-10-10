
void __fastcall FUN_006327a0(int param_1)

{
  float10 fVar1;
  
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined2 *)(param_1 + 0x42) = 0;
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  *(float *)(param_1 + 0x68) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_005be250();
  return;
}

