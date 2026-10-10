
void __thiscall FUN_004c75f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004c71a0();
  if (iVar1 != 0) {
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x140);
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x68) = 0;
      *(float *)(iVar1 + 0x10) = (float)(*(int *)(iVar1 + 0xc) + -2);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x140);
    iVar2 = __ftol();
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(float *)(iVar1 + 0x10) = (float)iVar2;
  }
  return;
}

