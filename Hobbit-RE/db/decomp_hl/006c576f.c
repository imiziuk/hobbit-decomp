
float10 FUN_006c576f(undefined4 param_1,double param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_0075acb8 == 0) {
    fVar2 = (float10)FUN_006c5d25(1,param_1,param_2,0,param_2,param_3);
    return fVar2;
  }
  puVar1 = (undefined4 *)FUN_006c5643();
  *puVar1 = 0x21;
  FUN_006c5f9a();
  return (float10)param_2;
}

