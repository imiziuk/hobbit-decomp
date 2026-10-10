
void __thiscall FUN_004c7520(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x140) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x140) + 0x84) = param_2;
    iVar1 = *(int *)(param_1 + 0x140);
    if (*(int *)(iVar1 + 8) != -1) {
      iVar2 = __ftol();
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x68) = 0;
      *(float *)(iVar1 + 0x10) = (float)iVar2;
    }
  }
  return;
}

