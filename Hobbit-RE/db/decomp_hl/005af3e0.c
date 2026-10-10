
void __thiscall FUN_005af3e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)FUN_004021c0(param_2,param_3);
  if (piVar2 != (int *)0x0) {
    FUN_00452660(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x174));
    *(undefined4 *)(param_1 + 0x90) = param_2;
    *(undefined4 *)(param_1 + 0x94) = param_3;
    piVar3 = (int *)FUN_005af120();
    iVar1 = *piVar3;
    uVar4 = (**(code **)(*piVar2 + 0x28))(0);
    (**(code **)(iVar1 + 0x14))(uVar4);
  }
  return;
}

