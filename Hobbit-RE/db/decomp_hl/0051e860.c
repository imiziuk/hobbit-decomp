
void FUN_0051e860(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a8;
  undefined4 local_4a4;
  undefined1 local_4a0 [8];
  undefined1 local_498 [12];
  undefined1 local_48c [1152];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d780b;
  local_c = ExceptionList;
  if (0 < DAT_0076264c) {
    return;
  }
  DAT_0076264c = DAT_0076264c + 1;
  ExceptionList = &local_c;
  FUN_00671410();
  local_4 = 0;
  DAT_00762644 = 0;
  thunk_FUN_006ab830();
  FUN_0052a9e0();
  iVar1 = FUN_0052ac00();
  do {
    if (iVar1 != 0) {
      FUN_0052aae0();
      thunk_FUN_006abb40();
      FUN_006628c0();
      FUN_006a1050(0x3f800000);
      FUN_0052b560(0x3f800000);
      iVar1 = FUN_0066f810();
      if (iVar1 != 0) {
        FUN_006a0490(0x3f800000);
      }
      FUN_0065f480();
      if (DAT_00760360 != 0) {
        FUN_004f8fb0();
      }
      DAT_0076264c = DAT_0076264c + -1;
      local_4 = 0xffffffff;
      FUN_00671570();
      ExceptionList = local_c;
      return;
    }
    iVar1 = FUN_006ab250(s_New_intro_final_00734fbc,0,1);
    FUN_006715c0(0x3f860a92);
    local_4ac = 0x42c80000;
    local_4a8 = 0x42c80000;
    local_4a4 = 0x43480000;
    FUN_00671670(&local_4ac);
    local_4b8 = 0;
    local_4b4 = 0;
    local_4b0 = 0;
    FUN_006723d0(&local_4b8,0);
    FUN_00671650(0x3dcccccd,0x447a0000);
    iVar2 = FUN_0052ac00();
    while (iVar2 == 0) {
      if (iVar1 != 0) {
        if (DAT_00813180 != 0) break;
        FUN_0065f910(local_48c);
        FUN_0065f960(local_48c,0);
        FUN_0065fc10(0);
        FUN_006ab6c0(local_4a0,local_498);
        FUN_006ab2e0(local_498,local_4a0);
      }
      FUN_0066f810();
      FUN_0052b560(0x3f800000);
      FUN_006a0490(0x3f800000);
      FUN_006a1120();
      FUN_0065f480();
      iVar2 = FUN_0052ac00();
    }
    FUN_006ab2a0();
    iVar1 = FUN_0052ac00();
  } while( true );
}

