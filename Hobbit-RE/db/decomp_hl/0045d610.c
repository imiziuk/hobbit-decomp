
int __thiscall FUN_0045d610(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar4 = *(int *)(param_1 + 0xac);
  if (iVar4 == 0) {
    if ((*(int *)(param_1 + 0xb0) == 0) || ((DAT_0077285c & 4) != 0)) {
      iVar1 = FUN_0045da40();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_004021c0(param_2,param_3);
        if (piVar2 != (int *)0x0) {
          puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x28))();
          uStack_c = *puVar3;
          uStack_8 = puVar3[1];
          uStack_4 = puVar3[2];
          iVar4 = FUN_004e2330(&uStack_c);
        }
        FUN_00429100();
        if (iVar4 != 0) goto LAB_0045d696;
      }
    }
    if (*(int *)(param_1 + 0xe8) != 0) {
      FUN_0064cc30();
      *(int *)(param_1 + 0xf8) = iVar4;
      return iVar4;
    }
    goto LAB_0045d6df;
  }
LAB_0045d696:
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (DAT_006e92e4 < *(float *)(param_1 + 0xd0)) {
      FUN_0064cc00();
      goto LAB_0045d6dd;
    }
    if (iVar4 == 0) goto LAB_0045d6df;
  }
  else {
    fVar5 = (float10)FUN_0064cd90();
    if (fVar5 < (float10)*(float *)(param_1 + 0xd0)) {
LAB_0045d6dd:
      iVar4 = 0;
      goto LAB_0045d6df;
    }
    iVar4 = 1;
  }
  if ((*(int *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    return 0;
  }
LAB_0045d6df:
  *(int *)(param_1 + 0xf8) = iVar4;
  return iVar4;
}

