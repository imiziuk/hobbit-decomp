
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00556f60(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006d9da8;
  local_c = ExceptionList;
  piVar2 = *(int **)(param_1 + 0x14);
  piVar3 = (int *)*piVar2;
  local_4 = 0;
  ppvVar5 = &local_c;
  if (((*(int *)(param_1 + 0x1c) == 0) ||
      (ExceptionList = &local_c, piVar6 = (int *)FUN_005b8370(local_18),
      ppvVar5 = (void **)ExceptionList, piVar3 != (int *)*piVar6)) ||
     (piVar2 != *(int **)(param_1 + 0x14))) {
    while (ExceptionList = ppvVar5, piVar3 != piVar2) {
      puVar7 = (undefined4 *)FUN_005575c0(local_18,0);
      FUN_00557170(local_10,*puVar7);
      ppvVar5 = (void **)ExceptionList;
    }
  }
  else {
    FUN_00557580((*(int **)(param_1 + 0x14))[1]);
    *(int *)(*(int *)(param_1 + 0x14) + 4) = DAT_00771d70;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
    FUN_005b8370(local_14);
  }
  FUN_006bf840(*(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_006bf84b();
  iVar4 = DAT_00771d70;
  _DAT_00771d74 = _DAT_00771d74 + -1;
  iVar8 = 0;
  if (_DAT_00771d74 == 0) {
    DAT_00771d70 = 0;
    iVar8 = iVar4;
  }
  FUN_006bf8e7();
  if (iVar8 != 0) {
    FUN_006bf840(iVar8);
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_006bf840((char *)(iVar4 + -1));
    }
    else {
      *(char *)(iVar4 + -1) = cVar1 + -1;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

