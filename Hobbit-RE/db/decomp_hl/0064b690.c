
bool __thiscall FUN_0064b690(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_59;
  undefined4 local_58;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e61e1;
  local_c = ExceptionList;
  bVar3 = false;
  ExceptionList = &local_c;
  FUN_0064b170(param_1);
  local_4 = 0;
  iVar1 = FUN_0064f210(param_2,&DAT_0074cc64);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    FUN_0064b190();
    ExceptionList = local_c;
    return false;
  }
  local_59 = 0xff;
  iVar2 = FUN_0064f420(&local_59,1,1,iVar1);
  if (iVar2 == 1) {
    local_59 = 0xfe;
    iVar2 = FUN_0064f420(&local_59,1,1,iVar1);
    if (iVar2 == 1) {
      iVar2 = FUN_0064f420(local_58,2,local_14,iVar1);
      bVar3 = iVar2 == local_14;
    }
  }
  FUN_0064f2b0(iVar1);
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return bVar3;
}

