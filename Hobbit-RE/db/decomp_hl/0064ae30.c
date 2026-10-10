
bool __thiscall FUN_0064ae30(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_38;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e61bd;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  FUN_00649b60(param_1);
  local_4 = 0;
  iVar1 = FUN_0064f210(param_2,&DAT_0074cb18);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    FUN_00649ba0();
    ExceptionList = local_c;
    return false;
  }
  iVar3 = 0;
  if (0 < local_14) {
    do {
      iVar3 = FUN_0064a100(10,iVar3);
      if (iVar3 == -1) break;
      FUN_00649db0(iVar3,&DAT_0074cb1c);
      iVar3 = iVar3 + 2;
    } while (iVar3 < local_14);
  }
  if (0 < local_14) {
    iVar2 = FUN_0064f420(local_38,1,local_14,iVar1);
  }
  FUN_0064f2b0(iVar1);
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return iVar2 == local_14;
}

