
int FUN_005928e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_00647e40(param_1,(&PTR_DAT_00742638)[iVar2]);
    if (iVar1 == 0) {
      iVar3 = iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x42);
  return iVar3;
}

