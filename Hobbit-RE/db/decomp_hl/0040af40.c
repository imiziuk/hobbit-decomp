
void __fastcall FUN_0040af40(int param_1)

{
  int iVar1;
  
  FUN_0064cc30();
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  if (iVar1 != 0) {
    FUN_004c7660(0);
    FUN_004c75f0(1);
    FUN_004c74d0(0xbf800000);
    *(ushort *)(iVar1 + 0x15a) = *(ushort *)(iVar1 + 0x15a) & 0xbfff ^ 0x4000;
    FUN_004c77d0(0);
  }
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  if (iVar1 != 0) {
    FUN_004de610(0);
  }
  FUN_0040b050();
  return;
}

