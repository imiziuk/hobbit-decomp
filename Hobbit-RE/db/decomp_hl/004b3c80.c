
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004b3c80(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d418b;
  local_c = ExceptionList;
  _DAT_0075d430 = 0;
  _DAT_0075d420 = 0;
  _DAT_0075d410 = 0;
  _DAT_0075d434 = 0;
  _DAT_0075d424 = 0;
  _DAT_0075d404 = 0;
  _DAT_0075d438 = 0;
  _DAT_0075d418 = 0;
  _DAT_0075d408 = 0;
  _DAT_0075d42c = 0;
  _DAT_0075d41c = 0;
  _DAT_0075d40c = 0;
  _DAT_0075d400 = 0x3f800000;
  _DAT_0075d414 = 0x3f800000;
  _DAT_0075d428 = 0x3f800000;
  _DAT_0075d43c = 0x3f800000;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x138);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_004b3d80(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}

