
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004272d0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x3c0) != 0) {
    fVar1 = (float10)FUN_00437420();
    return fVar1;
  }
  if (*(int *)(param_1 + 0x3d0) != 0) {
    fVar1 = (float10)FUN_00437500();
    return fVar1;
  }
  return (float10)_DAT_006e9370;
}

