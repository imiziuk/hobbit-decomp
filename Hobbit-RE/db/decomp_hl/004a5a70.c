
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a5a70(int *param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_EDI;
  undefined4 *puVar2;
  undefined1 auStack_1ec [8];
  undefined4 uStack_1e4;
  char *pcStack_1e0;
  float **ppfStack_1dc;
  float *pfStack_1d8;
  char *pcStack_1d4;
  undefined1 *puStack_1d0;
  float *pfStack_1cc;
  float *pfStack_1c8;
  char *pcStack_1c4;
  float local_1b4;
  float fStack_1b0;
  float afStack_1ac [2];
  undefined1 local_1a4 [3];
  undefined1 auStack_1a1 [133];
  undefined1 auStack_11c [4];
  undefined1 auStack_118 [12];
  undefined1 local_10c;
  undefined4 local_10b;
  undefined1 local_8c;
  undefined4 local_8b;
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3bdb;
  pvStack_c = ExceptionList;
  pcStack_1c4 = s_NPCObject__OnImport_0072b228;
  pfStack_1c8 = (float *)0x4a5a9e;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_10c = DAT_0075b6e0;
  puVar2 = &local_10b;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_8c = DAT_0075b6e0;
  puVar2 = &local_8b;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  pcStack_1c4 = &local_8c;
  local_4 = 0;
  local_1b4 = 0.0;
  pfStack_1c8 = (float *)s_CreatureType_0072b218;
  pfStack_1cc = (float *)0x4a5b00;
  FUN_00640480();
  _local_1a4 = auStack_1ec;
  FUN_00649b20();
  pcStack_1c4 = (char *)FUN_00467620();
  pfStack_1c8 = (float *)0x4a5b29;
  (**(code **)(*param_1 + 0x138))();
  pfStack_1c8 = &local_1b4;
  pfStack_1cc = (float *)s_Position_00724d1c;
  puStack_1d0 = (undefined1 *)0x4a5b3a;
  FUN_006403a0();
  fStack_1b0 = fStack_1b0 + DAT_006e92e8;
  if (local_1b4 < _DAT_006e9980 == (NAN(local_1b4) || NAN(_DAT_006e9980))) {
    if (_DAT_006e997c < local_1b4) {
      local_1b4 = 100000.0;
    }
  }
  else {
    local_1b4 = -100000.0;
  }
  if (fStack_1b0 < _DAT_006e9980 == (NAN(fStack_1b0) || NAN(_DAT_006e9980))) {
    if (_DAT_006e997c < fStack_1b0) {
      fStack_1b0 = 100000.0;
    }
  }
  else {
    fStack_1b0 = -100000.0;
  }
  if (afStack_1ac[0] < _DAT_006e9980 == (NAN(afStack_1ac[0]) || NAN(_DAT_006e9980))) {
    if (_DAT_006e997c < afStack_1ac[0]) {
      afStack_1ac[0] = 100000.0;
    }
  }
  else {
    afStack_1ac[0] = -100000.0;
  }
  pfStack_1c8 = (float *)0x1;
  pfStack_1cc = &local_1b4;
  puStack_1d0 = (undefined1 *)0x4a5bf2;
  (**(code **)(*param_1 + 0x14))();
  puStack_1d0 = &stack0xfffffe40;
  pcStack_1d4 = s_IsSmooth_0072b20c;
  pfStack_1d8 = (float *)0x4a5c03;
  FUN_006405b0();
  puStack_1d0 = auStack_118;
  pcStack_1d4 = s_GeometryResource_007298e0;
  param_1[0x9a] = (unaff_EDI << 0xc ^ param_1[0x9a]) & 0x1000U ^ param_1[0x9a];
  pfStack_1d8 = (float *)0x4a5c34;
  FUN_00640480();
  puStack_1d0 = auStack_118;
  pcStack_1d4 = (char *)0x4a5c46;
  (**(code **)(*param_1 + 0xd0))();
  pcStack_1d4 = (char *)((param_1[0x9a] << 0x13) >> 0x1f);
  pfStack_1d8 = (float *)0x4a5c5e;
  FUN_00580a90();
  pcStack_1d4 = auStack_11c;
  pfStack_1d8 = (float *)&DAT_00725c94;
  ppfStack_1dc = (float **)0x4a5c72;
  FUN_00640480();
  pcStack_1d4 = auStack_11c;
  pfStack_1d8 = (float *)0x4a5c81;
  (**(code **)(*param_1 + 0x48))();
  pfStack_1d8 = afStack_1ac;
  ppfStack_1dc = (float **)s_Rotation_007207f0;
  pcStack_1e0 = (char *)0x4a5c92;
  FUN_00640500();
  pfStack_1d8 = afStack_1ac;
  ppfStack_1dc = (float **)0x4a5ca1;
  (**(code **)(*param_1 + 0xf0))();
  ppfStack_1dc = (float **)(param_1 + 0x95);
  pcStack_1e0 = s_LogStates_0072b200;
  uStack_1e4 = 0x4a5cb4;
  FUN_006405b0();
  ppfStack_1dc = (float **)(param_1 + 0x96);
  pcStack_1e0 = s_LogAnimation_0072b1f0;
  uStack_1e4 = 0x4a5cc7;
  FUN_006405b0();
  _local_1a4 = (undefined1 *)CONCAT31(stack0xfffffe5d,DAT_0075b6e0);
  puVar2 = (undefined4 *)((int)local_1a4 + 1);
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  ppfStack_1dc = (float **)local_1a4;
  *(undefined2 *)puVar2 = 0;
  pcStack_1e0 = s_WeaponProp_0072b008;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  uStack_1e4 = 0x4a5cf2;
  FUN_00640480();
  FUN_0064b130(local_1a4);
  FUN_0049fee0(1);
  ppfStack_1dc = (float **)local_1a4;
  pcStack_1e0 = s_RangedProp_0072b1e4;
  uStack_1e4 = 0x4a5d22;
  FUN_00640480();
  FUN_0064b130(local_1a4);
  FUN_0049fee0(2);
  ppfStack_1dc = (float **)local_1a4;
  pcStack_1e0 = s_ShieldProp_0072afe8;
  uStack_1e4 = 0x4a5d52;
  FUN_00640480();
  FUN_0064b130(local_1a4);
  FUN_0049fee0(4);
  ppfStack_1dc = (float **)local_1a4;
  pcStack_1e0 = s_HeldAmmo_0072af80;
  uStack_1e4 = 0x4a5d82;
  FUN_00640480();
  FUN_0064b130(local_1a4);
  FUN_0049fee0(0x10);
  ppfStack_1dc = (float **)(param_1 + 0x3b);
  pcStack_1e0 = s_PersonalSpaceRadius_0072b1d0;
  uStack_1e4 = 0x4a5db4;
  FUN_00640420();
  pcStack_1e0 = s_MaxHitPoints_0072b1c0;
  uStack_1e4 = 0x4a5dc7;
  ppfStack_1dc = (float **)(param_1 + 0xa5);
  FUN_00640420();
  ppfStack_1dc = (float **)(param_1 + 0xa6);
  param_1[0xa4] = param_1[0xa5];
  pcStack_1e0 = s_CouragePts_0072b1b4;
  uStack_1e4 = 0x4a5de2;
  FUN_00640450();
  ppfStack_1dc = (float **)(param_1 + 0x9e);
  pcStack_1e0 = s_DeathCinema_0072b1a8;
  uStack_1e4 = 0x4a5df5;
  FUN_006405e0();
  ppfStack_1dc = (float **)(param_1 + 0xc3);
  pcStack_1e0 = s_ActivitySphereRadius_0072b190;
  uStack_1e4 = 0x4a5e08;
  FUN_00640420();
  ppfStack_1dc = &pfStack_1cc;
  pcStack_1e0 = s_DieImmediately_0072b180;
  uStack_1e4 = 0x4a5e19;
  FUN_006405b0();
  ppfStack_1dc = &pfStack_1cc;
  param_1[0x11e] = ((int)pfStack_1cc << 6 ^ param_1[0x11e]) & 0x40U ^ param_1[0x11e];
  pcStack_1e0 = s_Sleeps_0072b178;
  uStack_1e4 = 0x4a5e44;
  FUN_006405b0();
  ppfStack_1dc = &pfStack_1cc;
  param_1[0x9a] = ((int)pfStack_1cc << 0xd ^ param_1[0x9a]) & 0x2000U ^ param_1[0x9a];
  pcStack_1e0 = s_Pushable_0072b16c;
  uStack_1e4 = 0x4a5e72;
  FUN_006405b0();
  param_1[0x9a] = ((int)pfStack_1cc << 0x12 ^ param_1[0x9a]) & 0x40000U ^ param_1[0x9a];
  pcStack_1e0 = &DAT_00724ce0;
  uStack_1e4 = 0x4a5ea2;
  ppfStack_1dc = (float **)(param_1 + 0x69);
  FUN_00640450();
  ppfStack_1dc = &pfStack_1cc;
  pcStack_1e0 = s_RootToPosition_0072b15c;
  param_1[0x6a] = param_1[0x69];
  uStack_1e4 = 0x4a5ebb;
  FUN_006405b0();
  ppfStack_1dc = &pfStack_1cc;
  param_1[0x9a] = ((int)pfStack_1cc << 7 ^ param_1[0x9a]) & 0x80U ^ param_1[0x9a];
  pcStack_1e0 = s_Invulnerable_0072b14c;
  uStack_1e4 = 0x4a5ee9;
  FUN_006405b0();
  ppfStack_1dc = &pfStack_1cc;
  param_1[0x3a] = (param_1[0x3a] ^ (uint)pfStack_1cc) & 1 ^ param_1[0x3a];
  pcStack_1e0 = s_DoRender_0072b140;
  uStack_1e4 = 0x4a5f13;
  FUN_006405b0();
  ppfStack_1dc = &pfStack_1cc;
  pcStack_1e0 = s_DoShadow_0072b134;
  param_1[0x9a] = ((int)pfStack_1cc * 2 ^ param_1[0x9a]) & 2U ^ param_1[0x9a];
  uStack_1e4 = 0x4a5f3e;
  FUN_006405b0();
  ppfStack_1dc = &pfStack_1cc;
  param_1[0x9a] = ((int)pfStack_1cc << 6 ^ param_1[0x9a]) & 0x40U ^ param_1[0x9a];
  pcStack_1e0 = s_DoCollision_0072b128;
  uStack_1e4 = 0x4a5f69;
  FUN_006405b0();
  ppfStack_1dc = &pfStack_1cc;
  pcStack_1e0 = s_DoStateControl_0072b118;
  param_1[0x9a] = ((int)pfStack_1cc * 4 ^ param_1[0x9a]) & 4U ^ param_1[0x9a];
  uStack_1e4 = 0x4a5f98;
  FUN_006405b0();
  ppfStack_1dc = &pfStack_1cc;
  pcStack_1e0 = s_DoPhysControl_0072b108;
  param_1[0x9a] = ((int)pfStack_1cc * 8 ^ param_1[0x9a]) & 8U ^ param_1[0x9a];
  uStack_1e4 = 0x4a5fc7;
  FUN_006405b0();
  ppfStack_1dc = &pfStack_1cc;
  param_1[0x9a] = ((int)pfStack_1cc << 4 ^ param_1[0x9a]) & 0x10U ^ param_1[0x9a];
  pcStack_1e0 = s_DoSenses_0072b0fc;
  uStack_1e4 = 0x4a5ff2;
  FUN_006405b0();
  param_1[0x9a] = ((int)pfStack_1cc << 5 ^ param_1[0x9a]) & 0x20U ^ param_1[0x9a];
  ppfStack_1dc = (float **)0x4a6013;
  FUN_0063ff20();
  ppfStack_1dc = (float **)0x4a601a;
  FUN_0063ffc0();
  ppfStack_1dc = (float **)param_2;
  pcStack_1e0 = (char *)0x4a6026;
  FUN_00595170();
  ppfStack_1dc = (float **)0x4a602d;
  FUN_0063ff20();
  ppfStack_1dc = (float **)0x4a6034;
  FUN_0063ffc0();
  ppfStack_1dc = (float **)param_2;
  pcStack_1e0 = (char *)0x4a6040;
  FUN_005b0190();
  ppfStack_1dc = (float **)0x4a6047;
  FUN_0063ff20();
  ppfStack_1dc = (float **)0x4a604e;
  FUN_0063ffc0();
  ppfStack_1dc = (float **)param_2;
  pcStack_1e0 = (char *)0x4a605a;
  FUN_005abcd0();
  ppfStack_1dc = (float **)param_2;
  pcStack_1e0 = (char *)0x4a6062;
  FUN_004aa740();
  uStack_1c = 0xffffffff;
  ppfStack_1dc = (float **)0x4a6076;
  FUN_00649720();
  ExceptionList = pvStack_24;
  return;
}

