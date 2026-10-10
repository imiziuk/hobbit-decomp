
void __fastcall FUN_006205c0(int param_1)

{
  float10 fVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  FUN_005af120(2);
  FUN_004a28c0(uVar2);
  *(undefined2 *)(param_1 + 0x42) = 0;
  fVar1 = (float10)FUN_00647b30(0xbf000000,0x3f000000);
  *(float *)(param_1 + 0x5c) = (float)fVar1;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_005be250();
  return;
}

