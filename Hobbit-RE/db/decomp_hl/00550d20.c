
int __thiscall FUN_00550d20(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x18) & param_2) * 0x2fc +
         *(int *)(*(int *)(param_1 + 0x24) + 8 +
                 ((int)param_2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18);
}

