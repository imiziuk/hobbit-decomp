
int FUN_00467620(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d0d28;
  local_c = ExceptionList;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (DAT_0075cbe4 == 0) {
    ExceptionList = &local_c;
    FUN_00464560();
  }
  iVar2 = 0;
  if (0 < DAT_0075cbe4) {
    do {
      iVar1 = FUN_0064a860(iVar3 + DAT_0075cbe8,&stack0x00000004);
      if (iVar1 != 0) {
        local_4 = 0xffffffff;
        FUN_00649ba0();
        ExceptionList = local_c;
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar2 < DAT_0075cbe4);
  }
  iVar3 = FUN_0064a7e0(&stack0x00000004,s_PoisonousSpider_007267c4);
  local_4 = 0xffffffff;
  if (iVar3 != 0) {
    FUN_00649ba0();
    ExceptionList = local_c;
    return 0x2a;
  }
  FUN_00649ba0();
  ExceptionList = local_c;
  return 0;
}

