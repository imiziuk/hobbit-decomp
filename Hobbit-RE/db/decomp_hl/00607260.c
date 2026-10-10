
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00607260(int param_1,float *param_2,float *param_3,float param_4,float *param_5,float *param_6,
            undefined4 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float *pfVar10;
  float10 fVar11;
  float local_a4;
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
  uint local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  int local_3c;
  float local_38;
  int local_34;
  undefined1 local_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_90 = *param_3 - *param_2;
  local_8c = param_3[1] - param_2[1];
  local_88 = param_3[2] - param_2[2];
  uVar6 = FUN_00405080(local_30,param_1 + 0x18,param_1);
  uVar6 = FUN_00405080(&local_4c,param_1 + 0xc,param_1,uVar6);
  uVar6 = FUN_0042eb90(&local_24,uVar6);
  FUN_004357e0(uVar6);
  FUN_0042e1f0();
  fVar11 = (float10)FUN_00402020(param_1);
  local_54 = (float)-fVar11;
  local_84 = local_90 * local_60 + local_5c * local_8c + local_58 * local_88;
  if (((local_84 <= DAT_006e92e4) &&
      (-param_4 <= local_5c * param_2[1] + local_58 * param_2[2] + local_60 * *param_2 + local_54))
     && (local_5c * param_3[1] + local_58 * param_3[2] + local_60 * *param_3 + local_54 <= param_4))
  {
    local_44 = local_58 * param_4;
    local_9c = *param_2 - local_60 * param_4;
    local_98 = param_2[1] - local_5c * param_4;
    local_94 = param_2[2] - local_44;
    fVar9 = -((local_9c * local_60 + local_98 * local_5c + local_94 * local_58 + local_54) /
             local_84);
    if (fVar9 <= DAT_006e92e8) {
      if (DAT_006e92e4 <= fVar9) {
        local_44 = local_88 * fVar9;
        local_9c = local_90 * fVar9 + local_9c;
        local_98 = local_8c * fVar9 + local_98;
        local_94 = local_44 + local_94;
        local_80 = local_9c;
        local_7c = local_98;
        local_78 = local_94;
        iVar7 = FUN_00607060(&local_9c,param_1,&local_60);
        if (iVar7 != 0) {
          *param_5 = fVar9;
          *param_6 = local_80;
          param_6[1] = local_7c;
          param_6[2] = local_78;
          *param_7 = 0;
          return 1;
        }
      }
      *param_7 = 1;
      fVar9 = 0.0;
      local_34 = -8 - param_1;
      *param_5 = 2.0;
      local_64 = 0;
      local_38 = 2.8026e-45;
      local_3c = 0x18;
      local_40 = local_90 * local_90 + local_8c * local_8c + local_88 * local_88;
      pfVar10 = (float *)(param_1 + 8);
      do {
        local_9c = *(float *)(local_3c + param_1);
        local_98 = *(float *)(local_3c + 4 + param_1);
        local_94 = *(float *)(local_3c + 8 + param_1);
        local_68 = local_38;
        local_3c = local_34 + (int)pfVar10;
        local_38 = fVar9;
        FUN_00401f00(pfVar10[-2] - local_9c,pfVar10[-1] - local_98,*pfVar10 - local_94);
        FUN_00401f00(*param_2 - local_9c,param_2[1] - local_98,param_2[2] - local_94);
        fVar2 = local_74 * local_80 + local_7c * local_70 + local_78 * local_6c;
        fVar3 = local_74 * local_90 + local_70 * local_8c + local_6c * local_88;
        fVar1 = local_74 * local_74 + local_70 * local_70 + local_6c * local_6c;
        fVar4 = fVar3 * fVar3 - local_40 * fVar1;
        local_84 = fVar3 * fVar2 -
                   (local_80 * local_90 + local_7c * local_8c + local_78 * local_88) * fVar1;
        local_84 = local_84 + local_84;
        local_50 = local_84 * local_84 -
                   ((fVar2 * fVar2 + fVar1 * param_4 * param_4) -
                   (local_80 * local_80 + local_78 * local_78 + local_7c * local_7c) * fVar1) *
                   fVar4 * _DAT_006e99bc;
        if (local_50 < DAT_006e92e4 == (NAN(local_50) || NAN(DAT_006e92e4))) {
          if ((fVar4 < _DAT_006f40cc != (NAN(fVar4) || NAN(_DAT_006f40cc))) ||
             (_DAT_006ebfe4 < fVar4)) {
            local_a4 = (SQRT(local_50) - local_84) / (fVar4 + fVar4);
            fVar2 = (-local_84 - SQRT(local_50)) / (fVar4 + fVar4);
            if (fVar2 < local_a4 != (NAN(fVar2) || NAN(local_a4))) {
              local_a4 = fVar2;
            }
            if ((local_a4 < DAT_006e92e4 == (NAN(local_a4) || NAN(DAT_006e92e4))) &&
               (local_a4 <= DAT_006e92e8)) {
              FUN_00401f00(local_90 * local_a4,local_8c * local_a4,local_88 * local_a4);
              FUN_00401f00(local_18 + *param_2,local_14 + param_2[1],local_10 + param_2[2]);
              FUN_00401f00(local_24 - local_9c,local_20 - local_98,local_1c - local_94);
              fVar1 = (local_4c * local_74 + local_48 * local_70 + local_44 * local_6c) / fVar1;
              if ((DAT_006e92e4 <= fVar1) &&
                 ((fVar1 < DAT_006e92e8 != (fVar1 == DAT_006e92e8) &&
                  (local_a4 < *param_5 != (NAN(local_a4) || NAN(*param_5)))))) {
                *param_5 = local_a4;
                FUN_00401f00(local_74 * fVar1,local_70 * fVar1,local_6c * fVar1);
                uVar6 = FUN_00402130(local_c,&local_9c,local_30);
                FUN_004357e0(uVar6);
                local_64 = local_64 | 1 << (SUB41(fVar9,0) & 0x1f) | 1 << (SUB41(local_68,0) & 0x1f)
                ;
              }
            }
          }
        }
        else {
          local_64 = local_64 | 1 << (SUB41(fVar9,0) & 0x1f) | 1 << (SUB41(local_68,0) & 0x1f);
        }
        uVar5 = local_64;
        fVar9 = (float)((int)fVar9 + 1);
        pfVar10 = pfVar10 + 3;
      } while ((int)fVar9 < 3);
      if (local_64 != 7) {
        iVar7 = 0;
        do {
          if ((((uVar5 & 1 << ((byte)iVar7 & 0x1f)) == 0) &&
              (iVar8 = FUN_00606de0(param_2,&local_90,param_4,param_1,&local_68,local_30),
              iVar8 != 0)) && (local_68 < *param_5 != (NAN(local_68) || NAN(*param_5)))) {
            *param_5 = local_68;
            FUN_004357e0(local_30);
          }
          iVar7 = iVar7 + 1;
          param_1 = param_1 + 0xc;
        } while (iVar7 < 3);
      }
      if (*param_5 < _DAT_006e999c != (NAN(*param_5) || NAN(_DAT_006e999c))) {
        return 1;
      }
    }
  }
  return 0;
}

