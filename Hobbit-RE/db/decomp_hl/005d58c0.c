
undefined4 __thiscall FUN_005d58c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  FUN_006501d0(s_ActionSpawnNPC__UsesObject___00746eb0);
  uVar3 = 0;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    piVar4 = *(int **)(param_1 + 0x24);
    do {
      iVar1 = *piVar4;
      if ((((*(int *)(iVar1 + 0x20) == param_2) && (*(int *)(iVar1 + 0x24) == param_3)) ||
          ((*(int *)(iVar1 + 0x28) == param_2 && (*(int *)(iVar1 + 0x2c) == param_3)))) ||
         ((*(int *)(iVar1 + 0x30) == param_2 && (*(int *)(iVar1 + 0x34) == param_3)))) {
        uVar3 = 1;
        goto LAB_005d5930;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x20));
    uVar3 = 0;
  }
LAB_005d5930:
  FUN_006501e0();
  return uVar3;
}

