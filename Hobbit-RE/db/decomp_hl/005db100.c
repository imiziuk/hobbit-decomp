
void __fastcall FUN_005db100(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00406bf0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 0x28))
                      (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0);
    FUN_004b2a60(*(undefined4 *)(param_1 + 0x20),uVar2);
  }
  return;
}

