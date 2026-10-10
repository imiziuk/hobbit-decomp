
undefined4 __thiscall FUN_006b6740(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_00647d10(&DAT_00815800 + DAT_00815cb8 * 0x24,param_2);
  iVar1 = DAT_00815cb8 * 0x24;
  DAT_00815cb8 = DAT_00815cb8 + 1;
  *(undefined4 *)(&DAT_00815820 + iVar1) = param_3;
  return param_1;
}

