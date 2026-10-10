
void __thiscall FUN_0065af80(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x2264);
  iVar2 = *(int *)(iVar1 + 8);
  while (iVar2 != 0) {
    iVar2 = FUN_00647f20(iVar2,&DAT_0074e21c);
    if (iVar2 != 0) {
      FUN_0067cd90(param_2);
    }
    iVar1 = *(int *)(iVar1 + 4);
    iVar2 = *(int *)(iVar1 + 8);
  }
  return;
}

