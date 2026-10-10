
void __fastcall FUN_005679b0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006db186;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f3e7c;
  local_4 = 1;
  iVar2 = 0;
  do {
    uVar1 = FUN_005c9400(*(undefined4 *)(iVar2 + param_1[4]));
    FUN_005c9210(uVar1);
    iVar2 = iVar2 + 4;
  } while (iVar2 < 8);
  iVar2 = 8;
  do {
    uVar1 = FUN_005c9400(*(undefined4 *)(iVar2 + param_1[4]));
    FUN_005c9210(uVar1);
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x10);
  iVar2 = 0x10;
  do {
    uVar1 = FUN_005c9400(*(undefined4 *)(iVar2 + param_1[4]));
    FUN_005c9210(uVar1);
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x18);
  iVar2 = 0x18;
  do {
    uVar1 = FUN_005c9400(*(undefined4 *)(iVar2 + param_1[4]));
    FUN_005c9210(uVar1);
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x20);
  if (param_1[6] == 0) {
    FUN_006bf840(param_1[4]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  param_1[3] = 0;
  DAT_007723d4 = DAT_007723d4 + -1;
  if (DAT_007723d4 == 0) {
    FUN_005c9070();
    FUN_005c9070();
    FUN_005c9070();
    FUN_005c9070();
  }
  if (param_1[0xd] != 2) {
    FUN_006bf840(param_1[0xb]);
  }
  if (param_1[6] != 2) {
    FUN_006bf840(param_1[4]);
  }
  ExceptionList = local_c;
  return;
}

