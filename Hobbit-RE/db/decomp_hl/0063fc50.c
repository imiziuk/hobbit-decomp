
undefined4 __thiscall FUN_0063fc50(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5cac;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_bin_in__OpenFile_0074b200);
  local_4 = 0;
  FUN_0063fbb0();
  iVar2 = FUN_0064f210(param_2,&DAT_0074b214);
  param_1[1] = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_0064f970(iVar2);
    param_1[0xc] = iVar2;
    if (iVar2 != 0) {
      iVar3 = thunk_FUN_0064ff70(param_1[0xe],s_C__projects_meridian_xCore_Auxil_0074b218,0x54);
      param_1[0xd] = iVar3;
      param_1[0x11] = 0;
      param_1[0xf] = 0;
      iVar2 = param_1[0xe];
      if (param_1[0xc] <= param_1[0xe]) {
        iVar2 = param_1[0xc];
      }
      param_1[0x10] = iVar2;
      FUN_0064f350(iVar3,iVar2,1,param_1[1]);
      FUN_0063fe30(&local_1c,4);
      FUN_0063fe30(local_18,4);
      if ((local_1c == 0x29a) && (local_18[0] == 0)) {
        FUN_0063fe30(&local_24,4);
        FUN_0063fe30(&local_20,4);
        iVar2 = thunk_FUN_0064ff70(local_20 + local_24 * 4,
                                   s_C__projects_meridian_xCore_Auxil_0074b250,0x6b);
        pcVar4 = (char *)(iVar2 + local_24 * 4);
        *param_1 = iVar2;
        FUN_0063fe30(pcVar4,local_20);
        iVar2 = 0;
        if (0 < local_24) {
          do {
            *(char **)(*param_1 + iVar2 * 4) = pcVar4;
            do {
              cVar1 = *pcVar4;
              pcVar4 = pcVar4 + 1;
            } while (cVar1 != '\0');
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_24);
        }
        param_1[4] = param_1[0x11];
        local_4 = 0xffffffff;
        FUN_00649720();
        ExceptionList = local_c;
        return 1;
      }
      FUN_0064f2b0(param_1[1]);
      param_1[1] = 0;
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 0;
}

