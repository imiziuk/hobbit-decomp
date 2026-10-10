
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006bbdb0(int param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
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
  puStack_8 = &LAB_006e84cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_shockwave__AdvanceLogic_00757cbc);
  local_4 = 0;
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x18),&local_a8,&local_a0);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x1c),&local_ac,&local_a4);
  FUN_0064c8e0(*(undefined4 *)(param_1 + 0x20),local_98,&local_9c);
  local_8c[0] = (local_9c * local_a4 + local_98[0] * local_a8 * local_ac) *
                *(float *)(param_1 + 0xc);
  local_8c[1] = local_98[0] * local_a0 * *(float *)(param_1 + 0xc);
  local_8c[2] = (local_98[0] * local_a8 * local_a4 - local_9c * local_ac) *
                *(float *)(param_1 + 0xc);
  local_8c[4] = (local_ac * local_9c * local_a8 - local_98[0] * local_a4) *
                *(float *)(param_1 + 0x10);
  local_8c[5] = local_9c * local_a0 * *(float *)(param_1 + 0x10);
  local_8c[6] = (local_9c * local_a8 * local_a4 + local_98[0] * local_ac) *
                *(float *)(param_1 + 0x10);
  local_6c = local_ac * local_a0 * *(float *)(param_1 + 0x14);
  local_68 = -local_a8 * *(float *)(param_1 + 0x14);
  local_5c = *(undefined4 *)(param_1 + 0x24);
  local_58 = *(undefined4 *)(param_1 + 0x28);
  local_54 = *(undefined4 *)(param_1 + 0x2c);
  local_8c[3] = 0.0;
  local_64 = local_a4 * local_a0 * *(float *)(param_1 + 0x14);
  local_70 = 0;
  local_60 = 0;
  local_50 = 0x3f800000;
  uVar4 = FUN_006ba140(local_8c);
  pfVar5 = (float *)FUN_0064e040(local_4c,uVar4);
  if ((local_8c != pfVar5) && (pfVar5 != pfVar5 + 0x10)) {
    pfVar9 = local_8c + 2;
    pfVar6 = pfVar5;
    do {
      pfVar7 = pfVar6 + 4;
      pfVar9[-2] = *pfVar6;
      pfVar9[-1] = pfVar6[1];
      *pfVar9 = *(float *)(((int)pfVar5 - (int)local_8c) + (int)pfVar9);
      pfVar9[1] = pfVar6[3];
      pfVar9 = pfVar9 + 4;
      pfVar6 = pfVar7;
    } while (pfVar7 != pfVar5 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x90) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x94) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x98) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f000000;
  FUN_004936f0(local_8c);
  iVar8 = *(int *)(param_1 + 4);
  if (((NAN(*(float *)(iVar8 + 0x90)) || NAN(DAT_006e92e4)) ==
       (*(float *)(iVar8 + 0x90) == DAT_006e92e4)) ||
     ((NAN(*(float *)(iVar8 + 0x94)) || NAN(DAT_006e92e4)) ==
      (*(float *)(iVar8 + 0x94) == DAT_006e92e4))) {
    local_ac = param_3 * *(float *)(iVar8 + 0x90);
    param_3 = param_3 * *(float *)(iVar8 + 0x94);
    fVar3 = local_ac + *(float *)(param_1 + 0xb4);
    *(float *)(param_1 + 0xb4) = fVar3;
    local_a8 = param_3 + *(float *)(param_1 + 0xb8);
    *(float *)(param_1 + 0xb8) = local_a8;
    if ((float)_DAT_006ec030 < fVar3) {
      *(float *)(param_1 + 0xb4) = fVar3 - DAT_006e92e8;
      local_ac = local_ac - DAT_006e92e8;
    }
    if (*(float *)(param_1 + 0xb4) < (float)_DAT_006ec038 !=
        (NAN(*(float *)(param_1 + 0xb4)) || NAN((float)_DAT_006ec038))) {
      *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) + DAT_006e92e8;
      local_ac = local_ac + DAT_006e92e8;
    }
    if ((float)_DAT_006ec030 < local_a8) {
      *(float *)(param_1 + 0xb8) = local_a8 - DAT_006e92e8;
      param_3 = param_3 - DAT_006e92e8;
    }
    if (*(float *)(param_1 + 0xb8) < (float)_DAT_006ec038 !=
        (NAN(*(float *)(param_1 + 0xb8)) || NAN((float)_DAT_006ec038))) {
      *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) + DAT_006e92e8;
      param_3 = param_3 + DAT_006e92e8;
    }
    if (((NAN(local_ac) || NAN(DAT_006e92e4)) == (local_ac == DAT_006e92e4)) &&
       (iVar8 = 0, 0 < *(int *)(param_1 + 0xb0))) {
      do {
        iVar1 = iVar8 * 8;
        iVar2 = iVar8 * 8;
        iVar8 = iVar8 + 1;
        *(float *)(*(int *)(param_1 + 0xc0) + iVar2) =
             local_ac + *(float *)(*(int *)(param_1 + 0xc0) + iVar1);
      } while (iVar8 < *(int *)(param_1 + 0xb0));
    }
    if (((NAN(param_3) || NAN(DAT_006e92e4)) == (param_3 == DAT_006e92e4)) &&
       (iVar8 = 0, 0 < *(int *)(param_1 + 0xb0))) {
      do {
        iVar1 = iVar8 * 8;
        iVar2 = iVar8 * 8;
        iVar8 = iVar8 + 1;
        *(float *)(*(int *)(param_1 + 0xc0) + 4 + iVar2) =
             param_3 + *(float *)(*(int *)(param_1 + 0xc0) + 4 + iVar1);
      } while (iVar8 < *(int *)(param_1 + 0xb0));
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

