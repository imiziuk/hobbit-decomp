
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006b7f40(int param_1,undefined4 param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  float10 fVar12;
  float local_5c;
  float local_50;
  int local_4c;
  int local_44;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8448;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_spemitter__ParticleLogic_00757c3c);
  iVar3 = *(int *)(param_1 + 4);
  pfVar1 = (float *)(param_1 + 0x90);
  *pfVar1 = 3.4028235e+38;
  *(undefined4 *)(param_1 + 0x94) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x98) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x9c) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xa0) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xa4) = 0xff7fffff;
  local_4 = 0;
  local_4c = 0;
  local_5c = 0.0;
  if (*(int *)(param_1 + 0x100) != 0) {
    fVar12 = (float10)FUN_006ba270();
    local_50 = (float)fVar12;
    if ((*(byte *)(iVar3 + 0x84) & 2) != 0) {
      fVar12 = (float10)FUN_006bad30();
      local_50 = (float)(fVar12 * (float10)local_50);
    }
    local_44 = 0;
    if (0 < *(int *)(param_1 + 0x108)) {
      pfVar8 = (float *)(param_1 + 0x140);
      do {
        fVar2 = param_3 + pfVar8[-0xb];
        pfVar8[-0xb] = fVar2;
        if (pfVar8[-0xc] != 0.0) {
          if (fVar2 < *(float *)(iVar3 + 0x8c)) {
            if ((*(byte *)(iVar3 + 0x84) & 0x10) != 0) {
              fVar2 = *(float *)(iVar3 + 0x8c) - fVar2;
            }
            pfVar8[-1] = pfVar8[-10];
            *pfVar8 = pfVar8[-9];
            fVar4 = fVar2 * fVar2 * _DAT_006e936c;
            pfVar8[1] = pfVar8[-8];
            pfVar8[-1] = fVar2 * pfVar8[-7] + pfVar8[-1];
            *pfVar8 = fVar2 * pfVar8[-6] + *pfVar8;
            pfVar8[1] = fVar2 * pfVar8[-5] + pfVar8[1];
            fVar2 = fVar4 * *(float *)(iVar3 + 0xb8);
            pfVar8[-1] = fVar2 * pfVar8[-7] + pfVar8[-1];
            *pfVar8 = fVar2 * pfVar8[-6] + *pfVar8;
            pfVar8[1] = fVar2 * pfVar8[-5] + pfVar8[1];
            *pfVar8 = *pfVar8 - fVar4 * *(float *)(iVar3 + 0xb4);
            if ((*(byte *)(iVar3 + 0x84) & 0x20) == 0) {
              pfVar8[-2] = pfVar8[3] * pfVar8[-0xb] + pfVar8[-4];
            }
            bVar6 = local_4c < 1;
            local_4c = local_4c + -1;
            if (bVar6) {
              fVar2 = pfVar8[-1];
              fVar4 = pfVar8[1];
              fVar5 = *pfVar8;
              if (fVar2 < *pfVar1 != (NAN(fVar2) || NAN(*pfVar1))) {
                *pfVar1 = fVar2;
              }
              if (fVar5 < *(float *)(param_1 + 0x94) !=
                  (NAN(fVar5) || NAN(*(float *)(param_1 + 0x94)))) {
                *(float *)(param_1 + 0x94) = fVar5;
              }
              if (fVar4 < *(float *)(param_1 + 0x98) !=
                  (NAN(fVar4) || NAN(*(float *)(param_1 + 0x98)))) {
                *(float *)(param_1 + 0x98) = fVar4;
              }
              if (*(float *)(param_1 + 0x9c) < fVar2) {
                *(float *)(param_1 + 0x9c) = fVar2;
              }
              if (*(float *)(param_1 + 0xa0) < fVar5) {
                *(float *)(param_1 + 0xa0) = fVar5;
              }
              if (*(float *)(param_1 + 0xa4) < fVar4) {
                *(float *)(param_1 + 0xa4) = fVar4;
              }
              fVar2 = local_50 * pfVar8[-3] * _DAT_006e95d8;
              if (local_5c <= fVar2) {
                local_5c = fVar2;
              }
              local_4c = *(int *)(param_1 + 0x100) >> 2;
            }
            fVar2 = (pfVar8[-0xb] / *(float *)(iVar3 + 0x8c)) *
                    ((float)*(int *)(iVar3 + 0xc0) - _DAT_006fd354);
            FUN_0064c330(fVar2);
            iVar9 = __ftol();
            pfVar8[-3] = ((float)(iVar9 + 1) - fVar2) * *(float *)(iVar3 + 200 + iVar9 * 8) +
                         (fVar2 - (float)iVar9) * *(float *)(iVar3 + 200 + (iVar9 + 1) * 8);
            uVar7 = __ftol();
            *(undefined1 *)((int)pfVar8 + 10) = uVar7;
            uVar7 = __ftol();
            *(undefined1 *)((int)pfVar8 + 9) = uVar7;
            uVar7 = __ftol();
            *(undefined1 *)(pfVar8 + 2) = uVar7;
            uVar7 = __ftol();
            *(undefined1 *)((int)pfVar8 + 0xb) = uVar7;
          }
          else {
            pfVar8[-0xc] = 0.0;
            *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
          }
        }
        local_44 = local_44 + 1;
        pfVar8 = pfVar8 + 0x11;
      } while (local_44 < *(int *)(param_1 + 0x108));
    }
    iVar9 = *(int *)(param_1 + 0x108);
    if (iVar9 < *(int *)(iVar3 + 0x88)) {
      piVar11 = (int *)(param_1 + 0x110 + iVar9 * 0x44);
      do {
        if (*piVar11 != 0) {
          *piVar11 = 0;
          *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + -1;
        }
        iVar9 = iVar9 + 1;
        piVar11 = piVar11 + 0x11;
      } while (iVar9 < *(int *)(iVar3 + 0x88));
    }
    if (*(int *)(param_1 + 0x100) < 1) {
      pfVar8 = (float *)FUN_006ba140();
      fVar2 = pfVar8[2] * *(float *)(param_1 + 0x24) +
              pfVar8[6] * *(float *)(param_1 + 0x28) + pfVar8[10] * *(float *)(param_1 + 0x2c) +
              pfVar8[0xe];
      fVar4 = pfVar8[1] * *(float *)(param_1 + 0x24) +
              pfVar8[5] * *(float *)(param_1 + 0x28) + pfVar8[9] * *(float *)(param_1 + 0x2c) +
              pfVar8[0xd];
      fVar5 = *pfVar8 * *(float *)(param_1 + 0x24) +
              pfVar8[4] * *(float *)(param_1 + 0x28) + pfVar8[8] * *(float *)(param_1 + 0x2c) +
              pfVar8[0xc];
      if (fVar5 < *pfVar1 != (NAN(fVar5) || NAN(*pfVar1))) {
        *pfVar1 = fVar5;
      }
      if (fVar4 < *(float *)(param_1 + 0x94) != (NAN(fVar4) || NAN(*(float *)(param_1 + 0x94)))) {
        *(float *)(param_1 + 0x94) = fVar4;
      }
      if (fVar2 < *(float *)(param_1 + 0x98) != (NAN(fVar2) || NAN(*(float *)(param_1 + 0x98)))) {
        *(float *)(param_1 + 0x98) = fVar2;
      }
      if (*(float *)(param_1 + 0x9c) < fVar5) {
        *(float *)(param_1 + 0x9c) = fVar5;
      }
      if (*(float *)(param_1 + 0xa0) < fVar4) {
        *(float *)(param_1 + 0xa0) = fVar4;
      }
      if (*(float *)(param_1 + 0xa4) < fVar2) {
        *(float *)(param_1 + 0xa4) = fVar2;
      }
    }
    if ((*(byte *)(iVar3 + 0x84) & 1) == 0) {
      uVar10 = FUN_006bae20(param_2);
      FUN_004936f0(uVar10);
    }
    local_4 = 0xffffffff;
    *pfVar1 = *pfVar1 - local_5c;
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - local_5c;
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x98) - local_5c;
    *(float *)(param_1 + 0x9c) = local_5c + *(float *)(param_1 + 0x9c);
    *(float *)(param_1 + 0xa0) = local_5c + *(float *)(param_1 + 0xa0);
    *(float *)(param_1 + 0xa4) = local_5c + *(float *)(param_1 + 0xa4);
    FUN_00649720();
    ExceptionList = local_c;
    return;
  }
  pfVar8 = (float *)FUN_006ba140();
  fVar2 = pfVar8[2] * *(float *)(param_1 + 0x24) +
          pfVar8[6] * *(float *)(param_1 + 0x28) + pfVar8[10] * *(float *)(param_1 + 0x2c) +
          pfVar8[0xe];
  fVar4 = pfVar8[1] * *(float *)(param_1 + 0x24) +
          pfVar8[5] * *(float *)(param_1 + 0x28) + pfVar8[9] * *(float *)(param_1 + 0x2c) +
          pfVar8[0xd];
  fVar5 = *pfVar8 * *(float *)(param_1 + 0x24) +
          pfVar8[4] * *(float *)(param_1 + 0x28) + pfVar8[8] * *(float *)(param_1 + 0x2c) +
          pfVar8[0xc];
  if (fVar5 < *pfVar1 != (NAN(fVar5) || NAN(*pfVar1))) {
    *pfVar1 = fVar5;
  }
  if (fVar4 < *(float *)(param_1 + 0x94) != (NAN(fVar4) || NAN(*(float *)(param_1 + 0x94)))) {
    *(float *)(param_1 + 0x94) = fVar4;
  }
  if (fVar2 < *(float *)(param_1 + 0x98) != (NAN(fVar2) || NAN(*(float *)(param_1 + 0x98)))) {
    *(float *)(param_1 + 0x98) = fVar2;
  }
  if (*(float *)(param_1 + 0x9c) < fVar5) {
    *(float *)(param_1 + 0x9c) = fVar5;
  }
  if (*(float *)(param_1 + 0xa0) < fVar4) {
    *(float *)(param_1 + 0xa0) = fVar4;
  }
  if (*(float *)(param_1 + 0xa4) < fVar2) {
    *(float *)(param_1 + 0xa4) = fVar2;
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

