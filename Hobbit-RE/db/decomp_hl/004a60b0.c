
uint __fastcall FUN_004a60b0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x324) * 2;
  return (uVar1 ^ *(uint *)(param_1 + 0x324)) & 0x7fffffff ^ uVar1;
}

