
void __fastcall FUN_004c7580(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004c71a0();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x140);
    iVar2 = __ftol();
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(float *)(iVar1 + 0x10) = (float)iVar2;
  }
  return;
}

