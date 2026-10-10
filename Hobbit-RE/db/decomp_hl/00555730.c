
undefined4 FUN_00555730(undefined4 param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9ce8;
  local_c = ExceptionList;
  switch(param_1) {
  case 1:
    return 3;
  default:
    ExceptionList = &local_c;
    FUN_00649920(&param_1,s_PCGetBlend_failure__invalid_blen_0073d964);
    local_4 = 0;
    uVar1 = FUN_00649940();
    FUN_0064e7d0(uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    ExceptionList = local_c;
    return 0x7fffffff;
  case 0xe:
    return 9;
  case 0xf:
    return 1;
  case 0x11:
    return 4;
  case 0x1e:
    return 10;
  case 0x1f:
    return 2;
  case 0x21:
    return 5;
  case 0x2e:
    return 7;
  case 0x31:
    return 6;
  case 0x3e:
    return 8;
  }
}

