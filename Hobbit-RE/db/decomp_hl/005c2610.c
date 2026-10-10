
void __thiscall FUN_005c2610(int *param_1,short param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  sVar1 = *(short *)(param_2 * 0x38 + 0x2a + iVar2);
  iVar3 = param_2 * 0x38 + iVar2;
  if (sVar1 == -1) {
    *(undefined2 *)((int)param_1 + 0xe) = *(undefined2 *)(iVar3 + 0x28);
  }
  else {
    *(undefined2 *)(sVar1 * 0x38 + 0x28 + iVar2) = *(undefined2 *)(iVar3 + 0x28);
  }
  if (*(short *)(iVar3 + 0x28) != -1) {
    *(undefined2 *)(*(short *)(iVar3 + 0x28) * 0x38 + 0x2a + *param_1) =
         *(undefined2 *)(iVar3 + 0x2a);
  }
  *(undefined2 *)(iVar3 + 0x2a) = 0xffff;
  *(short *)(iVar3 + 0x28) = (short)param_1[3];
  if ((short)param_1[3] != -1) {
    *(short *)((short)param_1[3] * 0x38 + 0x2a + *param_1) = param_2;
  }
  *(short *)(param_1 + 3) = param_2;
  *(undefined1 *)(iVar3 + 0x2d) = 1;
  return;
}

