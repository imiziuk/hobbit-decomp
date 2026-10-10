
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004405f0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fStack_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  param_1[0x1d7] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d5] = 0;
  if (param_1[0x1ac] != 0) {
    FUN_0043a3f0(1,s_C__projects_meridian_Support_Obj_00724060,0xe13);
  }
  param_1[0x283] = (int)((float)param_1[0x283] - (float)param_1[0x248]);
  if (((0 < param_1[0x14d]) ||
      (local_30 = (float)(param_1[0x14b] + -2),
      (float)(int)local_30 < (float)param_1[0x14c] !=
      ((float)(int)local_30 == (float)param_1[0x14c]))) &&
     (iVar2 = FUN_00442480(s_STONE_ATTACK_00720cf4), iVar2 != 0)) {
    FUN_00549470(param_1 + 0x115);
    FUN_00549580(param_1 + 0x115);
    uVar10 = 0x3e000000;
    uVar9 = 1;
    uVar8 = 0;
    uVar3 = FUN_0053cc70(s_IDLE_NO_WEAPON_007207fc);
    FUN_00540840(uVar3,uVar8,uVar9,uVar10);
  }
  local_30 = (float)param_1[0x186];
  local_2c = (float)param_1[0x187];
  if (DAT_00762b0c != 0) {
    local_2c = -local_2c;
  }
  FUN_0056b520(&local_30,param_1[0x248]);
  local_18 = *(float *)(DAT_00772b08 + 0x94);
  local_30 = DAT_00772a50;
  local_14 = *(float *)(DAT_00772b08 + 0x98);
  local_10 = *(float *)(DAT_00772b08 + 0x9c);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x30))();
  FUN_00428790(puVar4[2]);
  FUN_004286f0(*puVar4);
  FUN_00428740(puVar4[1]);
  pfVar5 = (float *)FUN_0056bcf0(&fStack_24,param_1,1);
  pfVar6 = (float *)(**(code **)(*param_1 + 0x28))();
  fStack_c = *pfVar5 + *pfVar6;
  fStack_4 = pfVar6[2] + pfVar5[2];
  FUN_00440b10(0,local_30);
  fVar1 = fStack_24 * *(float *)(DAT_00772b08 + 8);
  fStack_28 = fStack_1c * *(float *)(DAT_00772b08 + 8);
  fStack_24 = fStack_c + local_18;
  fStack_1c = local_10 + fStack_4;
  fStack_c = (fStack_24 + fVar1) - fStack_24;
  fStack_4 = (fStack_1c + fStack_28) - fStack_1c;
  if ((DAT_00772858 == 5) && ((DAT_0077285c & 8) != 0)) {
    fVar7 = (float10)FUN_0064ca10(fStack_c,fStack_4);
    fStack_8 = (float)fVar7;
    fStack_c = 0.0;
    fStack_4 = 0.0;
    (**(code **)(*param_1 + 0x1c))(&fStack_c);
  }
  if (((param_1[0xec] != 0) && (fVar7 = (float10)FUN_00434ca0(2), (float10)DAT_006e92e4 < fVar7)) &&
     ((DAT_0077285c & 8) != 0)) {
    FUN_0056bb40(&fStack_24);
    pfVar5 = (float *)FUN_0056bad0(&fStack_c);
    fStack_4 = pfVar5[2] * _DAT_006ec094;
    local_18 = *pfVar5 * _DAT_006ec094 + fStack_24;
    local_14 = pfVar5[1] * _DAT_006ec094 + fStack_20;
    local_10 = fStack_1c + fStack_4;
    FUN_005798f0(1);
    FUN_00579720(param_1[2],param_1[3],&fStack_24,&local_18,0xffffffff);
    FUN_00577e70();
    if (0 < DAT_00773970) {
      pfVar5 = (float *)FUN_0056bad0(&fStack_c);
      fStack_34 = DAT_007734f0;
      fStack_28 = pfVar5[2] * _DAT_006ec094;
      fStack_c = *pfVar5 * _DAT_006ec094 * DAT_007734f0;
      fStack_8 = pfVar5[1] * _DAT_006ec094 * DAT_007734f0;
      local_18 = fStack_c + fStack_24;
      local_14 = fStack_8 + fStack_20;
      local_10 = fStack_28 * DAT_007734f0 + fStack_1c;
      fStack_4 = local_10;
    }
    iVar2 = FUN_0056bcf0(&fStack_c,param_1,1);
    fStack_1c = *(float *)(iVar2 + 8);
    fStack_20 = *(float *)(iVar2 + 4) - _DAT_006e9554;
    fStack_24 = -25.0;
    fVar7 = (float10)FUN_0056bb90();
    local_30 = (float)fVar7;
    FUN_0064c8e0(local_30,&local_30,&fStack_34);
    fVar1 = fStack_24 * local_30;
    fStack_24 = fStack_34 * fStack_24 + fStack_1c * local_30 + (float)param_1[5];
    fStack_20 = fStack_20 + (float)param_1[6];
    fStack_1c = (fStack_1c * fStack_34 - fVar1) + (float)param_1[7];
    fVar1 = SQRT((local_18 - fStack_24) * (local_18 - fStack_24) +
                 (local_14 - fStack_20) * (local_14 - fStack_20) +
                 (local_10 - fStack_1c) * (local_10 - fStack_1c));
    if (fVar1 < _DAT_006e9590 == (NAN(fVar1) || NAN(_DAT_006e9590))) {
      if (fVar1 < _DAT_006e99c0 == (NAN(fVar1) || NAN(_DAT_006e99c0))) {
        uVar3 = 3;
      }
      else {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 1;
    }
    FUN_004f8c00(uVar3);
    if (param_1[0x196] == 0) {
      return;
    }
    if ((float)param_1[0x283] < DAT_006e92e4 == ((float)param_1[0x283] == DAT_006e92e4)) {
      return;
    }
    FUN_004424d0(s_STONE_ATTACK_00720cf4,0x3e000000);
    FUN_00434dd0(2,0x3f800000);
    FUN_00434cf0(0xa7);
    param_1[0x283] = 0x3fc00000;
    FUN_00425a00();
    FUN_00424c30(&fStack_24,&local_18);
    return;
  }
  FUN_004f8c00(0);
  return;
}

