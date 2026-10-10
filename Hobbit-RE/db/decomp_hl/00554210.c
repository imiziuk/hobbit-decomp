
void __thiscall FUN_00554210(int param_1,int param_2)

{
  int *piVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9c08;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_material_mgr__PostMaterialSetup_0073d45c);
  local_4 = 0;
  piVar1 = DAT_007f1000;
  if ((*(byte *)(param_2 + 0x118) & 1) == 0) {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x16,2);
  }
  else {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,0x16,1);
  }
  if (DAT_00740620 == 0) {
    FUN_00582a70(0,0);
  }
  if ((DAT_00777adc == 0) && (*(int *)(param_1 + 0xf4) != 1)) {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,8,3);
  }
  else {
    (**(code **)(*DAT_007f1000 + 200))(DAT_007f1000,8,2);
  }
  FUN_00649720();
  ExceptionList = piVar1;
  return;
}

