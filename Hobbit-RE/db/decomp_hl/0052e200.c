
void __thiscall FUN_0052e200(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (-1 < param_2) {
      iVar1 = FUN_0052e130();
      if (param_2 < iVar1) {
        iVar1 = FUN_0052e630(param_2);
        if (iVar1 != 0) {
          FUN_0052e160(3);
          return;
        }
      }
    }
    FUN_0052e160(0);
  }
  return;
}

