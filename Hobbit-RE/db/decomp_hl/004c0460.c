
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c0460(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006d466e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ee888;
  local_4 = 1;
  FUN_004c0610();
  iVar2 = param_1[0x50];
  if (iVar2 != 0) {
    FUN_0053b590();
    FUN_006bf840(iVar2);
  }
  puVar3 = (uint *)param_1[0x52];
  param_1[0x50] = 0;
  if (puVar3 != (uint *)0x0) {
    puVar1 = puVar3 + 1;
    local_4._0_1_ = 2;
    FUN_00549580(puVar1);
    FUN_00549350(puVar1);
    *puVar1 = 0x7fffffff;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00549580(puVar3);
    FUN_00549350(puVar3);
    *puVar3 = *puVar3 | 0x7fffffff;
    FUN_00406bd0(0);
    FUN_006bf840(puVar3);
  }
  param_1[0x52] = 0;
  _DAT_0075da40 = _DAT_0075da40 + -1;
  if (_DAT_0075da40 == 0) {
    if (DAT_0075d9f0 == 0) {
      if (DAT_0075d9e8 != 0) {
        iVar2 = DAT_0075d9e8 + -4;
        FUN_006c026a(DAT_0075d9e8,0x2c,*(undefined4 *)(DAT_0075d9e8 + -4),FUN_00649ba0);
        FUN_006bf840(iVar2);
      }
      DAT_0075d9e8 = 0;
      DAT_0075d9ec = 0;
    }
    DAT_0075d9e4 = 0;
    if (DAT_0075d9d4 == 0) {
      if (DAT_0075d9cc != 0) {
        iVar2 = DAT_0075d9cc + -4;
        FUN_006c026a(DAT_0075d9cc,0x2c,*(undefined4 *)(DAT_0075d9cc + -4),FUN_00649ba0);
        FUN_006bf840(iVar2);
      }
      DAT_0075d9cc = 0;
      DAT_0075d9d0 = 0;
    }
    DAT_0075d9c8 = 0;
    DAT_0072c7d4 = 1;
  }
  param_1 = param_1 + 0x4f;
  local_4 = local_4 & 0xffffff00;
  FUN_00549580(param_1);
  FUN_00549350(param_1);
  *param_1 = 0x7fffffff;
  local_4 = 0xffffffff;
  FUN_004d0910();
  ExceptionList = local_c;
  return;
}

