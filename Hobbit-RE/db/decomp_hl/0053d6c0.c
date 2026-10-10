
int FUN_0053d6c0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  uVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9159;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0064f210(param_1,&DAT_00737914);
  if (iVar2 == 0) {
    ExceptionList = local_c;
    return 0;
  }
  iVar3 = FUN_0053d8a0(iVar2,uVar4);
  if (iVar3 == 0) {
    FUN_00649920(&param_1,s_AnimInfo_<_s>_has_wrong_version_00737918,uVar4);
    local_4 = iVar3;
    uVar4 = FUN_00649940(0);
    iVar2 = FUN_0064e5e0(s_C__projects_meridian_Support_Ani_00737938,0x1db,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    local_10 = 0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_10,&DAT_0070966c);
  }
  FUN_0064f2b0(iVar2);
  ExceptionList = local_c;
  return iVar3;
}

