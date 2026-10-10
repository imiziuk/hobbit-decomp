
void __thiscall FUN_005927e0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00592190();
  if (iVar2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    iVar2 = FUN_00592190();
    *(undefined4 *)(iVar2 + 300) = 1;
    *(undefined4 *)(iVar2 + 0x13c) = 1;
    *(int *)(iVar2 + 0x148) = *(int *)(iVar2 + 0x148) + 1;
    *(int *)(iVar2 + 0x138) = *(int *)(iVar2 + 0x138) + 1;
    *(undefined4 *)(iVar2 + 0x20) = uVar1;
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 4);
    return;
  }
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 4);
  return;
}

