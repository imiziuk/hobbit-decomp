
void __fastcall FUN_00469f30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_006d0f93;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_006ecde8;
  iVar1 = param_1[0x3a];
  local_4 = 8;
  param_1[0x6d] = 0;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar2 = *(undefined4 **)(*(int *)(param_1[0x3b] + iVar1 * 4) + 0x30);
    iVar3 = iVar1 * 4;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(*(int *)(param_1[0x3b] + iVar3) + 0x30) = 0;
    iVar4 = *(int *)(param_1[0x3b] + iVar3);
    if (iVar4 != 0) {
      local_4 = CONCAT31(local_4._1_3_,9);
      FUN_00649bd0();
      if (*(undefined4 **)(iVar4 + 0x30) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar4 + 0x30))(1);
      }
      *(undefined4 *)(iVar4 + 0x30) = 0;
      local_4 = CONCAT31(local_4._1_3_,8);
      FUN_00649ba0();
      FUN_006bf840(iVar4);
    }
    iVar4 = (param_1[0x3a] - iVar1) + -1;
    if (0 < iVar4) {
      do {
        *(undefined4 *)(iVar3 + param_1[0x3b]) = *(undefined4 *)(iVar3 + 4 + param_1[0x3b]);
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    param_1[0x3a] = param_1[0x3a] + -1;
  }
  if (param_1[0x75] != 2) {
    FUN_006bf840(param_1[0x73]);
  }
  if (param_1[0x6b] != 2) {
    FUN_006bf840(param_1[0x69]);
  }
  local_4._0_1_ = 5;
  FUN_0047a440();
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_0047a440();
  if (param_1[0x44] != 2) {
    FUN_006bf840(param_1[0x42]);
  }
  if (param_1[0x3d] != 2) {
    FUN_006bf840(param_1[0x3b]);
  }
  local_4._0_1_ = 1;
  if ((param_1[0x36] != 2) && (iVar1 = param_1[0x34], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x40,*(undefined4 *)(iVar1 + -4),thunk_FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_1[0x2f] != 2) && (iVar1 = param_1[0x2d], iVar1 != 0)) {
    FUN_006c026a(iVar1,0x3c,*(undefined4 *)(iVar1 + -4),thunk_FUN_00649ba0);
    FUN_006bf840(iVar1 + -4);
  }
  local_4 = 0xffffffff;
  FUN_004aa360();
  ExceptionList = local_c;
  return;
}

