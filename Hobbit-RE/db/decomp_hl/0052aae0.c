
void __fastcall FUN_0052aae0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x4c) == '\0') {
    iVar2 = *piVar1;
  }
  else {
    iVar2 = *(int *)*piVar1 + *piVar1;
  }
  if (iVar2 != 0) {
    FUN_00674e10(piVar1);
    FUN_00650380();
    return;
  }
  return;
}

