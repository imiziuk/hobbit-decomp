
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00662e70(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006e6a56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f95cc;
  local_4 = 1;
  param_1[4] = 0;
  FUN_00663a60();
  piVar1 = (int *)param_1[0x13];
  piVar2 = (int *)*piVar1;
  local_4 = local_4 & 0xffffff00;
  if (((param_1[0x15] == 0) || (piVar4 = (int *)FUN_005b8370(local_18), piVar2 != (int *)*piVar4))
     || (piVar1 != (int *)param_1[0x13])) {
    while (piVar2 != piVar1) {
      puVar5 = (undefined4 *)FUN_00668380(local_18,0);
      FUN_00666e20(local_10,*puVar5);
    }
  }
  else {
    FUN_006680d0(((int *)param_1[0x13])[1]);
    *(int *)(param_1[0x13] + 4) = DAT_007f1444;
    param_1[0x15] = 0;
    *(undefined4 *)param_1[0x13] = param_1[0x13];
    *(undefined4 *)(param_1[0x13] + 8) = param_1[0x13];
    FUN_005b8370(local_14);
  }
  FUN_006bf840(param_1[0x13]);
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  FUN_006bf84b();
  iVar3 = DAT_007f1444;
  _DAT_007f1440 = _DAT_007f1440 + -1;
  iVar6 = 0;
  if (_DAT_007f1440 == 0) {
    DAT_007f1444 = 0;
    iVar6 = iVar3;
  }
  FUN_006bf8e7();
  if (iVar6 != 0) {
    FUN_006bf840(iVar6);
  }
  iVar3 = param_1[0x11];
  while (iVar3 != 0) {
    iVar6 = param_1[9];
    param_1[9] = iVar6 + 4;
    param_1[0x11] = iVar3 + -1;
    if ((iVar3 + -1 == 0) || (iVar6 + 4 == param_1[8])) {
      puVar5 = (undefined4 *)param_1[10];
      param_1[10] = puVar5 + 1;
      FUN_006bf840(*puVar5);
      if (param_1[0x11] == 0) {
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        FUN_006bf840(param_1[0xf]);
      }
      else {
        iVar3 = *(int *)param_1[10];
        param_1[7] = iVar3;
        param_1[8] = iVar3 + 0x1000;
        param_1[9] = iVar3;
        param_1[10] = (int *)param_1[10];
      }
    }
    iVar3 = param_1[0x11];
  }
  ExceptionList = local_c;
  return;
}

