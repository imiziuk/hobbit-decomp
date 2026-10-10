
int __fastcall FUN_004d1c10(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  param_1 = param_1 + 0xbc;
  iVar1 = FUN_00549470(param_1);
  if (iVar1 == 0) {
    FUN_00549580(param_1);
    return 0;
  }
  iVar3 = *(int *)(iVar1 + 0x74);
  iVar4 = 0;
  if (0 < iVar3) {
    piVar2 = (int *)(*(int *)(iVar1 + 0x78) + 4);
    do {
      iVar4 = iVar4 + *piVar2;
      piVar2 = piVar2 + 0xd;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00549580(param_1);
  return iVar4;
}

