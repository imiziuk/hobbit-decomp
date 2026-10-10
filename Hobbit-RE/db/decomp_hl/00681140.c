
int __thiscall FUN_00681140(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 == 0) {
    return -1;
  }
  if (*(int *)(param_1 + 0x68) <= *(int *)(param_1 + 0x10) + 1 + *(int *)(param_1 + 0x14)) {
    FUN_00681030();
  }
  piVar3 = *(int **)(param_1 + 0x34);
  piVar1 = (int *)(param_1 + 0x34);
  uVar5 = param_2 + 3U & 0xfffffffc;
  piVar4 = (int *)0x0;
  iVar6 = 0x40000000;
  if (piVar3 != piVar1) {
    do {
      iVar2 = piVar3[5];
      if (((int)uVar5 <= iVar2) && (iVar2 < iVar6)) {
        piVar4 = piVar3;
        iVar6 = iVar2;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar1);
    if (piVar4 != (int *)0x0) {
      *(int *)piVar4[1] = *piVar4;
      *(int *)(*piVar4 + 4) = piVar4[1];
      piVar4[3] = 2;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      if (piVar4[5] != uVar5) {
        piVar3 = *(int **)(param_1 + 0x4c);
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        piVar3[3] = 1;
        piVar3[4] = piVar4[4] + uVar5;
        piVar3[5] = piVar4[5] - uVar5;
        piVar3[2] = piVar4[2];
        piVar3[1] = *(int *)(param_1 + 0x38);
        *piVar3 = (int)piVar1;
        *(int **)(param_1 + 0x38) = piVar3;
        *(int **)piVar3[1] = piVar3;
        piVar4[5] = uVar5;
        piVar4[2] = (int)piVar3;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) - piVar4[5];
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + piVar4[5];
      return piVar4[4];
    }
  }
  return 0;
}

