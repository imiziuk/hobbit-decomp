
bool __thiscall FUN_00442480(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == -1) {
    return false;
  }
  FUN_00549470(param_1 + 4);
  FUN_00549580(param_1 + 4);
  iVar1 = FUN_0053cc70(param_2);
  return *(int *)(param_1 + 8) == iVar1;
}

