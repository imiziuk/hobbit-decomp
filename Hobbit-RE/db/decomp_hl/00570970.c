
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00570970(int param_1,float param_2)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  int local_70;
  int local_6c;
  float local_60 [3];
  float local_54;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db6b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_camera_mgr__CorrectCameraPositio_0073f9ac);
  local_4 = 0;
  FUN_0056fe40(&local_18,param_2);
  fVar1 = *(float *)(*(int *)(param_1 + 0x730) + 0xc4);
  local_6c = 0;
  local_1c = local_10 + *(float *)(param_1 + 0x4b0);
  local_20 = local_14 + *(float *)(param_1 + 0x4ac);
  local_24 = local_18 + *(float *)(param_1 + 0x4a8);
  local_60[0] = local_1c - *(float *)(param_1 + 0x4a4);
  fVar5 = local_20 - *(float *)(param_1 + 0x4a0);
  fVar3 = local_24 - *(float *)(param_1 + 0x49c);
  local_54 = SQRT(local_60[0] * local_60[0] + fVar5 * fVar5 + fVar3 * fVar3);
  if (local_54 < fVar1 == (NAN(local_54) || NAN(fVar1))) {
    local_60[0] = fVar1 * _DAT_006e936c;
    FUN_005795c0(*(undefined4 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x494),&local_24,
                 (float *)(param_1 + 0x49c),local_60[0],0x20049810);
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    FUN_005798f0(4);
    FUN_00577e70();
    local_70 = 0;
    if (0 < DAT_00773970) {
      pfVar8 = (float *)&DAT_00773508;
      do {
        fVar1 = pfVar8[6];
        fVar3 = pfVar8[7];
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 1;
        iVar6 = FUN_00406ce0(fVar1,fVar3);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar6 == -1) {
          FUN_00649720();
LAB_00570b1f:
          local_3c = local_3c + pfVar8[-2];
          local_6c = local_6c + 1;
          local_38 = local_38 + pfVar8[-1];
          local_34 = local_34 + *pfVar8;
        }
        else {
          uVar4 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
          bVar2 = *(byte *)(uVar4 + 0x7f);
          FUN_00649720();
          if (((-(uint)((bVar2 & 0x10) != 0) & uVar4) == 0) || (iVar6 = FUN_004ab470(), iVar6 == 0))
          goto LAB_00570b1f;
        }
        local_70 = local_70 + 1;
        pfVar8 = pfVar8 + 0x12;
      } while (local_70 < DAT_00773970);
    }
    FUN_005795c0(*(undefined4 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x494),param_1 + 0x49c,
                 &local_24,local_60[0],0x20049810);
    local_48 = 0.0;
    local_44 = 0.0;
    local_40 = 0.0;
    FUN_005798f0(4);
    FUN_00577e70();
    local_70 = 0;
    if (0 < DAT_00773970) {
      pfVar8 = (float *)&DAT_00773508;
      do {
        fVar1 = pfVar8[6];
        fVar3 = pfVar8[7];
        FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
        local_4._0_1_ = 2;
        iVar6 = FUN_00406ce0(fVar1,fVar3);
        local_4 = (uint)local_4._1_3_ << 8;
        if (iVar6 == -1) {
          FUN_00649720();
LAB_00570c44:
          local_48 = local_48 + pfVar8[-2];
          local_6c = local_6c + 1;
          local_44 = local_44 + pfVar8[-1];
          local_40 = local_40 + *pfVar8;
        }
        else {
          uVar4 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
          bVar2 = *(byte *)(uVar4 + 0x7f);
          FUN_00649720();
          if (((-(uint)((bVar2 & 0x10) != 0) & uVar4) == 0) || (iVar6 = FUN_004ab470(), iVar6 == 0))
          goto LAB_00570c44;
        }
        local_70 = local_70 + 1;
        pfVar8 = pfVar8 + 0x12;
      } while (local_70 < DAT_00773970);
    }
    if (local_6c == 0) {
      param_1 = param_1 + 0x4a8;
    }
    else {
      local_60[0] = *(float *)(param_1 + 0x4d8) - *(float *)(param_1 + 0x4a4);
      fVar1 = *(float *)(param_1 + 0x4d4) - *(float *)(param_1 + 0x4a0);
      fVar3 = *(float *)(param_1 + 0x4d0) - *(float *)(param_1 + 0x49c);
      fVar5 = DAT_006e92e8 / SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
      iVar6 = FUN_0064cf30(fVar5);
      if (iVar6 == 0) {
        local_3c = 0.0;
        local_38 = 0.0;
        local_34 = 0.0;
      }
      else {
        local_3c = fVar5 * local_3c;
        local_38 = local_38 * fVar5;
        local_34 = local_34 * fVar5;
      }
      fVar5 = DAT_006e92e8 / SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40);
      iVar6 = FUN_0064cf30(fVar5);
      if (iVar6 == 0) {
        local_48 = 0.0;
        local_44 = 0.0;
        local_40 = 0.0;
      }
      else {
        local_48 = fVar5 * local_48;
        local_44 = local_44 * fVar5;
        local_40 = local_40 * fVar5;
      }
      fVar5 = DAT_006e92e8 / SQRT(local_60[0] * local_60[0] + fVar1 * fVar1 + fVar3 * fVar3);
      iVar6 = FUN_0064cf30(fVar5);
      if (iVar6 == 0) {
        local_30 = 0.0;
        local_2c = 0.0;
        local_28 = 0.0;
      }
      else {
        local_30 = fVar5 * fVar3;
        local_2c = fVar5 * fVar1;
        local_28 = fVar5 * local_60[0];
      }
      param_2 = local_54 * param_2;
      FUN_00401f00(local_48 + local_3c,local_44 + local_38,local_40 + local_34);
      uVar7 = FUN_00402130(&local_48,&local_3c,&local_30,param_2);
      uVar7 = FUN_00402160(&local_30,uVar7);
      param_1 = FUN_00402130(local_60,(float *)(param_1 + 0x49c),uVar7);
    }
    FUN_004357e0(param_1);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

