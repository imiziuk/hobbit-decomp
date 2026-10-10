
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006746a0(int param_1)

{
  float10 fVar1;
  
  if ((*(uint *)(param_1 + 0x88) & 0x800) != 0) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) & 0xfffff7ff;
    fVar1 = (float10)fptan((float10)*(float *)(param_1 + 100) * (float10)_DAT_006e936c);
    *(float *)(param_1 + 0x24c) =
         (float)(((float10)((*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c)) + 1) *
                 (float10)_DAT_006e936c) / fVar1);
  }
  return;
}

