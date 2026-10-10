
void __thiscall FUN_005f8e20(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int local_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e2c1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = param_1;
  FUN_00649920(&local_1c,s_AIManager_Triggers_Trigger__d_NP_007484a8,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 1;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 0;
    *(undefined4 *)(iVar3 + 0xf0) = 0;
    *(undefined4 *)(iVar3 + 0xf4) = 0xffffffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  local_1c = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar3 = local_1c;
      FUN_00649920(local_10,s_AIManager_Triggers_Trigger__d_NP_00748480,*(undefined4 *)(param_1 + 4)
                   ,local_1c);
      local_4 = 1;
      local_14 = FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar7 = *(int *)(iVar1 + 8);
        if (*(int *)(iVar1 + 0x10) < iVar7 + 1) {
          if (*(int *)(iVar1 + 0x18) == 0) {
            iVar4 = *(int *)(iVar1 + 0x10) / 2;
            iVar3 = 1;
            if (0 < iVar4) {
              iVar3 = iVar4;
            }
            if (iVar7 + iVar3 < 1) {
              iVar7 = 1;
            }
            else {
              if (iVar4 < 1) {
                iVar4 = 1;
              }
              iVar7 = iVar7 + iVar4;
            }
          }
          else {
            iVar7 = *(int *)(iVar1 + 0x18) + iVar7;
          }
          puVar5 = (undefined1 *)operator_new(iVar7 * 0x108);
          local_4._0_1_ = 2;
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = (undefined1 *)0x0;
          }
          else {
            iVar3 = iVar7;
            if (-1 < iVar7 + -1) {
              do {
                FUN_00406a80();
                FUN_00406a80();
                FUN_0041def0();
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          local_4 = CONCAT31(local_4._1_3_,1);
          local_24 = 0;
          if (0 < *(int *)(iVar1 + 8)) {
            param_2 = 0;
            puVar8 = puVar5;
            do {
              iVar4 = *(int *)(iVar1 + 0xc) + param_2;
              iVar3 = 0x80;
              puVar6 = puVar8;
              do {
                *puVar6 = puVar6[iVar4 - (int)puVar8];
                puVar6 = puVar6 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              *(undefined4 *)(puVar8 + 0x80) = *(undefined4 *)(iVar4 + 0x80);
              *(undefined4 *)(puVar8 + 0x84) = *(undefined4 *)(iVar4 + 0x84);
              FUN_00480df0(iVar4 + 0x88);
              *(undefined4 *)(puVar8 + 0x100) = *(undefined4 *)(iVar4 + 0x100);
              *(undefined4 *)(puVar8 + 0x104) = *(undefined4 *)(iVar4 + 0x104);
              local_24 = local_24 + 1;
              param_2 = param_2 + 0x108;
              puVar8 = puVar8 + 0x108;
            } while (local_24 < *(int *)(iVar1 + 8));
          }
          FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
          *(undefined1 **)(iVar1 + 0xc) = puVar5;
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
        *(undefined4 *)(iVar7 + 0x100) = 0x1c;
        *(undefined4 *)(iVar7 + 0x104) = 1;
      }
      local_4 = 0xffffffff;
      FUN_00649950();
      local_1c = iVar3 + 1;
    } while (local_1c < *(int *)(param_1 + 0x14));
  }
  FUN_005f1470(iVar1);
  ExceptionList = local_c;
  return;
}

