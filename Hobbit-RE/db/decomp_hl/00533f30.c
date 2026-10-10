
undefined4 __fastcall FUN_00533f30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x24c);
  uVar2 = *(undefined4 *)(param_1 + 0x264);
  if ((1 < iVar1) && ((iVar1 < 8 || (iVar1 == 9)))) {
    uVar2 = *(undefined4 *)(param_1 + 0x268);
  }
  return uVar2;
}

