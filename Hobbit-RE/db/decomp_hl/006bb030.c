
void __fastcall FUN_006bb030(int *param_1)

{
  if (param_1[0x12] != 0) {
    (**(code **)(*param_1 + 0x14))();
    param_1[0x12] = 0;
  }
  return;
}

