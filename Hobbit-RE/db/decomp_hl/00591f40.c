
void __fastcall FUN_00591f40(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_00592920();
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
  iVar4 = FUN_00592190();
  *(int *)(iVar4 + 0x138) = *(int *)(iVar4 + 0x138) + 1;
  *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
  *(undefined4 *)(iVar4 + 300) = 1;
  *(undefined4 *)(iVar4 + 0x13c) = 1;
  *(undefined4 *)(iVar4 + 0x10) = *puVar3;
  *(undefined4 *)(iVar4 + 0x14) = puVar3[1];
  *(undefined4 *)(iVar4 + 0x18) = puVar3[2];
  piVar2 = (int *)FUN_00592920();
  iVar4 = (**(code **)(*piVar2 + 0x30))();
  uVar1 = *(undefined4 *)(iVar4 + 4);
  iVar4 = FUN_00592190();
  *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
  *(undefined4 *)(iVar4 + 0x20) = uVar1;
  *(undefined4 *)(iVar4 + 300) = 1;
  *(int *)(iVar4 + 0x138) = *(int *)(iVar4 + 0x138) + 1;
  *(undefined4 *)(iVar4 + 0x13c) = 1;
  piVar2 = (int *)FUN_00592920();
  iVar4 = (**(code **)(*piVar2 + 0x30))();
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(iVar4 + 4);
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfff7ffff;
  return;
}

