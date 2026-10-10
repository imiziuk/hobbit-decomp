
void __thiscall FUN_004a6630(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 << 5 ^ *(uint *)(param_1 + 0x268)) & 0x20 ^ *(uint *)(param_1 + 0x268);
  uVar1 = ((int)(uVar1 << 0x1a) >> 0x1c ^ uVar1) & 8 ^ uVar1;
  uVar1 = ((int)(uVar1 << 0x1c) >> 0x1b ^ uVar1) & 0x10 ^ uVar1;
  uVar1 = ((int)(uVar1 << 0x1b) >> 0x1e ^ uVar1) & 2 ^ uVar1;
  uVar1 = ((int)(uVar1 << 0x1e) >> 0x1d ^ uVar1) & 4 ^ uVar1;
  *(uint *)(param_1 + 0x268) = uVar1;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x460) = 0;
    *(uint *)(param_1 + 0x268) = uVar1 & 0xfff7ffff;
  }
  return;
}

