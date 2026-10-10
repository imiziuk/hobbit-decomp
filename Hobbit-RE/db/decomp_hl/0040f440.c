
bool __thiscall FUN_0040f440(int param_1,int param_2,int param_3)

{
  return (&DAT_0071e948)
         [(*(int *)(param_1 + 0x120 + param_2 * 0x28) +
          *(int *)(param_1 + (param_2 * 5 + 0x23) * 8) * 4) * 4 + param_3] != '\0';
}

