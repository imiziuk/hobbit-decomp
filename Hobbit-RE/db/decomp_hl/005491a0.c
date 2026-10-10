
void __thiscall FUN_005491a0(int param_1,undefined4 param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_100 [256];
  
  FUN_005484f0(param_2,local_100,1);
  if (DAT_0076cd7c != 0) {
    iVar3 = FUN_00647f90(local_100,s_INST_COURAGEPOINT_1_ENEMY_RGEOM_0073c898);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = FUN_00548c90(local_100);
  if (((uVar4 != 0xffffffff) &&
      (iVar5 = (*(uint *)(param_1 + 0x18) & uVar4) * 0x7c,
      iVar3 = *(int *)(*(int *)(param_1 + 0x24) + 8 +
                      ((int)uVar4 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18),
      iVar6 = iVar5 + iVar3, *(int *)(iVar5 + 100 + iVar3) == 1)) &&
     (*(short *)(iVar6 + 0x6c) = *(short *)(iVar6 + 0x6c) + -1, *(short *)(iVar6 + 0x6c) == 0)) {
    iVar3 = FUN_00650030();
    (**(code **)(**(int **)(iVar6 + 0x74) + 4))(*(undefined4 *)(iVar6 + 0x68),local_100);
    iVar5 = FUN_00650030();
    *(undefined4 *)(iVar6 + 0x68) = 0;
    *(undefined4 *)(iVar6 + 100) = 0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) - (iVar3 - iVar5);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    piVar1 = (int *)(*(int *)(iVar6 + 0x74) + 0x10);
    *piVar1 = *piVar1 - (iVar3 - iVar5);
    *(int *)(*(int *)(iVar6 + 0x74) + 0x14) = *(int *)(*(int *)(iVar6 + 0x74) + 0x14) + -1;
    FUN_00647cf0(iVar6);
    if (*(short *)(iVar6 + 0x70) == 0) {
      FUN_00548a80(uVar4);
    }
  }
  return;
}

