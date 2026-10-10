
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_006082e0(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  float *pfVar7;
  float10 fVar8;
  int local_33c;
  float local_338;
  float local_334;
  float local_330;
  float *local_32c;
  int local_328;
  float local_324;
  int local_320;
  int local_31c;
  float local_318;
  float local_314;
  float local_304;
  float local_300;
  float local_2f4 [6];
  undefined1 local_2dc [12];
  undefined1 local_2d0 [12];
  undefined1 local_2c4 [12];
  undefined1 local_2b8 [12];
  float local_2ac [21];
  float local_258 [18];
  undefined1 local_210 [96];
  undefined1 local_1b0 [432];
  
  FUN_00607f20(param_1,local_1b0);
  iVar4 = 0;
  local_32c = local_2f4;
  local_328 = 0;
  puVar5 = local_1b0;
  pfVar7 = local_258;
  local_33c = 0;
  local_320 = 0xc;
  do {
    iVar2 = FUN_00607260(puVar5,param_2,param_3,param_4,local_32c,pfVar7,&local_31c);
    if (iVar2 != 0) {
      if (local_31c == 0) {
        uVar3 = FUN_00405080(local_2d0,puVar5 + 0x18,puVar5);
        uVar3 = FUN_00405080(local_2c4,puVar5 + 0xc,puVar5,uVar3);
        uVar3 = FUN_0042eb90(local_2dc,uVar3);
        FUN_004357e0(uVar3);
        FUN_0042e1f0();
        fVar8 = (float10)FUN_00402020(puVar5);
        *(float *)((int)local_2ac + iVar4) = (float)-fVar8;
      }
      else {
        local_324 = *local_32c;
        local_304 = param_3[2] - param_2[2];
        local_300 = (*param_3 - *param_2) * local_324;
        local_318 = local_300 + *param_2;
        local_314 = (param_3[1] - param_2[1]) * local_324 + param_2[1];
        local_338 = local_318 - *pfVar7;
        local_334 = local_314 - pfVar7[1];
        local_330 = (local_304 * local_324 + param_2[2]) - pfVar7[2];
        fVar1 = DAT_006e92e8 /
                SQRT(local_338 * local_338 + local_334 * local_334 + local_330 * local_330);
        iVar2 = FUN_0064cf30(fVar1);
        if (iVar2 == 0) {
          local_338 = 0.0;
          local_334 = 0.0;
          local_330 = 0.0;
        }
        else {
          local_338 = local_338 * fVar1;
          local_334 = local_334 * fVar1;
          local_330 = local_330 * fVar1;
        }
        FUN_004357e0(&local_338);
        fVar8 = (float10)FUN_00402000();
        if (((float10)_DAT_006e92f0 < fVar8 == ((float10)_DAT_006e92f0 == fVar8)) ||
           (fVar8 < (float10)_DAT_006e92ec == (fVar8 == (float10)_DAT_006e92ec))) {
          FUN_00448290((float)((float10)DAT_006e92e8 / SQRT(fVar8)));
        }
        fVar8 = (float10)FUN_00402020(pfVar7);
        *(float *)((int)local_2ac + iVar4) = (float)-fVar8;
        local_33c = iVar4;
      }
      FUN_004b8740(puVar5,puVar5 + 0xc,puVar5 + 0x18);
      local_328 = local_328 + 1;
      local_32c = local_32c + 1;
      pfVar7 = pfVar7 + 3;
      iVar4 = local_33c + 0x10;
      local_33c = iVar4;
    }
    puVar5 = puVar5 + 0x24;
    local_320 = local_320 + -1;
  } while (local_320 != 0);
  if (0 < local_328) {
    iVar4 = 0;
    *param_5 = 2.0;
    if (0 < local_328) {
      pfVar7 = local_258;
      iVar6 = 0;
      local_320 = 0;
      iVar2 = local_328;
      do {
        if (local_2f4[iVar4] < *param_5 != (NAN(local_2f4[iVar4]) || NAN(*param_5))) {
          *param_5 = local_2f4[iVar4];
          FUN_004357e0(pfVar7);
          FUN_0042fda0(local_210 + iVar6);
          FUN_0042fda0(local_2b8 + iVar6);
          iVar2 = local_328;
        }
        iVar4 = iVar4 + 1;
        pfVar7 = pfVar7 + 3;
        iVar6 = iVar6 + 0x10;
      } while (iVar4 < iVar2);
      if ((*param_5 < DAT_006e92e4 == (NAN(*param_5) || NAN(DAT_006e92e4))) &&
         (*param_5 <= DAT_006e92e8)) {
        return 1;
      }
    }
  }
  return 0;
}

