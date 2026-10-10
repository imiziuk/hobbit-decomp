
int __thiscall FUN_00531f90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x100) == 0) {
    iVar1 = *(int *)(param_1 + 0xf8);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if ((*(int *)(param_1 + 0xbc) != 0) &&
     (iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0xc0) + param_2 * 4) + 100), 0 < iVar1)) {
    do {
      FUN_00469980(*(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(param_1 + 0xc0) + param_2 * 4) + 0x68) + iVar2 * 4))
      ;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return param_1 + 0xec;
}

