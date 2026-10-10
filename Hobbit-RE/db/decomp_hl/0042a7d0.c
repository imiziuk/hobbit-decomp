
undefined4 FUN_0042a7d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf5e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((DAT_00813038 != 0) &&
      (ExceptionList = &local_c, iVar1 = FUN_006a0390(DAT_00813038), iVar1 != 0)) &&
     (iVar1 = FUN_006a17a0(DAT_00813038), iVar1 != 0)) {
    ExceptionList = local_c;
    return 0;
  }
  local_2c = 0;
  local_1c = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_4 = 0;
  FUN_0042b9b0(param_1,&local_28);
  iVar1 = 0;
  uVar2 = 0;
  if (0 < local_20) {
    do {
      uVar2 = FUN_0042b100(*(undefined4 *)(local_1c + iVar1 * 4));
      FUN_0042b820(uVar2,&local_30);
      if ((((local_30 == 0) || (local_30 == 1)) || (local_30 == 3)) &&
         (iVar3 = FUN_00670ef0(uVar2,0), iVar3 != 0)) {
        uVar2 = 1;
        break;
      }
      iVar1 = iVar1 + 1;
      uVar2 = local_2c;
    } while (iVar1 < local_20);
  }
  if (local_14 != 2) {
    FUN_006bf840(local_1c);
  }
  ExceptionList = local_c;
  return uVar2;
}

