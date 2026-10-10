
void __thiscall FUN_00406ce0(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)*(short *)(param_1 + ((param_2 ^ param_3) * -0xfb & 0xfff) * 2);
  if (iVar2 != -1) {
    iVar3 = iVar2;
    do {
      iVar3 = (int)*(short *)(*(int *)(param_1 + 0x28c0) + iVar3 * 0x14 + 0xe);
    } while (iVar3 != -1);
  }
  if (iVar2 != -1) {
    do {
      piVar1 = (int *)(*(int *)(param_1 + 0x28c0) + iVar2 * 0x14);
      iVar2 = *piVar1;
      if (((iVar2 != 0) && (*(uint *)(iVar2 + 8) == param_2)) && (*(uint *)(iVar2 + 0xc) == param_3)
         ) {
        return;
      }
      iVar2 = (int)*(short *)((int)piVar1 + 0xe);
    } while (iVar2 != -1);
  }
  return;
}

