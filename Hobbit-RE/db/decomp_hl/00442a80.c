
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00442a80(int param_1,float *param_2,float param_3,float param_4,float param_5,undefined4 param_6
            ,undefined4 param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_1c [3];
  float local_10;
  float local_c;
  float local_8;
  
  if (*(float *)(param_1 + 0x7f8) <= DAT_006e92e4) {
    local_70 = 0;
    local_8 = 0.0;
    local_c = 0.0;
    local_10 = 0.0;
    local_50 = 0.0;
    local_54 = 0.0;
    local_58 = 0.0;
    if (*(int *)(*(int *)(param_1 + 0x450) + 0xec) != 0) {
      FUN_0065f190(s_>wall_grab_info_00724343 + 1);
    }
    local_68 = 0.0;
    local_6c = 0;
    local_60 = param_3 - param_5 * _DAT_006e936c;
    do {
      local_74 = 0;
      local_64 = 0.0;
      local_5c = (DAT_006e92e8 - (float)local_6c * _DAT_006e936c) *
                 *(float *)(*(int *)(param_1 + 0x450) + 0x74);
      do {
        fVar1 = local_64;
        local_28 = 0;
        local_20 = 0;
        local_24 = (float)(int)local_64 * param_5 + local_60;
        local_4c = 0.0;
        local_48 = 0.0;
        local_44 = 1.0;
        FUN_00429030(&local_28);
        local_4c = local_4c * param_4;
        local_48 = local_48 * param_4;
        local_44 = local_44 * param_4;
        local_34 = *param_2;
        local_30 = local_5c + param_2[1];
        local_64 = param_2[2];
        local_40 = local_34 + local_4c;
        local_3c = local_48 + local_30;
        local_38 = local_44 + local_64;
        iVar5 = *(int *)(*(int *)(param_1 + 0x450) + 0xec);
        local_2c = local_64;
        local_1c[0] = local_34;
        if (iVar5 != 0) {
          uVar6 = 0;
          FUN_00406b70(0xffff0000);
          FUN_00669ca0(&local_34,&local_40,iVar5,uVar6);
        }
        FUN_00579720(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_34,&local_40
                     ,0x1800);
        FUN_00577e70();
        if (DAT_00773970 != 0) {
          uVar4 = FUN_0057dcc0(&DAT_00773520,DAT_00773528);
          if ((uVar4 & 1) != 0) {
            fVar2 = DAT_00773504;
            if (DAT_00773504 < DAT_006e92e4 != (NAN(DAT_00773504) || NAN(DAT_006e92e4))) {
              fVar2 = -DAT_00773504;
            }
            if (fVar2 < _DAT_006e936c != (NAN(fVar2) || NAN(_DAT_006e936c))) {
              local_10 = local_10 + DAT_00773500;
              local_70 = local_70 + 1;
              local_74 = local_74 + 1;
              local_c = local_c + DAT_00773504;
              local_8 = local_8 + DAT_00773508;
              local_58 = local_58 + DAT_007734f4;
              local_54 = local_54 + DAT_007734f8;
              local_50 = local_50 + DAT_007734fc;
            }
          }
        }
        local_64 = (float)((int)fVar1 + 1);
      } while ((int)local_64 < 2);
      if (0 < local_74) {
        local_68 = (float)((int)local_68 + 1);
      }
      local_6c = local_6c + 1;
    } while (local_6c < 3);
    if ((local_70 == 0) || (local_68 == 0.0)) {
      if (*(int *)(*(int *)(param_1 + 0x450) + 0xec) != 0) {
        FUN_0065f430();
      }
    }
    else {
      fVar1 = DAT_006e92e8 / SQRT(local_10 * local_10 + local_c * local_c + local_8 * local_8);
      iVar5 = FUN_0064cf30(fVar1);
      if (iVar5 == 0) {
        local_10 = 0.0;
        local_c = 0.0;
        local_8 = 0.0;
      }
      else {
        local_10 = fVar1 * local_10;
        local_c = local_c * fVar1;
        local_8 = local_8 * fVar1;
      }
      local_68 = DAT_006e92e8 / (float)local_70;
      local_50 = local_50 * local_68;
      fVar1 = param_9[1];
      fVar2 = param_9[2];
      fVar3 = *param_9;
      param_8[1] = local_c;
      param_8[2] = local_8;
      *param_8 = local_10;
      param_8[3] = -(local_10 * fVar3 + local_8 * fVar2 + local_c * fVar1);
      param_9[2] = local_50;
      *param_9 = local_68 * local_58;
      param_9[1] = local_54 * local_68;
      iVar5 = *(int *)(*(int *)(param_1 + 0x450) + 0xec);
      if (iVar5 != 0) {
        uVar6 = 0;
        FUN_00406b70(0xff0000ff);
        uVar6 = FUN_00402160(local_1c,param_8,param_4,iVar5,uVar6);
        uVar6 = FUN_00402130(&local_28,param_9,uVar6);
        FUN_00669ca0(param_9,uVar6);
      }
      if (*(int *)(*(int *)(param_1 + 0x450) + 0xec) != 0) {
        FUN_0065f430();
      }
      FUN_0064c8e0(param_3,&local_68,&local_64);
      if (local_c * DAT_006e92e4 +
          (local_64 * DAT_006e92e4 + local_68) * local_10 +
          local_8 * (local_64 - local_68 * DAT_006e92e4) <= _DAT_006ec050) {
        return 1;
      }
    }
  }
  return 0;
}

