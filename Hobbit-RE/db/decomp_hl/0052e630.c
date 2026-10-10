
undefined4 __thiscall FUN_0052e630(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84 [11];
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d83d3;
  local_c = ExceptionList;
  if ((-1 < param_2) && (ExceptionList = &local_c, iVar1 = FUN_0052e130(), param_2 < iVar1)) {
    param_2 = param_2 * 0xa8;
    FUN_0064a670(local_84,param_1 + 0x26,param_1[3] + param_2);
    local_4 = 0;
    iVar1 = FUN_0064f210(local_84[0],&DAT_00720db8);
    if (iVar1 != 0) {
      uVar2 = thunk_FUN_0064ff70(*(undefined4 *)(param_2 + 0x98 + param_1[3]),
                                 s_C__projects_meridian_Support_Loa_00736e24,0x126);
      *param_1 = uVar2;
      FUN_0052f760(local_58,iVar1);
      local_b4 = 0xffffffff;
      local_b0 = 0xffffffff;
      local_4._0_1_ = 1;
      local_ac = 0;
      local_a4 = 0;
      local_a2 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_94 = 0;
      local_8c = 0;
      local_88 = 0;
      FUN_0064f350(&local_b4,1,0x30,iVar1);
      FUN_0064f350(*param_1,1,*(undefined4 *)(param_2 + 0x98 + param_1[3]),iVar1);
      FUN_00590860(*param_1);
      FUN_0052ac40(1);
      FUN_0052ac60(*(undefined4 *)(param_2 + 0x78 + param_1[3]));
      FUN_0052ac80(0);
      if (DAT_00760104 != 0) {
        DAT_0076010c = 1;
      }
      FUN_0064ff40(*param_1,s_C__projects_meridian_Support_Loa_00736e24,0x145);
      *param_1 = 0;
      FUN_0064f2b0(iVar1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0064b190();
      local_4 = 0xffffffff;
      FUN_00649ba0();
      ExceptionList = local_c;
      return 1;
    }
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = local_c;
  return 0;
}

