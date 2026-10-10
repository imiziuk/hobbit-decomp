
void __fastcall FUN_00406d80(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4) * 2;
  if (((uVar1 ^ *(uint *)(param_1 + 4)) & 0x7fffffff ^ uVar1) == 0xffffffff) {
    FUN_0053cc70();
    return;
  }
  FUN_00549470(param_1 + 4);
  FUN_0053cc70();
  return;
}

