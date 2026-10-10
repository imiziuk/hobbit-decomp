
void FUN_00674910(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_007f2430 + DAT_007f242c;
  DAT_007f242c = (&DAT_007f2430)[DAT_007f242c];
  *puVar1 = param_1;
  DAT_007f2428 = DAT_007f2428 + 1;
  return;
}

