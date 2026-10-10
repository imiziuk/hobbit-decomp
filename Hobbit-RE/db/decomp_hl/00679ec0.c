
int FUN_00679ec0(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6dd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_voice_mgr__UpdateStateRunn_00752c40);
  local_4 = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_00649600(s_audio_voice_mgr__UpdateVoice3d_00752c20);
    iVar4 = *(int *)(param_1 + 8);
    local_4._0_1_ = 1;
    *(float *)(param_1 + 0xa4) =
         *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0x54) * *(float *)(iVar4 + 0x16c);
    *(float *)(param_1 + 0xac) =
         *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0x58) * *(float *)(iVar4 + 0x178);
    *(float *)(param_1 + 0xb4) =
         *(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0x60) * *(float *)(iVar4 + 0x184);
    *(float *)(param_1 + 0xbc) =
         *(float *)(param_1 + 0xb8) * *(float *)(param_1 + 100) * *(float *)(iVar4 + 400);
    iVar4 = *(int *)(param_1 + 0x10);
    if (param_1 + 0xc != iVar4) {
      do {
        iVar1 = *(int *)(iVar4 + 8);
        FUN_00659300(*(float *)(iVar1 + 0xa4) * *(float *)(iVar4 + 0x48),
                     *(float *)(iVar1 + 0xac) * *(float *)(iVar4 + 0x4c),
                     *(undefined4 *)(iVar4 + 0x50),
                     *(float *)(iVar1 + 0xb4) * *(float *)(iVar4 + 0x54),
                     *(float *)(iVar1 + 0xbc) * *(float *)(iVar4 + 0x58),param_1 + 0xd0,
                     (float *)(iVar4 + 0x6c),iVar4 + 0x5c);
        fVar2 = *(float *)(iVar4 + 0x74) * *(float *)(iVar4 + 0x24) *
                *(float *)(*(int *)(iVar4 + 8) + 0x8c) * *(float *)(iVar4 + 0x6c);
        if (0 < DAT_007eda44) {
          fVar2 = fVar2 * *(float *)(iVar4 + 0x34);
        }
        *(float *)(iVar4 + 0x70) = fVar2;
        iVar4 = *(int *)(iVar4 + 4);
      } while (param_1 + 0xc != iVar4);
    }
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 6;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
  }
  if (*(int *)(param_1 + 200) != 0) {
    if (*(float *)(param_1 + 0x30) < DAT_006e92e4 != (*(float *)(param_1 + 0x30) == DAT_006e92e4)) {
      FUN_006795e0(param_1,1);
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return 0;
    }
    fVar2 = *(float *)(param_1 + 0x30) - param_2 * *(float *)(param_1 + 0xcc);
    *(float *)(param_1 + 0x30) = fVar2;
    if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    *(uint *)(param_1 + 0xdc) = *(uint *)(param_1 + 0xdc) | 4;
  }
  uVar3 = *(uint *)(param_1 + 0xdc);
  if (uVar3 != 0) {
    DAT_00806940 = 0;
    if ((uVar3 & 6) != 0) {
      FUN_00649600(s_audio_voice_mgr__UpdateVoiceVolu_00752bf4);
      local_4._0_1_ = 2;
      fVar2 = *(float *)(param_1 + 0x88) * *(float *)(param_1 + 0x30) *
              *(float *)(*(int *)(param_1 + 8) + 0x148);
      if (0 < DAT_007eda44) {
        fVar2 = fVar2 * *(float *)(param_1 + 0x40);
      }
      *(float *)(param_1 + 0x8c) = fVar2;
      for (iVar4 = *(int *)(param_1 + 0x10); param_1 + 0xc != iVar4; iVar4 = *(int *)(iVar4 + 4)) {
        fVar5 = (float10)FUN_0067a330(iVar4);
        *(float *)(iVar4 + 0x70) = (float)fVar5;
        if (*(int *)(iVar4 + 0x94) == 1) {
          FUN_0067a360(iVar4);
        }
        if ((*(int *)(iVar4 + 0x84) != 0) &&
           (*(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(param_1 + 0x48),
           *(int *)(iVar4 + 0x94) == 1)) {
          FUN_0067a380(iVar4);
        }
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
      uVar3 = uVar3 & 0xfffffff9;
      DAT_00806940 = 1;
    }
    if ((uVar3 & 4) != 0) {
      FUN_00649600(s_audio_voice_mgr__UpdateVoiceVolu_00752bd0);
      local_4 = CONCAT31(local_4._1_3_,3);
      fVar5 = (float10)FUN_0067a300(param_1);
      *(float *)(param_1 + 0x8c) = (float)fVar5;
      for (iVar4 = *(int *)(param_1 + 0x10); param_1 + 0xc != iVar4; iVar4 = *(int *)(iVar4 + 4)) {
        fVar5 = (float10)FUN_0067a330(iVar4);
        *(float *)(iVar4 + 0x70) = (float)fVar5;
        if (*(int *)(iVar4 + 0x94) == 1) {
          FUN_0067ada0(*(undefined4 *)(iVar4 + 0x10),(float)fVar5);
        }
      }
      local_4 = local_4 & 0xffffff00;
      FUN_00649720();
      uVar3 = uVar3 & 0xfffffffb;
      DAT_00806940 = 1;
    }
    if ((uVar3 & 2) != 0) {
      FUN_00649600(s_audio_voice_mgr__UpdateVoicePan_00752bb0);
      iVar4 = *(int *)(param_1 + 0x10);
      local_4._0_1_ = 4;
      for (; param_1 + 0xc != iVar4; iVar4 = *(int *)(iVar4 + 4)) {
        if ((*(int *)(iVar4 + 0x84) != 0) &&
           (*(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(param_1 + 0x48),
           *(int *)(iVar4 + 0x94) == 1)) {
          FUN_0067a380(iVar4);
        }
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649720();
      uVar3 = uVar3 & 0xfffffffd;
    }
    if ((uVar3 & 8) != 0) {
      FUN_0067a3c0(param_1);
      uVar3 = uVar3 & 0xfffffff7;
    }
    if ((uVar3 & 0x10) != 0) {
      FUN_0067a480(param_1);
      uVar3 = uVar3 & 0xffffffef;
    }
    if ((uVar3 & 0x20) != 0) {
      FUN_006790e0(param_1);
      uVar3 = uVar3 & 0xffffffdf;
    }
    if ((uVar3 & 1) != 0) {
      param_1 = FUN_00679c80(param_1);
      uVar3 = uVar3 & 0xfffffffe;
    }
    if ((param_1 != 0) && (*(uint *)(param_1 + 0xdc) = uVar3, DAT_00806940 != 0)) {
      FUN_00679570(param_1,1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return param_1;
}

