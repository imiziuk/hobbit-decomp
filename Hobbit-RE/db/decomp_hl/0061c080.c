
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0061c080(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (*(int *)(param_4 + 0x34) != 3) {
    *(float *)(param_1 + 0x9c) =
         _DAT_006f5be8 / (float)(*(int *)(param_1 + 0x98) + 1) + *(float *)(param_1 + 0x9c);
  }
  FUN_005be830(param_2,param_3,param_4);
  return;
}

