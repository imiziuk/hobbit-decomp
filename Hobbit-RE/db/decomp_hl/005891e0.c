
void __thiscall FUN_005891e0(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = param_2 * 0x68;
  sVar1 = *(short *)(iVar3 + 0x48 + iVar4);
  sVar2 = *(short *)(iVar3 + 0x4a + iVar4);
  if (sVar2 == -1) {
    *(short *)(param_1 + 0xc) = sVar1;
  }
  else {
    *(short *)(iVar3 + 0x48 + sVar2 * 0x68) = sVar1;
  }
  if (sVar1 != -1) {
    *(short *)(sVar1 * 0x68 + 0x4a + *(int *)(param_1 + 8)) = sVar2;
  }
  if (*(short *)(param_1 + 0xe) != -1) {
    *(short *)(*(short *)(param_1 + 0xe) * 0x68 + 0x4a + *(int *)(param_1 + 8)) = (short)param_2;
  }
  *(undefined2 *)(*(int *)(param_1 + 8) + 0x48 + iVar4) = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)(*(int *)(param_1 + 8) + 0x4a + iVar4) = 0xffff;
  *(short *)(param_1 + 0xe) = (short)param_2;
  return;
}

