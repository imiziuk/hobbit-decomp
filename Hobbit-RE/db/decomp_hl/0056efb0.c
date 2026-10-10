
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0056efb0(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  float *pfVar10;
  float10 fVar11;
  undefined8 uVar12;
  float local_58;
  float local_4c;
  float local_48;
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
  undefined1 local_c [12];
  
  uVar12 = FUN_0041bcd0();
  iVar5 = FUN_004021c0(*(undefined4 *)(param_1 + 0x6a0),*(undefined4 *)(param_1 + 0x6a4));
  if (iVar5 == 0) {
    FUN_0056b6b0(0);
    return;
  }
  pfVar6 = (float *)FUN_0045d740(&local_18,uVar12);
  *(float *)(param_1 + 0x49c) = *pfVar6;
  *(float *)(param_1 + 0x4a0) = pfVar6[1];
  *(float *)(param_1 + 0x4a4) = pfVar6[2];
  if ((*(int *)(param_1 + 0x68c) == 0) && (*(int *)(param_1 + 0x688) == 0)) {
    piVar9 = (int *)FUN_004021c0(uVar12);
    pfVar6 = (float *)FUN_0056bcf0(&local_18,piVar9,0);
    pfVar10 = (float *)(**(code **)(*piVar9 + 0x28))();
    local_48 = *pfVar10 + *pfVar6;
    fVar1 = pfVar10[1] + pfVar6[1];
    local_40 = pfVar10[2] + pfVar6[2];
    local_10 = local_40;
  }
  else {
    iVar7 = FUN_004021c0(*(int *)(param_1 + 0x688),*(int *)(param_1 + 0x68c));
    uVar8 = FUN_00402130(&local_18,iVar7 + 0x44,iVar7 + 0x50,0x3f000000);
    FUN_00402160(&local_3c,uVar8);
    local_48 = local_3c;
    local_40 = local_34;
    fVar1 = local_38;
  }
  if (((NAN(*(float *)(param_1 + 0x67c)) || NAN(DAT_006e92e4)) ==
       (*(float *)(param_1 + 0x67c) == DAT_006e92e4)) ||
     ((NAN(*(float *)(param_1 + 0x678)) || NAN(DAT_006e92e4)) ==
      (*(float *)(param_1 + 0x678) == DAT_006e92e4))) {
    if (((*(float *)(param_1 + 0x67c) < _DAT_006f3ecc ==
          (NAN(*(float *)(param_1 + 0x67c)) || NAN(_DAT_006f3ecc))) ||
        (fVar2 = _DAT_006f3ec8, _DAT_006f3ec8 <= *(float *)(param_1 + 0x67c))) &&
       (fVar2 = _DAT_006f3ecc,
       *(float *)(param_1 + 0x67c) < _DAT_006f3ecc !=
       (NAN(*(float *)(param_1 + 0x67c)) || NAN(_DAT_006f3ecc)))) {
      fVar2 = *(float *)(param_1 + 0x67c);
    }
    *(float *)(param_1 + 0x67c) = fVar2;
    if (((*(float *)(param_1 + 0x678) < _DAT_006f3ec4 ==
          (NAN(*(float *)(param_1 + 0x678)) || NAN(_DAT_006f3ec4))) ||
        (fVar2 = _DAT_006f3ec0, _DAT_006f3ec0 <= *(float *)(param_1 + 0x678))) &&
       (fVar2 = _DAT_006f3ec4,
       *(float *)(param_1 + 0x678) < _DAT_006f3ec4 !=
       (NAN(*(float *)(param_1 + 0x678)) || NAN(_DAT_006f3ec4)))) {
      fVar2 = *(float *)(param_1 + 0x678);
    }
    *(float *)(param_1 + 0x678) = fVar2;
    pfVar6 = (float *)FUN_0056bb40(&local_18);
    local_3c = local_48 - *pfVar6;
    fVar1 = fVar1 - pfVar6[1];
    local_34 = local_40 - pfVar6[2];
    fVar2 = local_34 * local_34;
    fVar3 = local_3c * local_3c;
    fVar4 = SQRT(fVar3 + fVar2);
    local_38 = fVar1;
    fVar11 = (float10)FUN_0064ca10(fVar1,fVar4);
    fVar11 = -fVar11 + (float10)*(float *)(param_1 + 0x67c);
    if ((fVar11 < (float10)_DAT_006ee880 == (NAN(fVar11) || NAN((float10)_DAT_006ee880))) ||
       (fVar11 = (float10)FUN_0064ca10(fVar1,fVar4),
       (float10)_DAT_006efbd0 <= -fVar11 + (float10)*(float *)(param_1 + 0x67c))) {
      fVar11 = (float10)FUN_0064ca10(fVar1,fVar4);
      fVar11 = -fVar11 + (float10)*(float *)(param_1 + 0x67c);
      if (fVar11 < (float10)_DAT_006ee880 == (NAN(fVar11) || NAN((float10)_DAT_006ee880))) {
        local_58 = 1.553343;
      }
      else {
        fVar11 = (float10)FUN_0064ca10(fVar1,fVar4);
        local_58 = (float)(-fVar11 + (float10)*(float *)(param_1 + 0x67c));
      }
    }
    else {
      local_58 = -1.553343;
    }
    fVar11 = (float10)FUN_0064ca10(local_3c,local_34);
    FUN_00440b10(local_58,(float)(fVar11 + (float10)*(float *)(param_1 + 0x678)));
    local_34 = SQRT(local_38 * local_38 + fVar3 + fVar2);
    local_3c = local_24 * local_34;
    local_38 = local_20 * local_34;
    local_34 = local_1c * local_34;
    pfVar6 = (float *)FUN_0056bb40(local_c);
    FUN_00401f00(local_3c + *pfVar6,local_38 + pfVar6[1],local_34 + pfVar6[2]);
    fVar1 = DAT_006e92e8 - param_2;
    local_48 = local_18;
    local_40 = local_10;
    *(float *)(param_1 + 0x67c) = fVar1 * *(float *)(param_1 + 0x67c) * _DAT_006e99f4;
    *(float *)(param_1 + 0x678) = fVar1 * *(float *)(param_1 + 0x678) * _DAT_006e99f4;
    fVar1 = local_14;
  }
  if ((*(byte *)(param_1 + 0x484) & 4) == 0) {
    local_3c = local_48 - *(float *)(param_1 + 0x4c4);
    local_38 = fVar1 - *(float *)(param_1 + 0x4c8);
    local_34 = local_40 - *(float *)(param_1 + 0x4cc);
    param_2 = param_2 + param_2;
    fVar1 = param_2;
    if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
      fVar1 = DAT_006e92e8;
    }
    fVar2 = param_2;
    if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
      fVar2 = DAT_006e92e8;
    }
    if (DAT_006e92e8 < param_2 != (NAN(DAT_006e92e8) || NAN(param_2))) {
      param_2 = DAT_006e92e8;
    }
    local_18 = param_2 * local_3c;
    FUN_00401f00(local_18 + *(float *)(param_1 + 0x4c4),
                 fVar2 * local_38 + *(float *)(param_1 + 0x4c8),
                 fVar1 * local_34 + *(float *)(param_1 + 0x4cc));
    *(float *)(param_1 + 0x4a8) = local_18;
    *(float *)(param_1 + 0x4ac) = local_14;
    local_40 = local_10;
  }
  else {
    *(float *)(param_1 + 0x4ac) = fVar1;
    *(float *)(param_1 + 0x4a8) = local_48;
  }
  *(float *)(param_1 + 0x4b0) = local_40;
  FUN_00401f00(*(float *)(param_1 + 0x4a8) - *(float *)(param_1 + 0x49c),
               *(float *)(param_1 + 0x4ac) - *(float *)(param_1 + 0x4a0),
               *(float *)(param_1 + 0x4b0) - *(float *)(param_1 + 0x4a4));
  fVar1 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  if (fVar1 < *(float *)(iVar5 + 0xc0) == (NAN(fVar1) || NAN(*(float *)(iVar5 + 0xc0)))) {
    fVar2 = local_30;
    fVar3 = local_28;
    fVar4 = local_2c;
    if (fVar1 <= *(float *)(iVar5 + 0xc4)) goto LAB_0056f55d;
    local_4c = *(float *)(iVar5 + 0xc4);
  }
  else {
    local_4c = *(float *)(iVar5 + 0xc0);
  }
  param_2 = DAT_006e92e8 / fVar1;
  iVar5 = FUN_0064cf30(DAT_006e92e8 / fVar1);
  fVar2 = DAT_006e92e4;
  fVar3 = DAT_006e92e4;
  fVar4 = DAT_006e92e4;
  if (iVar5 != 0) {
    param_2 = param_2 * local_4c;
    fVar2 = param_2 * local_30;
    fVar3 = local_28 * param_2;
    fVar4 = local_2c * param_2;
  }
LAB_0056f55d:
  FUN_00401f00(*(float *)(param_1 + 0x4a8) - fVar2,*(float *)(param_1 + 0x4ac) - fVar4,
               *(float *)(param_1 + 0x4b0) - fVar3);
  FUN_004357e0(&local_18);
  return;
}

