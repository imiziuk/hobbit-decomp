
void __thiscall FUN_0047ebb0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_00475120(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_Character_007286f4,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  local_4 = 0;
  uVar2 = FUN_00649940(uVar3,uVar4);
  FUN_006417e0(uVar2,uVar3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  param_3 = *(undefined4 *)(param_1 + 0x28);
  FUN_00649920(&param_2,s_Action_d_AnimName_007286e0,uVar1);
  local_4 = 1;
  uVar4 = param_3;
  uVar3 = FUN_00649940(param_3);
  FUN_006414f0(uVar3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Length_007286d0,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  local_4 = 2;
  uVar3 = FUN_00649940(uVar4);
  FUN_00641400(uVar3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  param_3 = FUN_00649920(&param_2,s_Action_d_AnimGroup_007286bc,uVar1);
  local_4 = 3;
  uVar4 = FUN_0047f440();
  uVar3 = FUN_00649940(uVar4);
  FUN_006414f0(uVar3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_AnimatedInPlace_007286a0,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x58);
  local_4 = 4;
  uVar3 = FUN_00649940(uVar4);
  FUN_00641760(uVar3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_3,s_Action_d_Loops_00728690,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  local_4 = 5;
  uVar3 = FUN_00649940(uVar4);
  FUN_00641760(uVar3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&local_10,s_Action_d_AnimsToPlay_00728678,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 100);
  local_4 = 6;
  uVar3 = FUN_00649940(uVar4);
  FUN_00641480(uVar3,uVar4);
  local_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = local_c;
  return;
}

