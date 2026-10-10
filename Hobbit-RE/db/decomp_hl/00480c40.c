
void __thiscall FUN_00480c40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d2828;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00475120(param_2,param_3);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  FUN_00649920(&param_3,s_Action_d_Music_007288c4,param_2);
  uStack_4 = 0;
  uVar1 = FUN_00649940(uVar2);
  FUN_006414f0(uVar1,uVar2);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = pvStack_c;
  return;
}

