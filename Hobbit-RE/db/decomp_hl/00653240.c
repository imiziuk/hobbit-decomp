
undefined4 __thiscall FUN_00653240(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_40 [2];
  undefined1 local_3e;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined4 local_2c;
  undefined4 local_1c;
  short local_16;
  short local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e64fa;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00650260(param_1);
  local_4 = 0;
  local_1c = 0;
  FUN_00654980(0,0);
  FUN_00653e20(3);
  FUN_00648600(local_40,0,0x12);
  local_34 = (undefined1)local_14;
  local_33 = (undefined1)((ushort)local_14 >> 8);
  local_32 = (undefined1)local_16;
  local_31 = (undefined1)((ushort)local_16 >> 8);
  local_3e = 2;
  local_30 = 0x20;
  local_2f = 0x20;
  iVar1 = FUN_0064f210(param_2,&DAT_0074d6d4);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    thunk_FUN_00650380();
    ExceptionList = local_c;
    return 0;
  }
  FUN_0064f420(local_40,1,0x12,iVar1);
  FUN_0064f420(local_2c,1,(int)local_16 * (int)local_14 * 4,iVar1);
  FUN_0064f2b0(iVar1);
  local_4 = 0xffffffff;
  thunk_FUN_00650380();
  ExceptionList = local_c;
  return 1;
}

