
void __fastcall FUN_004a3710(int *param_1)

{
  (**(code **)(*param_1 + 0x14))(param_1 + 8,0);
  param_1[0x11e] = param_1[0x11e] & 0xffffffef;
  param_1[0x69] = param_1[0x6a];
  FUN_00468280();
  FUN_005aed60();
  FUN_005aa860();
  FUN_005922b0();
  param_1[0x9a] = param_1[0x9a] & 0xfffdffffU | 0x10000;
  param_1[0xa7] = 0;
  param_1[0xa4] = param_1[0xa5];
  param_1[0x97] = 0;
  return;
}

