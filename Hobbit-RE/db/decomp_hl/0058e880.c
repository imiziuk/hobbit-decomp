
undefined4 __thiscall FUN_0058e880(int param_1,int param_2)

{
  if (param_2 != 0) {
    if ((*(uint *)(param_1 + 0x380) & 1 << ((byte)param_2 & 0x1f)) == 0) {
      return 0;
    }
    FUN_006b7720(1);
  }
  return 1;
}

