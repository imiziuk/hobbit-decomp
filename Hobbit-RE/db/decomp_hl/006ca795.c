
undefined4 FUN_006ca795(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_00816480) {
    iVar3 = (param_1 & 0x1f) * 0x24;
    piVar1 = (int *)((&DAT_00816380)[(int)param_1 >> 5] + iVar3);
    if (((*(byte *)(piVar1 + 1) & 1) != 0) && (*piVar1 != -1)) {
      if (DAT_00757e78 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_006ca7f1;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_006ca7f1:
      *(undefined4 *)((&DAT_00816380)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_006c5643();
  *puVar2 = 9;
  puVar2 = (undefined4 *)FUN_006c564c();
  *puVar2 = 0;
  return 0xffffffff;
}

