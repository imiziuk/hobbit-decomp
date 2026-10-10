
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00586ed0(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc9d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PostRenderBilbo__void_00741ca8);
  local_4 = 0;
  _DAT_0076f658 = 1;
  iVar1 = DAT_0076efd8;
  while ((iVar1 != 0 && (DAT_0076f654 = *(int *)(iVar1 + 100), iVar1 != 0))) {
    FUN_0041afb0();
    iVar1 = DAT_0076f654;
  }
  _DAT_0076f658 = 0;
  DAT_0076f654 = 0;
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

