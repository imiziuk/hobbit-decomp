
void __thiscall FUN_006b68c0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (((-1 < iVar1) && (iVar1 < 0x400)) && (*(int *)(param_1 + iVar1 * 4) != 0)) {
    FUN_006ba380();
    iVar2 = FUN_006ba390();
    if (iVar2 == 0) {
      FUN_006b7250(iVar1);
    }
  }
  *param_2 = -1;
  return;
}

