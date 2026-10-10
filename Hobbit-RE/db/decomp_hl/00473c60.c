
void __thiscall FUN_00473c60(int param_1,int param_2,int *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = 0;
  fVar2 = DAT_006e92e4;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xec) + iVar4 * 4) + 0x30);
      if ((((iVar1 != 0) && ((*(byte *)(iVar1 + 0x10) & 1) != 0)) &&
          (*(short *)(iVar1 + 0xe) == param_2)) &&
         (fVar3 = (*(float *)(iVar1 + 4) -
                  *(float *)(param_2 * 0x3c + 0x38 + *(int *)(param_1 + 0xb4))) +
                  *(float *)(iVar1 + 8), fVar2 < fVar3)) {
        *param_3 = iVar4;
        fVar2 = fVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xe8));
  }
  return;
}

