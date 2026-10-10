
undefined4 __fastcall FUN_0052a7b0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d80d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x80) = 0;
  FUN_005144f0(DAT_0081303c);
  FUN_00513640(DAT_0081303c);
  FUN_0050cc90(DAT_0081303c);
  FUN_0051e730(DAT_0081303c);
  FUN_0050a410(DAT_0081303c);
  FUN_00503720(DAT_0081303c);
  FUN_00514ef0(DAT_0081303c);
  FUN_00509b00(DAT_0081303c);
  FUN_0050d2b0(DAT_0081303c);
  FUN_0050b480(DAT_0081303c);
  FUN_0050b9a0(DAT_0081303c);
  FUN_0050b850(DAT_0081303c);
  FUN_0050d590(DAT_0081303c);
  FUN_0050be90(DAT_0081303c);
  FUN_00518bb0(DAT_0081303c);
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  FUN_00671650(0x41200000,0x47435000);
  FUN_00671930(0x42c80000,0);
  local_70 = 0x44a98000;
  local_6c = 0xc4f04000;
  local_68 = 0xc38e8000;
  FUN_00671670(&local_70);
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  FUN_006723d0(&local_64,0);
  *(undefined4 *)(param_1 + 0x78) = 1;
  FUN_006a0420(DAT_00813038,1);
  *(undefined4 *)(param_1 + 0x708) = 0;
  *(undefined4 *)(param_1 + 0x70c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x704) = 0;
  *(undefined4 *)(param_1 + 0x710) = 0;
  FUN_00647d10(param_1 + 0x718,&DAT_0071fe94);
  FUN_0052a9a0();
  uVar1 = FUN_006ab1a0(&DAT_0071ceb4,s_IDS_MAIN_MENU_00733cb0);
  FUN_0064b0f0(uVar1);
  local_4 = 0;
  FUN_00665200(local_58);
  local_4 = 0xffffffff;
  FUN_0064b190();
  ExceptionList = local_c;
  return 0;
}

