
void __fastcall FUN_00681285(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_EAX;
  int *piVar4;
  
  piVar1 = (int *)(param_1 + 0x18);
  piVar3 = (int *)0x0;
  while ((piVar4 = piVar1, piVar4 != (int *)0x0 && (piVar4[4] != in_EAX))) {
    piVar3 = piVar4;
    piVar1 = (int *)piVar4[2];
  }
  piVar1 = (int *)piVar4[2];
  iVar2 = piVar4[5];
  piVar4[3] = 1;
  if ((piVar1 != (int *)0x0) && (piVar1[3] == 1)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    piVar4[5] = piVar4[5] + piVar1[5];
    piVar4[2] = piVar1[2];
    piVar1[3] = 0;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    piVar1[1] = *(int *)(param_1 + 0x50);
    *piVar1 = param_1 + 0x4c;
    *(int **)(param_1 + 0x50) = piVar1;
    *(int **)piVar1[1] = piVar1;
  }
  if ((piVar3 != (int *)0x0) && (piVar3[3] == 1)) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
    piVar3[5] = piVar3[5] + piVar4[5];
    piVar3[2] = piVar4[2];
    piVar4[3] = 0;
    *(int *)piVar3[1] = *piVar3;
    *(int *)(*piVar3 + 4) = piVar3[1];
    piVar4[1] = *(int *)(param_1 + 0x50);
    *piVar4 = param_1 + 0x4c;
    *(int **)(param_1 + 0x50) = piVar4;
    *(int **)piVar4[1] = piVar4;
    piVar4 = piVar3;
  }
  piVar4[1] = *(int *)(param_1 + 0x38);
  *piVar4 = param_1 + 0x34;
  *(int **)(param_1 + 0x38) = piVar4;
  *(int **)piVar4[1] = piVar4;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
  return;
}

