
void __thiscall FUN_005f7930(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00434cd0(param_1 + 0xc);
  iVar1 = __ftol();
  if (*(int *)(param_1 + 0x38) <= iVar1) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  FUN_005f11b0(param_2);
  return;
}

