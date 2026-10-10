
void __fastcall FUN_0049f8f0(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_37c;
  undefined1 *puStack_378;
  char *pcStack_374;
  int *piStack_370;
  undefined1 *puStack_36c;
  char *pcStack_368;
  int *piStack_364;
  int *piStack_360;
  char *pcStack_35c;
  int *piStack_358;
  undefined1 *puStack_354;
  char *pcStack_350;
  undefined4 *puStack_34c;
  undefined1 *puStack_348;
  char *pcStack_344;
  int *piStack_340;
  undefined1 *puStack_33c;
  char *pcStack_338;
  int *piStack_334;
  undefined4 local_320;
  undefined1 *local_31c;
  int local_318;
  undefined4 local_314;
  int local_310;
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined4 local_2f3;
  undefined1 local_2b8;
  undefined4 local_2b7;
  undefined4 local_278;
  undefined1 local_274;
  undefined4 local_273;
  undefined4 local_238;
  undefined1 local_234;
  undefined4 local_233;
  undefined1 local_1f8;
  undefined4 local_1f7;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b3;
  undefined4 local_178;
  undefined1 local_174;
  undefined4 local_173;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_133;
  undefined1 local_f8;
  undefined4 local_f7;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b3;
  undefined1 local_78;
  undefined4 local_77;
  undefined1 local_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006d37e3;
  pvStack_c = ExceptionList;
  local_320 = 0x7fffffff;
  piStack_334 = (int *)&DAT_0072adcc;
  pcStack_338 = s_CreatureList_Info_0072adb8;
  local_4 = 0;
  puStack_33c = (undefined1 *)0x49f936;
  ExceptionList = &pvStack_c;
  piStack_334 = (int *)FUN_005496c0();
  pcStack_338 = (char *)&local_320;
  puStack_33c = (undefined1 *)0x49f946;
  FUN_00549430();
  piStack_334 = &local_320;
  pcStack_338 = (undefined1 *)0x49f955;
  puVar1 = (undefined1 *)FUN_00549470();
  piStack_334 = (int *)0x49f95e;
  FUN_0063e0f0();
  local_f8 = 0;
  puVar2 = &local_f7;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_2b8 = 0;
  puVar2 = &local_2b7;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_78 = 0;
  puVar2 = &local_77;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  local_1f8 = 0;
  puVar2 = &local_1f7;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  piStack_334 = (int *)0x49f9c7;
  iVar4 = FUN_0063e510();
  while (iVar4 == 1) {
    piStack_334 = (int *)s_CreatureList_0072ada8;
    puStack_33c = (undefined1 *)0x49f9db;
    pcStack_338 = puVar1;
    iVar4 = FUN_00647ed0();
    if (iVar4 == 0) {
      local_314 = 0;
      local_318 = 0;
      local_238 = DAT_00720670;
      local_234 = DAT_00720674;
      puVar2 = &local_233;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined2 *)puVar2 = 0;
      *(undefined1 *)((int)puVar2 + 2) = 0;
      local_2f8 = DAT_00720670;
      local_2f4 = DAT_00720674;
      puVar2 = &local_2f3;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined2 *)puVar2 = 0;
      *(undefined1 *)((int)puVar2 + 2) = 0;
      local_b8 = DAT_00720670;
      local_b4 = DAT_00720674;
      puVar2 = &local_b3;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined2 *)puVar2 = 0;
      *(undefined1 *)((int)puVar2 + 2) = 0;
      local_138 = DAT_00720670;
      local_134 = DAT_00720674;
      puVar2 = &local_133;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined2 *)puVar2 = 0;
      *(undefined1 *)((int)puVar2 + 2) = 0;
      local_1b8 = DAT_00720670;
      local_1b4 = DAT_00720674;
      puVar2 = &local_1b3;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined2 *)puVar2 = 0;
      *(undefined1 *)((int)puVar2 + 2) = 0;
      local_278 = DAT_00720670;
      local_274 = DAT_00720674;
      puVar2 = &local_273;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined2 *)puVar2 = 0;
      *(undefined1 *)((int)puVar2 + 2) = 0;
      local_178 = DAT_00720670;
      local_174 = DAT_00720674;
      puVar2 = &local_173;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined2 *)puVar2 = 0;
      *(undefined1 *)((int)puVar2 + 2) = 0;
      iVar4 = 1;
      if (0 < *(int *)(puVar1 + 0x100)) {
        do {
          piStack_334 = (int *)0x49faf7;
          FUN_0063e6a0();
          piStack_334 = (int *)&local_f8;
          pcStack_338 = s_CreatureName_s_0072ad98;
          piStack_340 = (int *)0x49fb0a;
          puStack_33c = puVar1;
          FUN_0063ea10();
          piStack_340 = (int *)&local_2b8;
          pcStack_344 = s_StateList_s_0072ad8c;
          puStack_34c = (undefined4 *)0x49fb1d;
          puStack_348 = puVar1;
          FUN_0063ea10();
          puStack_34c = (undefined4 *)&local_78;
          pcStack_350 = s_AnimList_s_0072ad80;
          piStack_358 = (int *)0x49fb30;
          puStack_354 = puVar1;
          FUN_0063ea10();
          piStack_358 = &local_238;
          pcStack_35c = s_DeathFx_s_0072ad74;
          piStack_364 = (int *)0x49fb43;
          piStack_360 = (int *)puVar1;
          FUN_0063ea10();
          piStack_364 = &local_2f8;
          pcStack_368 = s_DeathAudio_s_0072ad64;
          piStack_370 = (int *)0x49fb53;
          puStack_36c = puVar1;
          FUN_0063ea10();
          piStack_370 = (int *)&local_1f8;
          pcStack_374 = s_StatInfo_s_0072ad58;
          uStack_37c = 0x49fb66;
          puStack_378 = puVar1;
          FUN_0063ea10();
          piStack_334 = &local_300;
          pcStack_338 = s_MaxHitPoints_f_0072ad48;
          piStack_340 = (int *)0x49fb79;
          puStack_33c = puVar1;
          FUN_0063ea10();
          piStack_340 = &local_314;
          pcStack_344 = s_HitsTillAngry_d_0072ad38;
          puStack_34c = (undefined4 *)0x49fb89;
          puStack_348 = puVar1;
          FUN_0063ea10();
          puStack_34c = &local_b8;
          pcStack_350 = s_WeaponGeom_s_0072ad28;
          piStack_358 = (int *)0x49fb9c;
          puStack_354 = puVar1;
          FUN_0063ea10();
          piStack_358 = &local_138;
          pcStack_35c = s_RangedGeom_s_0072ad18;
          piStack_364 = (int *)0x49fbaf;
          piStack_360 = (int *)puVar1;
          FUN_0063ea10();
          piStack_364 = &local_1b8;
          pcStack_368 = s_ShieldGeom_s_0072ad08;
          piStack_370 = (int *)0x49fbc2;
          puStack_36c = puVar1;
          FUN_0063ea10();
          piStack_370 = &local_278;
          pcStack_374 = s_ThrownGeom_s_0072acf8;
          uStack_37c = 0x49fbd5;
          puStack_378 = puVar1;
          FUN_0063ea10();
          piStack_334 = &local_178;
          pcStack_338 = s_HeldAmmoGeom_s_0072ace8;
          piStack_340 = (int *)0x49fbeb;
          puStack_33c = puVar1;
          FUN_0063ea10();
          piStack_340 = &local_310;
          pcStack_344 = s_Scale_f_0072ace0;
          puStack_34c = (undefined4 *)0x49fbfb;
          puStack_348 = puVar1;
          FUN_0063ea10();
          puStack_34c = &local_2fc;
          pcStack_350 = s_MinCameraDist_f_0072acd0;
          piStack_358 = (int *)0x49fc0b;
          puStack_354 = puVar1;
          FUN_0063ea10();
          piStack_358 = &local_308;
          pcStack_35c = s_ArmorFactor_f_0072acc0;
          piStack_364 = (int *)0x49fc1b;
          piStack_360 = (int *)puVar1;
          FUN_0063ea10();
          piStack_364 = &local_30c;
          pcStack_368 = s_SkidFactor_f_0072acb0;
          piStack_370 = (int *)0x49fc2b;
          puStack_36c = puVar1;
          FUN_0063ea10();
          piStack_370 = &local_304;
          pcStack_374 = s_PersonalSpace_f_0072aca0;
          uStack_37c = 0x49fc3b;
          puStack_378 = puVar1;
          FUN_0063ea10();
          piStack_334 = &local_318;
          pcStack_338 = s_DefaultCP_d_0072ac94;
          piStack_340 = (int *)0x49fc4e;
          puStack_33c = puVar1;
          FUN_0063ea10();
          piStack_334 = (int *)param_1[0x6c];
          pcStack_338 = local_38;
          puStack_33c = (undefined1 *)0x49fc67;
          puVar2 = (undefined4 *)FUN_004675a0();
          piStack_334 = (int *)*puVar2;
          pcStack_338 = &local_f8;
          local_4._0_1_ = 1;
          puStack_33c = (undefined1 *)0x49fc7f;
          iVar3 = FUN_00647e40();
          local_4 = (uint)local_4._1_3_ << 8;
          piStack_334 = (int *)0x49fc9e;
          FUN_00649ba0();
          if (iVar3 == 0) {
            local_31c = (undefined1 *)&uStack_37c;
            param_1[0xa8] = local_30c;
            param_1[0x3b] = local_304;
            param_1[0x68] = local_308;
            FUN_0064b130(&local_278);
            FUN_0049fee0(8);
            local_31c = (undefined1 *)&uStack_37c;
            FUN_0064b130(&local_2b8);
            FUN_005ad7b0();
            piStack_334 = (int *)&local_2b8;
            pcStack_338 = (char *)0x49fd14;
            FUN_0064a2e0();
            piStack_334 = (int *)&local_78;
            pcStack_338 = (char *)0x49fd27;
            FUN_0064a2e0();
            piStack_334 = &local_238;
            pcStack_338 = (char *)0x49fd3a;
            FUN_0064a2e0();
            piStack_334 = &local_2f8;
            pcStack_338 = (undefined1 *)0x49fd4a;
            FUN_0064a2e0();
            local_31c = (undefined1 *)&uStack_37c;
            FUN_0064b130(&local_1f8);
            FUN_004a0b90();
            *(undefined4 *)(param_1[0xc0] + 0x1ac) = local_2fc;
            *(undefined4 *)(param_1[0xc0] + 0x208) = local_314;
            param_1[0x138] = local_310;
            param_1[0xa5] = local_300;
            param_1[0xa6] = local_318;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 <= *(int *)(puVar1 + 0x100));
      }
    }
    else {
      piStack_334 = (int *)0x49fe01;
      FUN_0063f330();
    }
    piStack_334 = (int *)0x49fdbd;
    iVar4 = FUN_0063e510();
  }
  piStack_334 = (int *)0x49fdcd;
  FUN_0063e0f0();
  piStack_334 = &local_320;
  pcStack_338 = (char *)0x49fddc;
  FUN_00549580();
  iVar4 = param_1[0x6d];
  if (iVar4 == 0xb) {
    if (param_1[0xc1] != 0) {
      *(undefined4 *)(param_1[0xc1] + 0x40) = 2;
    }
  }
  else if ((iVar4 == 5) || (iVar4 == 0x14)) {
    if (param_1[0xc1] != 0) {
      *(undefined4 *)(param_1[0xc1] + 0x40) = 1;
    }
  }
  else if (param_1[0xc1] != 0) {
    *(undefined4 *)(param_1[0xc1] + 0x40) = 0;
  }
  local_31c = (undefined1 *)&pcStack_35c;
  piStack_360 = param_1 + 0x12d;
  piStack_364 = (int *)0x49fe42;
  FUN_00649b60();
  piStack_360 = (int *)0x49fe4d;
  FUN_00591540();
  local_31c = (undefined1 *)param_1[0x138];
  piStack_334 = (int *)0x49fe62;
  iVar4 = (**(code **)(*param_1 + 0x154))();
  piStack_334 = &local_320;
  *(undefined1 **)(iVar4 + 0x28) = local_31c;
  *(undefined4 *)(iVar4 + 300) = 1;
  *(int *)(iVar4 + 0x138) = *(int *)(iVar4 + 0x138) + 1;
  *(undefined4 *)(iVar4 + 0x13c) = 1;
  *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
  local_4 = 0xffffffff;
  pcStack_338 = (char *)0x49feb1;
  FUN_00549580();
  piStack_334 = &local_320;
  pcStack_338 = (char *)0x49fec0;
  FUN_00549350();
  ExceptionList = pvStack_c;
  return;
}

