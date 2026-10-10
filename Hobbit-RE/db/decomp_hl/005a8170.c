
void __fastcall FUN_005a8170(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_c;
  
  FUN_0066c3a0(3,0x24);
  FUN_0066ddd0(0x20ff0000);
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x8840)) {
    piVar4 = (int *)(param_1 + 0x10);
    do {
      iVar2 = 1;
      if (1 < *piVar4 + -1) {
        piVar3 = piVar4 + 7;
        do {
          FUN_0066de80(piVar4 + 1);
          FUN_0066de80(piVar3 + -3);
          FUN_0066de80(piVar3);
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 3;
        } while (iVar2 < *piVar4 + -1);
      }
      local_c = local_c + 1;
      piVar4 = piVar4 + 0x6d;
    } while (local_c < *(int *)(param_1 + 0x8840));
  }
  FUN_0066d9a0();
  FUN_0066c3a0(1,0x10);
  FUN_0066ddd0(0xffff0000);
  local_c = 0;
  if (0 < *(int *)(param_1 + 0x8840)) {
    piVar4 = (int *)(param_1 + 0x10);
    do {
      iVar2 = 0;
      if (0 < *piVar4) {
        piVar3 = piVar4 + 1;
        iVar1 = (*piVar4 * 3 + -3) * 4;
        iVar5 = 0;
        do {
          FUN_0066de80((int)piVar4 + iVar1 + 4);
          FUN_0066de80(piVar3);
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 3;
          iVar1 = iVar5;
          iVar5 = iVar5 + 0xc;
        } while (iVar2 < *piVar4);
      }
      local_c = local_c + 1;
      piVar4 = piVar4 + 0x6d;
    } while (local_c < *(int *)(param_1 + 0x8840));
  }
  FUN_0066d9a0();
  return;
}

