
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004f7560(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x898) != 0 || *(int *)(param_1 + 0x89c) != 0) {
    fVar4 = (float10)FUN_00557bb0();
    if (((float10)_DAT_006edbfc < fVar4 - (float10)*(float *)(param_1 + 0x8a0)) &&
       ((*(int *)(param_1 + 0x8a4) == 5 || (*(int *)(param_1 + 0x8a4) == 7)))) {
      *(undefined4 *)(param_1 + 0x8a4) = 6;
    }
  }
  piVar3 = (int *)(param_1 + 0xeb0);
  piVar2 = (int *)(param_1 + 0xc48);
  iVar1 = 0x4d;
  do {
    if (*piVar2 != 0 || piVar2[1] != 0) {
      fVar4 = (float10)FUN_00557bb0();
      if (((float10)_DAT_006edbfc < fVar4 - (float10)(float)piVar3[-0xe8]) &&
         ((*piVar3 == 5 || (*piVar3 == 7)))) {
        *piVar3 = 6;
      }
    }
    piVar2 = piVar2 + 2;
    piVar3 = piVar3 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

