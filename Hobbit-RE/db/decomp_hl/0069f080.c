
int __thiscall
FUN_0069f080(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,void *param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  void *local_50;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  void *local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  void *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006e73b9;
  local_c = ExceptionList;
  iVar9 = 0;
  local_38 = (void *)0x0;
  local_3c = 0;
  local_34 = 0;
  local_2c = 0;
  local_30 = 0;
  local_44 = 0;
  local_40 = 0;
  local_1c = (void *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_14 = 0;
  local_28 = 0;
  local_24 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  iVar3 = FUN_0069f520(param_2);
  if (iVar3 == -1) {
    local_50 = operator_new(0x74);
    local_4._0_1_ = 2;
    if (local_50 == (void *)0x0) {
      local_50 = (void *)0x0;
    }
    else {
      FUN_006499d0();
      local_4._0_1_ = 3;
      FUN_00650250();
      local_4._0_1_ = 4;
      FUN_006a1cb0();
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0064a2e0(param_2);
    iVar3 = param_4;
    *(int *)((int)local_50 + 0x4c) = param_4;
    *(int *)((int)local_50 + 0x50) = param_5;
    *(void **)((int)local_50 + 0x54) = param_6;
    FUN_00652870(param_3);
    if (((0 < iVar3) && (0 < param_5)) && (0 < (int)param_6)) {
      piVar4 = (int *)FUN_006508b0(&param_3,0,0,0);
      iVar2 = *piVar4;
      iVar6 = param_5 + 1;
      if (iVar6 != local_34) {
        pvVar5 = operator_new(iVar6 * 4);
        iVar3 = 0;
        if (0 < local_3c) {
          do {
            *(undefined4 *)((int)pvVar5 + iVar3 * 4) = *(undefined4 *)((int)local_38 + iVar3 * 4);
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_3c);
        }
        FUN_006bf840(local_38);
        iVar3 = param_4;
        local_38 = pvVar5;
        local_34 = iVar6;
      }
      param_3 = iVar3 * (int)param_6;
      iVar3 = param_3 + 1;
      if (iVar3 != local_18) {
        pvVar5 = operator_new(iVar3 * 4);
        iVar6 = 0;
        if (0 < local_20) {
          do {
            *(undefined4 *)((int)pvVar5 + iVar6 * 4) = *(undefined4 *)((int)local_1c + iVar6 * 4);
            iVar6 = iVar6 + 1;
          } while (iVar6 < local_20);
        }
        FUN_006bf840(local_1c);
        local_1c = pvVar5;
        local_18 = iVar3;
      }
      while( true ) {
        if (*(char *)((int)local_50 + 0x48) == '\0') {
          sVar1 = *(short *)((int)local_50 + 0x40);
        }
        else {
          sVar1 = *(short *)(*(int *)((int)local_50 + 0x2c) + 4);
        }
        if (sVar1 <= iVar9) break;
        piVar4 = (int *)FUN_006508b0(local_48,iVar9,0,0);
        if (*piVar4 == iVar2) {
          if (local_34 < local_3c + 1) {
            if (local_2c == 0) {
              iVar3 = local_34 / 2;
              iVar6 = 1;
              if (0 < iVar3) {
                iVar6 = iVar3;
              }
              if (iVar6 + local_3c < 1) {
                iVar3 = 1;
              }
              else {
                if (iVar3 < 1) {
                  iVar3 = 1;
                }
                iVar3 = iVar3 + local_3c;
              }
            }
            else {
              iVar3 = local_3c + local_2c;
            }
            pvVar5 = operator_new(iVar3 * 4);
            iVar6 = 0;
            if (0 < local_3c) {
              do {
                *(undefined4 *)((int)pvVar5 + iVar6 * 4) =
                     *(undefined4 *)((int)local_38 + iVar6 * 4);
                iVar6 = iVar6 + 1;
              } while (iVar6 < local_3c);
            }
            FUN_006bf840(local_38);
            local_38 = pvVar5;
            local_34 = iVar3;
          }
          local_3c = local_3c + 1;
          *(int *)((int)local_38 + local_3c * 4 + -4) = iVar9;
        }
        iVar9 = iVar9 + 1;
      }
      iVar3 = 0;
      while( true ) {
        if (*(char *)((int)local_50 + 0x48) == '\0') {
          sVar1 = *(short *)((int)local_50 + 0x42);
        }
        else {
          sVar1 = *(short *)(*(int *)((int)local_50 + 0x2c) + 6);
        }
        if (sVar1 <= iVar3) break;
        piVar4 = (int *)FUN_006508b0(local_48,0,iVar3,0);
        if (*piVar4 == iVar2) {
          piVar4 = (int *)FUN_006a20c0();
          *piVar4 = iVar3;
        }
        iVar3 = iVar3 + 1;
      }
      iVar3 = param_4 * param_5 * (int)param_6;
      if (iVar3 - *(int *)((int)local_50 + 0x68) != 0) {
        pvVar5 = operator_new(iVar3 * 0x10);
        local_4._0_1_ = 5;
        param_6 = pvVar5;
        if (pvVar5 == (void *)0x0) {
          pvVar5 = (void *)0x0;
        }
        else {
          FUN_00401080(pvVar5,0x10,iVar3,FUN_0041def0);
        }
        iVar9 = 0;
        local_4 = CONCAT31(local_4._1_3_,1);
        if (0 < *(int *)((int)local_50 + 0x60)) {
          iVar6 = 0;
          do {
            puVar8 = (undefined4 *)(*(int *)((int)local_50 + 100) + iVar6);
            puVar7 = (undefined4 *)((int)pvVar5 + iVar6);
            *puVar7 = *puVar8;
            puVar7[1] = puVar8[1];
            puVar7[2] = puVar8[2];
            puVar7[3] = puVar8[3];
            iVar9 = iVar9 + 1;
            iVar6 = iVar6 + 0x10;
          } while (iVar9 < *(int *)((int)local_50 + 0x60));
        }
        FUN_006bf840(*(undefined4 *)((int)local_50 + 100));
        *(void **)((int)local_50 + 100) = pvVar5;
        *(int *)((int)local_50 + 0x68) = iVar3;
      }
      param_6 = (void *)0x0;
      if (0 < param_3) {
        do {
          iVar3 = 0;
          if (0 < param_5) {
            do {
              param_4 = *(int *)((int)local_38 + iVar3 * 4 + 4);
              iVar9 = *(int *)((int)local_1c + (int)param_6 * 4 + 4);
              iVar6 = *(int *)((int)local_38 + iVar3 * 4);
              iVar2 = *(int *)((int)local_1c + (int)param_6 * 4);
              piVar4 = (int *)FUN_006a1cd0();
              *piVar4 = iVar6 + 1;
              piVar4[1] = iVar2 + 1;
              piVar4[2] = param_4;
              piVar4[3] = iVar9;
              iVar3 = iVar3 + 1;
            } while (iVar3 < param_5);
          }
          param_6 = (void *)((int)param_6 + 1);
        } while ((int)param_6 < param_3);
      }
    }
    FUN_00674c70((int)local_50 + 0x2c);
    puVar7 = (undefined4 *)FUN_006a20c0();
    *puVar7 = local_50;
    iVar3 = *(int *)(param_1 + 0x80) + -1;
    local_4 = local_4 & 0xffffff00;
    FUN_005c8440();
    local_4 = 0xffffffff;
    FUN_005c8440();
  }
  else {
    if (local_14 != 2) {
      FUN_006bf840(local_1c);
    }
    if (local_30 != 2) {
      FUN_006bf840(local_38);
    }
  }
  ExceptionList = local_c;
  return iVar3;
}

