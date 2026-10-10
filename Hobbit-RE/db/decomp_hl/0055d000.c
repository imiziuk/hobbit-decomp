
bool __thiscall FUN_0055d000(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int **)(param_2 + 0x5c) != (int *)0x0)) {
    switch(*(undefined4 *)(param_1 + 0xb0)) {
    case 0x46:
      FUN_0055c470();
      iVar1 = FUN_0064a860();
      return iVar1 == 0;
    case 0x47:
      return true;
    case 0x48:
      FUN_00649b60(param_1 + 0x118);
      iVar1 = (**(code **)(**(int **)(param_2 + 0x5c) + 0x28))();
      return iVar1 == 0;
    case 0x49:
      FUN_00649b60(param_1 + 0x144);
      iVar1 = (**(code **)(**(int **)(param_2 + 0x5c) + 0x2c))();
      return iVar1 == 0;
    default:
      iVar1 = (**(code **)(**(int **)(param_2 + 0x5c) + 0x24))();
      return iVar1 == 0;
    }
  }
  return false;
}

