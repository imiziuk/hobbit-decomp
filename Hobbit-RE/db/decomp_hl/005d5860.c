
bool __fastcall FUN_005d5860(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  
  FUN_006501d0(s_ActionSpawnNPC__ValidData___00746e94);
  iVar2 = *(int *)(param_1 + 0x20);
  bVar4 = 0 < iVar2;
  if (0 < iVar2) {
    piVar3 = *(int **)(param_1 + 0x24);
    do {
      iVar1 = *piVar3;
      if ((*(int *)(iVar1 + 0x20) == 0 && *(int *)(iVar1 + 0x24) == 0) ||
         (*(int *)(iVar1 + 0x28) == 0 && *(int *)(iVar1 + 0x2c) == 0)) {
        bVar4 = false;
      }
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_006501e0();
  return bVar4;
}

