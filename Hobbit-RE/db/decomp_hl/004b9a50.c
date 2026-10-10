
void __fastcall FUN_004b9a50(int *param_1)

{
  (**(code **)(*param_1 + 300))(param_1 + 8);
  param_1[0x60] = param_1[5];
  param_1[0x61] = param_1[6];
  param_1[0x62] = param_1[7];
  FUN_0041bcc0();
  FUN_00448560();
  FUN_004bd4c0(0);
  param_1[0x98] = param_1[0x98] & 0xfffffffc;
  FUN_004baec0();
  return;
}

