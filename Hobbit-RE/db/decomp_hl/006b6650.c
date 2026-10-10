
undefined4 __thiscall FUN_006b6650(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8373;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&param_2,&DAT_0071e9bc,&DAT_00757a40,param_2,param_1);
  local_4 = 0;
  pvVar2 = operator_new(0x20);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00650250(pvVar2);
  }
  piVar1 = param_3;
  local_4 = (uint)local_4._1_3_ << 8;
  *param_3 = iVar3;
  uVar4 = FUN_00649940();
  iVar3 = FUN_00652870(uVar4);
  if (iVar3 != 0) {
    FUN_00674c70(*piVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    ExceptionList = local_c;
    return 1;
  }
  iVar3 = *piVar1;
  if (iVar3 != 0) {
    thunk_FUN_00650380();
    FUN_006bf840(iVar3);
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return 0;
}

