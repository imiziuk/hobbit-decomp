
int FUN_00534270(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00647ed0((&PTR_s_STATE_NONE_007370b0)[iVar2],param_1);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  return 0;
}

