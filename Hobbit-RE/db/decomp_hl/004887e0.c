
undefined * FUN_004887e0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2cd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_object_loader__Load_00729214);
  local_4 = 0;
  FUN_00648a10(param_2,local_2c);
  puVar1 = (undefined1 *)FUN_00647f20(local_2c,&DAT_00729210);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = FUN_006b69a0(local_2c,param_2);
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_00649720();
    ExceptionList = local_c;
    return &DAT_0075cea0;
  }
  FUN_00649720();
  ExceptionList = local_c;
  return (undefined *)0x0;
}

