
void __thiscall FUN_00603a70(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x108))();
    if ((iVar2 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
    uVar3 = (**(code **)(*piVar1 + 0x108))();
    *(undefined4 *)(param_1 + 0x18) = uVar3;
  }
  FUN_005f11b0(param_2);
  return;
}

