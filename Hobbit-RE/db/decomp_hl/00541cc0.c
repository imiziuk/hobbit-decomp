
void __thiscall FUN_00541cc0(int param_1,undefined4 **param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puStack_10;
  
  iVar3 = (int)param_2;
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
  *(undefined4 *)(param_1 + 300) = 1;
  *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
  *(undefined4 *)(param_1 + 0x13c) = 1;
  *(int **)(param_1 + 0x10c + (int)param_2 * 4) = param_3;
  if (param_3 != (int *)0x0) {
    puStack_10 = (undefined4 *)0x541d08;
    (**(code **)(*param_3 + 8))();
    puStack_10 = &param_2;
    puVar4 = (uint *)FUN_004258d0();
    uVar1 = *puVar4;
    uVar2 = uVar1 * 2;
    puStack_10 = &param_2;
    FUN_00549580();
    puStack_10 = &param_2;
    FUN_00549350();
    if (((uVar2 ^ uVar1) & 0x7fffffff ^ uVar2) != 0xffffffff) {
      param_2 = &puStack_10;
      FUN_004258d0(&puStack_10);
      (**(code **)(**(int **)(param_1 + 0x10c + iVar3 * 4) + 4))();
    }
  }
  return;
}

