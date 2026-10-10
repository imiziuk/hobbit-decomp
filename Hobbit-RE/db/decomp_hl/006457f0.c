
uint __fastcall FUN_006457f0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6060;
  local_c = ExceptionList;
  iVar7 = *(int *)(param_1 + 0x3c);
  iVar6 = 0;
  uVar4 = 1;
  local_20 = 1;
  ExceptionList = &local_c;
  if (0 < *(short *)(iVar7 + 0x10)) {
    iVar5 = *(int *)(param_1 + 0x40);
    iVar3 = 0;
    ExceptionList = &local_c;
    do {
      *(int *)(iVar3 + iVar5) = iVar7;
      iVar5 = *(int *)(param_1 + 0x40);
      piVar1 = (int *)(iVar3 + iVar5);
      iVar3 = iVar3 + 0xc;
      uVar4 = uVar4 & *piVar1 != 0;
      iVar7 = *(int *)(param_1 + 0x3c);
      iVar6 = iVar6 + 1;
      local_20 = uVar4;
    } while (iVar6 < *(short *)(iVar7 + 0x10));
  }
  iVar7 = 0;
  if (0 < *(short *)(*(int *)(param_1 + 0x3c) + 0x12)) {
    do {
      uVar2 = FUN_006452b0((int)*(short *)(*(int *)(param_1 + 0x44) + 4 + iVar7 * 8) +
                           *(int *)(param_1 + 0x60));
      *(undefined4 *)(*(int *)(param_1 + 0x44) + iVar7 * 8) = uVar2;
      iVar6 = *(int *)(*(int *)(param_1 + 0x44) + iVar7 * 8);
      local_20 = local_20 & iVar6 != 0;
      if (iVar6 == 0) {
        FUN_00649920(&local_18,s_Link_error_class___s__0074b92c,
                     (int)*(short *)(*(int *)(param_1 + 0x44) + iVar7 * 8 + 4) +
                     *(int *)(param_1 + 0x60));
        local_4 = 0;
        uVar2 = FUN_00649940();
        FUN_0064e7d0(uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(short *)(*(int *)(param_1 + 0x3c) + 0x12));
  }
  local_1c = 0;
  if (0 < *(short *)(*(int *)(param_1 + 0x3c) + 0x14)) {
    local_18 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x48);
      iVar6 = *(int *)(param_1 + 0x60);
      iVar3 = *(short *)(local_18 + 6 + iVar7) + iVar6;
      iVar5 = *(short *)(local_18 + 8 + iVar7) + iVar6;
      iVar6 = *(short *)(local_18 + 10 + iVar7) + iVar6;
      uVar2 = FUN_006452b0(iVar3);
      *(undefined4 *)(local_18 + *(int *)(param_1 + 0x48)) = uVar2;
      iVar7 = *(int *)(local_18 + *(int *)(param_1 + 0x48));
      local_20 = local_20 & iVar7 != 0;
      if (iVar7 == 0) {
        FUN_00649920(local_14,s_Link_error_class___s__0074b92c,iVar3);
        local_4 = 1;
        uVar2 = FUN_00649940();
        FUN_0064e7d0(uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      if ((*(byte *)(local_18 + 4 + *(int *)(param_1 + 0x48)) & 8) != 0) {
        iVar7 = FUN_006454a0(iVar3,iVar5,iVar6);
        *(int *)(local_18 + 0x18 + *(int *)(param_1 + 0x48)) = iVar7;
        if (iVar7 == 0) {
          FUN_00649920(local_10,s_Link_error_method___s__s____s__0074b90c,iVar3,iVar5,iVar6);
          local_4 = 2;
          uVar2 = FUN_00649940();
          FUN_0064e7d0(uVar2);
          local_4 = 0xffffffff;
          FUN_00649950();
          local_20 = 0;
        }
      }
      local_18 = local_18 + 0x1c;
      local_1c = local_1c + 1;
    } while (local_1c < *(short *)(*(int *)(param_1 + 0x3c) + 0x14));
  }
  local_1c = 0;
  if (0 < *(short *)(*(int *)(param_1 + 0x3c) + 0x16)) {
    local_18 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0x4c);
      iVar6 = *(int *)(param_1 + 0x60);
      iVar3 = *(short *)(local_18 + 8 + iVar7) + iVar6;
      iVar5 = *(short *)(local_18 + 6 + iVar7) + iVar6;
      iVar6 = *(short *)(local_18 + 4 + iVar7) + iVar6;
      uVar2 = FUN_006452f0(iVar6,iVar5,iVar3);
      *(undefined4 *)(local_18 + *(int *)(param_1 + 0x4c)) = uVar2;
      iVar7 = *(int *)(local_18 + *(int *)(param_1 + 0x4c));
      local_20 = local_20 & iVar7 != 0;
      if (iVar7 == 0) {
        FUN_00649920(local_10,s_Link_error_method___s__s____s__0074b90c,iVar6,iVar5,iVar3);
        local_4 = 3;
        uVar2 = FUN_00649940();
        FUN_0064e7d0(uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      local_18 = local_18 + 0xc;
      local_1c = local_1c + 1;
    } while (local_1c < *(short *)(*(int *)(param_1 + 0x3c) + 0x16));
  }
  iVar7 = 0;
  local_1c = 0;
  if (0 < *(short *)(*(int *)(param_1 + 0x3c) + 0x18)) {
    do {
      iVar5 = (int)*(short *)(*(int *)(param_1 + 0x50) + 4 + iVar7) + *(int *)(param_1 + 0x60);
      uVar2 = FUN_006452b0(iVar5);
      *(undefined4 *)(*(int *)(param_1 + 0x50) + iVar7) = uVar2;
      iVar6 = *(int *)(*(int *)(param_1 + 0x50) + iVar7);
      local_20 = local_20 & iVar6 != 0;
      if (iVar6 == 0) {
        FUN_00649920(local_10,s_Link_error_class___s__0074b92c,iVar5);
        local_4 = 4;
        uVar2 = FUN_00649940();
        FUN_0064e7d0(uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      local_1c = local_1c + 1;
      iVar7 = iVar7 + 0xc;
    } while (local_1c < *(short *)(*(int *)(param_1 + 0x3c) + 0x18));
  }
  iVar7 = 0;
  if (*(short *)(*(int *)(param_1 + 0x3c) + 0x1a) < 1) {
    *(uint *)(param_1 + 4) = local_20;
    ExceptionList = local_c;
    return local_20;
  }
  do {
    iVar5 = (int)*(short *)(*(int *)(param_1 + 0x54) + 6 + iVar7 * 8) + *(int *)(param_1 + 0x60);
    iVar3 = (int)*(short *)(*(int *)(param_1 + 0x54) + 4 + iVar7 * 8) + *(int *)(param_1 + 0x60);
    uVar2 = FUN_00645330(iVar3,iVar5);
    *(undefined4 *)(*(int *)(param_1 + 0x54) + iVar7 * 8) = uVar2;
    iVar6 = *(int *)(*(int *)(param_1 + 0x54) + iVar7 * 8);
    local_20 = local_20 & iVar6 != 0;
    if (iVar6 == 0) {
      FUN_00649920(&local_1c,s_Link_error_field___s__s__0074b8f0,iVar3,iVar5);
      local_4 = 5;
      uVar2 = FUN_00649940();
      FUN_0064e7d0(uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < *(short *)(*(int *)(param_1 + 0x3c) + 0x1a));
  *(uint *)(param_1 + 4) = local_20;
  ExceptionList = local_c;
  return local_20;
}

