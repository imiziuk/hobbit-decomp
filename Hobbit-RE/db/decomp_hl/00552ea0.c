
void __fastcall FUN_00552ea0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0063d990();
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  bVar1 = FUN_0063d990();
  *(byte *)(param_1 + 0x54) = (*(byte *)(param_1 + 0x54) ^ bVar1) & 1 ^ *(byte *)(param_1 + 0x54);
  FUN_0063cfe0((undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  FUN_0063cfe0(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  FUN_0063cfe0(param_1 + 0xa4);
  return;
}

