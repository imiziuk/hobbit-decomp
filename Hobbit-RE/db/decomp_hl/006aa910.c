
bool __thiscall FUN_006aa910(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e80c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_string_table__Load_007560c8);
  local_4 = 0;
  iVar1 = FUN_0064f210(param_3,&DAT_007560dc);
  if (iVar1 != 0) {
    uVar2 = FUN_0064f970(iVar1);
    uVar3 = FUN_006747f0(uVar2);
    param_1[1] = uVar3;
    FUN_0064f350(uVar3,1,uVar2,iVar1);
    FUN_0064f2b0(iVar1);
    iVar4 = FUN_00647cf0(param_2);
    pvVar5 = operator_new(iVar4 + 1);
    FUN_00647d10(pvVar5,param_2);
    *param_1 = pvVar5;
    param_1[2] = *(undefined4 *)param_1[1];
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return iVar1 != 0;
}

