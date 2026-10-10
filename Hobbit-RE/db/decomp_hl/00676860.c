
void FUN_00676860(int param_1)

{
  int iVar1;
  
  FUN_00655890(1);
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 8) == 0)) {
      FUN_006771a0(iVar1);
    }
    FUN_006761f0(param_1);
  }
  FUN_006558d0(1);
  return;
}

