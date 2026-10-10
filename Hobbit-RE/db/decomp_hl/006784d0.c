
float10 FUN_006784d0(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  float local_4;
  
  local_4 = 0.0;
  FUN_00679ab0();
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x10) != 0) {
      while (iVar3 != param_1 + 0xc) {
        piVar1 = (int *)(iVar3 + 4);
        fVar2 = (float)*(int *)(*(int *)(iVar3 + 0x8c) + 0x18) /
                (float)*(int *)(*(int *)(iVar3 + 0x8c) + 0x1c) + *(float *)(iVar3 + 0x90);
        iVar3 = *piVar1;
        if (local_4 < fVar2) {
          local_4 = fVar2;
        }
      }
    }
  }
  FUN_00679ac0();
  return (float10)local_4;
}

