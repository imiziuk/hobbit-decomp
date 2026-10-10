
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bb140(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_50;
  int local_4c;
  int local_48 [3];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  CRect local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d45d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_push_box__OnImport_0072c550);
  iVar1 = param_2;
  local_4 = 0;
  FUN_006405e0(s_SyncVolume_0072c544,param_1 + 0x290);
  FUN_00640420(s_Radius_0072a57c,param_1 + 0x264);
  local_50 = *(undefined4 *)(param_1 + 0x17c);
  FUN_00640450(s_PushBoxType_0072c538,&local_50);
  *(undefined4 *)(param_1 + 0x17c) = local_50;
  local_4c = 1;
  FUN_006405b0(s_CanFlip_0072c530,&local_4c);
  *(uint *)(param_1 + 0x260) =
       (local_4c << 6 ^ *(uint *)(param_1 + 0x260)) & 0x40 ^ *(uint *)(param_1 + 0x260);
  FUN_004c2430(iVar1);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x3f800000;
  FUN_0064c8e0(*(float *)(param_1 + 0x70) * _DAT_006e936c,local_48,&param_2);
  CRect::CRect(local_2c,0,0,local_48[0],param_2);
  uVar2 = FUN_00463b80(local_1c,local_2c,&local_3c);
  FUN_0042fda0(uVar2);
  FUN_0064c8e0(*(float *)(param_1 + 0x68) * _DAT_006e936c,local_48,&param_2);
  CRect::CRect(local_2c,local_48[0],0,0,param_2);
  uVar2 = FUN_00463b80(local_1c,local_2c,&local_3c);
  FUN_0042fda0(uVar2);
  FUN_00493410(*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x220) = local_3c;
  *(undefined4 *)(param_1 + 0x228) = local_34;
  *(undefined4 *)(param_1 + 0x224) = local_38;
  *(undefined4 *)(param_1 + 0x22c) = local_30;
  FUN_004baec0();
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x1c);
  FUN_004b9dd0();
  FUN_004ab480(0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

