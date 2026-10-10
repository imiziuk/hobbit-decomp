
void __thiscall
FUN_0063af90(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[3] + -1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  if (-1 < iVar4) {
    iVar3 = iVar4 * 0xc;
    do {
      if (iVar4 != param_1[2] + -1) {
        iVar1 = *param_1;
        *(undefined4 *)(iVar3 + 0xc + iVar1) = *(undefined4 *)(iVar3 + iVar1);
        *(undefined4 *)(iVar3 + 0x10 + iVar1) = *(undefined4 *)(iVar3 + 4 + iVar1);
        *(undefined4 *)(iVar3 + 0x14 + iVar1) = *(undefined4 *)(iVar3 + 8 + iVar1);
        iVar1 = param_1[1];
        *(undefined4 *)(iVar3 + 0xc + iVar1) = *(undefined4 *)(iVar3 + iVar1);
        *(undefined4 *)(iVar3 + 0x10 + iVar1) = *(undefined4 *)(iVar3 + 4 + iVar1);
        *(undefined4 *)(iVar3 + 0x14 + iVar1) = *(undefined4 *)(iVar3 + 8 + iVar1);
      }
      iVar4 = iVar4 + -1;
      iVar3 = iVar3 + -0xc;
    } while (-1 < iVar4);
  }
  puVar2 = (undefined4 *)*param_1;
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  puVar2 = (undefined4 *)param_1[1];
  *puVar2 = param_5;
  puVar2[1] = param_6;
  puVar2[2] = param_7;
  if (param_1[3] < param_1[2]) {
    param_1[3] = param_1[3] + 1;
  }
  return;
}

