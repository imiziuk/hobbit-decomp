
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00594470(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int *piVar15;
  float10 fVar16;
  float10 fVar17;
  float local_28;
  float local_24;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd130;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__AdvanceHeadTrack_00742e68);
  local_4 = 0;
  local_28 = 0.0;
  local_24 = 0.0;
  FUN_00594990();
  if ((*(byte *)(param_1 + 0x4c) & 2) != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0xfc);
    uVar6 = *(undefined4 *)(param_1 + 0xf8);
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar10 = FUN_00406ce0(uVar6,uVar5);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar10 == -1) {
      FUN_00649720();
      piVar15 = (int *)0x0;
    }
    else {
      uVar7 = *(uint *)(DAT_0076f648 + iVar10 * 0x14);
      piVar15 = (int *)(-(uint)((*(byte *)(uVar7 + 0x7f) & 0x10) != 0) & uVar7);
      FUN_00649720();
    }
    piVar11 = (int *)FUN_00592920();
    pfVar12 = (float *)(**(code **)(*piVar11 + 0x28))();
    pfVar13 = (float *)(**(code **)(*piVar15 + 0x28))();
    fVar8 = pfVar13[2] - pfVar12[2];
    fVar1 = pfVar13[1];
    fVar2 = pfVar12[1];
    fVar9 = *pfVar13 - *pfVar12;
    iVar10 = FUN_00592920();
    piVar11 = (int *)FUN_00592920();
    iVar14 = (**(code **)(*piVar15 + 0x28))();
    fVar3 = *(float *)(iVar14 + 4);
    fVar4 = (float)piVar15[0x15];
    iVar14 = (**(code **)(*piVar11 + 0x28))();
    fVar16 = (float10)fptan(((float10)(fVar3 + fVar4) -
                            ((float10)*(float *)(iVar14 + 4) + (float10)*(float *)(iVar10 + 0x54)))
                            / SQRT((float10)fVar8 * (float10)fVar8 +
                                   (float10)(fVar1 - fVar2) * (float10)(fVar1 - fVar2) +
                                   (float10)fVar9 * (float10)fVar9));
    local_24 = (float)(fVar16 * (float10)_DAT_006ec07c);
    fVar16 = (float10)FUN_0064ca10(fVar9,fVar8);
    FUN_00592920();
    fVar17 = (float10)FUN_004a3370();
    fVar16 = (fVar17 - (float10)(float)fVar16) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar16) ||
       (fVar16 < (float10)_DAT_006e959c != (NAN(fVar16) || NAN((float10)_DAT_006e959c)))) {
      fVar16 = (float10)FUN_0064c6b0((float)fVar16,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar16) {
      do {
        fVar16 = fVar16 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar16);
    }
    if (fVar16 < (float10)DAT_006e92e4 != (NAN(fVar16) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar16 = fVar16 + (float10)_DAT_006e9598;
      } while (fVar16 < (float10)DAT_006e92e4 != (NAN(fVar16) || NAN((float10)DAT_006e92e4)));
    }
    local_28 = (float)((fVar16 - (float10)_DAT_006e9368) * (float10)_DAT_006ec07c);
  }
  FUN_005946b0(local_28,local_24,0);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

