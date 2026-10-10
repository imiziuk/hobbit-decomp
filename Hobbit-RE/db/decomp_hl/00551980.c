
void __fastcall FUN_00551980(int param_1)

{
  if (*(int *)(param_1 + 0x88) < 1) {
    FUN_00583790(0);
    return;
  }
  if ((&DAT_006f3d16)[*(int *)(param_1 + 0x8c) * 0x1e - *(int *)(param_1 + 0x88)] != '\0') {
    FUN_00583790(1);
    FUN_005837a0(param_1 + 0xa0,param_1 + 0x94);
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
    return;
  }
  FUN_00583790(0);
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
  return;
}

