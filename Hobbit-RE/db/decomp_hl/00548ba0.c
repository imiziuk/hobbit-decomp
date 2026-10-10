
void __thiscall FUN_00548ba0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int local_4;
  
  uVar4 = 0;
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      if (*(int *)(param_1 + 0x24) != 0) {
        uVar2 = *(uint *)(param_1 + 0x18);
        puVar1 = (uint *)(*(int *)(param_1 + 0x24) +
                         ((int)uVar4 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18);
        uVar5 = __allshl();
        if ((((uint)uVar5 & *puVar1) == 0 && ((uint)((ulonglong)uVar5 >> 0x20) & puVar1[1]) == 0) &&
           ((iVar3 = (uVar2 & uVar4) * 0x7c + puVar1[2], *(short *)(iVar3 + 0x72) == 0 ||
            (param_2 == 0)))) {
          if ((*(int **)(iVar3 + 0x74) != (int *)0x0) && (*(int *)(iVar3 + 0x68) != 0)) {
            (**(code **)(**(int **)(iVar3 + 0x74) + 4))(*(int *)(iVar3 + 0x68),iVar3);
            *(undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                      ((int)uVar4 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x68 +
             (*(uint *)(param_1 + 0x18) & uVar4) * 0x7c) = 0;
            *(undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                      ((int)uVar4 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 100 +
             (*(uint *)(param_1 + 0x18) & uVar4) * 0x7c) = 0;
          }
          FUN_00548a80(uVar4);
          local_4 = local_4 + 1;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x10));
    if (0 < local_4) {
      FUN_005c9580();
    }
  }
  return;
}

