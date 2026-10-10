
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d3cd0(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d4f78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ef1d8;
  DAT_0075dd40 = DAT_0075dd40 + -1;
  local_4 = 4;
  if (DAT_0075dd40 == 0) {
    DAT_0072d954 = 1;
    if (DAT_0075dd28 == 0) {
      if (DAT_0075dd20 != 0) {
        iVar4 = DAT_0075dd20 + -4;
        FUN_006c026a(DAT_0075dd20,0x2c,*(undefined4 *)(DAT_0075dd20 + -4),FUN_00649ba0);
        FUN_006bf840(iVar4);
      }
      DAT_0075dd20 = 0;
      DAT_0075dd24 = 0;
    }
    DAT_0075dd1c = 0;
    if (DAT_0075dd08 == 0) {
      if (DAT_0075dd00 != 0) {
        iVar4 = DAT_0075dd00 + -4;
        FUN_006c026a(DAT_0075dd00,0x2c,*(undefined4 *)(DAT_0075dd00 + -4),FUN_00649ba0);
        FUN_006bf840(iVar4);
      }
      DAT_0075dd00 = 0;
      DAT_0075dd04 = 0;
    }
    DAT_0075dcfc = 0;
    if (DAT_0075dca4 == 0) {
      if (DAT_0075dc9c != 0) {
        iVar4 = DAT_0075dc9c + -4;
        FUN_006c026a(DAT_0075dc9c,0x2c,*(undefined4 *)(DAT_0075dc9c + -4),FUN_00649ba0);
        FUN_006bf840(iVar4);
      }
      DAT_0075dc9c = 0;
      DAT_0075dca0 = 0;
    }
    DAT_0075dc98 = 0;
    if (DAT_0075db88 == 0) {
      if (DAT_0075db80 != 0) {
        FUN_00407f70(3);
      }
      DAT_0075db80 = 0;
      _DAT_0075db84 = 0;
    }
    _DAT_0075db7c = 0;
  }
  iVar4 = param_1[0x60];
  iVar2 = param_1[0x61];
  if (iVar4 != 0 || iVar2 != 0) {
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 5;
    iVar4 = FUN_00406ce0(iVar4,iVar2);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (iVar4 == -1) {
      FUN_00649720();
    }
    else {
      uVar3 = *(uint *)(DAT_0076f648 + iVar4 * 0x14);
      bVar1 = *(byte *)(uVar3 + 0x7f);
      FUN_00649720();
      if ((-(uint)((bVar1 & 0x10) != 0) & uVar3) != 0) {
        FUN_0054be30(param_1[0x60],param_1[0x61]);
      }
    }
    param_1[0x60] = 0;
    param_1[0x61] = 0;
  }
  local_4._0_1_ = 3;
  FUN_00649ba0();
  local_4._0_1_ = 2;
  if ((param_1[0x8f] != 2) && (iVar4 = param_1[0x8d], iVar4 != 0)) {
    FUN_006c026a(iVar4,0x78,*(undefined4 *)(iVar4 + -4),FUN_004d5130);
    FUN_006bf840(iVar4 + -4);
  }
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b190();
  local_4 = 0xffffffff;
  FUN_004c0460();
  ExceptionList = local_c;
  return;
}

