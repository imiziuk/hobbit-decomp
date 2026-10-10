
void __thiscall FUN_0054e780(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9980;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_subtitle_mgr__StartSubTitle_0073d1ac);
  local_4 = 0;
  iVar1 = FUN_00472e20();
  if (iVar1 == 0) {
    iVar1 = FUN_004733b0();
    uVar3 = param_2;
    if (iVar1 != 0) {
      FUN_00649920(&param_2,s___________SubTitle___s___In_Popu_0073d17c,param_2);
      local_4._0_1_ = 1;
      uVar2 = FUN_00649940();
      FUN_0064e870(6,uVar2);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
      *(undefined4 *)(param_1 + 0x24) = 1;
      FUN_0054e940(uVar3,param_3,0);
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
    iVar1 = FUN_00472e70();
    if (iVar1 == 0) {
      FUN_00649920(&param_2,s___________SubTitle___s___<Stoppe_0073d138,param_2);
      local_4._0_1_ = 2;
      uVar3 = FUN_00649940();
      FUN_0064e870(6,uVar3);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
      goto LAB_0054e8eb;
    }
  }
  if ((param_4 == 0) || (*(int *)(param_1 + 0x2098) == 0)) {
    FUN_0054e940(param_2,param_3,param_4);
  }
  else {
    FUN_00649920(&param_3,s___________SubTitle___s___<Stoppe_0073d100,param_2,param_1 + 0x20cc);
    local_4._0_1_ = 3;
    uVar3 = FUN_00649940();
    FUN_0064e870(6,uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649950();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_0054e8eb:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

