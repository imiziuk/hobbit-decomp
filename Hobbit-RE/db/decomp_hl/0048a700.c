
void __fastcall FUN_0048a700(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x154);
  if ((bVar1 & 8) == 0) {
    *(byte *)(param_1 + 0x154) = bVar1 & 0xfb;
    FUN_006b7660();
    FUN_004aaa60();
    return;
  }
  *(byte *)(param_1 + 0x154) = bVar1 | 0x10;
  FUN_006b7720(1);
  return;
}

