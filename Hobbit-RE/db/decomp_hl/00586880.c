
void __fastcall FUN_00586880(int param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc9c0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_00649600();
    local_4 = CONCAT31(local_4._1_3_,1);
    iVar1 = FUN_0065f190();
    if (iVar1 != 0) {
      FUN_00587d00();
      FUN_005c3a90();
      FUN_0065f430();
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    FUN_00649600();
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar1 = FUN_0065f190();
    if (iVar1 != 0) {
      FUN_005c3cc0();
      FUN_0065f430();
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_00649600();
    local_4 = CONCAT31(local_4._1_3_,3);
    iVar1 = FUN_005a3490();
    if (iVar1 != 0) {
      iVar1 = FUN_0065f190();
      if (iVar1 != 0) {
        FUN_00587d00();
        FUN_0054f370();
        FUN_0065f430();
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_00649600();
    local_4._0_1_ = 4;
    FUN_00587d00();
    FUN_00584a20();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    FUN_00649600();
    local_4._0_1_ = 5;
    FUN_005c22b0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 400) != 0) {
    FUN_00649600();
    local_4 = CONCAT31(local_4._1_3_,6);
    iVar1 = FUN_0065f190();
    if (iVar1 != 0) {
      FUN_005c33e0();
      FUN_005c3d30();
      FUN_0065f430();
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00649720();
  }
  FUN_00649600();
  local_4._0_1_ = 7;
  FUN_00429100();
  FUN_00553760();
  local_4._0_1_ = 0;
  FUN_00649720();
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_00649600();
    local_4._0_1_ = 8;
    FUN_005519f0();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_00649600();
    local_4._0_1_ = 9;
    FUN_00429100();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_00649600();
    local_4._0_1_ = 10;
    FUN_00586f70();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 300) != 0) {
    FUN_00649600();
    local_4._0_1_ = 0xb;
    FUN_00586f90();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00649600();
    local_4._0_1_ = 0xc;
    FUN_00586ed0();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_00649600();
    local_4._0_1_ = 0xd;
    FUN_00586ff0();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0x178) != 0) {
    FUN_00649600();
    local_4._0_1_ = 0xe;
    FUN_00585560();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  FUN_00587fc0();
  if (*(int *)(param_1 + 0x138) != 0) {
    FUN_00649600();
    local_4._0_1_ = 0xf;
    FUN_00587830();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_00649600();
    local_4._0_1_ = 0x10;
    FUN_0065f190();
    FUN_005a8170();
    FUN_0065f430();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 0x148) != 0) {
    FUN_00649600();
    local_4._0_1_ = 0x11;
    FUN_0065f190();
    FUN_005a82d0();
    FUN_0065f430();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (DAT_00778078 != 0) {
    FUN_0065f190();
    FUN_0058bf20();
    FUN_0065f430();
  }
  *(int *)(param_1 + 0x1b4) = *(int *)(param_1 + 0x1b4) + 1;
  if (DAT_00778054 != 0) {
    FUN_00649600();
    local_4._0_1_ = 0x12;
    FUN_0054c930();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (DAT_0077805c != 0) {
    FUN_00649600();
    local_4._0_1_ = 0x13;
    FUN_00549860();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (DAT_00778058 != 0) {
    FUN_00649600();
    local_4._0_1_ = 0x14;
    FUN_00584060();
    local_4._0_1_ = 0;
    FUN_00649720();
  }
  if (DAT_00778068 != 0) {
    FUN_00649600();
    FUN_00649720();
  }
  FUN_00649600();
  local_4._0_1_ = 0x15;
  FUN_005a7a80();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  if (DAT_00778070 != 0) {
    FUN_0064f0d0(0,8);
    FUN_0064f0d0(0,9,s_Rigid__d_0074180c,DAT_0076ee3c);
    FUN_0064f0d0(0,10,s_NPCs__d_00741800,DAT_0076f11c);
    FUN_0064f0d0(0,0xb,s_Rope__d_007417f4,DAT_0076ef3c);
    FUN_0064f0d0(0,0xc);
    FUN_0064f0d0(0,0xd,s_Water__d_007417dc,DAT_0076f25c);
    FUN_0064f0d0(0,0xe,s_Pickup__d_007417d0,DAT_0076f1dc);
    FUN_0064f0d0(0,0xf,s_FXObject__d_007417c4,DAT_0076f33c);
    FUN_0064f0d0(0,0x10);
  }
  if (DAT_0077806c != 0) {
    FUN_0065f190();
    FUN_00406b70(0xffff0000);
    FUN_0066a920(param_1 + 0x1b8);
    FUN_0065f430();
    DAT_00778074 = 0;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

