
void FUN_004ab4e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_48 [72];
  
  if (DAT_0075d338 == 0) {
    iVar1 = FUN_00425010();
    *(undefined4 *)(iVar1 + 0x80) = 3;
    FUN_00647d10(iVar1,&DAT_0072b9ac);
    *(undefined4 *)(iVar1 + 0x84) = 2;
    if (DAT_0075d338 == 0) {
      iVar1 = FUN_00425010();
      *(undefined4 *)(iVar1 + 0x80) = 4;
      FUN_00647d10(iVar1,&DAT_00725c94);
      *(undefined4 *)(iVar1 + 0x84) = 4;
    }
  }
  FUN_00404870(0x800000,0x800000,0x800000);
  FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00404870(0,0,0);
  FUN_00404870(0,0,0);
  FUN_004acff0(param_1,s_LocalBBox_00724d04,2,&local_60,local_48);
  local_78 = 0x7f7fffff;
  local_74 = 0x7f7fffff;
  local_70 = 0x7f7fffff;
  local_6c = 0x800000;
  local_68 = 0x800000;
  local_64 = 0x800000;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  uVar2 = FUN_004ace90(&local_6c,&local_78);
  puVar4 = &local_60;
  uVar3 = FUN_00401f00(0,0,0);
  uVar3 = FUN_004ace90(uVar3,puVar4);
  FUN_004acff0(param_1,s_WorldBBox_00724d10,0x14,uVar3,uVar2);
  FUN_00401f00(0x7f7fffff,0x7f7fffff,0x7f7fffff);
  FUN_00401f00(0x800000,0x800000,0x800000);
  FUN_00480ff0(param_1,s_Position_00724d1c,0x22);
  uVar2 = FUN_00401f00(0x40c90fdb,0x40c90fdb,0x40c90fdb);
  uVar3 = FUN_00401f00(0,0,0);
  FUN_00463d50(param_1,s_Rotation_007207f0,0x22,uVar3,uVar2);
  FUN_00474220(param_1,s_System_0072b9a4,2,0);
  FUN_004f1e00(param_1,s_Script_Resource_0072b994,0,1,2);
  FUN_005669e0(param_1,s_Does_Not_Collide_0072b980,0x62);
  FUN_005669e0(param_1,s_Bilbo_Does_Not_Collide_0072b968,0x22);
  FUN_005669e0(param_1,s_NPC_Does_Not_Collide_0072b950,2);
  FUN_005669e0(param_1,s_Does_Camera_Collision_0072b938,2);
  FUN_005669e0(param_1,s_Does_Camera_Fade_0072b924,2);
  FUN_005669e0(param_1,s_Does_Lighting_Use_Normals_0072b908,0x42);
  FUN_005669e0(param_1,s_Does_Lighting_Cast_Shadows_0072b8ec,0x42);
  return;
}

