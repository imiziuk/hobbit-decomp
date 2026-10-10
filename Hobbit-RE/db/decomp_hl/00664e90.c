
void __thiscall FUN_00664e90(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  if (param_3 != 0) {
    FUN_00664960(param_1);
  }
  FUN_00664ec0();
  return;
}

