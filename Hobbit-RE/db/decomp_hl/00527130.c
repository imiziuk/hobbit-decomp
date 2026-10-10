
void __thiscall FUN_00527130(int param_1,int param_2)

{
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x2dd) = 0xff;
    return;
  }
  *(undefined *)(param_1 + 0x2dd) = (&DAT_00735b18)[*(int *)(param_1 + 0x2f4) * 6];
  return;
}

