
void __thiscall FUN_00608bf0(int param_1,int param_2,undefined4 *param_3)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x3c))) {
    *(undefined4 *)(*(int *)(param_1 + (0xc - *(int *)(param_1 + 0x40)) * 4) + param_2 * 4) =
         *param_3;
  }
  return;
}

