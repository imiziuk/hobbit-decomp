
void __fastcall FUN_00639890(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  *(float *)(param_1 + 0x78) = (float)fVar1;
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  *(float *)(param_1 + 0x7c) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  FUN_005be250();
  return;
}

