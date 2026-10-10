
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00597cf0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  float10 fVar13;
  float10 fVar14;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd3f0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_PhysController__DoFace_00743178);
  *param_2 = 0;
  local_4 = 0;
  if ((*(int *)(param_1 + 400) == 0) || (iVar6 = FUN_00566dd0(), iVar6 != 0)) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 1;
  }
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x10);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x14);
  FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
  local_4._0_1_ = 1;
  iVar6 = FUN_00406ce0(uVar3,uVar4);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar6 == -1) {
    FUN_00649720();
  }
  else {
    uVar5 = *(uint *)(DAT_0076f648 + iVar6 * 0x14);
    piVar12 = (int *)(-(uint)((*(byte *)(uVar5 + 0x7f) & 0x10) != 0) & uVar5);
    FUN_00649720();
    if (piVar12 != (int *)0x0) {
      piVar7 = (int *)FUN_00592920();
      pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
      pfVar9 = (float *)(**(code **)(*piVar12 + 0x28))();
      FUN_00401f00(*pfVar9 - *pfVar8,pfVar9[1] - pfVar8[1],pfVar9[2] - pfVar8[2]);
      iVar6 = FUN_00592190();
      FUN_00401f00(fStack_64 * *(float *)(iVar6 + 0x4c) +
                   *(float *)(iVar6 + 0x50) * fStack_60 + *(float *)(iVar6 + 0x54) * fStack_5c +
                   *(float *)(iVar6 + 0x58),
                   *(float *)(iVar6 + 0x5c) * fStack_64 +
                   *(float *)(iVar6 + 0x60) * fStack_60 + *(float *)(iVar6 + 100) * fStack_5c +
                   *(float *)(iVar6 + 0x68),
                   fStack_60 * *(float *)(iVar6 + 0x70) +
                   *(float *)(iVar6 + 0x6c) * fStack_64 + *(float *)(iVar6 + 0x74) * fStack_5c +
                   *(float *)(iVar6 + 0x78));
      fVar13 = (float10)FUN_0064ca10(uStack_58,uStack_50);
      *(float *)(param_1 + 0x234) = (float)fVar13;
      fVar13 = (float10)FUN_0064ca10(uStack_58,uStack_50);
      FUN_00592920();
      fVar14 = (float10)FUN_004a3370();
      fVar13 = (float10)FUN_00445150((float)(((float10)(float)fVar13 - fVar14) +
                                            (float10)_DAT_006e9368));
      fVar13 = fVar13 - (float10)_DAT_006e9368;
      fVar1 = (float)fVar13;
      if (fVar13 < (float10)DAT_006e92e4 != (NAN(fVar13) || NAN((float10)DAT_006e92e4))) {
        fVar13 = -fVar13;
      }
      if (fVar13 < (float10)_DAT_006e95a8 == (fVar13 == (float10)_DAT_006e95a8)) {
        fVar2 = *(float *)(*(int *)(param_1 + 0x158) + 0x4c);
        if ((fVar2 < DAT_006e92e4 == (fVar2 == DAT_006e92e4)) ||
           (iVar6 = FUN_00592920(), *(int *)(iVar6 + 0x228) != 0)) {
          FUN_00592190();
          iVar6 = FUN_0059b610();
          if ((iVar6 != 0) && (*(int *)(param_1 + 0x144) < 1)) {
            iVar6 = FUN_00592190();
            iVar6 = *(int *)(iVar6 + 0xd4);
            iVar10 = FUN_004258a0();
            if ((*(byte *)(iVar6 * 0x50 + 0x2e + *(int *)(iVar10 + 0x58)) & 1) == 0) {
              iVar6 = *(int *)(param_1 + 0x2ac) + 1;
              *(int *)(param_1 + 0x2ac) = iVar6;
              if (0 < iVar6) goto LAB_00598005;
              iVar6 = FUN_00592190();
              *(int *)(iVar6 + 0x148) = *(int *)(iVar6 + 0x148) + 1;
              *(undefined4 *)(iVar6 + 300) = 1;
              *(int *)(iVar6 + 0x138) = *(int *)(iVar6 + 0x138) + 1;
              *(undefined4 *)(iVar6 + 0x13c) = 1;
              *(undefined4 *)(iVar6 + 0xe0) = 0;
              iVar6 = FUN_00592190();
              *(undefined4 *)(iVar6 + 300) = 1;
              *(int *)(iVar6 + 0x138) = *(int *)(iVar6 + 0x138) + 1;
              *(undefined4 *)(iVar6 + 0x13c) = 1;
              *(int *)(iVar6 + 0x148) = *(int *)(iVar6 + 0x148) + 1;
              fVar13 = (float10)FUN_0064c6b0(0,(float)*(int *)(iVar6 + 0xd8) - DAT_006e92e8);
              *(float *)(iVar6 + 0xdc) = (float)fVar13;
              iVar6 = FUN_00592190();
              iVar6 = *(int *)(iVar6 + 0xd4);
              iVar10 = FUN_004258a0();
              fVar14 = (float10)FUN_00445150((fVar1 - (float)*(ushort *)
                                                              (iVar6 * 0x50 + 0x32 +
                                                              *(int *)(iVar10 + 0x58)) *
                                                      _DAT_006f3c10) + _DAT_006e9368);
              fVar14 = fVar14 - (float10)_DAT_006e9368;
              fVar13 = fVar14;
              if (fVar14 < (float10)DAT_006e92e4 != (NAN(fVar14) || NAN((float10)DAT_006e92e4))) {
                fVar13 = -fVar14;
              }
              if ((float10)_DAT_006e9350 < fVar13) {
                if (fVar14 <= (float10)_DAT_006e9350) {
                  fVar14 = fVar14 - (float10)_DAT_006ebffc;
                }
                else {
                  fVar14 = fVar14 + (float10)_DAT_006ebffc;
                }
                iVar10 = FUN_00592190();
                iVar6 = *(int *)(iVar10 + 0xd8);
                *(int *)(iVar10 + 0x148) = *(int *)(iVar10 + 0x148) + 1;
                *(undefined4 *)(iVar10 + 300) = 1;
                *(int *)(iVar10 + 0x138) = *(int *)(iVar10 + 0x138) + 1;
                *(undefined4 *)(iVar10 + 0x13c) = 1;
                iVar11 = FUN_00549470(iVar10 + 0xd0);
                FUN_00549580(iVar10 + 0xd0);
                *(float *)(iVar10 + 0x48) =
                     (float)fVar14 /
                     ((float)iVar6 /
                     (float)*(byte *)(*(int *)(iVar10 + 0xd4) * 0x50 + 0x2f +
                                     *(int *)(iVar11 + 0x58)));
              }
            }
          }
          local_4 = 0xffffffff;
          FUN_00649720();
          ExceptionList = local_c;
          return 0;
        }
      }
      else {
        *param_2 = 1;
      }
    }
  }
LAB_00598005:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return 1;
}

