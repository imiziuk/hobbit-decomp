
void __thiscall FUN_005dd0e0(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e0ea3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = param_1;
  FUN_005cc820(param_2);
  if (DAT_00798540 == 0) {
    FUN_00649920(&local_1c,s_AIManager_Actions_Action__d_Cine_007474bc,*(undefined4 *)(param_1 + 4))
    ;
    local_4 = 0;
    param_2 = (undefined1 *)FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 0xc;
      FUN_00647d10(iVar3,param_2);
      *(undefined4 *)(iVar3 + 0x84) = 1;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = *(undefined4 *)(param_1 + 0x20);
      *(int *)(iVar3 + 0x100) = param_1 + 0x18;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(&param_2,s_AIManager_Actions_Action__d_Cine_00747490,*(undefined4 *)(param_1 + 4));
    local_4 = 1;
    uVar4 = FUN_00649940();
    if (DAT_0075d338 == 0) {
      iVar3 = FUN_00425010();
      *(undefined4 *)(iVar3 + 0x80) = 1;
      FUN_00647d10(iVar3,uVar4);
      *(undefined4 *)(iVar3 + 0x84) = 0;
      *(undefined4 *)(iVar3 + 0xf0) = 0;
      *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
    }
    local_4 = 0xffffffff;
    FUN_00649950();
    local_1c = 0;
    if (0 < *(int *)(param_1 + 0x44)) {
      do {
        iVar3 = local_1c;
        FUN_00649920(local_10,s_AIManager_Actions_Action__d_Cine_00747468,
                     *(undefined4 *)(param_1 + 4),local_1c);
        local_4 = 2;
        local_14 = FUN_00649940();
        if (DAT_0075d338 == 0) {
          iVar7 = *(int *)(iVar1 + 8);
          if (*(int *)(iVar1 + 0x10) < iVar7 + 1) {
            if (*(int *)(iVar1 + 0x18) == 0) {
              iVar5 = *(int *)(iVar1 + 0x10) / 2;
              iVar3 = 1;
              if (0 < iVar5) {
                iVar3 = iVar5;
              }
              if (iVar7 + iVar3 < 1) {
                iVar7 = 1;
              }
              else {
                if (iVar5 < 1) {
                  iVar5 = 1;
                }
                iVar7 = iVar7 + iVar5;
              }
            }
            else {
              iVar7 = *(int *)(iVar1 + 0x18) + iVar7;
            }
            param_2 = (undefined1 *)operator_new(iVar7 * 0x108);
            local_4._0_1_ = 3;
            if (param_2 == (undefined1 *)0x0) {
              puVar8 = (undefined1 *)0x0;
            }
            else {
              iVar3 = iVar7;
              puVar8 = param_2;
              if (-1 < iVar7 + -1) {
                do {
                  FUN_00406a80();
                  FUN_00406a80();
                  FUN_0041def0();
                  FUN_0041def0();
                  iVar3 = iVar3 + -1;
                  puVar8 = param_2;
                } while (iVar3 != 0);
              }
            }
            local_4 = CONCAT31(local_4._1_3_,2);
            local_24 = 0;
            if (0 < *(int *)(iVar1 + 8)) {
              param_2 = (undefined1 *)0x0;
              puVar9 = puVar8;
              do {
                puVar2 = param_2;
                iVar3 = *(int *)(iVar1 + 0xc);
                iVar5 = 0x80;
                puVar6 = puVar9;
                do {
                  *puVar6 = puVar6[(int)(param_2 + (iVar3 - (int)puVar9))];
                  puVar6 = puVar6 + 1;
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
                *(undefined4 *)(puVar9 + 0x80) = *(undefined4 *)(param_2 + iVar3 + 0x80);
                *(undefined4 *)(puVar9 + 0x84) = *(undefined4 *)(param_2 + iVar3 + 0x84);
                FUN_00480df0(param_2 + iVar3 + 0x88);
                *(undefined4 *)(puVar9 + 0x100) = *(undefined4 *)(puVar2 + iVar3 + 0x100);
                *(undefined4 *)(puVar9 + 0x104) = *(undefined4 *)(puVar2 + iVar3 + 0x104);
                local_24 = local_24 + 1;
                param_2 = param_2 + 0x108;
                puVar9 = puVar9 + 0x108;
              } while (local_24 < *(int *)(iVar1 + 8));
            }
            FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
            *(undefined1 **)(iVar1 + 0xc) = puVar8;
            *(int *)(iVar1 + 0x10) = iVar7;
            param_1 = local_18;
            iVar3 = local_1c;
          }
          iVar7 = *(int *)(iVar1 + 8) + 1;
          *(int *)(iVar1 + 8) = iVar7;
          iVar7 = iVar7 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
          *(undefined4 *)(iVar7 + 0x80) = 0xf;
          FUN_00647d10(iVar7,local_14);
          *(undefined4 *)(iVar7 + 0x84) = 0;
          *(undefined4 *)(iVar7 + 0x100) = 0x11;
          *(undefined4 *)(iVar7 + 0x104) = 1;
        }
        local_4 = 0xffffffff;
        FUN_00649950();
        local_1c = iVar3 + 1;
      } while (local_1c < *(int *)(param_1 + 0x44));
    }
  }
  ExceptionList = local_c;
  return;
}

