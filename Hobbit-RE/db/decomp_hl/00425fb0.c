
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00425fb0(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  int iStack_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64 [12];
  undefined1 local_58 [12];
  undefined1 auStack_4c [12];
  undefined1 local_40 [64];
  
  fVar10 = (float10)FUN_00434ca0(2);
  if ((NAN(fVar10) || NAN((float10)DAT_006e92e4)) == (fVar10 == (float10)DAT_006e92e4)) {
    local_dc = (float)param_1[0x14c];
    iVar9 = param_1[0x14a];
    iVar4 = FUN_004258a0();
    local_ec = (float)(int)*(short *)(iVar9 * 0x50 + 0x26 + *(int *)(iVar4 + 0x58));
    iVar9 = 0;
    if (0 < (int)local_ec) {
      do {
        iVar4 = FUN_0053f210(3);
        if ((iVar4 == 1) &&
           (local_d8 = (float)FUN_0053f210(0),
           (float)(int)local_d8 < local_dc != (NAN((float)(int)local_d8) || NAN(local_dc)))) {
          FUN_005417e0(local_58,iVar9);
          if (param_1[0x11b4] == 0) {
            local_f8 = 0.0;
            local_f4 = 0.0;
            local_f0 = 1.0;
            FUN_0064c8e0(param_1[0x11d],&local_ec,&local_fc);
            fVar2 = local_f8 * local_ec;
            fVar1 = *(float *)(param_1[0x114] + 0x170);
            local_f8 = (local_f8 * local_fc + local_f0 * local_ec) * fVar1;
            local_f4 = local_f4 * fVar1;
            local_f0 = (local_f0 * local_fc - fVar2) * fVar1;
            local_e8 = local_f8;
            local_e4 = local_f4;
            local_e0 = local_f0;
            local_94 = local_f8;
            local_90 = local_f4;
            local_8c = local_f0;
            FUN_0064c8e0(0xbfc90fdb,&local_fc,&local_ec);
            local_88 = (local_ec * local_e8 + local_e0 * local_fc) * _DAT_006e936c;
            local_84 = local_e4 * _DAT_006e936c;
            local_80 = (local_e0 * local_ec - local_e8 * local_fc) * _DAT_006e936c;
            local_e8 = local_f8;
            local_e4 = local_f4;
            local_e0 = local_f0;
            FUN_0064c8e0(0x3fc90fdb,&local_fc,&local_ec);
            local_70 = 0;
            local_6c = 0x42480000;
            fVar1 = local_ec * local_e8 + local_e0 * local_fc;
            local_68 = 0;
            local_7c = fVar1 * _DAT_006e936c;
            local_78 = local_e4 * _DAT_006e936c;
            local_e0 = (local_e0 * local_ec - local_e8 * local_fc) * _DAT_006e936c;
            local_e8 = fVar1;
            local_74 = local_e0;
            (**(code **)(*param_1 + 0x34))(local_40);
            pfVar7 = &local_94;
            iVar9 = 4;
            do {
              FUN_0041b9f0(&local_d0,pfVar7);
              FUN_004357e0(&local_d0);
              pfVar7 = pfVar7 + 3;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            uVar5 = FUN_004357e0(&local_94);
            FUN_004357e0(uVar5);
            pfVar7 = &local_80;
            iVar9 = 3;
            do {
              if (pfVar7[-2] < fStack_b8 != (NAN(pfVar7[-2]) || NAN(fStack_b8))) {
                fStack_b8 = pfVar7[-2];
              }
              if (pfVar7[-1] < fStack_b4 != (NAN(pfVar7[-1]) || NAN(fStack_b4))) {
                fStack_b4 = pfVar7[-1];
              }
              if (*pfVar7 < fStack_b0 != (NAN(*pfVar7) || NAN(fStack_b0))) {
                fStack_b0 = *pfVar7;
              }
              if (fStack_ac < pfVar7[-2]) {
                fStack_ac = pfVar7[-2];
              }
              if (fStack_a8 < pfVar7[-1]) {
                fStack_a8 = pfVar7[-1];
              }
              if (fStack_a4 < *pfVar7) {
                fStack_a4 = *pfVar7;
              }
              pfVar7 = pfVar7 + 3;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            local_d8 = 0.0;
            bVar3 = false;
            FUN_0054d4f0(&iStack_d4,0xffffffff,0x1010,&fStack_b8);
            if (iStack_d4 != -1) {
              FUN_00588ff0(iStack_d4);
              iVar9 = FUN_00589010(iStack_d4,&local_e8);
              while (iVar9 != 0) {
                piVar6 = (int *)FUN_004021c0(local_e8,local_e4);
                if (((((char)piVar6[0x1f] == '\x05') &&
                     ((*(ushort *)((int)piVar6 + 0x15a) & 0x400) != 0)) &&
                    ((*(ushort *)((int)piVar6 + 0x15a) & 0x1000) == 0)) ||
                   (((char)piVar6[0x1f] == '\x1c' && (iVar9 = FUN_004683d0(param_1), iVar9 != 0))))
                {
                  pfVar7 = (float *)(**(code **)(*piVar6 + 0x28))();
                  FUN_00401f00(*pfVar7 - (float)param_1[5],pfVar7[1] - (float)param_1[6],
                               pfVar7[2] - (float)param_1[7]);
                  local_fc = local_c8 * local_c8 + local_d0 * local_d0;
                  fVar1 = *(float *)(param_1[0x114] + 0x170) * *(float *)(param_1[0x114] + 0x170);
                  if (local_fc < fVar1 != (NAN(local_fc) || NAN(fVar1))) {
                    local_fc = DAT_006e92e8 / SQRT(local_fc);
                    iVar9 = FUN_0064cf30(local_fc);
                    if (iVar9 == 0) {
                      fStack_c4 = 0.0;
                      fStack_c0 = 0.0;
                      fStack_bc = 0.0;
                    }
                    else {
                      fStack_c4 = local_fc * local_d0;
                      fStack_c0 = local_fc * DAT_006e92e4;
                      fStack_bc = local_c8 * local_fc;
                    }
                    local_f8 = 0.0;
                    local_f4 = 0.0;
                    local_f0 = 1.0;
                    FUN_0064c8e0(param_1[0x11d],&local_dc,&local_ec);
                    fVar1 = local_ec * local_f8 + local_f0 * local_dc;
                    local_f0 = local_f0 * local_ec - local_f8 * local_dc;
                    local_fc = DAT_006e92e8 /
                               SQRT(fVar1 * fVar1 + local_f4 * local_f4 + local_f0 * local_f0);
                    local_f8 = fVar1;
                    iVar9 = FUN_0064cf30(local_fc);
                    if (iVar9 == 0) {
                      local_f8 = 0.0;
                      local_f4 = 0.0;
                      local_f0 = 0.0;
                    }
                    else {
                      local_f8 = local_fc * local_f8;
                      local_f4 = local_f4 * local_fc;
                      local_f0 = local_f0 * local_fc;
                    }
                    fVar1 = local_f4 * fStack_c0 + fStack_c4 * local_f8 + fStack_bc * local_f0;
                    if ((DAT_006e92e4 < fVar1) && (local_d8 < fVar1)) {
                      local_d8 = fVar1;
                      uVar5 = FUN_00401f00(0,0x42480000,0);
                      uVar5 = (**(code **)(*piVar6 + 0x28))(uVar5);
                      uVar5 = FUN_00402130(local_64,uVar5);
                      FUN_004357e0(uVar5);
                      bVar3 = true;
                    }
                  }
                }
                iVar9 = FUN_00589010(iStack_d4,&local_e8);
              }
              FUN_00588b20(iStack_d4);
              if (bVar3) goto LAB_004266e1;
            }
            FUN_00404870(0,0,0x3f800000);
            FUN_00428740(param_1[0x11d]);
            uVar5 = FUN_00402160(local_64,&local_f8,
                                 *(float *)(param_1[0x114] + 0x170) * _DAT_006e936c);
            uVar5 = FUN_00402130(auStack_4c,param_1 + 5,uVar5);
            FUN_004357e0(uVar5);
          }
          else {
            iVar9 = param_1[0x11b5] + 0x612;
            FUN_00401f00(param_1[iVar9 * 3],(float)param_1[iVar9 * 3 + 1] + _DAT_006e9988,
                         param_1[iVar9 * 3 + 2]);
            local_a0 = local_d0;
            local_9c = local_cc;
            local_98 = local_c8;
          }
LAB_004266e1:
          puVar8 = (undefined4 *)FUN_00405080(local_64,&local_a0,local_58);
          fVar10 = (float10)FUN_0064ca10(*puVar8,puVar8[2]);
          param_1[0x1eb] = (int)(float)fVar10;
          param_1[0x1ec] = 0x42000000;
          FUN_00424c30(local_58,&local_a0);
          FUN_00434dd0(2,0x3f800000);
          return 1;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)local_ec);
    }
  }
  return 0;
}

