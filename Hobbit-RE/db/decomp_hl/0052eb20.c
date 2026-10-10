
undefined4 __thiscall FUN_0052eb20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_1a0 [76];
  undefined1 local_154 [12];
  undefined1 local_148 [44];
  undefined1 local_11c [44];
  undefined1 local_f0 [76];
  undefined1 local_a4 [76];
  undefined1 local_58 [76];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8494;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_0052a650();
  iVar5 = 1;
  while( true ) {
    FUN_0064afa0();
    local_4 = 0;
    if (-1 < iVar1) {
      uVar2 = FUN_006ab200(&DAT_0071ceb4,(&PTR_s_IDS_LEVELNAME_DREAMWORLD_00736dbc)[iVar1]);
      uVar2 = FUN_006ab170(&DAT_0071ceb4,uVar2);
      FUN_0064bc60(uVar2);
      FUN_0064b130(&DAT_00736e70);
      local_4._0_1_ = 1;
      FUN_0064bcb0(local_a4);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0064b190();
    }
    uVar2 = FUN_006ccc5a(iVar5,local_154,10);
    FUN_0064b130(uVar2);
    local_4._0_1_ = 2;
    FUN_0064bcb0(local_f0);
    local_4._0_1_ = 0;
    FUN_0064b190();
    FUN_0064b130(".hobbit");
    local_4._0_1_ = 3;
    FUN_0064bcb0(local_58);
    local_4._0_1_ = 0;
    FUN_0064b190();
    FUN_00649b80(local_1a0);
    local_4._0_1_ = 4;
    puVar3 = (undefined4 *)FUN_0064a670(local_11c,param_1 + 0x98,local_148);
    iVar4 = FUN_006ce9c0(*puVar3,0);
    FUN_00649ba0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
    if (iVar4 != 0) break;
    local_4 = 0xffffffff;
    FUN_0064b190();
    iVar5 = iVar5 + 1;
  }
  FUN_00649b80(local_1a0);
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return param_2;
}

