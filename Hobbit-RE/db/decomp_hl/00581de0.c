
int __fastcall FUN_00581de0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  FUN_0064cbe0();
  *(undefined4 *)(param_1 + 0xac) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xb0) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xb4) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0xb8) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xbc) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xc0) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0x14;
  *(undefined1 *)(param_1 + 0x15) = 0x14;
  *(undefined1 *)(param_1 + 0x14) = 0x20;
  *(undefined1 *)(param_1 + 0x17) = 0xff;
  *(undefined1 *)(param_1 + 0x36) = 0x14;
  *(undefined1 *)(param_1 + 0x37) = 0xff;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0x40;
  *(undefined4 *)(param_1 + 0x54) = 0x3f800000;
  puVar1 = (undefined1 *)(param_1 + 0x1a);
  iVar2 = 7;
  do {
    puVar1[1] = 0xff;
    *puVar1 = 0;
    puVar1[-1] = 0;
    puVar1[-2] = 0;
    puVar1[0x21] = 0xff;
    puVar1[0x20] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    *(undefined4 *)(puVar1 + 0x3e) = 0x3f800000;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x90) = 0;
  return param_1;
}

