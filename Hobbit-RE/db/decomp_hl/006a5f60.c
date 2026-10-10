
void __thiscall FUN_006a5f60(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float10 extraout_ST0;
  
  iVar4 = param_3;
  if (*(int *)(param_1 + 0xf0) != 0) {
    iVar1 = *(int *)(param_1 + 0x120);
    FUN_006a33c0(&param_3,&param_4);
    iVar4 = param_3;
    if (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44) <= param_3) {
      iVar4 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44);
    }
    if (iVar4 < 0) {
      param_3 = 0;
    }
    else if (*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44) <= param_3) {
      param_3 = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44);
    }
    iVar4 = param_3;
    iVar2 = *(int *)(param_1 + 0x110);
    iVar5 = __ftol();
    *(int *)(param_1 + 0x120) = iVar5;
    if ((float10)iVar5 < extraout_ST0) {
      *(int *)(param_1 + 0x120) = iVar5 + 1;
    }
    if (*(int *)(param_1 + 0x120) < *(int *)(param_1 + 0x10c)) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x10c);
    }
    if (iVar2 <= *(int *)(param_1 + 0x120)) {
      *(int *)(param_1 + 0x120) = iVar2;
    }
    if (((*(int *)(param_1 + 0x120) != iVar1) &&
        (piVar3 = *(int **)(param_1 + 0xc), piVar3 != (int *)0x0)) &&
       ((**(code **)(*piVar3 + 0x3c))(piVar3,param_1,2,*(int *)(param_1 + 0x120)), iVar4 = param_3,
       *(int *)(param_1 + 300) != 0)) {
      FUN_00659600(s_VolumeFader_SFX_00755d8c,1);
      iVar4 = param_3;
    }
  }
  *(int *)(param_1 + 0x104) = iVar4;
  *(undefined4 *)(param_1 + 0x108) = param_4;
  return;
}

