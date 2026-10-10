
void thunk_FUN_00545cb0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = (int)*(char *)(param_1 + 0x1d);
  cVar2 = '\0';
  if ((((iVar3 != 3) && (iVar3 != 4)) && (iVar3 != 10)) && ((iVar3 != 0xb && (iVar3 != 0xc)))) {
    iVar3 = iVar3 * 0x7c;
    iVar1 = *(int *)(&DAT_006f6cf4 + iVar3);
    if (iVar1 == 0x10) {
      if (*(int *)(&DAT_006f6d08 + iVar3) == 4) goto LAB_00545d04;
      if (*(int *)(&DAT_006f6d00 + iVar3) == 6) {
        FUN_00653e20(0xc);
        return;
      }
      cVar2 = (*(int *)(&DAT_006f6d08 + iVar3) != 1) + '\n';
    }
    else {
      if (iVar1 == 0x18) {
LAB_00545d04:
        FUN_00653e20(3);
        return;
      }
      if (iVar1 == 0x20) {
        FUN_00653e20(3);
        return;
      }
    }
    FUN_00653e20(cVar2);
  }
  return;
}

