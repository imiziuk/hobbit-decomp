
void __thiscall FUN_00417c90(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  float local_4;
  
  if (((*(int *)(param_1 + 0x10) != 1) || (*(int *)(param_1 + 0x118) != param_2)) ||
     (*(int *)(param_1 + 0x120) != param_3)) {
    *(int *)(param_1 + 0x118 + *(int *)(param_1 + 0x10) * 4) = param_2;
    *(int *)(param_1 + 0x120 + *(int *)(param_1 + 0x10) * 4) = param_3;
    piVar4 = (int *)(param_1 + 0x118 + *(int *)(param_1 + 0x10) * 4);
    if (*piVar4 < 0) {
      *piVar4 = 0;
    }
    if (*(int *)(param_1 + 0x120 + *(int *)(param_1 + 0x10) * 4) < 0) {
      *(undefined4 *)(param_1 + 0x120 + *(int *)(param_1 + 0x10) * 4) = 0;
    }
    piVar4 = (int *)(param_1 + 0x118 + *(int *)(param_1 + 0x10) * 4);
    if (2 < *piVar4) {
      *piVar4 = 2;
    }
    if (2 < *(int *)(param_1 + 0x120 + *(int *)(param_1 + 0x10) * 4)) {
      *(undefined4 *)(param_1 + 0x120 + *(int *)(param_1 + 0x10) * 4) = 2;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    fVar2 = (float)*(int *)(param_1 + 0x118 + iVar1 * 4);
    fVar3 = (float)*(int *)(param_1 + 0x120 + iVar1 * 4);
    local_8 = fVar3 * *(float *)(param_1 + 0x144);
    local_4 = fVar3 * *(float *)(param_1 + 0x148);
    local_18 = fVar3 * *(float *)(param_1 + 0x140) +
               fVar2 * *(float *)(param_1 + 0x134) + *(float *)(param_1 + 0x128);
    local_14 = *(float *)(param_1 + 300) + fVar2 * *(float *)(param_1 + 0x138) + local_8;
    local_10 = *(float *)(param_1 + 0x130) + fVar2 * *(float *)(param_1 + 0x13c) + local_4;
    piVar4 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x28 + iVar1 * 8),
                                 *(undefined4 *)(param_1 + 0x2c + iVar1 * 8));
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x14))(&local_18,0);
    }
  }
  return;
}

