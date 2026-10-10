
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004b37a0(int param_1)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  fVar2 = (float10)FUN_00557bb0();
  fVar2 = (float10)FUN_0064c800((float)((float10)(uVar1 & 0xffff) * (float10)_DAT_006ebfe4 +
                                       fVar2 * (float10)_DAT_006e9578));
  return (fVar2 + (float10)DAT_006e92e8) * (float10)_DAT_006ec0e8;
}

