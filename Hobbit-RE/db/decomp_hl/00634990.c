
void __fastcall FUN_00634990(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005af120();
  *(ushort *)(param_1 + 0x40) =
       (byte)(*(char *)(iVar1 + 0x210) << 2 ^ (byte)*(ushort *)(param_1 + 0x40)) & 4 ^
       *(ushort *)(param_1 + 0x40);
  return;
}

