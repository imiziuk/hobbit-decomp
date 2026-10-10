
void __thiscall FUN_00638d90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int local_1c;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5923;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(&param_2,s__s_Alert1_Duration_0074a6c4,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 2;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s__s_Alert2_Duration_0074a6b0,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = FUN_00425010();
    *(undefined4 *)(iVar3 + 0x80) = 2;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
    *(undefined4 *)(iVar3 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar3 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_10,s__s_Goto_Sound_0074a6a0,*(undefined4 *)(param_1 + 0x10));
  local_4 = 2;
  uVar2 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar3 = *(int *)(iVar1 + 8);
    if (*(int *)(iVar1 + 0x10) < iVar3 + 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar4 = *(int *)(iVar1 + 0x10) / 2;
        iVar7 = 1;
        if (0 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar3 + iVar7 < 1) {
          iVar3 = 1;
        }
        else {
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          iVar3 = iVar3 + iVar4;
        }
      }
      else {
        iVar3 = *(int *)(iVar1 + 0x18) + iVar3;
      }
      puVar5 = (undefined1 *)operator_new(iVar3 * 0x108);
      local_4._0_1_ = 3;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = (undefined1 *)0x0;
      }
      else {
        iVar7 = iVar3;
        if (-1 < iVar3 + -1) {
          do {
            param_2 = iVar7;
            FUN_00406a80();
            FUN_00406a80();
            FUN_0041def0();
            FUN_0041def0();
            iVar7 = param_2 + -1;
          } while (param_2 + -1 != 0);
          param_2 = 0;
        }
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      local_1c = 0;
      if (0 < *(int *)(iVar1 + 8)) {
        param_2 = 0;
        puVar8 = puVar5;
        do {
          iVar4 = *(int *)(iVar1 + 0xc) + param_2;
          iVar7 = 0x80;
          puVar6 = puVar8;
          do {
            *puVar6 = puVar6[iVar4 - (int)puVar8];
            puVar6 = puVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          *(undefined4 *)(puVar8 + 0x80) = *(undefined4 *)(iVar4 + 0x80);
          *(undefined4 *)(puVar8 + 0x84) = *(undefined4 *)(iVar4 + 0x84);
          FUN_00480df0(iVar4 + 0x88);
          *(undefined4 *)(puVar8 + 0x100) = *(undefined4 *)(iVar4 + 0x100);
          *(undefined4 *)(puVar8 + 0x104) = *(undefined4 *)(iVar4 + 0x104);
          local_1c = local_1c + 1;
          param_2 = param_2 + 0x108;
          puVar8 = puVar8 + 0x108;
        } while (local_1c < *(int *)(iVar1 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
      *(undefined1 **)(iVar1 + 0xc) = puVar5;
      *(int *)(iVar1 + 0x10) = iVar3;
    }
    iVar7 = *(int *)(iVar1 + 8) + 1;
    iVar3 = iVar7 * 0x108 + -0x108 + *(int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 8) = iVar7;
    *(undefined4 *)(iVar3 + 0x80) = 3;
    FUN_00647d10(iVar3,uVar2);
    *(undefined4 *)(iVar3 + 0x84) = 2;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

