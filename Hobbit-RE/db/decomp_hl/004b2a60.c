
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b2a60(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte local_c0;
  byte local_bf;
  byte local_be;
  byte local_bd;
  byte local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 *local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [20];
  undefined1 local_6c [12];
  undefined1 local_60 [84];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d40b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_pickup__SpawnCouragePickups_0072bd18);
  local_b4 = 0;
  local_90 = 0;
  local_94 = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_4 = 1;
  FUN_006bf840(0);
  puVar7 = (undefined4 *)0x0;
  iVar8 = 0;
  local_9c = (undefined4 *)0x0;
  local_a0 = 0;
  local_98 = 0;
  FUN_0064cbe0();
  FUN_0064cc00();
  local_c0 = 0;
  local_bf = 0;
  local_be = 0;
  local_bd = 0;
  local_bc = 0;
  if (param_1 < 10) {
    FUN_004b2600(&local_c0,param_1,4);
  }
  if ((param_1 < 0x32) && (9 < param_1)) {
    FUN_004b2600(&local_c0,param_1,6);
  }
  if (param_1 < 100) {
    if (param_1 < 0x32) goto LAB_004b2b56;
    uVar10 = 8;
  }
  else {
    uVar10 = 10;
  }
  FUN_004b2600(&local_c0,param_1,uVar10);
LAB_004b2b56:
  local_b8 = 0;
  local_ac = 0;
  if (local_c0 != 0) {
    puVar4 = (undefined4 *)0x0;
    iVar5 = 0;
    do {
      local_ac = iVar5 + 1;
      puVar7 = puVar4;
      if (iVar8 < local_ac) {
        iVar8 = iVar8 / 2;
        iVar6 = 1;
        if (0 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar6 + iVar5 < 1) {
          iVar8 = 1;
        }
        else {
          if (iVar8 < 1) {
            iVar8 = 1;
          }
          iVar8 = iVar8 + iVar5;
        }
        local_b0 = iVar8;
        puVar7 = (undefined4 *)operator_new(iVar8 * 4);
        if (0 < iVar5) {
          puVar1 = puVar7;
          iVar6 = iVar5;
          do {
            *puVar1 = *(undefined4 *)(((int)puVar4 - (int)puVar7) + (int)puVar1);
            puVar1 = puVar1 + 1;
            iVar6 = iVar6 + -1;
            iVar8 = local_b0;
          } while (iVar6 != 0);
        }
        FUN_006bf840(puVar4);
        local_9c = puVar7;
        local_98 = iVar8;
      }
      puVar7[iVar5] = 1;
      local_b4 = local_b4 + 1;
      local_b8 = local_b8 + 1;
      puVar4 = puVar7;
      iVar5 = local_ac;
      local_a0 = local_ac;
    } while (local_b8 < (int)(uint)local_c0);
  }
  local_b8 = 0;
  puVar4 = puVar7;
  iVar5 = local_ac;
  if (local_bf != 0) {
    do {
      local_ac = iVar5 + 1;
      puVar7 = puVar4;
      if (iVar8 < local_ac) {
        iVar8 = iVar8 / 2;
        iVar6 = 1;
        if (0 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar6 + iVar5 < 1) {
          iVar8 = 1;
        }
        else {
          if (iVar8 < 1) {
            iVar8 = 1;
          }
          iVar8 = iVar8 + iVar5;
        }
        local_b0 = iVar8;
        puVar7 = (undefined4 *)operator_new(iVar8 * 4);
        if (0 < iVar5) {
          puVar1 = puVar7;
          iVar6 = iVar5;
          do {
            *puVar1 = *(undefined4 *)(((int)puVar4 - (int)puVar7) + (int)puVar1);
            puVar1 = puVar1 + 1;
            iVar6 = iVar6 + -1;
            iVar8 = local_b0;
          } while (iVar6 != 0);
        }
        FUN_006bf840(puVar4);
        local_9c = puVar7;
        local_98 = iVar8;
      }
      puVar7[iVar5] = 5;
      local_b4 = local_b4 + 1;
      local_b8 = local_b8 + 1;
      puVar4 = puVar7;
      iVar5 = local_ac;
      local_a0 = local_ac;
    } while (local_b8 < (int)(uint)local_bf);
  }
  local_b8 = 0;
  puVar4 = puVar7;
  iVar5 = local_ac;
  if (local_be != 0) {
    do {
      local_ac = iVar5 + 1;
      puVar7 = puVar4;
      if (iVar8 < local_ac) {
        iVar8 = iVar8 / 2;
        iVar6 = 1;
        if (0 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar6 + iVar5 < 1) {
          iVar8 = 1;
        }
        else {
          if (iVar8 < 1) {
            iVar8 = 1;
          }
          iVar8 = iVar8 + iVar5;
        }
        local_b0 = iVar8;
        puVar7 = (undefined4 *)operator_new(iVar8 * 4);
        if (0 < iVar5) {
          puVar1 = puVar7;
          iVar6 = iVar5;
          do {
            *puVar1 = *(undefined4 *)(((int)puVar4 - (int)puVar7) + (int)puVar1);
            puVar1 = puVar1 + 1;
            iVar6 = iVar6 + -1;
            iVar8 = local_b0;
          } while (iVar6 != 0);
        }
        FUN_006bf840(puVar4);
        local_9c = puVar7;
        local_98 = iVar8;
      }
      puVar7[iVar5] = 10;
      local_b4 = local_b4 + 1;
      local_b8 = local_b8 + 1;
      puVar4 = puVar7;
      iVar5 = local_ac;
      local_a0 = local_ac;
    } while (local_b8 < (int)(uint)local_be);
  }
  local_b8 = 0;
  puVar4 = puVar7;
  iVar5 = local_ac;
  if (local_bd != 0) {
    do {
      local_ac = iVar5 + 1;
      puVar7 = puVar4;
      if (iVar8 < local_ac) {
        iVar8 = iVar8 / 2;
        iVar6 = 1;
        if (0 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar6 + iVar5 < 1) {
          iVar8 = 1;
        }
        else {
          if (iVar8 < 1) {
            iVar8 = 1;
          }
          iVar8 = iVar8 + iVar5;
        }
        puVar7 = (undefined4 *)operator_new(iVar8 * 4);
        puVar1 = puVar4;
        if (0 < iVar5) {
          puVar2 = puVar7;
          iVar6 = iVar5;
          do {
            *puVar2 = *(undefined4 *)(((int)puVar4 - (int)puVar7) + (int)puVar2);
            puVar2 = puVar2 + 1;
            iVar6 = iVar6 + -1;
            puVar1 = local_9c;
          } while (iVar6 != 0);
        }
        FUN_006bf840(puVar1);
        local_9c = puVar7;
        local_98 = iVar8;
      }
      puVar7[iVar5] = 0x19;
      local_b4 = local_b4 + 1;
      local_b8 = local_b8 + 1;
      puVar4 = puVar7;
      iVar5 = local_ac;
      local_a0 = local_ac;
    } while (local_b8 < (int)(uint)local_bd);
  }
  local_b8 = 0;
  puVar4 = puVar7;
  iVar5 = local_ac;
  if (local_bc != 0) {
    do {
      local_ac = iVar5 + 1;
      puVar7 = puVar4;
      if (iVar8 < local_ac) {
        iVar8 = iVar8 / 2;
        iVar6 = 1;
        if (0 < iVar8) {
          iVar6 = iVar8;
        }
        if (iVar6 + iVar5 < 1) {
          iVar8 = 1;
        }
        else {
          if (iVar8 < 1) {
            iVar8 = 1;
          }
          iVar8 = iVar8 + iVar5;
        }
        puVar7 = (undefined4 *)operator_new(iVar8 * 4);
        puVar1 = puVar4;
        if (0 < iVar5) {
          puVar2 = puVar7;
          iVar6 = iVar5;
          do {
            *puVar2 = *(undefined4 *)(((int)puVar4 - (int)puVar7) + (int)puVar2);
            puVar2 = puVar2 + 1;
            iVar6 = iVar6 + -1;
            puVar1 = local_9c;
          } while (iVar6 != 0);
        }
        FUN_006bf840(puVar1);
        local_9c = puVar7;
        local_98 = iVar8;
      }
      puVar7[iVar5] = 0x32;
      local_b4 = local_b4 + 1;
      local_b8 = local_b8 + 1;
      puVar4 = puVar7;
      iVar5 = local_ac;
      local_a0 = local_ac;
    } while (local_b8 < (int)(uint)local_bc);
  }
  iVar8 = param_2[2];
  uVar10 = *param_2;
  local_b0 = iVar8;
  local_ac = uVar10;
  FUN_00401f00(uVar10,(float)param_2[1] + _DAT_006e999c,iVar8);
  FUN_00401f00(uVar10,(float)param_2[1] - _DAT_006e9590,iVar8);
  FUN_00579720(param_3,param_4,local_60,local_6c,0x1800);
  iVar8 = FUN_00577e70();
  if (iVar8 == 0) {
    piVar3 = (int *)FUN_0041bcc0();
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x28))();
    local_8c = *puVar4;
    local_88 = puVar4[1];
    local_84 = puVar4[2];
  }
  else {
    local_8c = DAT_007734f4;
    local_88 = DAT_007734f8;
    local_84 = DAT_007734fc;
  }
  FUN_0064cbe0();
  FUN_0064cbe0();
  iVar8 = 0;
  if (0 < local_b4) {
    local_b0 = param_5 << 0xc;
    do {
      uVar9 = FUN_0054bad0(0x22,0,0);
      iVar5 = FUN_004021c0(uVar9);
      FUN_0064cc00();
      FUN_004b2740(&local_8c,param_3,param_4,local_80,0x43c80000,0,0x40c90fdb);
      FUN_0064cc50();
      FUN_0064cc00();
      switch(puVar7[iVar8]) {
      case 1:
        uVar11 = 1;
        uVar10 = 10;
        break;
      default:
        goto switchD_004b307a_caseD_2;
      case 5:
        uVar11 = 5;
        uVar10 = 0xb;
        break;
      case 10:
        uVar11 = 10;
        uVar10 = 0xc;
        break;
      case 0x19:
        uVar11 = 0x19;
        uVar10 = 0xd;
        break;
      case 0x32:
        uVar11 = 0x32;
        uVar10 = 0xe;
      }
      FUN_004af8d0(param_2,local_80,uVar10,uVar11);
switchD_004b307a_caseD_2:
      FUN_0064cc50();
      iVar8 = iVar8 + 1;
      *(ushort *)(iVar5 + 0x16e) =
           (*(ushort *)(iVar5 + 0x16e) ^ (ushort)local_b0) & 0x1000 ^ *(ushort *)(iVar5 + 0x16e);
    } while (iVar8 < local_b4);
  }
  FUN_0064cc50();
  FUN_006bf840(puVar7);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

