
void __fastcall FUN_0062d430(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005af120();
  *(ushort *)(param_1 + 0x40) =
       (byte)(*(char *)(iVar1 + 0x1fc) << 2 ^ (byte)*(ushort *)(param_1 + 0x40)) & 4 ^
       *(ushort *)(param_1 + 0x40);
  return;
}

