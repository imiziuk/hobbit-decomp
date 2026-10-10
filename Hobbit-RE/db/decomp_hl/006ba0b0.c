
void __thiscall FUN_006ba0b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0xff;
  *(undefined1 *)(param_1 + 0x2a) = 0xff;
  *(undefined1 *)(param_1 + 0x29) = 0xff;
  *(undefined1 *)(param_1 + 0x28) = 0xff;
  *(int *)(param_1 + 0xa0) = param_2;
  uVar1 = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x90) = 1;
  *(undefined4 *)(param_1 + 0x78) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x80) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x84) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x88) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xff7fffff;
  return;
}

