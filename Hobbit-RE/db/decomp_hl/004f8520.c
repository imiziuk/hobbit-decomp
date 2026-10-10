
void __thiscall FUN_004f8520(int param_1,int param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  
  iVar1 = FUN_0041bcb0();
  if (iVar1 != 0) {
    FUN_0041bcc0();
    FUN_004336e0();
  }
  if (param_2 == 0) {
    param_4 = -param_4;
  }
  *(float *)(param_1 + 0x81c) = param_4;
  *(char *)(param_1 + 0x823) = (char)((uint)param_3 >> 0x18);
  *(char *)(param_1 + 0x822) = (char)((uint)param_3 >> 0x10);
  *(char *)(param_1 + 0x821) = (char)((uint)param_3 >> 8);
  *(char *)(param_1 + 0x820) = (char)param_3;
  *(undefined4 *)(param_1 + 0x824) = 0;
  return;
}

