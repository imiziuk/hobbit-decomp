
void __fastcall FUN_0040adb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_004021c0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  if (iVar2 != 0) {
    FUN_004c7660(0);
    FUN_004c74d0(0x3f000000);
    *(ushort *)(iVar2 + 0x15a) = *(ushort *)(iVar2 + 0x15a) & 0xbfff ^ 0x4000;
    FUN_004c77d0(0);
  }
  iVar2 = FUN_004021c0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (iVar2 != 0) {
    FUN_0064cc30();
    FUN_0064cc00();
    FUN_004c7660(0);
    *(ushort *)(iVar2 + 0x15a) = *(ushort *)(iVar2 + 0x15a) & 0xbfff ^ 0x4000;
    FUN_004c77d0(0);
    uVar1 = DAT_006e92e8;
    if (*(int *)(iVar2 + 0x140) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x140) + 0x80);
    }
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
  iVar2 = FUN_0054c0f0(s_View_Working_Forge_0071e020,0);
  if (iVar2 != 0) {
    FUN_0046a550();
  }
  FUN_0040b050();
  return;
}

