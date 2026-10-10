
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00531910(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 *local_84;
  void *local_80;
  int local_7c;
  int local_78;
  undefined4 *local_74;
  void *local_70;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_38;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d8a99;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_006501d0(s_music_mgr__LoadPackage_00736ee4);
  local_4._0_1_ = 1;
  FUN_00649b60(&param_1);
  local_4._0_1_ = 2;
  uVar1 = FUN_005496c0(local_38,s_Audio_0071ce88);
  FUN_00649b20(uVar1);
  local_4._0_1_ = 3;
  if (DAT_007642e0 == 0) {
    if (DAT_007642d8 != 0) {
      FUN_00407f70(3);
    }
    DAT_007642d8 = 0;
    _DAT_007642dc = 0;
  }
  _DAT_007642d4 = 0;
  FUN_00658080(local_64);
  iVar2 = FUN_00658290(local_64,&DAT_007642cc);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_0065a670(local_64,&local_7c);
    local_84 = (undefined4 *)operator_new(0x78);
    local_4._0_1_ = 4;
    local_74 = local_84;
    if (local_84 == (undefined4 *)0x0) {
      local_84 = (undefined4 *)0x0;
    }
    else {
      FUN_006499d0();
      local_4._0_1_ = 5;
      FUN_006499d0();
      local_84[0x1a] = 0;
      local_84[0x19] = 0;
      local_84[0x1b] = 0;
      local_84[0x1d] = 0;
      local_84[0x1c] = 0;
      local_84[0x17] = 0;
      local_84[0x18] = 0;
      local_4._0_1_ = 7;
      FUN_0064a2e0(s_UNINITIALIZD_00736e88);
      *local_84 = 0;
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_0064a320(&param_1);
    iVar2 = FUN_0065a650(local_64);
    if (iVar2 != 0) {
      FUN_0064a2e0(iVar2);
    }
    if (0 < (int)puVar3) {
      local_78 = 0;
      local_74 = puVar3;
      do {
        iVar2 = local_78;
        pvVar4 = operator_new(0x70);
        local_4._0_1_ = 8;
        if (pvVar4 == (void *)0x0) {
          local_80 = (void *)0x0;
        }
        else {
          local_80 = pvVar4;
          FUN_006499d0();
          *(undefined4 *)((int)pvVar4 + 0x38) = 0;
          *(undefined4 *)((int)pvVar4 + 0x34) = 0;
          *(undefined4 *)((int)pvVar4 + 0x3c) = 0;
          *(undefined4 *)((int)pvVar4 + 0x44) = 0;
          *(undefined4 *)((int)pvVar4 + 0x40) = 0;
          *(undefined4 *)((int)pvVar4 + 0x2c) = 0;
          *(undefined4 *)((int)pvVar4 + 0x30) = 0;
          local_4._0_1_ = 10;
          FUN_006a1cb0();
          local_4._0_1_ = 0xb;
          FUN_0064a2e0(s_UNINITIALIZD_00736e88);
          *(undefined4 *)((int)pvVar4 + 0x48) = 0;
          *(undefined4 *)((int)pvVar4 + 0x50) = 0;
          FUN_005b6470();
          *(undefined4 *)((int)pvVar4 + 0x4c) = 0;
          local_80 = pvVar4;
        }
        pvVar4 = local_80;
        iVar6 = local_7c + 1 + iVar2;
        local_4 = CONCAT31(local_4._1_3_,3);
        if (iVar6 != 0) {
          FUN_0064a2e0(iVar6);
        }
        puVar3 = local_84;
        *(uint *)((int)pvVar4 + 0x48) = (uint)*(byte *)(local_7c + iVar2);
        iVar6 = local_84[0x19];
        if ((int)local_84[0x1b] < iVar6 + 1) {
          if (local_84[0x1d] == 0) {
            iVar5 = (int)local_84[0x1b] / 2;
            iVar2 = 1;
            if (0 < iVar5) {
              iVar2 = iVar5;
            }
            if (iVar2 + iVar6 < 1) {
              iVar6 = 1;
            }
            else {
              if (iVar5 < 1) {
                iVar5 = 1;
              }
              iVar6 = iVar6 + iVar5;
            }
          }
          else {
            iVar6 = local_84[0x1d] + iVar6;
          }
          pvVar4 = operator_new(iVar6 * 4);
          iVar2 = 0;
          if (0 < (int)puVar3[0x19]) {
            do {
              *(undefined4 *)((int)pvVar4 + iVar2 * 4) = *(undefined4 *)(puVar3[0x1a] + iVar2 * 4);
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)puVar3[0x19]);
          }
          FUN_006bf840(puVar3[0x1a]);
          puVar3[0x1a] = pvVar4;
          puVar3[0x1b] = iVar6;
          iVar2 = local_78;
          pvVar4 = local_80;
        }
        *(void **)(puVar3[0x1a] + puVar3[0x19] * 4) = pvVar4;
        local_78 = iVar2 + 0x20;
        local_74 = (undefined4 *)((int)local_74 + -1);
        puVar3[0x19] = puVar3[0x19] + 1;
      } while (local_74 != (undefined4 *)0x0);
    }
    pvVar4 = operator_new(0x70);
    local_4._0_1_ = 0xc;
    local_74 = (undefined4 *)pvVar4;
    if (pvVar4 == (void *)0x0) {
      local_80 = (void *)0x0;
    }
    else {
      FUN_006499d0();
      local_4._0_1_ = 0xd;
      FUN_006a1cb0();
      local_4._0_1_ = 0xe;
      FUN_006a1cb0();
      local_4._0_1_ = 0xf;
      FUN_0064a2e0(s_UNINITIALIZD_00736e88);
      *(undefined4 *)((int)pvVar4 + 0x48) = 0;
      *(undefined4 *)((int)pvVar4 + 0x50) = 0;
      FUN_005b6470();
      *(undefined4 *)((int)pvVar4 + 0x4c) = 0;
      local_80 = pvVar4;
    }
    pvVar4 = local_80;
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_0064a2e0(s_MUSIC_Silence_00724fb8);
    puVar3 = local_84;
    *(undefined4 *)((int)pvVar4 + 0x48) = 0;
    iVar2 = local_84[0x19];
    if ((int)local_84[0x1b] < iVar2 + 1) {
      if (local_84[0x1d] == 0) {
        iVar5 = (int)local_84[0x1b] / 2;
        iVar6 = 1;
        if (0 < iVar5) {
          iVar6 = iVar5;
        }
        if (iVar6 + iVar2 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar2 = iVar2 + iVar5;
        }
      }
      else {
        iVar2 = local_84[0x1d] + iVar2;
      }
      pvVar4 = operator_new(iVar2 * 4);
      iVar6 = 0;
      if (0 < (int)puVar3[0x19]) {
        do {
          *(undefined4 *)((int)pvVar4 + iVar6 * 4) = *(undefined4 *)(puVar3[0x1a] + iVar6 * 4);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)puVar3[0x19]);
      }
      FUN_006bf840(puVar3[0x1a]);
      puVar3[0x1b] = iVar2;
      puVar3[0x1a] = pvVar4;
      pvVar4 = local_80;
    }
    *(void **)(puVar3[0x1a] + puVar3[0x19] * 4) = pvVar4;
    puVar3[0x19] = puVar3[0x19] + 1;
    FUN_00417a80(&local_84);
    local_70 = operator_new(0x2c);
    local_4._0_1_ = 0x10;
    if (local_70 == (void *)0x0) {
      local_6c[0] = 0;
    }
    else {
      local_6c[0] = FUN_00649b20(param_1);
    }
    local_4._0_1_ = 3;
    FUN_00417a80(local_6c);
    FUN_0064e870(7,s_Loaded_Package___s__00736ecc,local_84[1]);
  }
  if (DAT_007642e0 == 0) {
    if (DAT_007642d8 != 0) {
      FUN_00407f70(3);
    }
    DAT_007642d8 = 0;
    _DAT_007642dc = 0;
  }
  _DAT_007642d4 = 0;
  local_4._0_1_ = 2;
  FUN_00649ba0();
  local_4._0_1_ = 1;
  FUN_00649ba0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

