
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void entry(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  _STARTUPINFOA local_60;
  undefined1 *local_1c;
  undefined4 *local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_006fd4c8;
  puStack_10 = &LAB_006c22b0;
  pvStack_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &pvStack_14;
  DVar1 = GetVersion();
  _DAT_00815d3c = DVar1 >> 8 & 0xff;
  _DAT_00815d38 = DVar1 & 0xff;
  _DAT_00815d34 = _DAT_00815d38 * 0x100 + _DAT_00815d3c;
  _DAT_00815d30 = DVar1 >> 0x10;
  iVar2 = FUN_006c6a0e(1);
  if (iVar2 == 0) {
    FUN_006c0dbd(0x1c);
  }
  iVar2 = FUN_006c3edc();
  if (iVar2 == 0) {
    FUN_006c0dbd(0x10);
  }
  local_8 = 0;
  FUN_006c66dd();
  DAT_008174a4 = GetCommandLineA();
  DAT_00815d88 = FUN_006c65ab();
  FUN_006c635e();
  FUN_006c62a5();
  FUN_006c09c5();
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  uVar3 = FUN_006c624d();
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = (uint)local_60.wShowWindow;
  }
  uVar6 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  uVar3 = FUN_004fd630(pHVar5,uVar6,uVar3,uVar4);
  FUN_006c09f2(uVar3);
  FUN_006c60d5(*(undefined4 *)*local_18,local_18);
  return;
}

