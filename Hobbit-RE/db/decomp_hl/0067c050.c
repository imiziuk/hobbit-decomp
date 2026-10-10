
int * FUN_0067c050(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint unaff_ESI;
  
  iVar2 = param_1;
  piVar1 = *(int **)(param_1 + 0x78);
  if (piVar1 == (int *)0x0) {
    return piVar1;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    (**(code **)(*piVar1 + 0x10))(piVar1,param_1 + 0x18,0);
    uVar3 = FUN_0067be30(iVar2);
    *(uint *)(iVar2 + 0x24) = uVar3;
    if ((*(uint *)(iVar2 + 0x1c) != 0xffffffff) && (uVar3 < *(uint *)(iVar2 + 0x1c))) {
      return (int *)0x0;
    }
    *(uint *)(iVar2 + 0x1c) = uVar3;
  }
  if ((*(uint *)(iVar2 + 0x28) != 0) && (*(uint *)(iVar2 + 0x28) <= *(uint *)(iVar2 + 0x24))) {
    return (int *)0x0;
  }
  (**(code **)(**(int **)(iVar2 + 0x78) + 0x24))(*(int **)(iVar2 + 0x78),&param_1);
  return (int *)(unaff_ESI & 1);
}

