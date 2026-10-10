
void __thiscall FUN_00638cc0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005af000();
  if (iVar1 != 0) {
    iVar1 = FUN_005af780(7);
    if (iVar1 != 0) {
      uVar2 = 7;
      goto LAB_00638d10;
    }
    iVar1 = FUN_005af780(4);
    if (iVar1 != 0) {
      uVar2 = 4;
      goto LAB_00638d10;
    }
    iVar1 = FUN_005af780(3);
    uVar2 = 3;
    if (iVar1 != 0) goto LAB_00638d10;
  }
  uVar2 = param_2;
LAB_00638d10:
  if (((*(short *)(param_1 + 0x42) == 5) &&
      (*(float *)(param_1 + 0x54) <= *(float *)(param_1 + 0x4c))) && (*(int *)(param_1 + 0x48) != 2)
     ) {
    uVar2 = 1;
  }
  FUN_005bec70(uVar2);
  return;
}

