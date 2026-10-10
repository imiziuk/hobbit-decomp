
void __thiscall FUN_005a56c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  void *local_70;
  void *local_6c;
  uint local_4c;
  undefined1 local_48 [24];
  void *local_30;
  void *local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ddde6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0064f350(param_1,1,4,param_2);
  if (*param_1 == 0x3ec) {
    FUN_0064f350(param_1 + 1,1,4,param_2);
    FUN_0064f350(param_1 + 2,1,4,param_2);
    FUN_0064f350(&local_14,4,1,param_2);
    if (local_14 != 0) {
      FUN_00406a80();
      FUN_0064f350(local_48,0x18,1,param_2);
      FUN_0064f350(local_28,4,1,param_2);
      FUN_0064f350(local_28,4,3,param_2);
      FUN_0064f350(local_28,4,1,param_2);
      FUN_0064f350(&local_18,4,1,param_2);
      local_1c = local_18;
      local_6c = operator_new(local_18 << 6);
      local_8 = 0;
      if (local_6c == (void *)0x0) {
        local_6c = (void *)0x0;
      }
      else {
        FUN_00401080(local_6c,0x40,local_1c,CPreviewView::PAGE_INFO::PAGE_INFO);
      }
      local_8 = 0xffffffff;
      local_30 = local_6c;
      FUN_0064f350(local_6c,0x40,local_18,param_2);
      local_20 = local_18 * 3;
      local_70 = operator_new(local_18 * 0x24);
      local_8 = 1;
      if (local_70 == (void *)0x0) {
        local_70 = (void *)0x0;
      }
      else {
        FUN_00401080(local_70,0xc,local_20,FUN_0041def0);
      }
      local_8 = 0xffffffff;
      local_2c = local_70;
      for (local_24 = 0; local_24 < local_18; local_24 = local_24 + 1) {
        FUN_004357e0((void *)((int)local_30 + local_24 * 0x40));
        FUN_004357e0((int)local_30 + local_24 * 0x40 + 0xc);
        FUN_004357e0((int)local_30 + local_24 * 0x40 + 0x18);
      }
      FUN_005a5d80(local_2c,local_18,0,0);
      FUN_006bf840(local_2c);
      FUN_006bf840(local_30);
    }
  }
  else {
    if (*param_1 < 2000) {
      FUN_00425890(s_Loading_geometry_with_wrong_vers_0074425c);
    }
    FUN_0064f350(param_1 + 1,1,4,param_2);
    FUN_0064f350(param_1 + 2,1,4,param_2);
    FUN_0064f350(param_1 + 3,1,0x18,param_2);
    FUN_0064f350(param_1 + 9,1,0xc,param_2);
    FUN_0064f350(param_1 + 0xc,1,0xc,param_2);
    if (*param_1 < 0x7d1) {
      FUN_0064f350(param_1 + 0xf,1,4,param_2);
      param_1[0x10] = param_1[0xf];
      param_1[0x11] = param_1[0xf];
    }
    else {
      FUN_0064f350(param_1 + 0xf,1,4,param_2);
      FUN_0064f350(param_1 + 0x10,1,4,param_2);
      FUN_0064f350(param_1 + 0x11,1,4,param_2);
    }
    param_1[0x12] = (int)(DAT_006e92e8 / (float)param_1[0xf]);
    param_1[0x13] = (int)(DAT_006e92e8 / (float)param_1[0x10]);
    param_1[0x14] = (int)(DAT_006e92e8 / (float)param_1[0x11]);
    FUN_0064f350(param_1 + 0x15,1,0xc,param_2);
    FUN_0064f350(param_1 + 0x18,1,4,param_2);
    FUN_0064f350(param_1 + 0x19,1,4,param_2);
    FUN_0064f350(param_1 + 0x1a,1,4,param_2);
    FUN_0064f350(param_1 + 0x1b,1,4,param_2);
    FUN_0064f350(param_1 + 0x1c,1,4,param_2);
    DAT_007a59c4 = DAT_007a59c4 + param_1[0x1c];
    if (param_1[0x1d] != 0) {
      FUN_00674810(param_1[0x1d]);
    }
    iVar1 = FUN_006747f0(param_1[0x1c] + 1);
    param_1[0x1d] = iVar1;
    iVar1 = param_1[0x1d];
    if (*param_1 < 0x7d2) {
      param_1[0x1e] = iVar1;
      FUN_0064f350(param_1[0x1e],param_1[0x19],8,param_2);
      local_4c = iVar1 + param_1[0x19] * 8;
    }
    else if (param_1[0x1b] < 0x100) {
      param_1[0x20] = iVar1;
      FUN_0064f350(param_1[0x20],param_1[0x19],3,param_2);
      local_4c = iVar1 + param_1[0x19] * 3;
      if ((local_4c & 1) != 0) {
        local_4c = local_4c + 1;
        param_1[0x1c] = param_1[0x1c] + 1;
      }
    }
    else {
      param_1[0x1f] = iVar1;
      FUN_0064f350(param_1[0x1f],param_1[0x19],6,param_2);
      local_4c = iVar1 + param_1[0x19] * 6;
    }
    param_1[0x24] = local_4c;
    FUN_0064f350(param_1[0x24],param_1[0x1b],6,param_2);
    iVar1 = local_4c + param_1[0x1b] * 6;
    param_1[0x21] = iVar1;
    FUN_0064f350(param_1[0x21],param_1[0x18],2,param_2);
    iVar1 = iVar1 + param_1[0x18] * 2;
    param_1[0x22] = iVar1;
    FUN_0064f350(param_1[0x22],param_1[0x18],2,param_2);
    param_1[0x23] = iVar1 + param_1[0x18] * 2;
    FUN_0064f350(param_1[0x23],param_1[0x1a],2,param_2);
  }
  ExceptionList = local_10;
  return;
}

