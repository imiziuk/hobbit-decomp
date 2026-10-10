
void __thiscall
FUN_005c8ff0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar3;
  if (iVar3 < 2) {
    *(undefined4 *)(param_1 + 0x14) = param_2;
    *(undefined4 *)(param_1 + 8) = param_4;
    if (0x3f < param_5) {
      param_5 = 0x40;
    }
    *(undefined2 *)(param_1 + 0x1c) = 1;
    *(undefined2 *)(param_1 + 0x1e) = 0;
    iVar3 = 1;
    sVar2 = 0;
    do {
      iVar3 = iVar3 << 1;
      sVar1 = (short)iVar3;
      sVar2 = sVar2 + 1;
    } while (sVar1 < param_5);
    *(short *)(param_1 + 0x1c) = sVar1;
    *(short *)(param_1 + 0x1e) = sVar2;
    *(int *)(param_1 + 0x18) = sVar1 + -1;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_005c9290(param_3);
  }
  return;
}

