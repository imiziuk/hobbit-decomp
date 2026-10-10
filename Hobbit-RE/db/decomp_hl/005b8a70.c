
int FUN_005b8a70(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006dec28;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (DAT_007ba704 == 0) {
    ExceptionList = &local_c;
    FUN_005b8b20();
  }
  iVar2 = 0;
  if (0 < DAT_007ba6f0) {
    do {
      iVar1 = FUN_0064a860(iVar3 + DAT_007ba6f4,&stack0x00000004);
      if (iVar1 != 0) {
        local_4 = 0xffffffff;
        FUN_00649ba0();
        ExceptionList = local_c;
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar2 < DAT_007ba6f0);
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return 0;
}

