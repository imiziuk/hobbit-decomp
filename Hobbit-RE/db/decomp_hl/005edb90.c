
void __thiscall FUN_005edb90(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e2018;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005cc3d0(param_2);
  FUN_00649920(&param_2,s_Action_dAudioEmitter_00747e38,*(undefined4 *)(param_1 + 4));
  param_1 = param_1 + 0x18;
  uStack_4 = 0;
  uVar1 = FUN_00649940(param_1);
  FUN_006405e0(uVar1,param_1);
  uStack_4 = 0xffffffff;
  FUN_00649950();
  ExceptionList = pvStack_c;
  return;
}

