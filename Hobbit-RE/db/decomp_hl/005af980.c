
void __thiscall FUN_005af980(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 0x118)) {
    iVar3 = *(int *)(param_1 + 0x118) + -1;
    if (0 < iVar3) {
      iVar1 = 0;
      do {
        *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x11c)) =
             *(undefined4 *)(iVar1 + 4 + *(int *)(param_1 + 0x11c));
        iVar1 = iVar1 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(param_1 + 0x118) + -1;
    *(int *)(param_1 + 0x118) = iVar3;
    if (0 < iVar3) {
      uVar2 = *(uint *)(param_1 + 0x130) | 8;
      goto LAB_005af9d1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x130) | 1;
LAB_005af9d1:
  *(uint *)(param_1 + 0x130) = uVar2;
  *(uint *)(param_1 + 0x130) = (param_2 << 2 ^ uVar2) & 4 ^ uVar2;
  return;
}

