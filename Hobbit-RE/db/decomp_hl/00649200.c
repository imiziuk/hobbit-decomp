
void FUN_00649200(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar2 | 1;
  if (((uVar2 & 2) == 0) && ((DAT_007ccf44 == 0 || ((uVar2 & 4) == 0)))) {
    if (DAT_007ccf3c != 0) {
      *(uint *)(param_1 + 0x28) = uVar2 & 0xfffffffe;
    }
    if (DAT_007ccf40 == 0) goto LAB_00649268;
    uVar2 = *(uint *)(param_1 + 0x28) | 1;
  }
  else {
    if (DAT_007ccf3c != 0) {
      *(uint *)(param_1 + 0x28) = uVar2 | 1;
    }
    if (DAT_007ccf40 == 0) goto LAB_00649268;
    uVar2 = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x28) = uVar2;
LAB_00649268:
  if ((DAT_007ccf48 != 0) &&
     (fVar3 = (float10)FUN_0064cbb0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14))
     , fVar3 < (float10)DAT_007ccf48)) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  }
  if ((DAT_007ccf4c != 0) && (DAT_007ccfa4 <= *(int *)(param_1 + 0x18))) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
  }
  if (DAT_007ccf38 != 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  }
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    FUN_00649200(iVar1);
  }
  return;
}

