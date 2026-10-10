
int FUN_00655cf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_8;
  
  iVar2 = DAT_007e87d0;
  iVar1 = DAT_007e87d0 * 2;
  local_8 = 0;
  DAT_007e87b4 = DAT_007e87b8;
  DAT_007e8804 = DAT_007e8794;
  DAT_007e87dc = DAT_007e87a8;
  DAT_007e8820 = DAT_007e8824;
  uVar4 = 1;
  iVar5 = DAT_007e8800;
  if (DAT_007e8800 < DAT_007e881c) {
    do {
      iVar3 = FUN_00655ea0(uVar4);
      if (iVar3 == 0) {
        if (local_8 != 0) break;
      }
      else {
        local_8 = 1;
      }
      DAT_007e87dc = DAT_007e87dc + DAT_007e8798 * 4;
      DAT_007e87b4 = DAT_007e87b4 + DAT_007e8804;
      DAT_007e8804 = DAT_007e8804 + iVar1;
      iVar5 = iVar5 + 1;
      DAT_007e8820 = DAT_007e8820 + DAT_007e8798;
      uVar4 = 0;
    } while (iVar5 < DAT_007e881c);
  }
  DAT_007e8804 = DAT_007e8794 + iVar2 * -2;
  DAT_007e8820 = DAT_007e8824 - DAT_007e8798;
  DAT_007e87b4 = DAT_007e87b8 - DAT_007e8804;
  DAT_007e87dc = DAT_007e87a8 + DAT_007e8798 * -4;
  uVar4 = 1;
  iVar1 = DAT_007e8800;
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return local_8;
    }
    iVar5 = FUN_00655ea0(uVar4);
    if (iVar5 == 0) {
      if (local_8 != 0) {
        return local_8;
      }
    }
    else {
      local_8 = 1;
    }
    DAT_007e87dc = DAT_007e87dc + DAT_007e8798 * -4;
    DAT_007e8820 = DAT_007e8820 - DAT_007e8798;
    DAT_007e8804 = DAT_007e8804 + iVar2 * -2;
    DAT_007e87b4 = DAT_007e87b4 - DAT_007e8804;
    uVar4 = 0;
  } while( true );
}

