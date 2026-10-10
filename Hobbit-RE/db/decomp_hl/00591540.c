
void __thiscall FUN_00591540(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puStack_334;
  char *pcStack_330;
  void **ppvStack_32c;
  undefined1 *puStack_328;
  char *pcStack_324;
  undefined4 *puStack_320;
  undefined1 *puStack_31c;
  char *pcStack_318;
  char *pcStack_314;
  undefined1 *puStack_310;
  char *pcStack_30c;
  undefined1 **ppuStack_308;
  void **ppvStack_304;
  char *pcStack_300;
  undefined1 *local_2e8;
  void *local_2e4;
  undefined4 local_2e0;
  int local_2dc;
  undefined4 local_2d8;
  void *local_2d4;
  int local_2d0;
  undefined1 local_2cc;
  undefined4 local_2cb;
  undefined1 local_28c;
  undefined4 local_28b;
  char local_24c;
  undefined4 local_24b;
  undefined1 local_20c;
  undefined4 local_20b;
  undefined1 local_1cc [128];
  undefined1 local_14c [64];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006dcf7d;
  local_c = ExceptionList;
  pcStack_300 = (char *)param_2;
  local_4 = 0;
  ppvStack_304 = (void **)0x591580;
  ExceptionList = &local_c;
  local_2d0 = param_1;
  iVar1 = FUN_00647e40();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x1000;
    FUN_00592920();
    pcStack_300 = (char *)0x5915af;
    iVar1 = FUN_005b71e0();
    if (iVar1 == 0) {
      ppvStack_304 = &local_2e4;
      pcStack_300 = s__sAnims_Info_00742d4c;
      ppuStack_308 = (undefined1 **)0x5915ce;
      FUN_00649920();
      local_4._0_1_ = 1;
      pcStack_300 = (char *)0x5915e5;
      pcStack_300 = (char *)FUN_00649940();
      ppvStack_304 = (void **)0x5915f0;
      FUN_005496c0();
      ppvStack_304 = (void **)local_10c;
      pcStack_300 = s_verify_failed_on_file___s_00742d30;
      ppuStack_308 = (undefined1 **)0x591603;
      FUN_0064f190();
      local_4._0_1_ = 0;
      FUN_00649950();
      local_2d8 = 0x7fffffff;
      ppvStack_304 = &local_2e4;
      pcStack_300 = s__sAnims_Info_00742d4c;
      local_4._0_1_ = 2;
      ppuStack_308 = (undefined1 **)0x59163d;
      FUN_00649920();
      local_4._0_1_ = 3;
      pcStack_300 = (char *)0x591654;
      pcStack_300 = (char *)FUN_00649940();
      ppvStack_304 = (void **)0x59165f;
      FUN_005496c0();
      pcStack_300 = (char *)&local_2d8;
      ppvStack_304 = (void **)0x59166f;
      FUN_00549430();
      local_4._0_1_ = 2;
      FUN_00649950();
      pcStack_300 = (char *)0x59168f;
      puVar2 = (undefined1 *)FUN_00549470();
      FUN_0063e0f0();
      pcStack_300 = (char *)0x59169f;
      local_2d4 = operator_new(0x68);
      local_4._0_1_ = 4;
      if (local_2d4 != (void *)0x0) {
        FUN_005b6a40();
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00592920();
      pcStack_300 = (undefined1 *)0x5916dc;
      FUN_005b6e80();
      iVar1 = FUN_0063e510();
      while (iVar1 == 1) {
        ppvStack_304 = (void **)0x5916fb;
        pcStack_300 = puVar2;
        iVar1 = FUN_00647ed0();
        if (iVar1 == 0) {
          local_2e4 = (void *)0x0;
          if (0 < *(int *)(puVar2 + 0x100)) {
            do {
              local_2e8 = (undefined1 *)0x0;
              FUN_0063e6a0();
              pcStack_300 = (char *)0x591728;
              puVar3 = (undefined4 *)operator_new(0x7c);
              if (puVar3 == (undefined4 *)0x0) {
                puVar3 = (undefined4 *)0x0;
              }
              else {
                *puVar3 = &PTR_LAB_006f40c0;
                puVar3[1] = 0;
                puVar3[0x12] = 0;
                puVar3[0x13] = 0;
                puVar3[0x14] = 0;
                puVar3[0x15] = 0;
                puVar3[0x16] = 0;
                puVar3[0x17] = 0x3f800000;
                puVar3[0x1a] = 0;
                puVar3[0x1b] = 0;
                puVar3[0x1c] = 0;
                puVar3[0x1e] = 0;
                puVar3[0x18] = 0x3f800000;
                puVar3[0x19] = 0x3f800000;
                puVar3[0x1d] = 0;
              }
              pcStack_300 = s_AnimName_s_00742d18;
              ppuStack_308 = (undefined1 **)0x59177d;
              ppvStack_304 = (void **)puVar2;
              FUN_0063ea10();
              ppuStack_308 = (undefined1 **)local_1cc;
              pcStack_30c = (char *)0x59178a;
              local_2dc = FUN_00647cf0();
              if (0x3f < local_2dc) {
                local_2dc = 0x40;
              }
              pcStack_300 = local_1cc;
              ppvStack_304 = (void **)(puVar3 + 2);
              ppuStack_308 = (undefined1 **)0x5917b4;
              FUN_00647d70();
              ppuStack_308 = (undefined1 **)local_14c;
              pcStack_30c = s_AnimType_s_00742d0c;
              *(undefined1 *)(local_2dc + 8 + (int)puVar3) = 0;
              pcStack_314 = (char *)0x5917cf;
              puStack_310 = puVar2;
              FUN_0063ea10();
              pcStack_300 = (char *)0x5917e3;
              uVar4 = FUN_005928e0();
              puVar3[1] = uVar4;
              pcStack_300 = s_YawRate_f_00742d00;
              ppuStack_308 = (undefined1 **)0x5917f6;
              ppvStack_304 = (void **)puVar2;
              FUN_0063ea10();
              ppuStack_308 = (undefined1 **)&local_2e0;
              pcStack_30c = s_BlendFactor_f_00742cf0;
              puVar3[0x13] = local_2e0;
              pcStack_314 = (char *)0x59180d;
              puStack_310 = puVar2;
              FUN_0063ea10();
              pcStack_314 = (char *)&local_2e0;
              pcStack_318 = s_SpeedScalar_f_00742ce0;
              puVar3[0x14] = local_2e0;
              puStack_320 = (undefined4 *)0x591824;
              puStack_31c = puVar2;
              FUN_0063ea10();
              puStack_320 = &local_2e0;
              pcStack_324 = s_DistanceScalar_f_00742ccc;
              puVar3[0x16] = local_2e0;
              ppvStack_32c = (void **)0x59183b;
              puStack_328 = puVar2;
              FUN_0063ea10();
              ppvStack_32c = &local_2d4;
              pcStack_330 = s_AnimRotation_f_00742cbc;
              puVar3[0x17] = local_2e0;
              puStack_334 = puVar2;
              FUN_0063ea10();
              puVar3[0x15] = local_2d4;
              FUN_0063ea10(puVar2,s_NoiseLevel_f_00742cac,&local_2e0);
              pcStack_300 = s_Flags_d_00742ca4;
              puVar3[0x12] = local_2e0;
              ppuStack_308 = (undefined1 **)0x591883;
              ppvStack_304 = (void **)puVar2;
              FUN_0063ea10();
              ppuStack_308 = &local_2e8;
              pcStack_30c = s_AnimMode_d_00742c98;
              puVar3[0x1e] = local_2e8;
              local_2e8 = (undefined1 *)0x0;
              pcStack_314 = (char *)0x59189e;
              puStack_310 = puVar2;
              FUN_0063ea10();
              puVar3[0x1d] = local_2e8;
              pcStack_300 = (undefined1 *)0x5918b0;
              FUN_005b6e90();
              local_2e4 = (void *)((int)local_2e4 + 1);
              param_1 = local_2d0;
            } while ((int)local_2e4 < *(int *)(puVar2 + 0x100));
          }
        }
        else {
          ppvStack_304 = (void **)0x5918db;
          pcStack_300 = puVar2;
          iVar1 = FUN_00647ed0();
          if (iVar1 == 0) {
            FUN_0063e6a0();
            pcStack_300 = s_FileName_s_00742c7c;
            ppuStack_308 = (undefined1 **)0x5918fc;
            ppvStack_304 = (void **)puVar2;
            FUN_0063ea10();
            pcStack_300 = (undefined1 *)0x59190e;
            FUN_005b6f40();
          }
          else {
            ppvStack_304 = (void **)0x59191e;
            pcStack_300 = puVar2;
            iVar1 = FUN_00647ed0();
            if (iVar1 == 0) {
              local_2dc = 0;
              if (0 < *(int *)(puVar2 + 0x100)) {
                do {
                  local_20c = 0;
                  puVar3 = &local_20b;
                  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *puVar3 = 0;
                    puVar3 = puVar3 + 1;
                  }
                  *(undefined2 *)puVar3 = 0;
                  *(undefined1 *)((int)puVar3 + 2) = 0;
                  local_28c = 0;
                  puVar3 = &local_28b;
                  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *puVar3 = 0;
                    puVar3 = puVar3 + 1;
                  }
                  *(undefined2 *)puVar3 = 0;
                  *(undefined1 *)((int)puVar3 + 2) = 0;
                  local_24c = '\0';
                  puVar3 = &local_24b;
                  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *puVar3 = 0;
                    puVar3 = puVar3 + 1;
                  }
                  *(undefined2 *)puVar3 = 0;
                  *(undefined1 *)((int)puVar3 + 2) = 0;
                  local_2cc = 0;
                  puVar3 = &local_2cb;
                  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
                    *puVar3 = 0;
                    puVar3 = puVar3 + 1;
                  }
                  *(undefined2 *)puVar3 = 0;
                  *(undefined1 *)((int)puVar3 + 2) = 0;
                  local_2e4 = (void *)0x0;
                  FUN_0063e6a0();
                  pcStack_300 = s_CurrentAnim_s_00742c58;
                  ppuStack_308 = (undefined1 **)0x5919ba;
                  ppvStack_304 = (void **)puVar2;
                  FUN_0063ea10();
                  ppuStack_308 = (undefined1 **)&local_28c;
                  pcStack_30c = s_Transition1_s_00742c48;
                  pcStack_314 = (char *)0x5919ca;
                  puStack_310 = puVar2;
                  FUN_0063ea10();
                  pcStack_314 = &local_24c;
                  pcStack_318 = s_Transition2_s_00742c38;
                  puStack_320 = (undefined4 *)0x5919dd;
                  puStack_31c = puVar2;
                  FUN_0063ea10();
                  puStack_320 = (undefined4 *)&local_2cc;
                  pcStack_324 = s_NextAnim_s_00742c2c;
                  ppvStack_32c = (void **)0x5919ed;
                  puStack_328 = puVar2;
                  FUN_0063ea10();
                  ppvStack_32c = &local_2e4;
                  pcStack_330 = s_Flags_d_00742ca4;
                  puStack_334 = puVar2;
                  FUN_0063ea10();
                  ppvStack_32c = (void **)&local_2cc;
                  pcStack_330 = (char *)0x591a18;
                  local_2e8 = (undefined1 *)&puStack_328;
                  FUN_00649b20();
                  ppvStack_32c = (void **)0x591a1f;
                  pcStack_300 = (char *)FUN_005b6b80();
                  local_2e8 = (undefined1 *)&ppvStack_32c;
                  pcStack_330 = &local_24c;
                  puStack_334 = (undefined1 *)0x591a36;
                  FUN_00649b20();
                  pcStack_330 = (char *)0x591a3d;
                  ppvStack_304 = (void **)FUN_005b6b80();
                  local_2e8 = (undefined1 *)&pcStack_330;
                  puStack_334 = &local_28c;
                  FUN_00649b20();
                  puStack_334 = (undefined1 *)0x591a5b;
                  ppuStack_308 = (undefined1 **)FUN_005b6b80();
                  local_2e8 = (undefined1 *)&puStack_334;
                  FUN_00649b20(&local_20c);
                  pcStack_30c = (char *)FUN_005b6b80();
                  puStack_310 = (undefined1 *)0x591a81;
                  FUN_005b6f50();
                  local_2dc = local_2dc + 1;
                  param_1 = local_2d0;
                } while (local_2dc < *(int *)(puVar2 + 0x100));
              }
            }
            else {
              FUN_0063f330();
            }
          }
        }
        iVar1 = FUN_0063e510();
      }
      FUN_0063e0f0();
      pcStack_300 = (char *)0x591acb;
      FUN_00549580();
      pcStack_300 = (char *)0x591ad6;
      FUN_005b7220();
      local_4 = local_4 & 0xffffff00;
      pcStack_300 = (char *)0x591aec;
      FUN_00549580();
      pcStack_300 = (char *)0x591afb;
      FUN_00549350();
    }
    *(undefined4 *)(param_1 + 0x158) = 0;
    FUN_00592920();
    pcStack_300 = &local_2cc;
    ppvStack_304 = (void **)0x591b1e;
    FUN_005b7440();
    ppvStack_304 = &local_2d4;
    pcStack_300 = s__sAnims_charanim_00742c18;
    local_4._0_1_ = 5;
    ppuStack_308 = (undefined1 **)0x591b38;
    FUN_00649920();
    local_4._0_1_ = 6;
    pcStack_300 = (char *)0x591b4f;
    pcStack_300 = (char *)FUN_00649940();
    ppvStack_304 = (void **)0x591b5a;
    FUN_005496c0();
    pcStack_300 = (char *)0x591b62;
    FUN_00592010();
    local_4._0_1_ = 5;
    FUN_00649950();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
    iVar1 = FUN_00591c00();
    if (iVar1 != 0) {
      FUN_00591c30();
    }
    iVar1 = FUN_00592920();
    ppvStack_304 = *(void ***)(iVar1 + 0x1b0);
    pcStack_300 = (char *)0x1;
    ppuStack_308 = (undefined1 **)0x591bb1;
    iVar1 = FUN_005b7390();
    if (iVar1 != 0) {
      pcStack_300 = (char *)0x591bc4;
      FUN_0064a2e0();
    }
  }
  local_4 = 0xffffffff;
  FUN_00649ba0();
  ExceptionList = local_c;
  return;
}

