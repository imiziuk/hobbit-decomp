
undefined4 __thiscall
FUN_006b6780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00647d10(&DAT_008132e0 + DAT_00815cbc * 0x28,param_2);
  *(undefined4 *)(&DAT_00813300 + DAT_00815cbc * 0x28) = param_3;
  *(undefined4 *)(&DAT_00813304 + DAT_00815cbc * 0x28) = param_4;
  DAT_00815cbc = DAT_00815cbc + 1;
  return param_1;
}

