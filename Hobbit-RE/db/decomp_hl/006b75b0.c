
undefined4 __thiscall FUN_006b75b0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (((-1 < iVar1) && (iVar1 < 0x400)) && (*(int *)(param_1 + iVar1 * 4) != 0)) {
    return 1;
  }
  *param_2 = -1;
  return 0;
}

