
void FUN_005453a0(undefined4 param_1,uint *param_2,uint param_3,byte param_4)

{
  int iVar1;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  FUN_0063ce20(&local_c,3,8);
  FUN_0063ce20(&local_8,0,0x20);
  while (FUN_0063cd60(&local_10,local_c), local_10 != 0) {
    FUN_0063cd60(&local_4,local_8);
    iVar1 = local_10;
    if (local_10 != 0) {
      do {
        *param_2 = *param_2 & ~(param_3 << (param_4 & 0x1f)) |
                   (local_4 & param_3) << (param_4 & 0x1f);
        iVar1 = iVar1 + -1;
        param_2 = param_2 + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    local_10 = iVar1 + -1;
  }
  return;
}

