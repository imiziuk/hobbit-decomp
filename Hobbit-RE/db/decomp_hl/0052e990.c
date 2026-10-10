
undefined4 FUN_0052e990(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_b0 [4];
  undefined4 local_ac;
  undefined1 local_a8 [4];
  undefined1 local_a4 [76];
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8450;
  local_c = ExceptionList;
  local_ac = 0;
  ExceptionList = &local_c;
  FUN_0064afa0();
  local_4 = 1;
  FUN_006c0bb4(local_a8);
  iVar1 = FUN_0052a650();
  if (-1 < iVar1) {
    uVar2 = FUN_006ab200(&DAT_0071ceb4,(&PTR_s_IDS_LEVELNAME_DREAMWORLD_00736dbc)[iVar1]);
    uVar2 = FUN_006ab170(&DAT_0071ceb4,uVar2);
    FUN_0064bc60(uVar2);
  }
  FUN_0064b130(&DAT_00736e6c);
  local_4._0_1_ = 2;
  FUN_0064bcb0(local_58);
  local_4._0_1_ = 1;
  FUN_0064b190();
  FUN_00434c10();
  iVar1 = __ftol();
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  FUN_00434ca0(4);
  iVar1 = __ftol(iVar1);
  FUN_00649920(local_b0,s___d__d__00736e60,(int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2);
  local_4._0_1_ = 3;
  uVar2 = FUN_00649940();
  uVar2 = FUN_0064b130(uVar2);
  local_4._0_1_ = 4;
  FUN_0064bcb0(uVar2);
  local_4._0_1_ = 3;
  FUN_0064b190();
  local_4._0_1_ = 1;
  FUN_00649950();
  FUN_0064b170(local_a4);
  local_ac = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0064b190();
  ExceptionList = local_c;
  return param_1;
}

