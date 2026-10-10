
void FUN_00649350(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  for (iVar5 = iVar3; iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
    uVar4 = *(uint *)(iVar5 + 0x10);
    puVar1 = (uint *)(param_1 + 0x20);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar4;
    *(int *)(param_1 + 0x24) =
         *(int *)(param_1 + 0x24) + *(int *)(iVar5 + 0x14) + (uint)CARRY4(uVar2,uVar4);
  }
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    FUN_00649350(iVar3);
  }
  return;
}

