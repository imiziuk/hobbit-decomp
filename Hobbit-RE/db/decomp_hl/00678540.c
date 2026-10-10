
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00678540(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00679ab0();
  if (((param_1 != 0) &&
      (((*(int *)(param_1 + 0xf0) == 2 || (*(int *)(param_1 + 0xf0) == 4)) &&
       (iVar2 = *(int *)(param_1 + 0x10), iVar2 != param_1 + 0xc)))) &&
     (*(int *)(*(int *)(iVar2 + 0x8c) + 0xc) != -1)) {
    iVar3 = *(int *)(*(int *)(iVar2 + 8) + 8);
    FUN_006786a0(param_1);
    iVar4 = __ftol();
    bVar1 = *(byte *)((*(int *)(*(int *)(iVar2 + 0x8c) + 0xc) - iVar4) + 1 + *(int *)(iVar3 + 0x19c)
                     );
    FUN_00679ac0();
    return (float10)bVar1 * (float10)_DAT_006ed3a4;
  }
  FUN_00679ac0();
  return (float10)DAT_006e92e4;
}

