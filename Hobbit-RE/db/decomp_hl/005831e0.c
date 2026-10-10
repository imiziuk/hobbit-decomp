
void __thiscall FUN_005831e0(int param_1,undefined1 *param_2,byte param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(param_1 + 0x14 + (uint)param_3 * 4);
  puVar1[3] = param_2[3];
  puVar1[2] = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = *param_2;
  return;
}

