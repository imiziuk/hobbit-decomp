
undefined4 * __thiscall
FUN_00665040(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_00664be0(param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined1 *)(param_1 + 0xf) = (undefined1)param_7;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_006f9614;
  return param_1;
}

