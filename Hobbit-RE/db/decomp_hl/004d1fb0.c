
uint __fastcall FUN_004d1fb0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xbc) * 2;
  return (uVar1 ^ *(uint *)(param_1 + 0xbc)) & 0x7fffffff ^ uVar1;
}

