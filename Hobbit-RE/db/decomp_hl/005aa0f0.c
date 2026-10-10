
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005aa0f0(int param_1,float param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ddf28;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_wisp_fx__OnAdvanceLogic_00744898);
  iVar7 = 0;
  *(float *)(param_1 + 0x67c) = param_2 + *(float *)(param_1 + 0x67c);
  local_4 = 0;
  if (*(int *)(param_1 + 0x68c) != 0) {
    fVar2 = *(float *)(param_1 + 0x684) - param_2;
    *(float *)(param_1 + 0x684) = fVar2;
    if (fVar2 < DAT_006e92e4 != (fVar2 == DAT_006e92e4)) {
      FUN_005aa5a0();
      fVar8 = (float10)FUN_00647b30(0x3d4ccccd,0x3fa00000);
      *(float *)(param_1 + 0x684) = (float)(fVar8 * (float10)*(float *)(param_1 + 0x688));
    }
  }
  pfVar1 = (float *)(param_1 + 0x14);
  local_34 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x1c);
  local_38 = *(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x18);
  local_3c = *(float *)(param_1 + 8) - *pfVar1;
  fVar2 = local_34 * local_34 + local_38 * local_38 + local_3c * local_3c;
  local_30 = SQRT(fVar2);
  fVar3 = local_30 / _DAT_00744884;
  if (DAT_006e92e8 < fVar3 != (NAN(DAT_006e92e8) || NAN(fVar3))) {
    fVar3 = DAT_006e92e8;
  }
  if (local_30 <= _DAT_00744884) {
    local_30 = (DAT_006e92e8 - fVar3) * local_30;
  }
  else {
    local_30 = _DAT_00744884;
  }
  local_40 = DAT_006e92e8 / SQRT(fVar2);
  iVar5 = FUN_0064cf30(local_40);
  fVar2 = DAT_006e92e4;
  fVar3 = DAT_006e92e4;
  fVar4 = DAT_006e92e4;
  if (iVar5 != 0) {
    local_40 = local_40 * local_30;
    fVar2 = local_40 * local_3c;
    fVar3 = local_40 * local_38;
    fVar4 = local_40 * local_34;
  }
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x10) - fVar4;
  *pfVar1 = *(float *)(param_1 + 8) - fVar2;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0xc) - fVar3;
  if (*(int *)(param_1 + 0x690) == 0) {
    *pfVar1 = *(float *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  }
  local_42 = *(undefined1 *)(param_1 + 0x52);
  local_43 = *(undefined1 *)(param_1 + 0x51);
  local_44 = *(undefined1 *)(param_1 + 0x50);
  local_41 = 0x80;
  pfVar6 = (float *)(param_1 + 0x60);
  do {
    local_40 = *pfVar6;
    local_34 = _DAT_00744874 * *(float *)(param_1 + 0x67c) + local_40;
    local_30 = _DAT_00744870 * *(float *)(param_1 + 0x67c) + local_40;
    fVar8 = (float10)FUN_0064c800(local_30);
    local_38 = (float)fVar8;
    local_30 = _DAT_0074486c * *(float *)(param_1 + 0x67c) + local_40;
    fVar8 = (float10)FUN_0064c800(local_30);
    local_30 = (float)fVar8;
    fVar8 = (float10)FUN_0064c800(local_34);
    local_34 = local_38 * *(float *)(param_1 + 0x674);
    local_30 = local_30 * *(float *)(param_1 + 0x674);
    local_20 = local_34 + *(float *)(param_1 + 0xc);
    local_24 = local_30 + *(float *)(param_1 + 8);
    local_1c = (float)(fVar8 * (float10)*(float *)(param_1 + 0x674) +
                      (float10)*(float *)(param_1 + 0x10));
    FUN_00608bc0(iVar7,&local_24);
    FUN_00608bf0(iVar7,&local_44);
    pfVar6 = pfVar6 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 5);
  local_41 = 0x20;
  iVar7 = 0;
  pfVar6 = (float *)(param_1 + 0x74);
  do {
    local_40 = *pfVar6;
    local_34 = _DAT_00744880 * *(float *)(param_1 + 0x67c) + local_40;
    local_30 = _DAT_0074487c * *(float *)(param_1 + 0x67c) + local_40;
    fVar8 = (float10)FUN_0064c800(local_30);
    local_38 = (float)fVar8;
    local_30 = _DAT_00744878 * *(float *)(param_1 + 0x67c) + local_40;
    fVar8 = (float10)FUN_0064c800(local_30);
    local_30 = (float)fVar8;
    fVar8 = (float10)FUN_0064c800(local_34);
    local_34 = local_38 * *(float *)(param_1 + 0x678);
    local_30 = local_30 * *(float *)(param_1 + 0x678);
    local_20 = local_34 + *(float *)(param_1 + 0x18);
    local_24 = local_30 + *pfVar1;
    local_1c = (float)(fVar8 * (float10)*(float *)(param_1 + 0x678) +
                      (float10)*(float *)(param_1 + 0x1c));
    FUN_00608bc0(iVar7,&local_24);
    FUN_00608bf0(iVar7,&local_44);
    pfVar6 = pfVar6 + 1;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 10);
  local_41 = 0x80;
  if (*(int *)(param_1 + 0x68c) != 0) {
    local_30 = (float)(param_1 + 0x62c);
    pfVar6 = (float *)(param_1 + 0x130);
    iVar7 = 0;
    do {
      local_41 = __ftol();
      FUN_00608bf0(iVar7,&local_44);
      if (pfVar6[1] < DAT_006e92e4 == (pfVar6[1] == DAT_006e92e4)) {
        local_20 = pfVar6[-1];
        local_1c = *pfVar6;
        if (pfVar6[1] < pfVar6[3]) {
          fVar2 = pfVar6[3];
        }
        else {
          fVar2 = pfVar6[1];
        }
        fVar2 = DAT_006e92e8 - fVar2;
        local_34 = local_1c * fVar2 + pfVar6[-3];
        local_14 = local_20 * fVar2 + pfVar6[-4];
        local_18 = fVar2 * pfVar6[-2] + pfVar6[-5];
        local_10 = local_34;
        FUN_00608bc0(iVar7,&local_18);
        pfVar6[1] = pfVar6[1] - param_2 * pfVar6[2];
      }
      else {
        FUN_00608bc0(iVar7,pfVar1);
      }
      iVar7 = iVar7 + 1;
      pfVar6 = pfVar6 + 9;
    } while (iVar7 < 0x20);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

