
void __thiscall FUN_0047bc10(int param_1,undefined4 param_2,undefined4 param_3)

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
  puStack_8 = &LAB_006d2130;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00475120(param_2,param_3);
  FUN_00649920(&param_3,s_Action_d_FxObject_007282d4,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uStack_4 = 0;
  uVar2 = FUN_00649940(uVar3,uVar4);
  FUN_006417e0(uVar2,uVar3,uVar4);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  FUN_00649920(&param_2,s_Action_d_Expire_007282c4,uVar1);
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  uStack_4 = 1;
  uVar3 = FUN_00649940(uVar4);
  FUN_00641400(uVar3,uVar4);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = pvStack_c;
  return;
}

