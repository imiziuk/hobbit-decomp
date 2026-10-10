
void __thiscall FUN_004de580(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_00659c80(*(int *)(param_1 + 0x1ac),0);
  }
  if (param_2 != 0) {
    piVar1 = (int *)FUN_0054c120(param_3,0);
    uVar3 = 1;
    if (piVar1 == (int *)0x0) {
      uVar3 = FUN_00659600(param_2,1);
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x28))();
      uVar3 = FUN_00659630(param_2,uVar2,uVar3);
    }
    *(undefined4 *)(param_1 + 0x1ac) = uVar3;
    *(undefined4 *)(param_1 + 0x1b0) = param_4;
  }
  return;
}

