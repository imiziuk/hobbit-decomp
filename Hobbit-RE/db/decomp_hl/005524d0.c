
/* WARNING: Removing unreachable block (ram,0x0055286d) */

void FUN_005524d0(undefined4 param_1,int param_2,float *param_3,float *param_4,float param_5,
                 float param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int local_70;
  float local_6c;
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
  float local_28;
  float local_1c;
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  *(float **)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
  DAT_007f23d4 = DAT_007f23d4 + 1;
  iVar7 = (-(uint)(param_2 != 0) & 0xf) + 0xf;
  pfVar8 = (float *)((int)DAT_007f23cc - (iVar7 * 0xc + 0x1bU & 0xfffffff0));
  DAT_007f23cc = pfVar8;
  *pfVar8 = *param_3;
  pfVar8[1] = param_3[1];
  pfVar8[2] = param_3[2];
  pfVar8[iVar7 * 3] = *param_4;
  pfVar6 = pfVar8 + 2;
  pfVar8[iVar7 * 3 + 1] = param_4[1];
  pfVar8[iVar7 * 3 + 2] = param_4[2];
  FUN_00401f00(*param_4 - *param_3,param_4[1] - param_3[1],param_4[2] - param_3[2]);
  FUN_00552890(pfVar8,0,iVar7,
               SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40) * param_7);
  FUN_0065fce0(0);
  FUN_00672260(&local_30);
  local_40 = 0.0;
  local_44 = 0.0;
  local_48 = 0.0;
  local_70 = 0;
  do {
    fVar2 = local_64;
    if (local_70 < iVar7) {
      FUN_00401f00(pfVar6[1] - pfVar6[-2],pfVar6[2] - pfVar6[-1],pfVar6[3] - *pfVar6);
      local_68 = local_5c;
      local_6c = local_60;
      local_64 = local_58;
      FUN_00401f00(local_30 - pfVar6[-2],local_2c - pfVar6[-1],local_28 - *pfVar6);
      FUN_00401f00(local_34 * local_5c - local_38 * local_58,
                   local_58 * local_3c - local_34 * local_60,
                   local_38 * local_60 - local_5c * local_3c);
      local_6c = local_54;
      local_68 = local_50;
      local_64 = local_4c;
      fVar2 = DAT_006e92e8 / SQRT(local_54 * local_54 + local_50 * local_50 + local_4c * local_4c);
      iVar4 = FUN_0064cf30(fVar2);
      if (iVar4 == 0) {
        local_6c = 0.0;
        local_68 = 0.0;
        fVar2 = DAT_006e92e4;
      }
      else {
        local_6c = fVar2 * local_6c;
        local_68 = local_68 * fVar2;
        fVar2 = local_64 * fVar2;
      }
    }
    fVar3 = local_44;
    local_1c = local_40;
    fVar1 = local_48 + local_6c;
    local_48 = local_6c;
    local_44 = local_68;
    local_68 = fVar3 + local_68;
    local_64 = local_40 + fVar2;
    local_6c = fVar1;
    local_40 = fVar2;
    FUN_0042e1f0();
    local_6c = local_6c * param_5;
    pfVar8 = pfVar6 + -2;
    local_68 = local_68 * param_5;
    local_64 = local_64 * param_5;
    FUN_00401f00(*pfVar8 - local_6c,pfVar6[-1] - local_68,*pfVar6 - local_64);
    FUN_004357e0(local_18);
    FUN_004357e0(pfVar8);
    uVar5 = FUN_00402130(local_c,pfVar8,&local_6c);
    FUN_004357e0(uVar5);
    param_5 = param_5 + param_6;
    local_70 = local_70 + 1;
    pfVar6 = pfVar6 + 3;
  } while (local_70 <= iVar7);
  DAT_007f23cc = (float *)*(undefined4 *)(&DAT_007f23dc + DAT_007f23d4 * 4);
  DAT_007f23d4 = DAT_007f23d4 + -1;
  return;
}

