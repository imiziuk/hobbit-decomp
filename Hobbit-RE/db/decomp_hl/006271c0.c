
void __thiscall FUN_006271c0(int param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int local_1c;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e4db3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(&param_2,s__s_Attack_Idle_Radius_0074a080,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 2;
    FUN_00647d10(iVar4,uVar3);
    *(undefined4 *)(iVar4 + 0x84) = 2;
    *(undefined4 *)(iVar4 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar4 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s__s_Attack_Radius_00749e2c,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 2;
    FUN_00647d10(iVar4,uVar3);
    *(undefined4 *)(iVar4 + 0x84) = 2;
    *(undefined4 *)(iVar4 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar4 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_10,s__s_Timeout_Duration_00748df4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
  uVar3 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar4 = *(int *)(puVar1 + 8);
    if (*(int *)(puVar1 + 0x10) < iVar4 + 1) {
      if (*(int *)(puVar1 + 0x18) == 0) {
        iVar5 = *(int *)(puVar1 + 0x10) / 2;
        iVar7 = 1;
        if (0 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar4 + iVar7 < 1) {
          iVar4 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          iVar4 = iVar4 + iVar5;
        }
      }
      else {
        iVar4 = *(int *)(puVar1 + 0x18) + iVar4;
      }
      param_2 = (undefined1 *)operator_new(iVar4 * 0x108);
      local_4._0_1_ = 3;
      if (param_2 == (undefined1 *)0x0) {
        puVar8 = (undefined1 *)0x0;
      }
      else {
        iVar7 = iVar4;
        puVar8 = param_2;
        if (-1 < iVar4 + -1) {
          do {
            FUN_00406a80();
            FUN_00406a80();
            FUN_0041def0();
            FUN_0041def0();
            iVar7 = iVar7 + -1;
            puVar8 = param_2;
          } while (iVar7 != 0);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      local_1c = 0;
      if (0 < *(int *)(puVar1 + 8)) {
        param_2 = (undefined1 *)0x0;
        puVar9 = puVar8;
        do {
          puVar2 = param_2;
          iVar7 = *(int *)(puVar1 + 0xc);
          iVar5 = 0x80;
          puVar6 = puVar9;
          do {
            *puVar6 = puVar6[(int)(param_2 + (iVar7 - (int)puVar9))];
            puVar6 = puVar6 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          *(undefined4 *)(puVar9 + 0x80) = *(undefined4 *)(param_2 + iVar7 + 0x80);
          *(undefined4 *)(puVar9 + 0x84) = *(undefined4 *)(param_2 + iVar7 + 0x84);
          FUN_00480df0(param_2 + iVar7 + 0x88);
          *(undefined4 *)(puVar9 + 0x100) = *(undefined4 *)(puVar2 + iVar7 + 0x100);
          *(undefined4 *)(puVar9 + 0x104) = *(undefined4 *)(puVar2 + iVar7 + 0x104);
          local_1c = local_1c + 1;
          param_2 = param_2 + 0x108;
          puVar9 = puVar9 + 0x108;
        } while (local_1c < *(int *)(puVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(puVar1 + 0xc));
      *(int *)(puVar1 + 0x10) = iVar4;
      *(undefined1 **)(puVar1 + 0xc) = puVar8;
    }
    iVar4 = *(int *)(puVar1 + 8);
    *(int *)(puVar1 + 8) = iVar4 + 1;
    iVar4 = (iVar4 + 1) * 0x108 + -0x108 + *(int *)(puVar1 + 0xc);
    *(undefined4 *)(iVar4 + 0x80) = 2;
    FUN_00647d10(iVar4,uVar3);
    *(undefined4 *)(iVar4 + 0x84) = 2;
    *(undefined4 *)(iVar4 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar4 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

