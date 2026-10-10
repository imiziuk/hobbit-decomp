
void __fastcall FUN_0054f0a0(int param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0x2e8) != 0) {
    FUN_006bf840(*(undefined4 *)(param_1 + 0x2dc));
    FUN_006bf840(*(undefined4 *)(param_1 + 0x2e0));
    *(int *)(param_1 + 0x2dc) = param_1;
    *(int *)(param_1 + 0x2e0) = param_1 + 0x1b0;
    *(undefined4 *)(param_1 + 0x2e8) = 0;
  }
  puVar1 = (undefined4 *)(param_1 + 0x2d0);
  FUN_00549580(puVar1);
  FUN_00549350(puVar1);
  *puVar1 = 0x7fffffff;
  return;
}

