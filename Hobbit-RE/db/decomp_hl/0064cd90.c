
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0064cd90(uint *param_1)

{
  longlong lVar1;
  
  if (param_1[4] != 0) {
    lVar1 = FUN_0064cb70();
    return (float10)(lVar1 + CONCAT44((param_1[3] - param_1[1]) - (uint)(param_1[2] < *param_1),
                                      param_1[2] - *param_1)) * (float10)_DAT_006f6cc8;
  }
  return (float10)*(longlong *)(param_1 + 2) * (float10)_DAT_006f6cc8;
}

