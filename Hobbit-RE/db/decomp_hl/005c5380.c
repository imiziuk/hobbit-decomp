
undefined4 FUN_005c5380(char **param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char **local_5c4;
  char *local_5b0 [3];
  undefined8 local_5a4;
  undefined1 *local_59c;
  char local_434 [1064];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006df6d6;
  local_c = ExceptionList;
  local_5c4 = (char **)s_selset_mgr__ReadAll_00746050;
  ExceptionList = &local_c;
  FUN_00649600();
  local_4 = 0;
  local_5c4 = (char **)0x5c53c1;
  FUN_00643920();
  local_5c4 = param_1;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar1 = FUN_00643740();
  if (iVar1 == 0) {
LAB_005c551c:
    local_4 = local_4 & 0xffffff00;
    local_5c4 = (char **)0x5c5528;
    FUN_00643a00();
    local_4 = 0xffffffff;
    local_5c4 = (char **)0x5c553c;
    FUN_00649720();
    uVar2 = 0;
  }
  else {
    local_5c4 = (char **)0x5c53eb;
    iVar1 = FUN_00643a60();
    while (iVar1 == 0) {
      local_5c4 = (char **)0x1;
      iVar1 = FUN_00643f60();
      if (iVar1 == 0x7fffffff) {
LAB_005c5513:
        local_5c4 = (char **)0x5c5518;
        FUN_00643ab0();
        goto LAB_005c551c;
      }
      local_5c4 = (char **)0x5c5412;
      iVar1 = FUN_00643a60();
      if (iVar1 != 0) goto LAB_005c5513;
      local_5c4 = (char **)local_434;
      uVar3 = FUN_005c7800();
      local_5c4 = (char **)0x0;
      local_59c = (undefined1 *)&local_5c4;
      local_5a4 = uVar3;
      FUN_005c5280(&DAT_0075b6e0);
      local_5c4 = (char **)0x5c544e;
      iVar1 = FUN_006444d0();
      local_5c4 = (char **)&local_5a4;
      FUN_005c5140();
      local_5c4 = local_5b0;
      FUN_00588a30();
      local_5c4 = (char **)local_5b0[0];
      FUN_005b6e80();
      local_5c4 = (char **)0x5c547e;
      local_5c4 = (char **)FUN_00644820();
      FUN_005c5160();
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        local_5c4 = (char **)0x5c5499;
        local_5c4 = (char **)FUN_00644820();
        uVar3 = FUN_005c7800();
        FUN_00588c70(local_5b0[0],uVar3);
      }
      local_5c4 = (char **)0x5c54ba;
      iVar1 = FUN_00643a60();
    }
    local_5c4 = (char **)0x5c54cb;
    FUN_00643ab0();
    local_4 = local_4 & 0xffffff00;
    local_5c4 = (char **)0x5c54db;
    FUN_00643a00();
    local_4 = 0xffffffff;
    local_5c4 = (char **)0x5c54ef;
    FUN_00649720();
    uVar2 = 1;
  }
  ExceptionList = local_c;
  return uVar2;
}

