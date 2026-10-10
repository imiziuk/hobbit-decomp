
void __thiscall FUN_0045d350(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_11c [4];
  undefined1 local_118 [12];
  undefined1 local_10c;
  undefined4 local_10b [60];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d069b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_camera_influence__OnImport_00725c9c);
  local_4 = 0;
  FUN_004aa740(param_2);
  local_10c = 0;
  puVar2 = local_10b;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  FUN_00640480(&DAT_00725c94,&local_10c);
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,local_118);
  FUN_006405e0(&DAT_00725c90,param_1 + 0x32);
  FUN_006405e0(&DAT_00725c88,param_1 + 0x2e);
  FUN_006405b0(&DAT_00725c80,param_1 + 0x2a);
  FUN_006405b0(&DAT_00725c78,param_1 + 0x2c);
  FUN_00640420(s_Delay_00725c70,param_1 + 0x34);
  FUN_00640420(&PTR_Unwind_00725c6c,param_1 + 0x30);
  FUN_00640420(&PTR_DAT_00725c68,param_1 + 0x31);
  FUN_006405e0(s_Lookat_00725c60,param_1 + 0x3c);
  FUN_006405b0(&DAT_00725c58,param_1 + 0x2d);
  (**(code **)(*param_1 + 0x48))(&local_10c);
  (**(code **)(*param_1 + 0x14))(auStack_11c,0);
  uStack_10 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_18;
  return;
}

