
void __thiscall FUN_006360b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = FUN_005af780(1);
    uVar2 = 1;
    if (iVar1 != 0) goto LAB_006360d1;
  }
  uVar2 = param_2;
LAB_006360d1:
  FUN_005bec70(uVar2);
  return;
}

