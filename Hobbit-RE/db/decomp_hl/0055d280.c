
undefined4 __thiscall FUN_0055d280(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006da3f0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_006501d0(s_AIManager__FindLinkByName_0073e8a4);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (DAT_0073e824 != 0) {
    FUN_005620d0();
    DAT_0073e824 = 0;
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      iVar1 = FUN_00647ed0(param_2,*(undefined4 *)
                                    (*(int *)(*(int *)(param_1 + 0x4c) + iVar2 * 4) + 0x10));
      if (iVar1 == 0) {
        local_4 = local_4 & 0xffffff00;
        FUN_006501e0();
        local_4 = 0xffffffff;
        FUN_00649ba0();
        ExceptionList = local_c;
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  local_4 = local_4 & 0xffffff00;
  FUN_006501e0();
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return 0;
}

