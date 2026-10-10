
undefined4 __thiscall FUN_0058e6f0(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 1 << ((byte)param_2 & 0x1f);
    if ((uVar1 & *(uint *)(param_1 + 0x380)) == 0) {
      return 0;
    }
    FUN_006b7660();
    *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & ~uVar1;
  }
  return 1;
}

