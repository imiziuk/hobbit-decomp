
void __thiscall FUN_0052f800(int param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = FUN_0052e130();
    if ((param_2 < iVar1) &&
       (iVar1 = param_2 * 0xa8 + *(int *)(param_1 + 0xc),
       *(int *)(param_2 * 0xa8 + 0x8c + *(int *)(param_1 + 0xc)) == 0)) {
      FUN_0052f850(iVar1);
      FUN_0052f8a0(iVar1);
      FUN_0052f900(iVar1);
    }
  }
  return;
}

