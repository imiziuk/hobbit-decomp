
int __fastcall FUN_0055c4b0(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x5c) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0x18))();
    if (iVar1 != 0) {
      FUN_0064a320(param_1 + 4);
      return param_1 + 0x30;
    }
  }
  FUN_0064a2e0(s_ERROR__Invalid_Data_0073e82c);
  return param_1 + 0x30;
}

