
undefined4 FUN_00554f30(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  
  iVar1 = FUN_00554750();
  iVar2 = 1;
  if (iVar1 == 0) {
    iVar2 = param_3;
  }
  param_3 = 0;
  if (param_2 == 0) {
    ppuVar3 = (undefined **)&DAT_0073d434;
    if (iVar2 == 0) {
      FUN_00554910(param_1,&DAT_0073d434,5,4,6,0x1b,&param_3);
      return 0;
    }
  }
  else {
    if (iVar2 == 0) {
      FUN_00554910(param_1,&DAT_0072ed7c,5,4,6,0x1b,&param_3);
      return 1;
    }
    ppuVar3 = &PTR_LAB_0073d790;
  }
  FUN_00554910(param_1,ppuVar3,5,4,6,0x1b,&param_3);
  return 1;
}

