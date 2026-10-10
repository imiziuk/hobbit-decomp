
void __thiscall FUN_006386f0(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  switch(*(undefined2 *)(param_1 + 0x42)) {
  case 0:
    iVar4 = *(int *)(param_1 + 0x48);
    if (iVar4 == 0) {
      param_3 = 5;
      goto LAB_006389b0;
    }
    goto joined_r0x00638987;
  default:
    iVar4 = *(int *)(param_1 + 0x48);
    *(float *)(param_1 + 0x4c) = param_2 + *(float *)(param_1 + 0x4c);
    if (iVar4 == 0) {
      param_3 = 5;
      goto LAB_006389b0;
    }
joined_r0x00638987:
    if (iVar4 == 1) {
      iVar4 = FUN_006389f0(&param_3);
      if (iVar4 == 0) {
        param_3 = 5;
      }
      goto LAB_006389b0;
    }
    if (iVar4 != 2) goto LAB_006389b0;
    break;
  case 5:
    *(float *)(param_1 + 0x4c) = param_2 + *(float *)(param_1 + 0x4c);
    FUN_005af120();
    fVar5 = (float10)FUN_005aaac0();
    if ((float10)*(float *)(param_1 + 0x4c) - (float10)*(float *)(param_1 + 0x50) <= fVar5) {
      if (*(float *)(param_1 + 0x4c) < *(float *)(param_1 + 0x58)) {
        if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
          param_3 = 5;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      goto LAB_006389b0;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      *(undefined4 *)(param_1 + 0x48) = 1;
      FUN_006389f0(&param_3);
      goto LAB_006389b0;
    }
    if (*(int *)(param_1 + 0x48) == 1) {
      if (*(int *)(param_1 + 0x5c) == 0) goto LAB_006389b0;
      *(undefined4 *)(param_1 + 0x48) = 2;
      iVar4 = FUN_005af120();
      if (*(int *)(iVar4 + 0x1e4) == 0) {
        FUN_006389f0(&param_3);
        goto LAB_006389b0;
      }
    }
    else {
      if (*(int *)(param_1 + 0x5c) == 0) goto LAB_006389b0;
      *(undefined4 *)(param_1 + 0x48) = 2;
      iVar4 = FUN_005af120();
      if (*(int *)(iVar4 + 0x1e4) == 0) {
        FUN_006389f0(&param_3);
        goto LAB_006389b0;
      }
    }
    break;
  case 6:
    goto switchD_00638703_caseD_6;
  case 7:
    piVar2 = (int *)FUN_005af120();
    uVar3 = (**(code **)(*piVar2 + 0x28))(0,0,0x3f800000);
    FUN_004357e0(uVar3);
    iVar4 = FUN_005b38a0();
    if (iVar4 == 0) {
      param_3 = 9;
      goto LAB_006389b0;
    }
    if (*(float *)(param_1 + 0x58) <= *(float *)(param_1 + 0x4c)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      param_3 = 5;
      goto LAB_006389b0;
    }
    FUN_005af120();
    fVar5 = (float10)FUN_005aaac0();
    if ((float10)*(float *)(param_1 + 0x4c) - (float10)*(float *)(param_1 + 0x50) <= fVar5) {
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
        param_3 = 8;
      }
      goto LAB_006389b0;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    break;
  case 8:
    fVar1 = param_2 + *(float *)(param_1 + 0x4c);
    *(float *)(param_1 + 0x4c) = fVar1;
    if (*(float *)(param_1 + 0x58) <= fVar1) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x48) = 0;
      param_3 = 5;
      goto LAB_006389b0;
    }
    FUN_005af120();
    fVar5 = (float10)FUN_005aaac0();
    if ((float10)*(float *)(param_1 + 0x4c) - (float10)*(float *)(param_1 + 0x50) <= fVar5) {
      if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
        param_3 = 8;
      }
      goto LAB_006389b0;
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
    break;
  case 9:
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      param_3 = 6;
    }
    goto switchD_00638703_caseD_6;
  }
  param_3 = 7;
LAB_006389b0:
  FUN_005be370(param_2,param_3);
  return;
switchD_00638703_caseD_6:
  if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
    param_3 = 5;
  }
  goto LAB_006389b0;
}

