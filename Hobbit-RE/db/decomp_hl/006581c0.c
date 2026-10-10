
undefined4 FUN_006581c0(undefined4 param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e65ed;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_audio_mgr__UnloadPackage_0074e194);
  local_4 = 0;
  iVar1 = FUN_0065a610(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x80) + 4) = *(undefined4 *)(iVar1 + 0x84);
    **(undefined4 **)(iVar1 + 0x84) = *(undefined4 *)(iVar1 + 0x80);
    FUN_0067cc20();
    FUN_0067c580();
    FUN_006bf840(iVar1);
    FUN_0065a6a0();
    local_4 = 0xffffffff;
    FUN_006501e0();
    ExceptionList = local_c;
    return 1;
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return 0;
}

