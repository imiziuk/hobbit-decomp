
void __fastcall FUN_00536400(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *local_14c;
  int local_148;
  undefined1 local_10c;
  undefined4 local_10b [63];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8dfd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600();
  local_10c = 0;
  puVar7 = local_10b;
  for (iVar4 = 0x3f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  local_4 = 0;
  FUN_00640420();
  FUN_00640420();
  FUN_00640420();
  *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x280);
  FUN_00532030();
  FUN_00640480();
  FUN_0064a2e0();
  local_10c = 0;
  FUN_00640480();
  FUN_0064a2e0();
  local_10c = 0;
  FUN_00640480();
  FUN_0064a2e0();
  local_10c = 0;
  FUN_00640480();
  FUN_0064a2e0();
  FUN_00640450();
  if (*(int *)(param_1 + 0x138) == 0) {
    if (*(int *)(param_1 + 0x130) != 0) {
      FUN_006c026a();
      FUN_006bf840();
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  *(undefined4 *)(param_1 + 300) = 0;
  FUN_00640450();
  iVar4 = *(int *)(param_1 + 0x120);
  if (iVar4 != *(int *)(param_1 + 0x134)) {
    piVar2 = (int *)operator_new(iVar4 * 0x2c + 4);
    local_4._0_1_ = 1;
    if (piVar2 == (int *)0x0) {
      local_14c = (int *)0x0;
    }
    else {
      local_14c = piVar2 + 1;
      *piVar2 = iVar4;
      FUN_006c043b();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    local_148 = 0;
    if (0 < *(int *)(param_1 + 300)) {
      do {
        FUN_0064a320();
        local_148 = local_148 + 1;
      } while (local_148 < *(int *)(param_1 + 300));
    }
    if (*(int *)(param_1 + 0x130) != 0) {
      FUN_006c026a();
      FUN_006bf840();
    }
    *(int **)(param_1 + 0x130) = local_14c;
    *(int *)(param_1 + 0x134) = iVar4;
  }
  local_148 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    do {
      FUN_00649920();
      local_4._0_1_ = 2;
      FUN_00649940();
      FUN_00640480();
      local_4._0_1_ = 0;
      FUN_00649950();
      FUN_00649b20();
      iVar4 = *(int *)(param_1 + 300);
      local_4._0_1_ = 3;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 3;
      if (*(int *)(param_1 + 0x134) < iVar4 + 1) {
        iVar6 = 0;
        if (*(int *)(param_1 + 0x13c) == 0) {
          iVar3 = *(int *)(param_1 + 0x134) / 2;
          iVar5 = 1;
          if (0 < iVar3) {
            iVar5 = iVar3;
          }
          if (iVar5 + iVar4 < 1) {
            iVar4 = 1;
          }
          else {
            if (iVar3 < 1) {
              iVar3 = 1;
            }
            iVar4 = iVar4 + iVar3;
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x13c) + iVar4;
        }
        piVar2 = (int *)operator_new(iVar4 * 0x2c + 4);
        local_4._0_1_ = 4;
        if (piVar2 == (int *)0x0) {
          local_14c = (int *)0x0;
        }
        else {
          local_14c = piVar2 + 1;
          *piVar2 = iVar4;
          FUN_006c043b();
        }
        local_4._0_1_ = 3;
        if (0 < *(int *)(param_1 + 300)) {
          do {
            FUN_0064a320();
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(param_1 + 300));
        }
        if (*(int *)(param_1 + 0x130) != 0) {
          FUN_006c026a();
          FUN_006bf840();
        }
        *(int *)(param_1 + 0x134) = iVar4;
        *(int **)(param_1 + 0x130) = local_14c;
        uVar1 = (undefined1)local_4;
      }
      local_4._0_1_ = uVar1;
      FUN_0064a320();
      *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649ba0();
      FUN_00649b20(&local_10c);
      FUN_00531910();
      local_148 = local_148 + 1;
    } while (local_148 < *(int *)(param_1 + 0x120));
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 300);
  FUN_00640420();
  FUN_00640420();
  FUN_00640420();
  FUN_005360d0();
  FUN_004aa740();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

