
undefined4 FUN_006c6c84(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    uVar2 = FUN_006c404a();
    return uVar2;
  }
  if ((DAT_00815f1c != (code *)0x0) && (iVar3 = FUN_006ca476(DAT_00815f1c), iVar3 != 0)) {
    uVar2 = (*DAT_00815f1c)(param_1);
    return uVar2;
  }
  return 0;
}

