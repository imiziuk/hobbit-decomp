
void __thiscall FUN_0047d990(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d23f8;
  pvStack_c = ExceptionList;
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  ExceptionList = &pvStack_c;
  FUN_00649920(&param_2,s_Action_d_TriggerName_00728480,param_2);
  uStack_4 = 0;
  uVar3 = FUN_00649940(uVar4);
  uVar2 = param_3;
  FUN_006414f0(uVar3,uVar4);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  FUN_00475120(uVar1,uVar2);
  ExceptionList = pvStack_c;
  return;
}

