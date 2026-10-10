
void __thiscall FUN_00665180(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_4;
  
  local_4 = param_1;
  if (param_2 != *(int *)(param_1 + 4)) {
    piVar1 = *(int **)(param_3 + 0x14);
    (**(code **)(*piVar1 + 0x2c))
              (piVar1,param_4,*(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18),&local_4);
    uVar2 = *(int *)(param_1 + 0x14) * *(int *)(param_1 + 0x18);
    puVar4 = *(undefined4 **)(param_1 + 0x40);
    puVar5 = (undefined4 *)0x0;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    (**(code **)(*piVar1 + 0x30))(piVar1);
  }
  FUN_00664e90(param_2,param_3,param_4);
  return;
}

