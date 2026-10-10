
undefined4 __thiscall
FUN_004747b0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *unaff_EDI;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d1758;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649920(&param_3,s_Actions_Action__d_00727ba0,param_3);
  iVar1 = *param_1;
  uStack_4 = 0;
  uVar2 = FUN_00649940(param_4);
  (**(code **)(iVar1 + 0x20))(param_2,uVar2);
  FUN_00649950();
  ExceptionList = unaff_EDI;
  return param_2;
}

