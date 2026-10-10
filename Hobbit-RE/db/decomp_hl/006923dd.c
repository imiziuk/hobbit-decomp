
void FUN_006923dd(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_006922fc(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_0069450b(param_1,*(undefined4 *)(param_1 + 4),0x50);
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0069452f(param_1);
  return;
}

