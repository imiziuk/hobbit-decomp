
void __thiscall FUN_00549a40(int param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  if (0 < *(int *)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x10) < 0) goto LAB_00549a93;
    do {
      if (*(int *)(param_1 + 0x24) != 0) {
        uVar2 = *(uint *)(param_1 + 0x18);
        puVar1 = (uint *)(*(int *)(param_1 + 0x24) +
                         ((int)uVar3 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18);
        uVar4 = __allshl();
        if ((((uint)uVar4 & *puVar1) == 0 && ((uint)((ulonglong)uVar4 >> 0x20) & puVar1[1]) == 0) &&
           (*(int *)((uVar2 & uVar3) * 0x7c + 0x68 + puVar1[2]) == param_2)) {
          FUN_00549430(param_3,(*(uint *)(param_1 + 0x18) & uVar3) * 0x7c +
                               *(int *)(*(int *)(param_1 + 0x24) + 8 +
                                       ((int)uVar3 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18));
          *param_3 = *param_3 & 0x7fffffff;
          return;
        }
      }
LAB_00549a93:
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x10));
  }
  *param_3 = 0x7fffffff;
  return;
}

