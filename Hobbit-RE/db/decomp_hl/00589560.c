
void __thiscall FUN_00589560(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int extraout_ECX;
  int iVar3;
  
  sVar1 = *(short *)(param_1 + 0xc);
  while (sVar1 != -1) {
    iVar3 = (int)sVar1;
    iVar2 = iVar3 * 0x68;
    sVar1 = *(short *)(iVar2 + *(int *)(param_1 + 8) + 0x48);
    if (*(int *)(iVar2 + 4 + *(int *)(param_1 + 8)) == param_2) {
      FUN_005891e0(iVar3);
      param_1 = extraout_ECX;
    }
  }
  return;
}

