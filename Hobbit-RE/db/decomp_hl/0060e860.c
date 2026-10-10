
void __thiscall FUN_0060e860(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3fbb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005bf5e0(param_2);
  FUN_00649920(&local_18,s__s_WispIdle_Leash_Radius_007490dc,*(undefined4 *)(param_1 + 0x10));
  local_4 = 0;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,uVar1);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(local_10,s__s_Wander_Delay_007490cc,*(undefined4 *)(param_1 + 0x10));
  local_4 = 1;
  local_14 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    local_24 = *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 0x10) < local_24 + 1) {
      if (*(int *)(param_2 + 0x18) == 0) {
        iVar3 = *(int *)(param_2 + 0x10) / 2;
        iVar2 = 1;
        if (0 < iVar3) {
          iVar2 = iVar3;
        }
        if (iVar2 + local_24 < 1) {
          local_24 = 1;
        }
        else {
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          local_24 = local_24 + iVar3;
        }
      }
      else {
        local_24 = *(int *)(param_2 + 0x18) + local_24;
      }
      local_1c = (undefined1 *)operator_new(local_24 * 0x108);
      local_4._0_1_ = 2;
      if (local_1c == (undefined1 *)0x0) {
        local_1c = (undefined1 *)0x0;
      }
      else {
        iVar2 = local_24;
        local_18 = local_1c;
        if (-1 < local_24 + -1) {
          do {
            FUN_00406a80();
            FUN_00406a80();
            FUN_0041def0();
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      local_18 = (undefined1 *)0x0;
      if (0 < *(int *)(param_2 + 8)) {
        local_20 = 0;
        puVar5 = local_1c;
        do {
          iVar2 = *(int *)(param_2 + 0xc) + local_20;
          iVar3 = 0x80;
          puVar4 = puVar5;
          do {
            *puVar4 = puVar4[iVar2 - (int)puVar5];
            puVar4 = puVar4 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          *(undefined4 *)(puVar5 + 0x80) = *(undefined4 *)(iVar2 + 0x80);
          *(undefined4 *)(puVar5 + 0x84) = *(undefined4 *)(iVar2 + 0x84);
          FUN_00480ed0(iVar2 + 0x88);
          FUN_00480f20(iVar2 + 0xb8);
          FUN_00480f60(iVar2 + 0xc0);
          FUN_00480f60(iVar2 + 0xd8);
          *(undefined4 *)(puVar5 + 0xf0) = *(undefined4 *)(iVar2 + 0xf0);
          *(undefined4 *)(puVar5 + 0xf4) = *(undefined4 *)(iVar2 + 0xf4);
          *(undefined4 *)(puVar5 + 0xf8) = *(undefined4 *)(iVar2 + 0xf8);
          *(undefined4 *)(puVar5 + 0xfc) = *(undefined4 *)(iVar2 + 0xfc);
          *(undefined4 *)(puVar5 + 0x100) = *(undefined4 *)(iVar2 + 0x100);
          *(undefined4 *)(puVar5 + 0x104) = *(undefined4 *)(iVar2 + 0x104);
          local_18 = local_18 + 1;
          local_20 = local_20 + 0x108;
          puVar5 = puVar5 + 0x108;
        } while ((int)local_18 < *(int *)(param_2 + 8));
      }
      FUN_006bf840(*(undefined4 *)(param_2 + 0xc));
      *(undefined1 **)(param_2 + 0xc) = local_1c;
      *(int *)(param_2 + 0x10) = local_24;
    }
    iVar2 = *(int *)(param_2 + 8) + 1;
    *(int *)(param_2 + 8) = iVar2;
    iVar2 = iVar2 * 0x108 + -0x108 + *(int *)(param_2 + 0xc);
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10(iVar2,local_14);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

