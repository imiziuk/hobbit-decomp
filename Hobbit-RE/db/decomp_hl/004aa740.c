
void __thiscall FUN_004aa740(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_1a8;
  undefined4 local_1a4 [2];
  undefined1 local_19c [4];
  undefined4 local_198 [3];
  undefined1 local_18c;
  undefined4 local_18b;
  undefined1 auStack_114 [8];
  undefined1 local_10c;
  undefined4 local_10b [60];
  void *pvStack_18;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3dcb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_object__OnImport_0072b8a4);
  local_10c = 0;
  puVar2 = local_10b;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  local_4 = 0;
  FUN_006401e0(param_2,s_DoesCameraColl_d_0072b890,local_198);
  FUN_006401e0(param_2,s_DoesCameraFade_d_0072b87c,local_1a4);
  FUN_00640450(s_LightChannels_0072b86c,local_19c);
  *(undefined1 *)((int)param_1 + 0x7e) = local_19c[0];
  local_1a8 = 0;
  FUN_00640450(s_ObjectFlags_0072b860,&local_1a8);
  *(undefined2 *)((int)param_1 + 0x7a) = (undefined2)local_1a8;
  FUN_004ab450(local_198[0]);
  FUN_004ab480(local_1a4[0]);
  local_18c = 0;
  puVar2 = &local_18b;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  FUN_00640480(s_ScriptResource_0072b850,&local_18c);
  FUN_00549430(param_1 + 0x1d,&local_18c);
  FUN_006403a0(s_InitialPos_0072b844,param_1 + 8);
  FUN_00640500(s_Orientation_0072b838,param_1 + 0x1a);
  FUN_006404b0(s_LocalBoundingBox_0072b824,param_1 + 0xb);
  (**(code **)(*param_1 + 0x14))(param_1 + 8,1);
  FUN_006405b0(s_ObjSaveFlag_0072b818,&local_1a8);
  *(byte *)((int)param_1 + 0x7f) =
       (*(byte *)((int)param_1 + 0x7f) ^ (byte)local_1a8) & 1 ^ *(byte *)((int)param_1 + 0x7f);
  FUN_00640480(s_ObjName_0072b810,auStack_114);
  (**(code **)(*param_1 + 0x48))(auStack_114);
  uStack_10 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_18;
  return;
}

