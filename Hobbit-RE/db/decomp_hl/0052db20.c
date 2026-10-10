
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0052db20(int param_1)

{
  int local_8;
  int local_4;
  
  FUN_0065f8a0(&local_8,&local_4);
  *(float *)(param_1 + 0xc18) = (float)local_8;
  *(float *)(param_1 + 0xc1c) = (float)local_4;
  *(undefined4 *)(param_1 + 0xc20) = *(undefined4 *)(param_1 + 0xc18);
  *(undefined4 *)(param_1 + 0xc24) = *(undefined4 *)(param_1 + 0xc1c);
  *(float *)(param_1 + 0xc20) = *(float *)(param_1 + 0xc20) * _DAT_006e936c;
  *(float *)(param_1 + 0xc24) = *(float *)(param_1 + 0xc24) * _DAT_006e936c;
  return;
}

