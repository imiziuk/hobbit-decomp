
void __fastcall FUN_00457240(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d0304;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_006ec540;
  local_4 = 2;
  iVar1 = FUN_00659e10(param_1[0x4c]);
  if (iVar1 == 0) {
    iVar1 = FUN_00659e70(param_1[0x4c]);
    if (iVar1 == 0) goto LAB_004572aa;
  }
  FUN_00659c80(param_1[0x4c],0);
LAB_004572aa:
  param_1[0x4c] = 0;
  FUN_004573c0();
  puStack_8._0_1_ = 1;
  FUN_005a32c0();
  puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
  if ((param_1[0x40] != 2) && (iVar1 = param_1[0x3e], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_004aa360();
  ExceptionList = param_1;
  return;
}

