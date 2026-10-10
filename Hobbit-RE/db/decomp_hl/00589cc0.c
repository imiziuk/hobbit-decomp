
void __thiscall FUN_00589cc0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0xc) != -1) {
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = (int)*(short *)(param_1 + 0xc);
    while( true ) {
      iVar2 = iVar4 * 0x68;
      iVar3 = (int)*(short *)(iVar2 + 0x48 + iVar1);
      if (((*(int *)(iVar2 + 0x60 + iVar1) == param_3) && (*(int *)(iVar2 + iVar1 + 100) == param_4)
          ) && (*(int *)(iVar2 + iVar1 + 4) == param_2)) break;
      iVar4 = iVar3;
      if (iVar3 == -1) {
        return;
      }
    }
    FUN_005891e0(iVar4);
  }
  return;
}

