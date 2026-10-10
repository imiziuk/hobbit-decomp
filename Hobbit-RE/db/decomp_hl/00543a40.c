
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00543a40(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  float *pfVar10;
  float10 fVar11;
  float local_6c;
  int local_64;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d94ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_track_controller__GetInterp_00737f60);
  iVar7 = param_1 + 4;
  local_4 = 0;
  iVar5 = FUN_00549470(iVar7);
  FUN_00549580(iVar7);
  local_64 = *(int *)(iVar5 + 0x4c);
  if (*(int *)(param_1 + 8) == -1) {
    if (0 < local_64) {
      puVar6 = (undefined4 *)((int)param_2 + 0x14);
      do {
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0x3f800000;
        puVar6[-5] = 0x3f800000;
        puVar6[-4] = 0x3f800000;
        puVar6[-3] = 0x3f800000;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6 = puVar6 + 10;
        local_64 = local_64 + -1;
      } while (local_64 != 0);
    }
  }
  else {
    iVar5 = FUN_00549470(iVar7);
    FUN_00549580(iVar7);
    iVar5 = *(int *)(param_1 + 8) * 0x50 + *(int *)(iVar5 + 0x58);
    iVar7 = (int)param_2;
    fVar11 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x10),
                                   (float)(*(short *)(iVar5 + 0x24) + -1),param_2);
    FUN_0053fe50(*(undefined4 *)(iVar5 + 0x20),(float)fVar11,iVar7);
    if (DAT_006e92e4 < *(float *)(param_1 + 0x2c)) {
      FUN_005449e0();
      fVar3 = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x2c);
      if (0 < local_64) {
        iVar7 = -0x14 - (int)param_2;
        pfVar10 = (float *)((int)param_2 + 0x14);
        do {
          iVar5 = *(int *)(param_1 + 0x28) + iVar7;
          pfVar9 = (float *)(iVar5 + (int)pfVar10);
          fVar2 = pfVar9[3] * pfVar10[-2] +
                  pfVar9[4] * pfVar10[-1] +
                  pfVar9[5] * *pfVar10 + *(float *)(iVar5 + 0x18 + (int)pfVar10) * pfVar10[1];
          if ((_DAT_006e999c < fVar2) ||
             (fVar2 < _DAT_006ef7fc != (NAN(fVar2) || NAN(_DAT_006ef7fc)))) {
            pfVar10[-2] = pfVar9[3];
            pfVar10[-1] = pfVar9[4];
            *pfVar10 = pfVar9[5];
            pfVar10[1] = pfVar9[6];
          }
          else {
            fVar1 = pfVar9[3];
            if (fVar2 < DAT_006e92e4 == (NAN(fVar2) || NAN(DAT_006e92e4))) {
              param_2 = pfVar9[5];
              fVar2 = pfVar9[4];
              local_6c = pfVar9[6];
            }
            else {
              fVar1 = -fVar1;
              fVar2 = -pfVar9[4];
              param_2 = -pfVar9[5];
              local_6c = -pfVar9[6];
            }
            fVar1 = (pfVar10[-2] - fVar1) * fVar3 + fVar1;
            fVar2 = (pfVar10[-1] - fVar2) * fVar3 + fVar2;
            param_2 = (*pfVar10 - param_2) * fVar3 + param_2;
            local_6c = (pfVar10[1] - local_6c) * fVar3 + local_6c;
            fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + param_2 * param_2 + local_6c * local_6c;
            if (fVar4 < _DAT_006f3c0c == (NAN(fVar4) || NAN(_DAT_006f3c0c))) {
              fVar4 = (_DAT_006f3bfc * fVar4 - _DAT_006f3bf8) * fVar4 + _DAT_006f3bf4;
            }
            else {
              fVar4 = (_DAT_006f3c08 * fVar4 - _DAT_006f3c04) * fVar4 + _DAT_006f3c00;
            }
            pfVar10[-2] = fVar1 * fVar4;
            pfVar10[-1] = fVar4 * fVar2;
            *pfVar10 = param_2 * fVar4;
            pfVar10[1] = fVar4 * local_6c;
          }
          FUN_00401f00(pfVar10[-5] - *pfVar9,pfVar10[-4] - pfVar9[1],pfVar10[-3] - pfVar9[2]);
          uVar8 = FUN_0042eea0(local_48,fVar3,local_54);
          uVar8 = FUN_00402130(local_3c,pfVar9,uVar8);
          FUN_004357e0(uVar8);
          uVar8 = FUN_00405080(local_30,pfVar10 + 2,pfVar9 + 7);
          uVar8 = FUN_0042eea0(local_24,fVar3,uVar8);
          uVar8 = FUN_00402130(local_18,pfVar9 + 7,uVar8);
          FUN_004357e0(uVar8);
          pfVar10 = pfVar10 + 10;
          local_64 = local_64 + -1;
        } while (local_64 != 0);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

