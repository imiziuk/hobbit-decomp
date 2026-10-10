
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00489040(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  float *pfVar9;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54 [2];
  int local_4c;
  int local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2dd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_object__OnAdvanceLogic_00729284);
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x55) & 0x40) != 0) {
    fVar1 = (float)param_1[0x6f] - param_2;
    param_1[0x6f] = (int)fVar1;
    if (fVar1 < DAT_006e92e4 != (fVar1 == DAT_006e92e4)) {
      (**(code **)(*param_1 + 0x114))();
    }
  }
  if ((param_1[0x56] == 0 && param_1[0x57] == 0) || (iVar6 = FUN_0048a760(), iVar6 != 0)) {
    if ((*(byte *)(param_1 + 0x55) & 4) != 0) {
      if ((*(byte *)(param_1 + 0x55) & 2) == 0) {
        FUN_00648a10(param_1 + 0x2a,&local_2c);
        puVar7 = (undefined1 *)FUN_00647f20(&local_2c,&DAT_00729210);
        if (puVar7 == (undefined1 *)0x0) {
          iVar6 = FUN_00647cf0(&local_2c);
          puVar7 = (undefined1 *)((int)&local_2c + iVar6);
        }
        *puVar7 = 0;
        FUN_006501d0(&local_2c);
        local_4._0_1_ = 1;
        FUN_006b75f0(&local_2c);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_006501e0();
        param_1[0x6e] = -1;
        *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) | 2;
      }
      else {
        FUN_006b7680();
      }
      *(byte *)(param_1 + 0x55) = *(byte *)(param_1 + 0x55) & 0xfb | 8;
      if (DAT_0075cf1c != 0) {
        local_48 = param_1[3];
        local_4c = param_1[2];
        local_54[0] = 0x16;
        FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),local_54)
        ;
      }
    }
    fVar1 = (float)param_1[0x6d];
    param_1[0x6d] = (int)(param_2 + fVar1);
    if (param_2 + fVar1 <= _DAT_006ed3a8) {
      if (param_1[0x6e] != 0) {
        if ((param_1[0x6e] & 2U) != 0) {
          uVar8 = (**(code **)(*param_1 + 0x30))();
          FUN_006b76c0(uVar8);
        }
        if ((*(byte *)(param_1 + 0x6e) & 1) != 0) {
          FUN_006b76a0(param_1 + 0x4a);
        }
        if ((*(byte *)(param_1 + 0x6e) & 4) != 0) {
          FUN_006b76e0(param_1 + 5);
        }
        if ((*(byte *)(param_1 + 0x6e) & 8) != 0) {
          FUN_006b7700(param_1 + 0x4d);
        }
      }
      if (_DAT_006e9350 < param_2) {
        FUN_006b7640(param_2 * (float)param_1[0x54]);
      }
      if ((*(byte *)(param_1 + 0x55) & 0x20) == 0) {
        pfVar9 = (float *)FUN_006b7740();
        fVar1 = pfVar9[3];
        fStack_44 = *pfVar9;
        fStack_40 = pfVar9[1];
        fStack_3c = pfVar9[2];
        fStack_34 = pfVar9[4];
        fStack_30 = pfVar9[5];
        fVar3 = fStack_30 - fStack_3c;
        fVar4 = fStack_34 - fStack_40;
        fVar2 = fVar3;
        if (fVar3 < fVar4) {
          fVar2 = fVar4;
        }
        fVar5 = fVar1 - fStack_44;
        if ((fVar1 - fStack_44 <= fVar2) && (fVar5 = fVar3, fVar3 < fVar4)) {
          fVar5 = fVar4;
        }
        if ((fVar1 < fStack_44) || (_DAT_006ed4e0 < fVar5)) {
          FUN_00401f00((float)param_1[5] - _DAT_006e9354,(float)param_1[6] - _DAT_006e9354,
                       (float)param_1[7] - _DAT_006e9354);
          local_2c = fStack_6c;
          fStack_28 = fStack_68;
          fStack_24 = fStack_64;
          uStack_60 = 0x43160000;
          uStack_5c = 0x43160000;
          uStack_58 = 0x43160000;
          uVar8 = FUN_00402130(local_54,param_1 + 5,&uStack_60);
          FUN_004357e0(uVar8);
          fStack_44 = local_2c;
          fStack_40 = fStack_28;
          fStack_3c = fStack_24;
          fStack_34 = fStack_1c;
          fStack_30 = fStack_18;
          fVar1 = fStack_20;
        }
        fVar1 = fVar1 - (float)param_1[5];
        fStack_34 = fStack_34 - (float)param_1[6];
        fStack_30 = fStack_30 - (float)param_1[7];
        fVar2 = fStack_44 - (float)param_1[5];
        fStack_40 = fStack_40 - (float)param_1[6];
        fStack_3c = fStack_3c - (float)param_1[7];
        if ((float)param_1[0xe] - (float)param_1[0xb] < fVar1 - fVar2) {
          param_1[0xb] = (int)fVar2;
          param_1[0x6e] = param_1[0x6e] | 0x10;
          param_1[0xe] = (int)fVar1;
        }
        if ((float)param_1[0xf] - (float)param_1[0xc] < fStack_34 - fStack_40) {
          param_1[0xf] = (int)fStack_34;
          param_1[0xc] = (int)fStack_40;
          param_1[0x6e] = param_1[0x6e] | 0x10;
        }
        if ((float)param_1[0x10] - (float)param_1[0xd] < fStack_30 - fStack_3c) {
          param_1[0xd] = (int)fStack_3c;
          param_1[0x10] = (int)fStack_30;
          param_1[0x6e] = param_1[0x6e] | 0x10;
        }
        fVar3 = ((float)param_1[0x10] - (float)param_1[0xd]) * _DAT_006e936c;
        fVar4 = ((float)param_1[0xf] - (float)param_1[0xc]) * _DAT_006e936c;
        fVar5 = ((float)param_1[0xe] - (float)param_1[0xb]) * _DAT_006e936c;
        if (_DAT_006ed3b4 < fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5) {
          param_1[0xb] = (int)fVar2;
          param_1[0xc] = (int)fStack_40;
          param_1[0xd] = (int)fStack_3c;
          param_1[0xe] = (int)fVar1;
          param_1[0x10] = (int)fStack_30;
          param_1[0xf] = (int)fStack_34;
          param_1[0x6e] = param_1[0x6e] | 0x10;
        }
        if (((*(byte *)(param_1 + 0x55) & 0x20) == 0) && ((*(byte *)(param_1 + 0x6e) & 0x14) != 0))
        {
          (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
        }
      }
      if ((((*(byte *)(param_1 + 0x55) & 8) != 0) && ((*(byte *)(param_1 + 0x55) & 0x10) != 0)) &&
         (iVar6 = FUN_006b7690(), iVar6 != 0)) {
        if ((char)param_1[0x55] < '\0') {
          (**(code **)(*param_1 + 0x110))();
        }
        else {
          FUN_006b7660();
          FUN_004aaa60();
        }
      }
      param_1[0x6e] = 0;
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return;
    }
  }
  else if ((*(byte *)(param_1 + 0x55) & 0x10) != 0) {
    FUN_006b7660();
    FUN_004aaa60();
    FUN_0064e7d0(s_WARNING__Killing_FXObject_becaus_00729248);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

