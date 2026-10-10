
void __thiscall FUN_005f3c10(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_28;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e26a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_10,s_AIManager_Triggers_Trigger__d_Ch_007482d4,*(undefined4 *)(param_1 + 4));
  local_4 = 0;
  uVar1 = FUN_00649940();
  if (DAT_0075d338 == 0) {
    local_28 = *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 0x10) < local_28 + 1) {
      if (*(int *)(param_2 + 0x18) == 0) {
        iVar2 = *(int *)(param_2 + 0x10) / 2;
        iVar5 = 1;
        if (0 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar5 + local_28 < 1) {
          local_28 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          local_28 = local_28 + iVar2;
        }
      }
      else {
        local_28 = *(int *)(param_2 + 0x18) + local_28;
      }
      local_20 = (undefined1 *)operator_new(local_28 * 0x108);
      local_4._0_1_ = 1;
      if (local_20 == (undefined1 *)0x0) {
        local_20 = (undefined1 *)0x0;
      }
      else {
        iVar5 = local_28;
        if (-1 < local_28 + -1) {
          do {
            FUN_00406a80();
            FUN_00406a80();
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
      }
      local_4 = (uint)local_4._1_3_ << 8;
      local_1c = 0;
      if (0 < *(int *)(param_2 + 8)) {
        local_24 = 0;
        puVar4 = local_20;
        do {
          iVar5 = *(int *)(param_2 + 0xc) + local_24;
          iVar2 = 0x80;
          puVar3 = puVar4;
          do {
            *puVar3 = puVar3[iVar5 - (int)puVar4];
            puVar3 = puVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          *(undefined4 *)(puVar4 + 0x80) = *(undefined4 *)(iVar5 + 0x80);
          *(undefined4 *)(puVar4 + 0x84) = *(undefined4 *)(iVar5 + 0x84);
          FUN_00480ed0(iVar5 + 0x88);
          FUN_00480f20(iVar5 + 0xb8);
          FUN_00480f60(iVar5 + 0xc0);
          FUN_00480f60(iVar5 + 0xd8);
          *(undefined4 *)(puVar4 + 0xf0) = *(undefined4 *)(iVar5 + 0xf0);
          *(undefined4 *)(puVar4 + 0xf4) = *(undefined4 *)(iVar5 + 0xf4);
          *(undefined4 *)(puVar4 + 0xf8) = *(undefined4 *)(iVar5 + 0xf8);
          *(undefined4 *)(puVar4 + 0xfc) = *(undefined4 *)(iVar5 + 0xfc);
          *(undefined4 *)(puVar4 + 0x100) = *(undefined4 *)(iVar5 + 0x100);
          *(undefined4 *)(puVar4 + 0x104) = *(undefined4 *)(iVar5 + 0x104);
          local_1c = local_1c + 1;
          local_24 = local_24 + 0x108;
          puVar4 = puVar4 + 0x108;
        } while (local_1c < *(int *)(param_2 + 8));
      }
      FUN_006bf840(*(undefined4 *)(param_2 + 0xc));
      *(undefined1 **)(param_2 + 0xc) = local_20;
      *(int *)(param_2 + 0x10) = local_28;
    }
    iVar5 = *(int *)(param_2 + 8) + 1;
    *(int *)(param_2 + 8) = iVar5;
    iVar5 = iVar5 * 0x108 + -0x108 + *(int *)(param_2 + 0xc);
    *(undefined4 *)(iVar5 + 0x80) = 0xf;
    FUN_00647d10(iVar5,uVar1);
    *(undefined4 *)(iVar5 + 0x84) = 0;
    *(undefined4 *)(iVar5 + 0x100) = 0x24;
    *(undefined4 *)(iVar5 + 0x104) = 1;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_005f1470(param_2);
  ExceptionList = local_c;
  return;
}

