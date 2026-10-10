
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049c4b0(int param_1,float *param_2,float param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  float10 fVar12;
  undefined4 *puVar13;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int local_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined1 auStack_54 [20];
  float fStack_40;
  float fStack_34;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if (10 < *(int *)(param_1 + 0xa4)) {
    *(undefined4 *)(param_1 + 0x10) = 3;
    pfVar8 = (float *)(**(code **)(*param_4 + 0x28))();
    *param_2 = *pfVar8;
    param_2[1] = pfVar8[1];
    param_2[2] = pfVar8[2];
    return;
  }
  FUN_00405080(&local_60,param_4 + 0x14,param_4 + 0x11);
  local_8c = 0;
  local_b8 = 0.0;
  local_64 = (local_58 + local_5c + local_60) * _DAT_006edc00;
  while( true ) {
    if ((DAT_00773520 == param_4[0x58]) && (DAT_00773524 == param_4[0x59])) {
      return;
    }
    local_b8 = DAT_007734f0 * param_3 + local_b8;
    pfVar8 = (float *)(**(code **)(*param_4 + 0x28))();
    fVar2 = *param_2 - *pfVar8;
    fVar3 = param_2[1] - pfVar8[1];
    fVar4 = param_2[2] - pfVar8[2];
    *(float *)(param_1 + 0x14) = DAT_00773500;
    *(float *)(param_1 + 0x18) = DAT_00773504;
    *(float *)(param_1 + 0x1c) = DAT_00773508;
    if (*(int *)(param_1 + 0xc0) == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 1;
      fVar1 = DAT_006e92e8 / SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
      iVar9 = FUN_0064cf30(fVar1);
      fVar5 = DAT_006e92e4;
      fVar6 = DAT_006e92e4;
      fVar7 = DAT_006e92e4;
      if (iVar9 != 0) {
        fVar5 = fVar2 * fVar1;
        fVar6 = fVar4 * fVar1;
        fVar7 = fVar3 * fVar1;
      }
      fVar1 = fVar5 * DAT_00773500 + fVar7 * DAT_00773504 + fVar6 * DAT_00773508;
      if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
        fVar1 = -fVar1;
      }
      if (DAT_006e92e8 - _DAT_0072a4c8 < fVar1) {
        *(float *)(param_1 + 0xa0) =
             (((DAT_006e92e8 - fVar1) * (_DAT_0072a4c0 / _DAT_0072a4c8) * _DAT_0072a4c4 +
              DAT_006e92e8) - _DAT_0072a4c0) * *(float *)(param_1 + 0xa0);
      }
    }
    fStack_a4 = fVar2 * DAT_007734f0;
    fStack_a0 = fVar3 * DAT_007734f0;
    fStack_9c = fVar4 * DAT_007734f0;
    pfVar10 = (float *)(**(code **)(*param_4 + 0x28))();
    pfVar8 = (float *)(param_1 + 0x6c);
    fVar1 = pfVar10[1];
    fStack_40 = fStack_9c + pfVar10[2];
    *pfVar8 = fStack_a4 + *pfVar10;
    *(float *)(param_1 + 0x74) = fStack_40;
    *(float *)(param_1 + 0x70) = fStack_a0 + fVar1;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x54);
    fVar5 = DAT_00773508;
    fVar1 = DAT_00773504;
    fStack_34 = DAT_00773508;
    *pfVar8 = DAT_00773500 + *pfVar8;
    *(float *)(param_1 + 0x70) = fVar1 + *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x74) = fVar5 + *(float *)(param_1 + 0x74);
    iVar9 = FUN_004021c0(DAT_00773520,DAT_00773524);
    fVar1 = _DAT_0072a4cc;
    if ((iVar9 != 0) && ((*(byte *)(iVar9 + 0x10) & 0x50) == 0)) {
      fVar1 = _DAT_0072a4d0;
    }
    puVar13 = &DAT_00773500;
    *(float *)(param_1 + 0xa0) = fVar1 * *(float *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0xa0);
    fVar12 = (float10)FUN_00402020(param_1 + 4);
    uVar11 = FUN_0042eea0(auStack_30,(float)fVar12,puVar13);
    FUN_004357e0(uVar11);
    uVar11 = FUN_00405080(auStack_18,param_1 + 4,&fStack_b4);
    FUN_004357e0(uVar11);
    fVar1 = fStack_b4 * DAT_00773500 + fStack_b0 * DAT_00773504 + fStack_ac * DAT_00773508;
    if (fVar1 < DAT_006e92e4 != (NAN(fVar1) || NAN(DAT_006e92e4))) {
      fStack_b4 = -fStack_b4;
      fStack_b0 = -fStack_b0;
      fStack_ac = -fStack_ac;
    }
    fStack_b4 = fStack_b4 * _DAT_0072a4b4;
    fStack_b0 = fStack_b0 * _DAT_0072a4b4;
    fStack_ac = fStack_ac * _DAT_0072a4b4;
    fStack_98 = fStack_98 * _DAT_0072a4b0;
    fStack_94 = fStack_94 * _DAT_0072a4b0;
    fStack_90 = fStack_90 * _DAT_0072a4b0;
    if ((_DAT_006ebfe4 < DAT_00773504) &&
       (fVar1 = fStack_ac * fStack_ac + fStack_b0 * fStack_b0 + fStack_b4 * fStack_b4,
       fVar1 < _DAT_006e92f4 != (NAN(fVar1) || NAN(_DAT_006e92f4)))) {
      if (*(int *)(param_1 + 0x10) != 2) {
        *(undefined4 *)(param_1 + 0x10) = 2;
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      *(float *)(param_1 + 4) = fStack_98;
      *(float *)(param_1 + 8) = fStack_94;
      *(float *)(param_1 + 0xc) = fStack_90;
      fStack_a4 = *(float *)(param_1 + 0x14) * _DAT_006e936c;
      fStack_a0 = *(float *)(param_1 + 0x18) * _DAT_006e936c;
      fStack_9c = *(float *)(param_1 + 0x1c) * _DAT_006e936c;
      FUN_00401f00(local_b8 * *(float *)(param_1 + 4),local_b8 * *(float *)(param_1 + 8),
                   local_b8 * *(float *)(param_1 + 0xc));
      pfVar8 = (float *)(**(code **)(*param_4 + 0x28))();
      FUN_00401f00(fStack_88 + *pfVar8,fStack_84 + pfVar8[1],fStack_80 + pfVar8[2]);
      FUN_00401f00(fStack_7c + fStack_a4,fStack_78 + fStack_a0,fStack_74 + fStack_9c);
      *param_2 = fStack_70;
      param_2[1] = fStack_6c;
      param_2[2] = fStack_68;
      return;
    }
    fVar1 = DAT_006e92e8 - DAT_007734f0;
    fStack_a8 = param_3 * fVar1;
    FUN_00401f00(fVar1 * fVar2,fVar3 * fVar1,fVar4 * fVar1);
    puVar13 = &DAT_00773500;
    fVar12 = (float10)FUN_00402020(auStack_54);
    uVar11 = FUN_0042eea0(auStack_24,(float)(fVar12 + fVar12),puVar13);
    FUN_00405080(&fStack_70,auStack_54,uVar11);
    *(float *)(param_1 + 0x4c) = fStack_6c;
    *(float *)(param_1 + 0x48) = fStack_70;
    *(float *)(param_1 + 0x50) = fStack_68;
    FUN_00401f00(*pfVar8 + *(float *)(param_1 + 0x48),
                 *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x4c),
                 *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x50));
    *param_2 = fStack_7c;
    param_2[1] = fStack_78;
    param_2[2] = fStack_74;
    fVar2 = DAT_006e92e8 /
            SQRT(*(float *)(param_1 + 0x50) * *(float *)(param_1 + 0x50) +
                 *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c) +
                 *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48));
    iVar9 = FUN_0064cf30(fVar2);
    if (iVar9 == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    else {
      *(float *)(param_1 + 0x48) = fVar2 * *(float *)(param_1 + 0x48);
      *(float *)(param_1 + 0x4c) = fVar2 * *(float *)(param_1 + 0x4c);
      *(float *)(param_1 + 0x50) = fVar2 * *(float *)(param_1 + 0x50);
    }
    fVar2 = fStack_a8 * *(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x98) +
            -_DAT_0072a4bc * fStack_a8 * fStack_a8 + *(float *)(param_1 + 0x70);
    param_2[1] = fVar2;
    FUN_00401f00(*param_2 - *pfVar8,fVar2 - *(float *)(param_1 + 0x70),
                 param_2[2] - *(float *)(param_1 + 0x74));
    *(float *)(param_1 + 0x48) = fStack_88;
    *(float *)(param_1 + 0x4c) = fStack_84;
    *(float *)(param_1 + 0x50) = fStack_80;
    FUN_00579460(param_4[2],param_4[3],pfVar8,param_2,local_64,0xffffffff);
    FUN_00579910(param_4[0x58],param_4[0x59]);
    local_8c = local_8c + 1;
    if (5 < local_8c) break;
    FUN_00405080(auStack_c,pfVar8,param_2);
    fVar12 = (float10)FUN_00402000();
    if ((fVar12 < (float10)_DAT_006edc04 != (NAN(fVar12) || NAN((float10)_DAT_006edc04))) ||
       (iVar9 = FUN_00577e70(), iVar9 == 0)) break;
  }
  FUN_0042e1f0();
  *(float *)(param_1 + 0x90) = param_2[1];
  *(float *)(param_1 + 0x94) = fStack_a8;
  return;
}

