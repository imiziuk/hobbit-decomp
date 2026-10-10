
void __thiscall FUN_00601830(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  piVar2 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if ((iVar1 != 0) && (piVar2 != (int *)0x0)) {
    uVar3 = (**(code **)(*piVar2 + 0x28))();
    iVar1 = FUN_004e2330(uVar3);
    if (iVar1 != 0) {
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
    }
  }
  FUN_005f11b0(param_2);
  return;
}

