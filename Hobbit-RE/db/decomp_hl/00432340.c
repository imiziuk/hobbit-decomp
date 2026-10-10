
undefined4 FUN_00432340(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  switch(param_1) {
  case 0:
    return 3;
  case 1:
    return 1;
  case 2:
    return 0;
  case 3:
    uVar1 = 2;
  }
  return uVar1;
}

