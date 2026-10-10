
void __fastcall FUN_00473bb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int local_4;
  
  iVar4 = 0;
  local_4 = param_1;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xec) + iVar4 * 4);
      iVar2 = piVar1[0xc];
      if ((iVar2 != 0) && (*piVar1 == 4)) {
        iVar3 = (int)*(short *)(iVar2 + 0xe);
        if (iVar3 + 1 < *(int *)(param_1 + 0xb0)) {
          fVar5 = (float10)*(float *)(iVar3 * 0x3c + 0x74 + *(int *)(param_1 + 0xb4)) -
                  (float10)*(float *)(iVar2 + 4);
        }
        else {
          local_4 = 0;
          fVar5 = (float10)FUN_00473c60(iVar3,&local_4);
          if (fVar5 < (float10)DAT_006e92e8 == (NAN(fVar5) || NAN((float10)DAT_006e92e8))) {
            fVar5 = (float10)FUN_00473c60((int)*(short *)(iVar2 + 0xe),&local_4);
          }
          else {
            fVar5 = (float10)DAT_006e92e8;
          }
        }
        *(float *)(iVar2 + 8) = (float)fVar5;
        FUN_00473ad0(iVar4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xe8));
  }
  return;
}

