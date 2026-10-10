
uint __fastcall FUN_005f11b0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 & 4) != 0) {
    return (int)(uVar1 << 0x1f) >> 0x1f;
  }
  return ~uVar1 & 1;
}

