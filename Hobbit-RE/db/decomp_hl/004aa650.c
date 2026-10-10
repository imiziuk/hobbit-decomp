
void __thiscall FUN_004aa650(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = FUN_004ab440();
  iVar2 = FUN_004ab470();
  FUN_00640b90(param_2,s_DoesCameraColl_d_0072b890,iVar1 != 0);
  FUN_00640b90(param_2,s_DoesCameraFade_d_0072b87c,iVar2 != 0);
  FUN_00641480(s_LightChannels_0072b86c,*(undefined1 *)(param_1 + 0x7e));
  FUN_00641480(s_ObjectFlags_0072b860,*(undefined2 *)(param_1 + 0x7a));
  puVar3 = (undefined1 *)FUN_005493e0(param_1 + 0x74);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0075b6e0;
  }
  FUN_006414f0(s_ScriptResource_0072b850,puVar3);
  FUN_006412e0(s_InitialPos_0072b844,param_1 + 0x20);
  FUN_00641600(s_Orientation_0072b838,param_1 + 0x68);
  FUN_00641560(s_LocalBoundingBox_0072b824,param_1 + 0x2c);
  FUN_00641760(s_ObjSaveFlag_0072b818,*(byte *)(param_1 + 0x7f) & 1);
  FUN_006414f0(s_ObjName_0072b810,*(undefined4 *)(param_1 + 0xa0));
  return;
}

