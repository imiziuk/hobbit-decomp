
void FUN_004d0f70(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = (int)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d4da3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)param_1 + 0x14) == 0) {
    iVar4 = *(int *)((int)param_1 + 0xc);
    ExceptionList = &local_c;
    if (iVar4 != 0) {
      ExceptionList = &local_c;
      FUN_006c026a(iVar4,0x2c,*(undefined4 *)(iVar4 + -4),FUN_00649ba0);
      FUN_006bf840(iVar4 + -4);
    }
    *(undefined4 *)((int)param_1 + 0xc) = 0;
    *(undefined4 *)((int)param_1 + 0x10) = 0;
  }
  *(undefined4 *)((int)param_1 + 8) = 0;
  local_3c = &DAT_006eee58;
  do {
    iVar5 = 0;
    FUN_00649b20(local_3c);
    iVar4 = *(int *)(iVar1 + 8);
    local_4 = 0;
    if (*(int *)(iVar1 + 0x10) < iVar4 + 1) {
      if (*(int *)(iVar1 + 0x18) == 0) {
        iVar2 = *(int *)(iVar1 + 0x10) / 2;
        iVar6 = 1;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        if (iVar6 + iVar4 < 1) {
          iVar4 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar4 = iVar4 + iVar2;
        }
      }
      else {
        iVar4 = *(int *)(iVar1 + 0x18) + iVar4;
      }
      piVar3 = (int *)operator_new(iVar4 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (piVar3 == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = piVar3 + 1;
        *piVar3 = iVar4;
        FUN_006c043b(param_1,0x2c,iVar4,FUN_006499d0,FUN_00649ba0);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < *(int *)(iVar1 + 8)) {
        iVar6 = 0;
        do {
          FUN_0064a320(*(int *)(iVar1 + 0xc) + iVar6);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar5 < *(int *)(iVar1 + 8));
      }
      iVar5 = *(int *)(iVar1 + 0xc);
      if (iVar5 != 0) {
        FUN_006c026a(iVar5,0x2c,*(undefined4 *)(iVar5 + -4),FUN_00649ba0);
        FUN_006bf840(iVar5 + -4);
      }
      *(int **)(iVar1 + 0xc) = param_1;
      *(int *)(iVar1 + 0x10) = iVar4;
    }
    FUN_0064a320(local_38);
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    local_3c = local_3c + 0x20;
  } while ((int)local_3c < 0x6eef98);
  ExceptionList = local_c;
  return;
}

