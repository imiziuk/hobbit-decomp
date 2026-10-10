
void __thiscall FUN_00529100(int param_1,int param_2)

{
  *(int *)(param_1 + 0x18) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    return;
  }
  *(uint *)(param_1 + 0x34) = (uint)(byte)(&DAT_00735b18)[*(int *)(param_1 + 0x24) * 6];
  return;
}

