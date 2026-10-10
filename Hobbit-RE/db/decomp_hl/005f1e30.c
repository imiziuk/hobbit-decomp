
void __thiscall FUN_005f1e30(int param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_0041bcc0();
  iVar1 = FUN_004228e0();
  if (*(int *)(param_1 + 0xc) <= iVar1) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  FUN_005f11b0(param_2);
  return;
}

