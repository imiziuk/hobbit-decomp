
uint FUN_0057dd10(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  
  piVar1 = (int *)FUN_004021c0(*param_1,param_1[1]);
  piVar2 = piVar1;
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*piVar1 + 0x84))();
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar1 + 0x88))(param_2);
      return uVar3;
    }
  }
  return (uint)piVar2 & 0xffffff00;
}

