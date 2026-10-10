
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006be3d0(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98 [3];
  float local_8c [7];
  undefined4 local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e854b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_sphere__AdvanceLogic_00757d38);
  iVar9 = *(int *)(param_1 + 4);
  local_4 = 0;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x18),&local_a4,&local_a8);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x1c),&local_ac,&local_a0);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x20),local_98,&local_9c);
  local_8c[0] = (local_9c * local_a0 + local_98[0] * local_a4 * local_ac) *
                *(float *)(param_1 + 0xc);
  local_8c[1] = local_98[0] * local_a8 * *(float *)(param_1 + 0xc);
  local_8c[2] = (local_98[0] * local_a4 * local_a0 - local_9c * local_ac) *
                *(float *)(param_1 + 0xc);
  local_8c[4] = (local_ac * local_9c * local_a4 - local_98[0] * local_a0) *
                *(float *)(param_1 + 0x10);
  local_8c[5] = local_9c * local_a8 * *(float *)(param_1 + 0x10);
  local_8c[6] = (local_9c * local_a4 * local_a0 + local_98[0] * local_ac) *
                *(float *)(param_1 + 0x10);
  local_6c = local_ac * local_a8 * *(float *)(param_1 + 0x14);
  local_5c = *(undefined4 *)(param_1 + 0x24);
  local_58 = *(undefined4 *)(param_1 + 0x28);
  local_54 = *(undefined4 *)(param_1 + 0x2c);
  local_68 = -local_a4 * *(float *)(param_1 + 0x14);
  local_8c[3] = 0.0;
  local_70 = 0;
  local_60 = 0;
  local_50 = 0x3f800000;
  local_64 = local_a0 * local_a8 * *(float *)(param_1 + 0x14);
  uVar5 = FUN_006ba140(local_8c);
  pfVar6 = (float *)FUN_0064e040(local_4c,uVar5);
  if ((local_8c != pfVar6) && (pfVar6 != pfVar6 + 0x10)) {
    pfVar10 = local_8c + 2;
    pfVar7 = pfVar6;
    do {
      pfVar8 = pfVar7 + 4;
      pfVar10[-2] = *pfVar7;
      pfVar10[-1] = pfVar7[1];
      *pfVar10 = *(float *)(((int)pfVar6 - (int)local_8c) + (int)pfVar10);
      pfVar10[1] = pfVar7[3];
      pfVar10 = pfVar10 + 4;
      pfVar7 = pfVar8;
    } while (pfVar8 != pfVar6 + 0x10);
  }
  fVar3 = *(float *)(iVar9 + 0xa0) - _DAT_006e936c;
  local_a8 = *(float *)(iVar9 + 0xa4) - _DAT_006e936c;
  fVar4 = fVar3;
  if (local_a8 < fVar3) {
    fVar4 = local_a8;
  }
  *(float *)(param_1 + 0x94) = fVar4;
  *(undefined4 *)(param_1 + 0x90) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x98) = 0xbf000000;
  if (fVar3 < local_a8 != (NAN(fVar3) || NAN(local_a8))) {
    fVar3 = local_a8;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f000000;
  *(float *)(param_1 + 0xa0) = fVar3;
  FUN_004936f0(local_8c);
  if (((NAN(*(float *)(iVar9 + 0x90)) || NAN(DAT_006e92e4)) ==
       (*(float *)(iVar9 + 0x90) == DAT_006e92e4)) ||
     ((NAN(*(float *)(iVar9 + 0x94)) || NAN(DAT_006e92e4)) ==
      (*(float *)(iVar9 + 0x94) == DAT_006e92e4))) {
    local_ac = param_3 * *(float *)(iVar9 + 0x90);
    param_3 = param_3 * *(float *)(iVar9 + 0x94);
    fVar3 = local_ac + *(float *)(param_1 + 0xb8);
    *(float *)(param_1 + 0xb8) = fVar3;
    local_a4 = param_3 + *(float *)(param_1 + 0xbc);
    *(float *)(param_1 + 0xbc) = local_a4;
    if ((float)_DAT_006ec030 < fVar3) {
      *(float *)(param_1 + 0xb8) = fVar3 - DAT_006e92e8;
      local_ac = local_ac - DAT_006e92e8;
    }
    if (*(float *)(param_1 + 0xb8) < (float)_DAT_006ec038 !=
        (NAN(*(float *)(param_1 + 0xb8)) || NAN((float)_DAT_006ec038))) {
      *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) + DAT_006e92e8;
      local_ac = local_ac + DAT_006e92e8;
    }
    if ((float)_DAT_006ec030 < local_a4) {
      *(float *)(param_1 + 0xbc) = local_a4 - DAT_006e92e8;
      param_3 = param_3 - DAT_006e92e8;
    }
    if (*(float *)(param_1 + 0xbc) < (float)_DAT_006ec038 !=
        (NAN(*(float *)(param_1 + 0xbc)) || NAN((float)_DAT_006ec038))) {
      *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) + DAT_006e92e8;
      param_3 = param_3 + DAT_006e92e8;
    }
    if (((NAN(local_ac) || NAN(DAT_006e92e4)) == (local_ac == DAT_006e92e4)) &&
       (iVar9 = 0, 0 < *(int *)(param_1 + 0xb4))) {
      do {
        iVar1 = iVar9 * 8;
        iVar2 = iVar9 * 8;
        iVar9 = iVar9 + 1;
        *(float *)(*(int *)(param_1 + 0xcc) + iVar2) =
             local_ac + *(float *)(*(int *)(param_1 + 0xcc) + iVar1);
      } while (iVar9 < *(int *)(param_1 + 0xb4));
    }
    if (((NAN(param_3) || NAN(DAT_006e92e4)) == (param_3 == DAT_006e92e4)) &&
       (iVar9 = 0, 0 < *(int *)(param_1 + 0xb4))) {
      do {
        iVar1 = iVar9 * 8;
        iVar2 = iVar9 * 8;
        iVar9 = iVar9 + 1;
        *(float *)(*(int *)(param_1 + 0xcc) + 4 + iVar2) =
             param_3 + *(float *)(*(int *)(param_1 + 0xcc) + 4 + iVar1);
      } while (iVar9 < *(int *)(param_1 + 0xb4));
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

