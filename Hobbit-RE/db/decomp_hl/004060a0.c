
void __fastcall FUN_004060a0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0053be70(DAT_006e9310);
  fVar1 = (float10)*(float *)(param_1 + 0x204) / fVar1;
  *(float *)(param_1 + 0x20c) = (float)fVar1;
  *(float *)(param_1 + 0x210) =
       (float)(((float10)DAT_006e92e8 - fVar1) / (float10)*(int *)(*(int *)(param_1 + 8) + 0xc));
  return;
}

