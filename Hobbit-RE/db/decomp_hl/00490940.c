
uint __fastcall FUN_00490940(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x150) * 2;
  return (uVar1 ^ *(uint *)(param_1 + 0x150)) & 0x7fffffff ^ uVar1;
}

