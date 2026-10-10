
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00662930(undefined4 param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e6a16;
  pvStack_c = ExceptionList;
  pvVar3 = (void *)0x0;
  ExceptionList = &pvStack_c;
  (**(code **)(*DAT_007f1000 + 0x14))(DAT_007f1000,0,param_1);
  iVar1 = FUN_0065baf0();
  if (iVar1 == 1) {
    pvVar2 = operator_new(0x58);
    pvStack_c = (void *)0x1;
    if (pvVar2 == (void *)0x0) {
      DAT_007f0318 = 0;
    }
    else {
      DAT_007f0318 = FUN_00662d40(0,0x208,2,0x80000);
    }
    pvStack_c = (void *)0xffffffff;
    pvVar2 = operator_new(0x58);
    pvStack_c = (void *)0x2;
    if (pvVar2 == (void *)0x0) {
      DAT_007f031c = 0;
    }
    else {
      DAT_007f031c = FUN_00662d40(0,8,6,0x80000);
    }
    DAT_007f1008 = 2;
  }
  else {
    if (iVar1 == 2) {
      pvVar2 = operator_new(0x58);
      pvStack_c = (void *)0x3;
      if (pvVar2 == (void *)0x0) {
        DAT_007f0318 = 0;
      }
      else {
        DAT_007f0318 = FUN_00662d40(0,0x208,2,0x80000);
      }
      pvStack_c = (void *)0xffffffff;
      pvVar2 = operator_new(0x58);
      pvStack_c = (void *)0x4;
      if (pvVar2 == (void *)0x0) {
        DAT_007f031c = 0;
      }
      else {
        DAT_007f031c = FUN_00662d40(0,8,4,0x80000);
      }
      pvStack_c = (void *)0xffffffff;
      pvVar2 = operator_new(0x58);
      pvStack_c = (void *)0x5;
      if (pvVar2 != (void *)0x0) {
        _DAT_007f0320 = FUN_00662d40(2,0x210,6,0x80000);
        DAT_007f1008 = 3;
        ExceptionList = pvVar3;
        return;
      }
      _DAT_007f0320 = 0;
      DAT_007f1008 = 3;
      ExceptionList = pvVar3;
      return;
    }
    if (iVar1 == 3) {
      pvVar2 = operator_new(0x58);
      pvStack_c = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        DAT_007f0318 = FUN_00662d40(2,0x210,8,0x80000);
        DAT_007f1008 = 1;
        ExceptionList = pvVar3;
        return;
      }
      DAT_007f0318 = 0;
      DAT_007f1008 = 1;
      ExceptionList = pvVar3;
      return;
    }
  }
  ExceptionList = pvVar3;
  return;
}

