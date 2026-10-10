
void __thiscall FUN_004de610(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (param_2 << 4 ^ *(uint *)(param_1 + 0x120)) & 0x10 ^ *(uint *)(param_1 + 0x120);
  *(uint *)(param_1 + 0x120) = uVar1;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x120) = uVar1 & 0xffffdfff;
  }
  return;
}

