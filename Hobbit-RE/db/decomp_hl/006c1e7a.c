
void FUN_006c1e7a(uint param_1)

{
  int iVar1;
  uint dwBytes;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006fd518;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  if (DAT_00816370 == 3) {
    ExceptionList = &local_14;
    if (param_1 <= DAT_00816360) {
      ExceptionList = &local_14;
      FUN_006c56f9(9);
      local_8 = 0;
      iVar1 = FUN_006c8c35(param_1);
      local_8 = 0xffffffff;
      FUN_006c1ee1();
      if (iVar1 != 0) {
        ExceptionList = local_14;
        return;
      }
    }
  }
  else {
    ExceptionList = &local_14;
    if (DAT_00816370 == 2) {
      if (param_1 == 0) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = param_1 + 0xf & 0xfffffff0;
      }
      ExceptionList = &local_14;
      if (dwBytes <= DAT_0075ab74) {
        ExceptionList = &local_14;
        FUN_006c56f9(9);
        local_8 = 1;
        iVar1 = FUN_006c96d8(dwBytes >> 4);
        local_8 = 0xffffffff;
        FUN_006c1f40();
        if (iVar1 != 0) {
          ExceptionList = local_14;
          return;
        }
      }
      goto LAB_006c1f59;
    }
  }
  if (param_1 == 0) {
    param_1 = 1;
  }
  dwBytes = param_1 + 0xf & 0xfffffff0;
LAB_006c1f59:
  HeapAlloc(DAT_0081636c,0,dwBytes);
  ExceptionList = local_14;
  return;
}

