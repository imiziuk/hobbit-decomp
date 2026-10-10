
bool __thiscall FUN_004a10b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0x1e4) == 0) {
    return false;
  }
  piVar1 = (int *)FUN_004021c0(param_2,param_3);
  if (piVar1 == (int *)0x0) {
    return false;
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x28))();
  uStack_c = *puVar2;
  uStack_8 = puVar2[1];
  uStack_4 = puVar2[2];
  FUN_004357e0(&uStack_c);
  iVar3 = FUN_005b38a0();
  return iVar3 != 0;
}

