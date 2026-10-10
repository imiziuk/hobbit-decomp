
undefined4 FUN_00573650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int local_38 [9];
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db8a7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4 = 1;
  iVar1 = FUN_00406ce0(param_2,param_3);
  local_4 = local_4 & 0xffffff00;
  if (iVar1 == -1) {
    FUN_00649720();
  }
  else {
    uVar2 = *(uint *)(DAT_0076f648 + iVar1 * 0x14);
    uVar2 = -(uint)((*(byte *)(uVar2 + 0x7f) & 0x10) != 0) & uVar2;
    FUN_00649720();
    if ((uVar2 != 0) && (*(char *)(uVar2 + 0x7c) == '\x1c')) {
      FUN_00649b60(*(int *)(uVar2 + 0x1b0) * 0x2c + DAT_0075cbe8);
      iVar1 = 0;
      local_4 = 2;
      if (0 < local_14) {
        do {
          if (*(char *)(iVar1 + local_38[0]) == ' ') {
            *(undefined1 *)(iVar1 + local_38[0]) = 0x5f;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < local_14);
      }
      FUN_0064a750(&DAT_0073fe00);
      FUN_00649b60(local_38);
      local_4 = local_4 & 0xffffff00;
      FUN_00649ba0();
      ExceptionList = local_c;
      return param_1;
    }
  }
  FUN_00649b20(&DAT_0075b6e0);
  ExceptionList = local_c;
  return param_1;
}

