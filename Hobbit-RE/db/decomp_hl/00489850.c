
void __thiscall FUN_00489850(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_19c;
  undefined1 local_198 [12];
  undefined1 local_18c;
  undefined4 local_18b;
  undefined1 local_10c;
  undefined4 local_10b;
  undefined1 local_8c [112];
  void *pvStack_1c;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2e2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_fx_object__OnImport_00729310);
  local_10c = DAT_0075b6e0;
  puVar2 = &local_10b;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_18c = DAT_0075b6e0;
  puVar2 = &local_18b;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_4 = 0;
  FUN_004aa740(param_2);
  FUN_00640480(&DAT_00725c94,&local_10c);
  FUN_006403a0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 5);
  FUN_00640500(s_Orient_00726120,param_1 + 0x1a);
  FUN_006403a0(s_Scale_00725a04,param_1 + 0x4a);
  FUN_00640420(s_PlaybackRate_00729300,local_198);
  FUN_00640480(s_FXResource_007292f4,&local_18c);
  iVar1 = FUN_006405b0(s_StartOnInit_007292e8,&local_19c);
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x55) =
         (*(byte *)(param_1 + 0x55) ^ (byte)local_19c) & 1 ^ *(byte *)(param_1 + 0x55);
  }
  FUN_006403e0(s_Color_00728924,param_1 + 0x4d);
  FUN_006405e0(s_HostObject_007292dc,param_1 + 0x56);
  FUN_00640480(s_HostPartName_007292cc,local_8c);
  FUN_0064a2e0(local_8c);
  (**(code **)(*param_1 + 0x48))(&local_10c);
  (**(code **)(*param_1 + 0x100))(local_19c);
  (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
  FUN_00488c30(&local_19c);
  uStack_14 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_1c;
  return;
}

