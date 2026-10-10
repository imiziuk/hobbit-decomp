
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004272a0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x3c0) != 0) {
    fVar1 = (float10)FUN_004373b0();
    return fVar1;
  }
  if (*(int *)(param_1 + 0x3d0) != 0) {
    fVar1 = (float10)FUN_00437490();
    return fVar1;
  }
  return (float10)_DAT_006e9370;
}

