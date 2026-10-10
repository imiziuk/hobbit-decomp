
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006710d0(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00670f20(param_2,param_1,1,1);
  if ((float10)_DAT_006efa68 < ABS(fVar1)) {
    return 1;
  }
  return 0;
}

