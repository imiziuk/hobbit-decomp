
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00544110(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  float10 fVar10;
  undefined *puVar11;
  int local_84;
  undefined *local_80;
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d94df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_track_controller__MixKeys_00737fac);
  local_4 = 0;
  if ((*(int *)(param_1 + 8) == -1) ||
     ((NAN(*(float *)(param_1 + 0x18)) || NAN(DAT_006e92e4)) !=
      (*(float *)(param_1 + 0x18) == DAT_006e92e4))) {
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
    iVar9 = param_1 + 4;
    iVar3 = FUN_00549470(iVar9);
    FUN_00549580(iVar9);
    iVar3 = *(int *)(iVar3 + 0x4c);
    iVar4 = FUN_00549470(iVar9);
    FUN_00549580(iVar9);
    iVar4 = *(int *)(iVar4 + 0x58);
    iVar7 = *(int *)(param_1 + 8) * 0x50;
    puVar11 = &DAT_007698d0;
    fVar10 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x10),
                                   (float)(*(short *)(iVar7 + 0x24 + iVar4) + -1),&DAT_007698d0);
    FUN_0053fe50(*(undefined4 *)(iVar7 + iVar4 + 0x20),(float)fVar10,puVar11);
    FUN_00649600(s_anim_track_controller__MixKeys___00737fcc);
    local_4._0_1_ = 1;
    if (DAT_006e92e4 < *(float *)(param_1 + 0x2c)) {
      FUN_005449e0();
      fVar1 = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x2c);
      if (0 < iVar3) {
        iVar4 = 0;
        local_80 = (undefined *)iVar3;
        do {
          iVar7 = *(int *)(param_1 + 0x28) + iVar4;
          pfVar6 = (float *)((int)&DAT_007698dc + iVar4);
          pfVar8 = (float *)(iVar7 + 0xc);
          fVar2 = *pfVar6 * *pfVar8 +
                  *(float *)(iVar7 + 0x14) * *(float *)((int)&DAT_007698e4 + iVar4) +
                  *(float *)(iVar7 + 0x18) * *(float *)((int)&DAT_007698e8 + iVar4) +
                  *(float *)(*(int *)(param_1 + 0x28) + 0x10 + iVar4) *
                  *(float *)((int)&DAT_007698e0 + iVar4);
          if ((_DAT_006e999c < fVar2) ||
             (fVar2 < _DAT_006ef7fc != (NAN(fVar2) || NAN(_DAT_006ef7fc)))) {
            *pfVar6 = *pfVar8;
            *(undefined4 *)((int)&DAT_007698e0 + iVar4) = *(undefined4 *)(iVar7 + 0x10);
            *(undefined4 *)((int)&DAT_007698e4 + iVar4) = *(undefined4 *)(iVar7 + 0x14);
            *(undefined4 *)((int)&DAT_007698e8 + iVar4) = *(undefined4 *)(iVar7 + 0x18);
          }
          else {
            FUN_00542ec0(pfVar8,pfVar6,fVar2,fVar1,pfVar6);
          }
          uVar5 = FUN_00405080(local_54,&DAT_007698d0 + iVar4,iVar7);
          uVar5 = FUN_0042eea0(local_60,fVar1,uVar5);
          uVar5 = FUN_00402130(local_48,iVar7,uVar5);
          FUN_004357e0(uVar5);
          uVar5 = FUN_00405080(local_3c,&DAT_007698ec + iVar4,iVar7 + 0x1c);
          uVar5 = FUN_0042eea0(local_30,fVar1,uVar5);
          uVar5 = FUN_00402130(local_24,iVar7 + 0x1c,uVar5);
          FUN_004357e0(uVar5);
          iVar4 = iVar4 + 0x28;
          local_80 = (undefined *)((int)local_80 + -1);
        } while (local_80 != (undefined *)0x0);
      }
    }
    local_4._0_1_ = 0;
    FUN_00649720();
    FUN_00649600(s_anim_track_controller__MixKeys___00737ffc);
    local_4 = CONCAT31(local_4._1_3_,2);
    iVar4 = FUN_00549470(iVar9);
    FUN_00549580(iVar9);
    if ((*(byte *)(*(int *)(iVar4 + 0x58) + 0x2e + *(int *)(param_1 + 8) * 0x50) & 2) == 0) {
      if (0 < iVar3) {
        iVar9 = param_2;
        do {
          FUN_00542fd0(iVar9,&DAT_007698d0 + (iVar9 - param_2),*(undefined4 *)(param_1 + 0x18));
          iVar9 = iVar9 + 0x28;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      local_84 = 0;
      if (0 < iVar3) {
        iVar4 = (int)&DAT_007698d0 - param_2;
        local_80 = &DAT_007698d0;
        pfVar8 = (float *)(param_2 + 0xc);
        do {
          iVar7 = FUN_00549470(iVar9);
          FUN_00549580(iVar9);
          iVar7 = FUN_0053f540(*(undefined4 *)
                                (*(int *)(param_1 + 8) * 0x50 + 0x20 + *(int *)(iVar7 + 0x58)));
          if ((*(uint *)(iVar7 + local_84 * 4) & 0x40000) == 0) {
            fVar1 = *(float *)(param_1 + 0x18);
            fVar2 = *pfVar8 * *(float *)((int)pfVar8 + iVar4) +
                    *(float *)((int)pfVar8 + iVar4 + 8) * pfVar8[2] +
                    *(float *)((int)pfVar8 + iVar4 + 4) * pfVar8[1] +
                    *(float *)((int)pfVar8 + ((int)&DAT_007698dc - param_2)) * pfVar8[3];
            if ((_DAT_006e999c < fVar2) ||
               (fVar2 < _DAT_006ef7fc != (NAN(fVar2) || NAN(_DAT_006ef7fc)))) {
              FUN_0042fda0(pfVar8);
            }
            else {
              FUN_00542ec0(pfVar8,(float *)((int)pfVar8 + iVar4),fVar2,fVar1,pfVar8);
            }
            pfVar6 = (float *)FUN_00405080(local_24,local_80,pfVar8 + -3);
            FUN_00401f00(fVar1 * *pfVar6,fVar1 * pfVar6[1],fVar1 * pfVar6[2]);
            uVar5 = FUN_00402130(local_30,pfVar8 + -3,local_54);
            FUN_004357e0(uVar5);
            uVar5 = FUN_00405080(local_3c,(int)pfVar8 + ((int)&DAT_007698e0 - param_2),pfVar8 + 4);
            uVar5 = FUN_0042eea0(local_48,fVar1,uVar5);
            uVar5 = FUN_00402130(local_18,pfVar8 + 4,uVar5);
            FUN_004357e0(uVar5);
          }
          local_84 = local_84 + 1;
          local_80 = local_80 + 0x28;
          pfVar8 = pfVar8 + 10;
        } while (local_84 < iVar3);
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_00649720();
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  ExceptionList = local_c;
  return;
}

