
void __thiscall FUN_0054f7c0(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x10))) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = __allshl();
    iVar4 = (int)uVar1 >> ((byte)*(undefined2 *)(param_1 + 0x1e) & 0x1f);
    iVar3 = *(int *)(param_1 + 0x24);
    if (((uint)uVar5 & *(uint *)(iVar3 + iVar4 * 0x18)) == 0 &&
        ((uint)((ulonglong)uVar5 >> 0x20) & *(uint *)(iVar3 + 4 + iVar4 * 0x18)) == 0) {
      if (*(int *)(*(int *)(iVar3 + 8 +
                           ((int)uVar1 >> ((byte)*(undefined2 *)(param_1 + 0x1e) & 0x1f)) * 0x18) +
                   0x2e8 + (uVar2 & uVar1) * 0x2fc) != 0) {
        FUN_006bf840(*(undefined4 *)
                      (*(int *)(iVar3 + 8 +
                               ((int)uVar1 >> ((byte)*(undefined2 *)(param_1 + 0x1e) & 0x1f)) * 0x18
                               ) + 0x2dc + (uVar2 & uVar1) * 0x2fc));
        FUN_006bf840(*(undefined4 *)
                      (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                               ((int)*param_2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2e0
                      + (*(uint *)(param_1 + 0x18) & *param_2) * 0x2fc));
        uVar1 = *param_2;
        *(uint *)(*(int *)(*(int *)(param_1 + 0x24) + 8 +
                          ((int)uVar1 >> ((byte)*(undefined2 *)(param_1 + 0x1e) & 0x1f)) * 0x18) +
                  0x2dc + (*(uint *)(param_1 + 0x18) & uVar1) * 0x2fc) =
             (*(uint *)(param_1 + 0x18) & uVar1) * 0x2fc +
             *(int *)(*(int *)(param_1 + 0x24) + 8 +
                     ((int)uVar1 >> ((byte)*(undefined2 *)(param_1 + 0x1e) & 0x1f)) * 0x18);
        uVar1 = *param_2;
        *(uint *)(*(int *)(*(int *)(param_1 + 0x24) + 8 +
                          ((int)uVar1 >> ((byte)*(undefined2 *)(param_1 + 0x1e) & 0x1f)) * 0x18) +
                  0x2e0 + (*(uint *)(param_1 + 0x18) & uVar1) * 0x2fc) =
             *(int *)(*(int *)(param_1 + 0x24) + 8 +
                     ((int)uVar1 >> ((byte)*(undefined2 *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x1b0
             + (*(uint *)(param_1 + 0x18) & uVar1) * 0x2fc;
        *(undefined4 *)
         (*(int *)(*(int *)(param_1 + 0x24) + 8 +
                  ((int)*param_2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2e8 +
         (*(uint *)(param_1 + 0x18) & *param_2) * 0x2fc) = 0;
      }
      FUN_00549430(*(int *)(*(int *)(param_1 + 0x24) + 8 +
                           ((int)*param_2 >> (*(byte *)(param_1 + 0x1e) & 0x1f)) * 0x18) + 0x2d0 +
                   (*(uint *)(param_1 + 0x18) & *param_2) * 0x2fc,&DAT_0075b6e0);
      FUN_005c9210(*param_2);
      *param_2 = 0xffffffff;
    }
  }
  return;
}

