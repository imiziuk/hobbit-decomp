
void FUN_006caf3e(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)&DAT_00816240;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_00816120 = 0;
  DAT_0081613c = 0;
  DAT_00816344 = 0;
  DAT_00816130 = 0;
  DAT_00816134 = 0;
  DAT_00816138 = 0;
  return;
}

