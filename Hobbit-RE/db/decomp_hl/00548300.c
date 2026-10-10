
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00548300(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d9570;
  pvStack_c = ExceptionList;
  piVar1 = (int *)param_1[0x10];
  piVar2 = (int *)*piVar1;
  local_4 = 0;
  ppvVar4 = &pvStack_c;
  if (((param_1[0x12] == 0) ||
      (ExceptionList = &pvStack_c, piVar5 = (int *)FUN_005b8370(local_18),
      ppvVar4 = (void **)ExceptionList, piVar2 != (int *)*piVar5)) ||
     (piVar1 != (int *)param_1[0x10])) {
    while (ExceptionList = ppvVar4, piVar2 != piVar1) {
      puVar6 = (undefined4 *)FUN_0054ab90(local_18,0);
      FUN_0054a6a0(local_10,*puVar6);
      ppvVar4 = (void **)ExceptionList;
    }
  }
  else {
    FUN_0054ab40(((int *)param_1[0x10])[1]);
    *(int *)(param_1[0x10] + 4) = DAT_0076cd84;
    param_1[0x12] = 0;
    *(undefined4 *)param_1[0x10] = param_1[0x10];
    *(undefined4 *)(param_1[0x10] + 8) = param_1[0x10];
    FUN_005b8370(local_14);
  }
  FUN_006bf840(param_1[0x10]);
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  FUN_006bf84b();
  iVar3 = DAT_0076cd84;
  _DAT_0076cd80 = _DAT_0076cd80 + -1;
  iVar7 = 0;
  if (_DAT_0076cd80 == 0) {
    DAT_0076cd84 = 0;
    iVar7 = iVar3;
  }
  FUN_006bf8e7();
  if (iVar7 != 0) {
    FUN_006bf840(iVar7);
  }
  *param_1 = &PTR_FUN_006f3ccc;
  iVar3 = param_1[1];
  local_4 = 1;
  while (iVar3 != 0) {
    FUN_005c9070();
    iVar3 = param_1[1];
  }
  local_4 = 0xffffffff;
  FUN_005c8fe0();
  ExceptionList = pvStack_c;
  return;
}

