
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00607990(float param_1,float *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  undefined1 local_1c [12];
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = (int)param_1;
  uVar4 = FUN_00405080(local_1c,(int)param_1 + 0x18,param_1);
  uVar4 = FUN_00405080(&local_34,(int)param_1 + 0xc,param_1,uVar4);
  pfVar5 = (float *)FUN_0042eb90(&local_4c,uVar4);
  local_10 = *pfVar5;
  local_c = pfVar5[1];
  local_8 = pfVar5[2];
  FUN_0042e1f0();
  fVar7 = (float10)FUN_00402020(param_1);
  local_4 = (float)-fVar7;
  if ((DAT_006e92e4 <= local_10 * *param_2 + local_8 * param_2[2] + local_c * param_2[1] + local_4)
     && (fVar2 = local_10 * *param_3 + local_c * param_3[1] + local_8 * param_3[2] + local_4,
        fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4)))) {
    pfVar5 = &local_10;
    FUN_00405080(local_1c,param_3,param_2,pfVar5);
    fVar7 = (float10)FUN_00402020(pfVar5);
    param_1 = (float)fVar7;
    if ((NAN(fVar7) || NAN((float10)DAT_006e92e4)) == (fVar7 == (float10)DAT_006e92e4)) {
      fVar7 = (float10)FUN_00439830(param_2);
      param_1 = (float)-(fVar7 / (float10)param_1);
    }
    if ((param_1 < DAT_006e92e4 == (NAN(param_1) || NAN(DAT_006e92e4))) && (param_1 <= DAT_006e92e8)
       ) {
      local_2c = param_3[2] - param_2[2];
      local_4c = (*param_3 - *param_2) * param_1;
      FUN_00401f00(local_4c + *param_2,(param_3[1] - param_2[1]) * param_1 + param_2[1],
                   local_2c * param_1 + param_2[2]);
      iVar6 = 0;
      pfVar5 = (float *)(iVar3 + 4);
      while( true ) {
        iVar6 = iVar6 + 1;
        pfVar1 = (float *)(iVar3 + (iVar6 % 3) * 0xc);
        FUN_00401f00(*pfVar1 - pfVar5[-1],pfVar1[1] - *pfVar5,
                     *(float *)(iVar3 + 8 + (iVar6 % 3) * 0xc) - pfVar5[1]);
        FUN_00401f00(local_c * local_44 - local_8 * local_48,
                     local_8 * local_4c - local_44 * local_10,
                     local_48 * local_10 - local_c * local_4c);
        local_24 = local_30;
        local_28 = local_34;
        local_20 = local_2c;
        FUN_00401f00(local_40 - pfVar5[-1],local_3c - *pfVar5,local_38 - pfVar5[1]);
        fVar7 = (float10)FUN_00402020(local_1c);
        if (fVar7 < (float10)_DAT_006f5518 != (NAN(fVar7) || NAN((float10)_DAT_006f5518))) break;
        pfVar5 = pfVar5 + 3;
        if (2 < iVar6) {
          *param_4 = param_1;
          FUN_004357e0(&local_40);
          return 1;
        }
      }
    }
  }
  return 0;
}

