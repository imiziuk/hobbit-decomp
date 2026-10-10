
void __fastcall FUN_0059a6f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *local_6c;
  int local_68;
  undefined1 local_64 [44];
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd586;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x2d0) == 0) {
    iVar1 = *(int *)(param_1 + 0x2c8);
    ExceptionList = &local_c;
    if (iVar1 != 0) {
      ExceptionList = &local_c;
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  local_68 = 0;
  iVar1 = FUN_00592920();
  iVar1 = FUN_005b7420(*(undefined4 *)(iVar1 + 0x1b0));
  if (0 < iVar1) {
    do {
      iVar1 = FUN_00592920();
      iVar1 = FUN_005b72d0(*(undefined4 *)(iVar1 + 0x1b0),local_68);
      FUN_00649b20(iVar1 + 8);
      iVar1 = *(int *)(param_1 + 0x2c4);
      local_4 = 0;
      if (*(int *)(param_1 + 0x2cc) < iVar1 + 1) {
        if (*(int *)(param_1 + 0x2d4) == 0) {
          iVar2 = *(int *)(param_1 + 0x2cc) / 2;
          iVar5 = 1;
          if (0 < iVar2) {
            iVar5 = iVar2;
          }
          if (iVar5 + iVar1 < 1) {
            iVar1 = 1;
          }
          else {
            if (iVar2 < 1) {
              iVar2 = 1;
            }
            iVar1 = iVar1 + iVar2;
          }
        }
        else {
          iVar1 = *(int *)(param_1 + 0x2d4) + iVar1;
        }
        piVar3 = (int *)operator_new(iVar1 * 0x2c + 4);
        iVar5 = 0;
        local_4._0_1_ = 1;
        if (piVar3 == (int *)0x0) {
          local_6c = (int *)0x0;
        }
        else {
          local_6c = piVar3 + 1;
          *piVar3 = iVar1;
          FUN_006c043b(local_6c,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (0 < *(int *)(param_1 + 0x2c4)) {
          iVar2 = 0;
          do {
            FUN_0064a320(*(int *)(param_1 + 0x2c8) + iVar2);
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + 0x2c;
          } while (iVar5 < *(int *)(param_1 + 0x2c4));
        }
        iVar5 = *(int *)(param_1 + 0x2c8);
        if (iVar5 != 0) {
          FUN_006c026a(iVar5,0x2c,*(undefined4 *)(iVar5 + -4),FUN_00649ba0);
          FUN_006bf840(iVar5 + -4);
        }
        *(int *)(param_1 + 0x2cc) = iVar1;
        *(int **)(param_1 + 0x2c8) = local_6c;
      }
      FUN_0064a320(local_64);
      *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 1;
      local_4 = 0xffffffff;
      FUN_00649ba0();
      local_68 = local_68 + 1;
      iVar1 = FUN_00592920();
      iVar1 = FUN_005b7420(*(undefined4 *)(iVar1 + 0x1b0));
    } while (local_68 < iVar1);
  }
  iVar5 = 0;
  FUN_00649b20(s_NO_ANIM_007432c0);
  iVar1 = *(int *)(param_1 + 0x2c4);
  local_4 = 2;
  if (*(int *)(param_1 + 0x2cc) < iVar1 + 1) {
    if (*(int *)(param_1 + 0x2d4) == 0) {
      iVar4 = *(int *)(param_1 + 0x2cc) / 2;
      iVar2 = 1;
      if (0 < iVar4) {
        iVar2 = iVar4;
      }
      if (iVar2 + iVar1 < 1) {
        iVar1 = 1;
      }
      else {
        if (iVar4 < 1) {
          iVar4 = 1;
        }
        iVar1 = iVar1 + iVar4;
      }
    }
    else {
      iVar1 = iVar1 + *(int *)(param_1 + 0x2d4);
    }
    piVar3 = (int *)operator_new(iVar1 * 0x2c + 4);
    local_4._0_1_ = 3;
    if (piVar3 == (int *)0x0) {
      local_6c = (int *)0x0;
    }
    else {
      local_6c = piVar3 + 1;
      *piVar3 = iVar1;
      FUN_006c043b(local_6c,0x2c,iVar1,FUN_006499d0,FUN_00649ba0);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0 < *(int *)(param_1 + 0x2c4)) {
      iVar2 = 0;
      do {
        FUN_0064a320(*(int *)(param_1 + 0x2c8) + iVar2);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (iVar5 < *(int *)(param_1 + 0x2c4));
    }
    if (*(int *)(param_1 + 0x2c8) != 0) {
      FUN_00407f70(3);
    }
    *(int **)(param_1 + 0x2c8) = local_6c;
    *(int *)(param_1 + 0x2cc) = iVar1;
  }
  FUN_0064a320(local_38);
  *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 1;
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

