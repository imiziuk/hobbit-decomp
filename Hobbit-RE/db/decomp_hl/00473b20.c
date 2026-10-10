
void __thiscall FUN_00473b20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xec) + param_2 * 4) + 0x30);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0xd0);
    iVar3 = *(short *)(iVar1 + 0xc) * 0x40;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar3 + 0x3c + iVar2);
    *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)(iVar3 + iVar2 + 0x38);
  }
  return;
}

