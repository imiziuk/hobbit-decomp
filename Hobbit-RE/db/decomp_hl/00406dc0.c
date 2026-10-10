
undefined4 __fastcall FUN_00406dc0(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1] * 2;
  if (((uVar1 ^ param_1[1]) & 0x7fffffff ^ uVar1) == 0xffffffff) {
    return *param_1;
  }
  uVar2 = FUN_00549470(param_1 + 1);
  return uVar2;
}

