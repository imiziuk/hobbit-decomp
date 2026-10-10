
float10 FUN_006786a0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_00679ab0();
  if (((param_1 != 0) &&
      (((*(int *)(param_1 + 0xf0) == 2 || (*(int *)(param_1 + 0xf0) == 4)) &&
       (iVar1 = *(int *)(param_1 + 0x10), iVar1 != param_1 + 0xc)))) &&
     (*(int *)(iVar1 + 0x10) != 0)) {
    uVar3 = FUN_0067be30(*(int *)(iVar1 + 0x10));
    iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0xc);
    uVar2 = *(uint *)(iVar1 + 0x18);
    if (uVar2 < uVar3) {
      uVar3 = uVar2;
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
    FUN_00679ac0();
    return (float10)((float)uVar3 / (float)iVar1);
  }
  FUN_00679ac0();
  return (float10)DAT_006e92e4;
}

