
void __fastcall FUN_004c2e60(int param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x15a);
  if ((uVar1 & 0x200) == 0) {
    uVar1 = uVar1 & 0xbfff;
  }
  *(ushort *)(param_1 + 0x15a) = uVar1 ^ 0x4000;
  return;
}

