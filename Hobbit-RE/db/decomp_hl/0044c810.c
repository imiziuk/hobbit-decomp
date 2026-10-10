
void __fastcall FUN_0044c810(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x28))();
  param_1[0x17d1] = *piVar1;
  param_1[0x17d2] = piVar1[1];
  param_1[0x17d3] = piVar1[2];
  piVar1 = (int *)(**(code **)(*param_1 + 0x28))();
  param_1[0x17d4] = *piVar1;
  param_1[0x17d5] = piVar1[1];
  param_1[0x17d6] = piVar1[2];
  param_1[0x17d7] = 0;
  return;
}

