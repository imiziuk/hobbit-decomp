
void FUN_00662ce0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((char)param_2 == '\0') {
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
  }
  FUN_0065bb10(uVar1);
  DAT_007f007c = DAT_007f007c + 1;
  DAT_007f0074 = DAT_007f0074 + 1;
  DAT_007f1429 = 0;
  FUN_00662bd0(param_1,param_2);
  FUN_006638a0(param_1);
  return;
}

