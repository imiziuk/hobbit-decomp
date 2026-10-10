
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00427340(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x3d0) != 0) {
    fVar1 = (float10)FUN_00437570();
    if ((NAN(fVar1) || NAN((float10)_DAT_006e999c)) != (fVar1 == (float10)_DAT_006e999c)) {
      return (float10)_DAT_006e99d8;
    }
    if ((NAN(fVar1) || NAN((float10)_DAT_006e958c)) != (fVar1 == (float10)_DAT_006e958c)) {
      return (float10)_DAT_006e99d4;
    }
  }
  return (float10)0.0;
}

