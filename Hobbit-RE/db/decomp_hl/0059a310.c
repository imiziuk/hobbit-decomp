
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059a310(int *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined4 local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd54c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__BuildMatrices_007432a0);
  pfVar9 = &local_e8;
  local_4 = 0;
  FUN_00592190(pfVar9);
  uVar3 = FUN_004258d0(pfVar9);
  local_4._0_1_ = 1;
  iVar4 = FUN_00549470(uVar3);
  local_4._0_1_ = 0;
  FUN_00549580(&local_e8);
  FUN_00549350(&local_e8);
  local_e8 = (float)((uint)local_e8 | 0x7fffffff);
  FUN_00406bd0(0);
  if (iVar4 == 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
    pfVar9 = &local_e8;
    *param_2 = *(int *)(iVar4 + 0x4c);
    FUN_00592190(pfVar9);
    uVar3 = FUN_004258d0(pfVar9);
    local_4._0_1_ = 2;
    FUN_00549580(uVar3);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00549580(&local_e8);
    FUN_00549350(&local_e8);
    local_e8 = (float)((uint)local_e8 | 0x7fffffff);
    FUN_00406bd0(0);
    iVar4 = (DAT_007f23d8 + 0x3fU & 0xffffffc0) - DAT_007f23d8;
    iVar8 = DAT_007f23d8 + iVar4;
    DAT_007f23d8 = DAT_007f23d8 + (iVar4 + 0xf + *param_2 * 0x40 & 0xfffffff0U);
    *param_1 = iVar8;
    iVar4 = FUN_00592190();
    if (*(int *)(iVar4 + 300) != 0) {
      FUN_00542230();
    }
    FUN_00648480(*param_1,*(undefined4 *)(iVar4 + 0x130),*param_2 << 6);
    if (param_3 != 0) {
      FUN_00649600(s_PhysController__BuildMatrices_007432a0);
      local_4 = CONCAT31(local_4._1_3_,3);
      iVar4 = FUN_00592190();
      fVar2 = *(float *)(iVar4 + 0x28);
      if ((fVar2 < _DAT_006e9374 != (NAN(fVar2) || NAN(_DAT_006e9374))) ||
         (local_e8 = fVar2, _DAT_006e9378 < fVar2)) {
        local_98 = 0;
        local_c0 = fVar2 * DAT_006e92e4;
        local_a8 = 0;
        local_b8 = 0;
        local_88 = 0x3f800000;
        local_e8 = 0.0;
        local_c4 = fVar2;
        local_bc = local_c0;
        local_b4 = local_c0;
        local_b0 = fVar2;
        local_ac = local_c0;
        local_a4 = local_c0;
        local_a0 = local_c0;
        local_9c = fVar2;
        local_94 = local_c0;
        local_90 = local_c0;
        local_8c = local_c0;
        if (0 < *param_2) {
          do {
            iVar4 = *param_1;
            iVar8 = (int)local_e8 * 0x40;
            FUN_00401f00(*(undefined4 *)(iVar4 + iVar8 + 0x30),*(undefined4 *)(iVar4 + 0x34 + iVar8)
                         ,*(undefined4 *)(iVar4 + 0x38 + iVar8));
            puVar5 = (undefined4 *)FUN_0064e040(local_4c,&local_c4,iVar4 + iVar8);
            fVar2 = local_e8;
            puVar7 = (undefined4 *)(*param_1 + iVar8);
            if ((puVar7 != puVar5) && (puVar1 = puVar5 + 0x10, puVar5 != puVar1)) {
              puVar6 = puVar7 + 2;
              iVar4 = (int)puVar5 - (int)puVar7;
              do {
                puVar6[-2] = *puVar5;
                puVar6[-1] = puVar5[1];
                *puVar6 = *(undefined4 *)(iVar4 + (int)puVar6);
                puVar6[1] = puVar5[3];
                puVar5 = puVar5 + 4;
                puVar6 = puVar6 + 4;
              } while (puVar5 != puVar1);
            }
            if (local_e8 == 0.0) {
              iVar4 = *param_1;
              FUN_00401f00(*(undefined4 *)(iVar4 + 0x30),*(undefined4 *)(iVar4 + 0x34),
                           *(undefined4 *)(iVar4 + 0x38));
              FUN_00401f00(local_e4 - local_d0,local_e0 - local_cc,local_dc - local_c8);
              FUN_004357e0(local_7c);
            }
            uVar3 = FUN_0041b9f0(local_58,&local_e4);
            FUN_004357e0(uVar3);
            uVar3 = FUN_00402130(local_64,&local_e4,local_70);
            FUN_004ee2d0(uVar3);
            local_e8 = (float)((int)fVar2 + 1);
          } while ((int)local_e8 < *param_2);
        }
      }
      local_4 = local_4 & 0xffffff00;
      FUN_00649720();
    }
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = local_c;
  return;
}

