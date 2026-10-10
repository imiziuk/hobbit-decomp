
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057c770(void)

{
  int iVar1;
  int local_c4;
  undefined1 local_54 [72];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dbdfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  iVar1 = FUN_00607260();
  if (iVar1 != 0) {
    if (local_c4 == 0) {
      FUN_00405080();
      FUN_00405080();
      FUN_0042eb90();
      FUN_004357e0();
      FUN_0042e1f0();
    }
    else {
      FUN_0064cf30();
      FUN_004357e0();
      FUN_00402000();
    }
    FUN_00402020();
    FUN_004b8740();
    FUN_0057ddb0();
    FUN_0057b680(local_54);
    FUN_0057da20();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

