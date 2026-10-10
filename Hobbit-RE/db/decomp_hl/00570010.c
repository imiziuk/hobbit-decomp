
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00570010(int param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  float10 fVar9;
  undefined4 *puVar10;
  float *pfVar11;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db688;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_camera_mgr__MoveDesiredPosition_0073f98c);
  pfVar1 = (float *)(param_1 + 0x49c);
  local_4 = 0;
  FUN_00401f00(param_2 - *pfVar1,param_3 - *(float *)(param_1 + 0x4a0),
               param_4 - *(float *)(param_1 + 0x4a4));
  local_9c = *pfVar1;
  local_98 = *(float *)(param_1 + 0x4a0);
  local_94 = *(float *)(param_1 + 0x4a4);
  local_90 = *(float *)(*(int *)(param_1 + 0x730) + 0xc4) + DAT_006e92e8;
  if ((*(byte *)(param_1 + 0x484) & 0x10) != 0) {
    FUN_004357e0(&param_2);
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 1;
  }
  local_8c = 0.0;
  iVar6 = FUN_0041bcc0();
  fVar2 = local_80 + *(float *)(param_1 + 0x4a4);
  if (*(int *)(iVar6 + 0x6f8) == 0) {
    FUN_00401f00(local_88 + *pfVar1,local_84 + *(float *)(param_1 + 0x4a0),fVar2);
    FUN_005795c0(*(undefined4 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x494),pfVar1,&local_70,
                 local_90,0x20049810);
    FUN_005798f0(1);
    FUN_00577e70();
    iVar6 = 0;
    if (DAT_00773970 == 0) {
      FUN_00401f00(local_88 + *pfVar1,local_84 + *(float *)(param_1 + 0x4a0),
                   local_80 + *(float *)(param_1 + 0x4a4));
      FUN_004357e0(&local_70);
      uVar8 = 1;
      goto LAB_00570938;
    }
    if (0 < DAT_00773970) {
      do {
        if ((9 < iVar6) || (DAT_00773970 == 0)) break;
        local_90 = DAT_007734f0;
        FUN_00401f00(local_88 * DAT_007734f0,local_84 * DAT_007734f0,local_80 * DAT_007734f0);
        puVar10 = &DAT_00773510;
        local_9c = local_70 + local_9c;
        local_98 = local_98 + local_6c;
        local_94 = local_94 + local_68;
        fVar2 = DAT_006e92e8 - local_90;
        local_88 = local_88 * fVar2;
        local_84 = local_84 * fVar2;
        local_80 = local_80 * fVar2;
        fVar9 = (float10)FUN_00402020(&local_88);
        uVar8 = FUN_0042eea0(local_24,(float)fVar9,puVar10);
        FUN_004357e0(uVar8);
        uVar8 = FUN_00405080(local_18,&local_88,local_30);
        FUN_004357e0(uVar8);
        local_88 = local_7c;
        local_84 = local_78;
        local_80 = local_74;
        fVar2 = local_78 * local_78 + local_74 * local_74 + local_7c * local_7c;
        if (fVar2 < DAT_006e92e8 != (NAN(fVar2) || NAN(DAT_006e92e8))) break;
        FUN_00401f00(param_2 - *pfVar1,param_3 - *(float *)(param_1 + 0x4a0),
                     param_4 - *(float *)(param_1 + 0x4a4));
        local_4c = SQRT(local_54 * local_54 + local_50 * local_50 + local_58 * local_58);
        FUN_00401f00(param_2 - local_9c,param_3 - local_98,param_4 - local_94);
        local_8c = SQRT(local_60 * local_60 + local_5c * local_5c + local_64 * local_64);
        FUN_00401f00(*pfVar1 - local_9c,*(float *)(param_1 + 0x4a0) - local_98,
                     *(float *)(param_1 + 0x4a4) - local_94);
        fVar9 = (float10)FUN_00404890();
        if ((local_4c < local_8c == (local_4c == local_8c)) ||
           (fVar4 = (float10)*(float *)(*(int *)(param_1 + 0x730) + 0xb4), pfVar11 = pfVar1,
           fVar9 < fVar4 == (NAN(fVar9) || NAN(fVar4)))) {
          pfVar11 = &local_9c;
        }
        FUN_004357e0(pfVar11);
        iVar6 = iVar6 + 1;
      } while (0 < DAT_00773970);
      goto LAB_0057091e;
    }
  }
  else {
    pfVar11 = (float *)(param_1 + 0x4a8);
    local_8c = local_88 + *pfVar1;
    FUN_00401f00(local_8c - *pfVar11,
                 (local_84 + *(float *)(param_1 + 0x4a0)) - *(float *)(param_1 + 0x4ac),
                 fVar2 - *(float *)(param_1 + 0x4b0));
    FUN_00401f00(local_88 + *pfVar1,local_84 + *(float *)(param_1 + 0x4a0),
                 local_80 + *(float *)(param_1 + 0x4a4));
    fVar2 = local_90;
    FUN_00579080(*(undefined4 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x494),pfVar11,&local_70
                 ,local_90,local_90,0x20049810);
    _DAT_007778c8 = 0;
    _DAT_007778cc = 0;
    FUN_005798f0(1);
    FUN_00577e70();
    local_8c = 0.0;
    local_4c = DAT_00773520;
    local_48 = DAT_00773524;
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar6 = FUN_00406ce0(local_4c,local_48);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar6 == -1) {
      FUN_00649720();
    }
    else {
      uVar3 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
      local_90 = (float)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
      FUN_00649720();
      if (local_90 != 0.0) {
        local_8c = (float)FUN_004ab470();
      }
    }
    if ((DAT_00773970 < 1) || (local_8c != 0.0)) {
      FUN_00401f00(local_88 + *pfVar1,local_84 + *(float *)(param_1 + 0x4a0),
                   local_80 + *(float *)(param_1 + 0x4a4));
      FUN_004357e0(&local_70);
      local_90 = DAT_006e92e8 /
                 SQRT(local_9c * local_9c + local_98 * local_98 + local_94 * local_94);
      iVar6 = FUN_0064cf30(local_90);
      if (iVar6 == 0) {
        local_9c = 0.0;
        local_98 = 0.0;
        local_94 = 0.0;
      }
      else {
        local_9c = local_90 * local_9c;
        local_98 = local_98 * local_90;
        local_94 = local_94 * local_90;
      }
      fVar5 = (*(float *)(*(int *)(param_1 + 0x730) + 0x28) - *(float *)(param_1 + 0x698)) *
              _DAT_006e936c + *(float *)(param_1 + 0x698);
      local_9c = local_9c * fVar5;
      local_98 = local_98 * fVar5;
      local_94 = local_94 * fVar5;
      FUN_00401f00(local_9c + *pfVar11,local_98 + *(float *)(param_1 + 0x4ac),
                   local_94 + *(float *)(param_1 + 0x4b0));
      FUN_00579080(*(undefined4 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x494),pfVar11,
                   &local_70,fVar2,fVar2,0x20049810);
      FUN_00577e70();
      if (DAT_00773970 == 0) {
        iVar6 = *(int *)(param_1 + 0x730);
        fVar2 = (*(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x698)) * _DAT_006e936c +
                *(float *)(param_1 + 0x698);
        *(float *)(param_1 + 0x698) = fVar2;
        if (*(float *)(iVar6 + 0x28) < fVar2 != (NAN(*(float *)(iVar6 + 0x28)) || NAN(fVar2))) {
          fVar2 = *(float *)(iVar6 + 0x28);
        }
        *(float *)(param_1 + 0x698) = fVar2;
        uVar8 = 1;
        goto LAB_00570938;
      }
    }
    else {
      *(float *)(param_1 + 0x698) = *(float *)(param_1 + 0x698) * _DAT_006e936c;
      fVar2 = DAT_007734f0;
      if (_DAT_006ec98c < DAT_007734f0) {
        fVar2 = DAT_007734f0 - _DAT_006ec98c;
      }
      FUN_00401f00(local_9c * fVar2,local_98 * fVar2,local_94 * fVar2);
      FUN_00401f00(local_64 + *pfVar11,local_60 + *(float *)(param_1 + 0x4ac),
                   local_5c + *(float *)(param_1 + 0x4b0));
      if ((((NAN(local_7c) || NAN(*pfVar11)) != (local_7c == *pfVar11)) &&
          ((NAN(local_78) || NAN(*(float *)(param_1 + 0x4ac))) !=
           (local_78 == *(float *)(param_1 + 0x4ac)))) &&
         ((NAN(local_74) || NAN(*(float *)(param_1 + 0x4b0))) !=
          (local_74 == *(float *)(param_1 + 0x4b0)))) {
        local_48 = *(undefined4 *)(param_1 + 0x68c);
        uVar8 = *(undefined4 *)(param_1 + 0x688);
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 2;
        iVar6 = FUN_00406ce0(uVar8,local_48);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar6 == -1) {
          FUN_00649720();
          piVar7 = (int *)0x0;
        }
        else {
          uVar3 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
          piVar7 = (int *)(-(uint)((*(byte *)(uVar3 + 0x7f) & 0x10) != 0) & uVar3);
          FUN_00649720();
        }
        iVar6 = (**(code **)(*piVar7 + 0x30))();
        local_8c = *(float *)(param_1 + 0x734);
        FUN_00440b10(local_8c,*(undefined4 *)(iVar6 + 4));
        FUN_00401f00(local_64 + local_64,local_60 + local_60,local_5c + local_5c);
        FUN_00401f00(local_70 + local_7c,local_6c + local_78,local_68 + local_74);
        FUN_004357e0(&local_70);
      }
      FUN_00401f00(param_2 - local_7c,param_3 - local_78,param_4 - local_74);
      local_8c = SQRT(local_98 * local_98 + local_94 * local_94 + local_9c * local_9c);
      FUN_004357e0(&local_7c);
LAB_0057091e:
      if (local_8c < _DAT_006e95a8 == (NAN(local_8c) || NAN(_DAT_006e95a8))) {
        uVar8 = 0;
        goto LAB_00570938;
      }
    }
  }
  uVar8 = 1;
LAB_00570938:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar8;
}

