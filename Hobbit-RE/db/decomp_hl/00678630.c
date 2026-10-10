
undefined4 FUN_00678630(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  FUN_00679ab0();
  *param_2 = 0;
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x10), iVar1 != param_1 + 0xc)) &&
     (iVar2 = *(int *)(*(int *)(iVar1 + 0x8c) + 0x10), iVar2 != -1)) {
    puVar4 = (undefined4 *)(*(int *)(*(int *)(*(int *)(iVar1 + 8) + 8) + 0x1a0) + iVar2);
    uVar3 = *puVar4;
    *param_2 = puVar4 + 1;
    FUN_00679ac0();
    return uVar3;
  }
  FUN_00679ac0();
  return 0;
}

