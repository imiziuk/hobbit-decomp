
undefined4 __thiscall FUN_004c7660(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (-1 < param_2) {
    iVar3 = FUN_004c71a0();
    if (iVar3 != 0) {
      FUN_0053b700(param_2,*(undefined4 *)(*(int *)(param_1 + 0x140) + 0x90));
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x6c) =
           *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x94);
      iVar3 = *(int *)(param_1 + 0x140);
      iVar4 = __ftol();
      *(undefined4 *)(iVar3 + 0x14) = 0;
      *(undefined4 *)(iVar3 + 0x68) = 0;
      *(float *)(iVar3 + 0x10) = (float)iVar4;
      *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x7c) =
           *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x8c);
      iVar3 = *(int *)(param_1 + 0x140);
      *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x90);
      *(uint *)(iVar3 + 100) = (uint)(*(int *)(iVar3 + 0x90) == 0);
      piVar1 = *(int **)(param_1 + 0x140);
      uVar2 = piVar1[1] * 2;
      if (((uVar2 ^ piVar1[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
        iVar3 = *piVar1;
      }
      else {
        iVar3 = FUN_00549470(piVar1 + 1);
      }
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = FUN_0053cb40(s__coll_0072c884,1);
        if (iVar3 == -1) {
          iVar3 = 0;
        }
      }
      *(int *)(*(int *)(param_1 + 0x140) + 0x98) = iVar3;
      piVar1 = *(int **)(param_1 + 0x140);
      uVar2 = piVar1[1] * 2;
      if (((uVar2 ^ piVar1[1]) & 0x7fffffff ^ uVar2) == 0xffffffff) {
        iVar3 = *piVar1;
      }
      else {
        iVar3 = FUN_00549470(piVar1 + 1);
      }
      *(int *)(*(int *)(param_1 + 0x140) + 0x9c) =
           (int)*(short *)(piVar1[2] * 0x50 + 0x26 + *(int *)(iVar3 + 0x58));
      if (*(int *)(*(int *)(param_1 + 0x140) + 0x98) == -1) {
        *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x98) = 0;
      }
      return 1;
    }
  }
  return 0;
}

