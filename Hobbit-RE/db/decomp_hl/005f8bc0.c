
void __thiscall FUN_005f8bc0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 1;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      piVar1 = (int *)FUN_004021c0(*(undefined4 *)(*(int *)(param_1 + 0x18) + iVar4 * 8),
                                   *(undefined4 *)(*(int *)(param_1 + 0x18) + 4 + iVar4 * 8));
      if (piVar1 == (int *)0x0) {
LAB_005f8bfd:
        uVar3 = 0;
      }
      else {
        iVar2 = (**(code **)(*piVar1 + 0x108))(1);
        if (iVar2 != 0) goto LAB_005f8bfd;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x14));
  }
  *(uint *)(param_1 + 8) = (*(uint *)(param_1 + 8) ^ uVar3) & 1 ^ *(uint *)(param_1 + 8);
  FUN_005f11b0(param_2);
  return;
}

