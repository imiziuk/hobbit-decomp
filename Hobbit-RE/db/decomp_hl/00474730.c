
undefined4 __thiscall FUN_00474730(int *param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d1738;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649920(&param_2,s_Actions_Action__d_00727ba0,param_2);
  iVar1 = *param_1;
  uStack_4 = 0;
  pvVar3 = param_4;
  uVar2 = FUN_00649940(param_3);
  uVar2 = (**(code **)(iVar1 + 0x18))(uVar2);
  FUN_00649950();
  ExceptionList = pvVar3;
  return uVar2;
}

