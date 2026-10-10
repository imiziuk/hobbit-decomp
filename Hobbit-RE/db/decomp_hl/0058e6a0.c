
undefined4 __thiscall FUN_0058e6a0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 != 0) {
    if ((*(uint *)(param_1 + 0x380) & 1 << ((byte)param_2 & 0x1f)) == 0) {
      return 0;
    }
    local_c = param_3;
    local_8 = param_3;
    local_4 = param_3;
    FUN_006b76a0(&local_c);
  }
  return 1;
}

