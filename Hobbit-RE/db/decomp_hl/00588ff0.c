
void FUN_00588ff0(int param_1)

{
  if (param_1 != -1) {
    *(undefined4 *)(DAT_007780ac + param_1 * 0x18 + 0xc) =
         *(undefined4 *)(DAT_007780ac + 4 + param_1 * 0x18);
  }
  return;
}

