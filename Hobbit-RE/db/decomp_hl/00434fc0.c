
void __thiscall FUN_00434fc0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  int local_20;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cf706;
  local_c = ExceptionList;
  ppuVar8 = &PTR_DAT_00720fa0;
  puVar9 = (undefined4 *)(param_1 + 0x4e4);
  ExceptionList = &local_c;
  do {
    uVar5 = *puVar9;
    uVar1 = puVar9[1];
    puVar2 = *ppuVar8;
    iVar4 = FUN_00425010();
    *(undefined4 *)(iVar4 + 0x80) = 2;
    FUN_00647d10(iVar4,puVar2);
    ppuVar8 = ppuVar8 + 1;
    puVar9 = puVar9 + 2;
    *(undefined4 *)(iVar4 + 0x84) = 0x38;
    *(undefined4 *)(iVar4 + 0xf8) = uVar5;
    *(undefined4 *)(iVar4 + 0xfc) = uVar1;
  } while ((int)ppuVar8 < 0x7212b8);
  local_20 = 0;
  do {
    FUN_00649920(local_18,s_Quest_List__d_00723130,local_20);
    local_4 = 0;
    uVar5 = FUN_00649940();
    param_2 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar3 + 0x10) < param_2 + 1) {
      if (*(int *)(iVar3 + 0x18) == 0) {
        iVar6 = *(int *)(iVar3 + 0x10) / 2;
        iVar4 = 1;
        if (0 < iVar6) {
          iVar4 = iVar6;
        }
        if (iVar4 + param_2 < 1) {
          param_2 = 1;
        }
        else {
          if (iVar6 < 1) {
            iVar6 = 1;
          }
          param_2 = param_2 + iVar6;
        }
      }
      else {
        param_2 = *(int *)(iVar3 + 0x18) + param_2;
      }
      pvVar7 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 1;
      local_10 = pvVar7;
      if (pvVar7 == (void *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        iVar4 = param_2;
        if (-1 < param_2 + -1) {
          do {
            FUN_00437830();
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar4 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < *(int *)(iVar3 + 8)) {
        iVar6 = 0;
        do {
          FUN_00437630(*(int *)(iVar3 + 0xc) + iVar6);
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x108;
        } while (iVar4 < *(int *)(iVar3 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar3 + 0xc));
      *(void **)(iVar3 + 0xc) = pvVar7;
      *(int *)(iVar3 + 0x10) = param_2;
    }
    iVar4 = *(int *)(iVar3 + 8) + 1;
    *(int *)(iVar3 + 8) = iVar4;
    iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar4 + 0x80) = 1;
    FUN_00647d10(iVar4,uVar5);
    *(undefined4 *)(iVar4 + 0x84) = 0x38;
    *(undefined4 *)(iVar4 + 0xf0) = 0;
    *(undefined4 *)(iVar4 + 0xf4) = 0xffffffff;
    local_4 = 0xffffffff;
    FUN_00649950();
    FUN_00649920(local_14,s_Quests_Completed__d_0072311c,local_20);
    local_4 = 2;
    uVar5 = FUN_00649940();
    param_2 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar3 + 0x10) < param_2 + 1) {
      if (*(int *)(iVar3 + 0x18) == 0) {
        iVar6 = *(int *)(iVar3 + 0x10) / 2;
        iVar4 = 1;
        if (0 < iVar6) {
          iVar4 = iVar6;
        }
        if (iVar4 + param_2 < 1) {
          param_2 = 1;
        }
        else {
          if (iVar6 < 1) {
            iVar6 = 1;
          }
          param_2 = param_2 + iVar6;
        }
      }
      else {
        param_2 = *(int *)(iVar3 + 0x18) + param_2;
      }
      pvVar7 = operator_new(param_2 * 0x108);
      local_4._0_1_ = 3;
      local_10 = pvVar7;
      if (pvVar7 == (void *)0x0) {
        pvVar7 = (void *)0x0;
      }
      else {
        iVar4 = param_2;
        if (-1 < param_2 + -1) {
          do {
            FUN_00437830();
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar4 = 0;
      local_4 = CONCAT31(local_4._1_3_,2);
      if (0 < *(int *)(iVar3 + 8)) {
        iVar6 = 0;
        do {
          FUN_00437630(*(int *)(iVar3 + 0xc) + iVar6);
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x108;
        } while (iVar4 < *(int *)(iVar3 + 8));
      }
      FUN_006bf840(*(undefined4 *)(iVar3 + 0xc));
      *(void **)(iVar3 + 0xc) = pvVar7;
      *(int *)(iVar3 + 0x10) = param_2;
    }
    iVar4 = *(int *)(iVar3 + 8) + 1;
    *(int *)(iVar3 + 8) = iVar4;
    iVar4 = iVar4 * 0x108 + -0x108 + *(int *)(iVar3 + 0xc);
    *(undefined4 *)(iVar4 + 0x80) = 3;
    FUN_00647d10(iVar4,uVar5);
    *(undefined4 *)(iVar4 + 0x84) = 0x38;
    local_4 = 0xffffffff;
    FUN_00649950();
    local_20 = local_20 + 1;
  } while (local_20 < 0x32);
  ExceptionList = local_c;
  return;
}

