
void __thiscall FUN_00594d70(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x4c) & 0xfff7ffff | 0x100000;
  *(uint *)(param_1 + 0x4c) = (param_2 << 0x16 ^ uVar1) & 0x400000 ^ uVar1;
  return;
}

