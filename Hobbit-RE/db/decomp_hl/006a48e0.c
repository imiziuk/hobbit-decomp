
void __thiscall
FUN_006a48e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_3 == 0) {
    iVar5 = -1;
  }
  else if (param_3 == 1) {
    iVar5 = 1;
  }
  if ((*(uint *)(param_1 + 0x2c) & 0x200) == 0) {
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc) + 0x6c))(param_2,param_3,param_4,param_5);
    }
  }
  else if (iVar5 != 0) {
    iVar1 = *(int *)(param_1 + 0x174);
    uVar3 = iVar1 + iVar5;
    if (-1 < (int)uVar3) {
      iVar4 = uVar3 * 0x58;
      do {
        if ((*(int *)(param_1 + 0x160) <= (int)uVar3) ||
           (*(int *)(iVar4 + *(int *)(param_1 + 0x164)) != 0)) break;
        uVar3 = uVar3 + iVar5;
        iVar4 = iVar4 + iVar5 * 0x58;
      } while (-1 < (int)uVar3);
    }
    if (0x7fffffff < uVar3) {
      uVar3 = 0xffffffff;
    }
    if (((int)uVar3 < *(int *)(param_1 + 0x160)) && (uVar3 != 0xffffffff)) {
      *(uint *)(param_1 + 0x174) = uVar3;
    }
    FUN_006a4cf0(*(undefined4 *)(param_1 + 0x174));
    if ((*(int *)(param_1 + 0x174) != iVar1) &&
       (piVar2 = *(int **)(param_1 + 0xc), piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0x3c))(piVar2,param_1,4,*(int *)(param_1 + 0x174));
      return;
    }
  }
  return;
}

