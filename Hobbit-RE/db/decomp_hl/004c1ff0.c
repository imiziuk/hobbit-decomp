
void __thiscall FUN_004c1ff0(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  uVar1 = param_2;
  (**(code **)(*param_1 + 0x124))();
  uVar2 = (**(code **)(*param_1 + 0x4c))();
  FUN_006414f0(&DAT_00725c94,uVar2);
  uVar2 = FUN_004c7170();
  FUN_006414f0(s_AnimationResource_0072cc30,uVar2);
  uVar2 = (**(code **)(*param_1 + 0xd4))();
  FUN_006414f0(s_GeometryResource_007298e0,uVar2);
  FUN_006412e0(&PTR_s_o_Load_Audio_Descriptor__s_00725864,param_1 + 5);
  FUN_00641370(s_Ambient_00729b04,*(undefined4 *)((int)param_1 + 0x82));
  FUN_00641600(s_Orient_00726120,param_1 + 0x1a);
  FUN_006412e0(s_Scale_00725a04,param_1 + 0x4c);
  FUN_00641560(&DAT_00726118,param_1 + 0x11);
  FUN_00641760(s_HasLOD_0072cc28,*(byte *)((int)param_1 + 0x15a) & 1);
  FUN_00641760(s_IsLadder_0072cc1c,*(byte *)((int)param_1 + 0x15a) >> 1 & 1);
  FUN_00641760(s_IsVine_0072cc14,(*(byte *)((int)param_1 + 0x15a) & 4) >> 2);
  FUN_00641760(s_IsHoistable_0072cc08,(*(byte *)((int)param_1 + 0x15a) & 0x10) >> 4);
  FUN_00641760(s_IsLeafPile_0072cbfc,(*(byte *)((int)param_1 + 0x15a) & 8) >> 3);
  FUN_00641760(s_IsAnimating_0072cbf0,(*(ushort *)((int)param_1 + 0x15a) & 0x4000) >> 0xe);
  FUN_00641760(s_IsMovingPlatform_0072cbdc,(*(byte *)((int)param_1 + 0x15a) & 0x20) >> 5);
  FUN_00641760(s_IsAutoEdgeGrabbable_0072cbc8,(*(byte *)((int)param_1 + 0x15a) & 0x40) >> 6);
  FUN_00641760(s_DoesNotCollide_0072bdec,*(byte *)((int)param_1 + 0x7a) & 4);
  FUN_00641760(s_DoesFloat_0072cbbc,*(byte *)((int)param_1 + 0x15b) & 1);
  FUN_00641400(s_FloatYTweak_0072cbb0,(float)(int)(char)param_1[0x57]);
  FUN_00641480(s_LightingType_0072cba0,*(undefined1 *)((int)param_1 + 0x15e));
  if (param_1[0x50] == 0) {
    param_2 = 0x3f800000;
  }
  else {
    param_2 = *(undefined4 *)(param_1[0x50] + 0x80);
  }
  FUN_00641400(s_AnimSpeed__0072cb94,param_2);
  if (param_1[0x50] == 0) {
    param_2 = 0;
  }
  else {
    param_2 = *(undefined4 *)(param_1[0x50] + 0x84);
  }
  FUN_00641400(s_AnimOffset__0072cb88,param_2);
  if (param_1[0x50] == 0) {
    param_2 = 0;
  }
  else {
    param_2 = *(undefined4 *)(param_1[0x50] + 0x8c);
  }
  FUN_00641400(s_LoopDelay_0072cb7c,param_2);
  if (param_1[0x50] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1[0x50] + 0x90);
  }
  FUN_00641760(s_Looping_0072cb74,uVar2);
  if (param_1[0x50] == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(param_1[0x50] + 0x94);
  }
  FUN_00641760(s_Interpolate_007260b0,uVar2);
  FUN_00641760(s_Destructible_0072cb64,(*(ushort *)((int)param_1 + 0x15a) & 0x400) >> 10);
  FUN_00641760(s_DestructibleByNPC_0072cb50,*(byte *)((int)param_1 + 0x15d) >> 1 & 1);
  FUN_00641760(s_DestructibleByBilbo_0072cb3c,(*(byte *)((int)param_1 + 0x15d) & 4) >> 2);
  if ((undefined4 *)param_1[0x51] != (undefined4 *)0x0) {
    uVar2 = FUN_00434e80(*(undefined4 *)param_1[0x51]);
    FUN_006414f0(s_ContentType_0072cb30,uVar2);
    puVar3 = (undefined1 *)FUN_005493e0(param_1[0x51] + 8);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0075b6e0;
    }
    FUN_006414f0(s_DestructGeom_0072cb20,puVar3);
    puVar3 = (undefined1 *)FUN_005493e0(param_1[0x51] + 0xc);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0075b6e0;
    }
    FUN_006414f0(s_DestructAnim_0072cb10,puVar3);
  }
  FUN_00641760(s_IsPlant_0072cb08,*(byte *)((int)param_1 + 0x15d) & 1);
  if (param_1[0x52] != 0) {
    puVar3 = (undefined1 *)FUN_005493e0(param_1[0x52]);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0075b6e0;
    }
    FUN_006414f0(s_PlantGeom_0072cafc,puVar3);
    puVar3 = (undefined1 *)FUN_005493e0(param_1[0x52] + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0075b6e0;
    }
    FUN_006414f0(s_PlantAnim_0072caf0,puVar3);
  }
  FUN_00641760(s_PainOnDestroy_0072cae0,(*(ushort *)((int)param_1 + 0x15a) & 0x800) >> 0xb);
  FUN_004d0d70(uVar1);
  FUN_006412c0();
  return;
}

