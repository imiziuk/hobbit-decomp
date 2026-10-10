
SIZE_T FUN_006c3594(LPCVOID param_1)

{
  byte *pbVar1;
  SIZE_T SVar2;
  undefined1 local_30 [4];
  byte *local_2c;
  undefined1 local_28 [4];
  SIZE_T local_24;
  byte *local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006fd5d8;
  puStack_10 = &LAB_006c22b0;
  local_14 = ExceptionList;
  if (DAT_00816370 == 3) {
    ExceptionList = &local_14;
    FUN_006c56f9(9);
    local_8 = 0;
    local_20 = (byte *)FUN_006c88e1(param_1);
    if (local_20 != (byte *)0x0) {
      local_24 = *(int *)((int)param_1 + -4) - 9;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_006c35fe();
    pbVar1 = local_20;
  }
  else {
    ExceptionList = &local_14;
    if (DAT_00816370 != 2) goto LAB_006c3652;
    ExceptionList = &local_14;
    FUN_006c56f9(9);
    local_8 = 1;
    local_2c = (byte *)FUN_006c963c(param_1,local_30,local_28);
    if (local_2c != (byte *)0x0) {
      local_24 = (uint)*local_2c << 4;
    }
    SVar2 = local_24;
    local_8 = 0xffffffff;
    FUN_006c3679();
    pbVar1 = local_2c;
  }
  if (pbVar1 != (byte *)0x0) {
    ExceptionList = local_14;
    return SVar2;
  }
LAB_006c3652:
  SVar2 = HeapSize(DAT_0081636c,0,param_1);
  ExceptionList = local_14;
  return SVar2;
}

