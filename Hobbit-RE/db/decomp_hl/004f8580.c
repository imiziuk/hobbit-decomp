
void __thiscall FUN_004f8580(int param_1,undefined4 param_2,float param_3)

{
  *(float *)(param_1 + 0x81c) = DAT_006e92e8 / param_3;
  *(char *)(param_1 + 0x823) = (char)((uint)param_2 >> 0x18);
  *(char *)(param_1 + 0x822) = (char)((uint)param_2 >> 0x10);
  *(char *)(param_1 + 0x821) = (char)((uint)param_2 >> 8);
  *(char *)(param_1 + 0x820) = (char)param_2;
  *(undefined4 *)(param_1 + 0x824) = 1;
  return;
}

