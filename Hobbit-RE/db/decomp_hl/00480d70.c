
int __fastcall FUN_00480d70(int param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x8c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x90) = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  return param_1;
}

