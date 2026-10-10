
undefined4 * __fastcall FUN_005676c0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  undefined4 *local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006db166;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = &PTR_FUN_006f3e7c;
  local_4 = 1;
  local_14 = param_1;
  if (DAT_007723d4 == 0) {
    FUN_005c8ff0(0xffffffff,0x20,0x20,0x20);
    FUN_005c8ff0(0xffffffff,0x20,0x60,0x20);
    FUN_005c8ff0(0xffffffff,0x20,0x58,0x20);
    FUN_005c8ff0(0xffffffff,0x20,0x10,0x20);
  }
  DAT_007723d4 = DAT_007723d4 + 1;
  if (param_1[5] != 8) {
    pvVar1 = operator_new(0x20);
    iVar2 = 0;
    if (0 < (int)param_1[3]) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar2 * 4) = *(undefined4 *)(param_1[4] + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[3]);
    }
    FUN_006bf840(param_1[4]);
    param_1[4] = pvVar1;
    param_1[5] = 8;
  }
  if (param_1[0xc] != 4) {
    pvVar1 = operator_new(0x10);
    iVar2 = 0;
    if (0 < (int)param_1[10]) {
      do {
        *(undefined4 *)((int)pvVar1 + iVar2 * 4) = *(undefined4 *)(param_1[0xb] + iVar2 * 4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)param_1[10]);
    }
    FUN_006bf840(param_1[0xb]);
    param_1[0xb] = pvVar1;
    param_1[0xc] = 4;
  }
  local_18 = 4;
  do {
    iVar2 = param_1[10];
    if ((int)param_1[0xc] < iVar2 + 1) {
      if (param_1[0xe] == 0) {
        local_1c = (int)param_1[0xc] / 2;
        iVar3 = 1;
        if (0 < local_1c) {
          iVar3 = local_1c;
        }
        if (iVar3 + iVar2 < 1) {
          local_1c = 1;
        }
        else {
          if (local_1c < 1) {
            local_1c = 1;
          }
          local_1c = iVar2 + local_1c;
        }
      }
      else {
        local_1c = param_1[0xe] + iVar2;
      }
      pvVar1 = operator_new(local_1c * 4);
      iVar2 = 0;
      if (0 < (int)param_1[10]) {
        do {
          *(undefined4 *)((int)pvVar1 + iVar2 * 4) = *(undefined4 *)(param_1[0xb] + iVar2 * 4);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)param_1[10]);
      }
      FUN_006bf840(param_1[0xb]);
      param_1[0xb] = pvVar1;
      param_1[0xc] = local_1c;
    }
    *(undefined4 *)(param_1[0xb] + param_1[10] * 4) = 0xffffffff;
    local_18 = local_18 + -1;
    param_1[10] = param_1[10] + 1;
  } while (local_18 != 0);
  iVar2 = 2;
  local_18 = 0;
  do {
    local_18 = FUN_005c90f0(local_10,&local_1c);
    FUN_00417a80(&local_18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 2;
  do {
    local_18 = FUN_005c90f0(&local_1c,local_10);
    FUN_00417a80(&local_18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 2;
  do {
    local_18 = FUN_005c90f0(&local_1c,local_10);
    FUN_00417a80(&local_18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 2;
  do {
    local_18 = FUN_005c90f0(&local_1c,local_10);
    FUN_00417a80(&local_18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  ExceptionList = local_c;
  return param_1;
}

