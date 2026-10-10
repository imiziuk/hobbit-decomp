
void FUN_004ff8d0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  DAT_00760314 = DAT_00760314 + 1;
  if (0x3b < DAT_00760314) {
    DAT_00760314 = 0;
    if (DAT_0075fba8 != 0) {
      FUN_005546a0();
    }
    if (DAT_0075fbb0 != 0) {
      FUN_00581ee0();
    }
    if (DAT_0075fbb4 != 0) {
      FUN_005c2ae0();
    }
  }
  if (DAT_0075fbc4 != 0) {
    FUN_00549860();
  }
  if (DAT_0075fbbc != 0) {
    uVar1 = FUN_00650030();
    FUN_0064f0d0(0x28,0,s_MemUsage___d_00730ffc,uVar1);
  }
  if (DAT_0075fbd4 != 0) {
    piVar2 = (int *)FUN_0041bcc0();
    piVar3 = (int *)FUN_0041bcc0();
    piVar4 = (int *)FUN_0041bcc0();
    (**(code **)(*piVar4 + 0x28))();
    (**(code **)(*piVar2 + 0x28))();
    uVar1 = __ftol();
    (**(code **)(*piVar3 + 0x28))(uVar1);
    uVar1 = __ftol();
    uVar1 = __ftol(uVar1);
    FUN_0064f0d0(0x14,0x19,s_BilboPos__i__i__i__00730fe8,uVar1);
  }
  if (DAT_0075fbd0 != 0) {
    FUN_00429100();
  }
  if (DAT_0075fbbc != 0) {
    FUN_00429100();
    return;
  }
  return;
}

