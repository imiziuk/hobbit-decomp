
void __thiscall FUN_004584d0(int param_1,float param_2)

{
  if (*(int *)(param_1 + 200) != 1) {
    if (param_2 < DAT_006e92e4) {
      *(float *)(param_1 + 0xb8) = DAT_006e92e4;
      return;
    }
    *(float *)(param_1 + 0xb8) = param_2;
  }
  return;
}

