
void __fastcall FUN_00439770(int *param_1)

{
  float10 fVar1;
  
  param_1[0x38] = *(int *)(param_1[0x114] + 0x70);
  fVar1 = (float10)(**(code **)(*param_1 + 0x10c))();
  param_1[0x1eb] = (int)(float)fVar1;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x160] = 1;
  param_1[0x164] = 1;
  param_1[0x163] = param_1[0x163] + 1;
  param_1[0x167] = param_1[0x167] + 1;
  param_1[0x11c] = 0;
  return;
}

