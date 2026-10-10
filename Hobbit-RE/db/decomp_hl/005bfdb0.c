
void __fastcall FUN_005bfdb0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006df33b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006f446c;
  local_4 = 0;
  if (((param_1[0x21] != 0) && (param_1[0x1f] != 0)) && (iVar3 = 0, 0 < (int)param_1[0x1f])) {
    do {
      FUN_005542f0(*(undefined4 *)(param_1[0x21] + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x1f]);
  }
  if ((param_1[0x1a] != 0) && (local_14 = 0, 0 < (int)param_1[0x19])) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1[0x1a] + 0x14 + iVar3);
      iVar4 = param_1[0x1a] + iVar3;
      if (iVar2 != 0) {
        FUN_0064ff40(iVar2,s_C__projects_meridian_Support_Geo_00745c40,0x34);
        *(undefined4 *)(iVar4 + 0x14) = 0;
      }
      if (*(int *)(iVar4 + 0x1c) != 0) {
        FUN_0064ff40(*(int *)(iVar4 + 0x1c),s_C__projects_meridian_Support_Geo_00745c40,0x39);
        *(undefined4 *)(iVar4 + 0x1c) = 0;
      }
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (local_14 < (int)param_1[0x19]);
  }
  if (param_1[0x1e] != 0) {
    local_14 = 0;
    if (0 < (int)param_1[0x1d]) {
      iVar3 = 0;
      do {
        iVar2 = param_1[0x1e];
        iVar4 = *(int *)(iVar2 + 0x20 + iVar3);
        if (iVar4 != 0) {
          FUN_006bf840(iVar4);
          *(undefined4 *)(iVar2 + iVar3 + 0x20) = 0;
        }
        local_14 = local_14 + 1;
        iVar3 = iVar3 + 0x34;
      } while (local_14 < (int)param_1[0x1d]);
    }
    FUN_006bf840(param_1[0x1e]);
    param_1[0x1e] = 0;
  }
  iVar3 = param_1[0x1c];
  if (iVar3 != 0) {
    FUN_006c026a(iVar3,0x20,*(undefined4 *)(iVar3 + -4),FUN_005c0f70);
    FUN_006bf840(iVar3 + -4);
    param_1[0x1c] = 0;
  }
  FUN_006bf840(param_1[0x25]);
  FUN_006bf840(param_1[0x21]);
  FUN_006bf840(param_1[0x27]);
  iVar3 = param_1[0x1a];
  if (iVar3 != 0) {
    FUN_006c026a(iVar3,0x2c,*(undefined4 *)(iVar3 + -4),FUN_00429100);
    FUN_006bf840(iVar3 + -4);
  }
  FUN_006bf840(param_1[0x23]);
  FUN_006bf840(param_1[0x18]);
  param_1[0x25] = 0;
  param_1[0x21] = 0;
  param_1[0x27] = 0;
  param_1[0x1a] = 0;
  param_1[0x23] = 0;
  param_1[0x18] = 0;
  iVar3 = param_1[0xc];
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar3 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_006bf840((char *)(iVar3 + -1));
    }
    else {
      *(char *)(iVar3 + -1) = cVar1 + -1;
    }
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  ExceptionList = local_c;
  return;
}

