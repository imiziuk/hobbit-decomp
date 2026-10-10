
void __fastcall FUN_005cc300(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[5];
  if ((uVar1 & 2) == 0) {
    param_1[5] = uVar1 | 2;
    param_1[2] = 1;
    param_1[3] = 0;
    if ((uVar1 & 1) != 0) {
      (**(code **)(*param_1 + 0x14))(0x3c23d70a);
      return;
    }
  }
  else {
    param_1[2] = param_1[2] + 1;
  }
  return;
}

