
void __thiscall
FUN_006a5cc0(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_3 == 2) {
    if (param_4 != 0) {
      DAT_00813048 = 0;
      *(undefined4 *)(param_1 + 0x118) = 1;
    }
    iVar5 = -*(int *)(param_1 + 0x114);
  }
  else if (param_3 == 3) {
    if (param_4 != 0) {
      DAT_00813048 = 0;
      *(undefined4 *)(param_1 + 0x118) = 1;
    }
    iVar5 = *(int *)(param_1 + 0x114);
  }
  if ((param_4 == 0) && (9 < DAT_00813048)) {
    iVar1 = *(int *)(param_1 + 0x11c);
    iVar4 = *(int *)(param_1 + 0x118) * 10;
    *(int *)(param_1 + 0x118) = iVar4;
    if (iVar4 - iVar1 != 0 && iVar1 <= iVar4) {
      *(int *)(param_1 + 0x118) = iVar1;
    }
    DAT_00813048 = 0;
  }
  if (iVar5 == 0) {
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x6c))(param_2,param_3,param_4,param_5);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x120);
    iVar5 = *(int *)(param_1 + 0x118) * iVar5 + iVar1;
    iVar4 = *(int *)(param_1 + 0x10c);
    *(int *)(param_1 + 0x120) = iVar5;
    if (iVar5 < iVar4) {
      *(int *)(param_1 + 0x120) = iVar4;
    }
    iVar5 = *(int *)(param_1 + 0x110);
    if (iVar5 <= *(int *)(param_1 + 0x120)) {
      *(int *)(param_1 + 0x120) = iVar5;
    }
    iVar2 = *(int *)(param_1 + 0x120);
    if ((iVar2 != iVar1) && (piVar3 = *(int **)(param_1 + 0xc), piVar3 != (int *)0x0)) {
      if (iVar4 < iVar5) {
        *(float *)(param_1 + 0x128) = (float)(iVar2 - iVar4) / (float)(iVar5 - iVar4);
      }
      (**(code **)(*piVar3 + 0x3c))(piVar3,param_1,2,iVar2);
      if (*(int *)(param_1 + 300) != 0) {
        FUN_00659600(s_VolumeFader_SFX_00755d8c,1);
        return;
      }
    }
  }
  return;
}

