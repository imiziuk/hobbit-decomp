
void __thiscall FUN_004746c0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d1718;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649920(&param_2,s_Actions_Action__d_00727ba0,param_2);
  iVar1 = *param_1;
  uStack_4 = 0;
  uVar2 = FUN_00649940(param_3);
  (**(code **)(iVar1 + 0x10))(uVar2);
  pvStack_c = (void *)0xffffffff;
  FUN_00649950();
  ExceptionList = unaff_EDI;
  return;
}

