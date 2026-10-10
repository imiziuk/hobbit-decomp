
void FUN_0069082c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  FUN_0069108a(param_1,param_2);
  iVar1 = 0;
  do {
    if (*(char *)(param_2 + 3 + iVar1 * 4) == '\0') {
      *(undefined4 *)(param_2 + iVar1 * 4) = 0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}

