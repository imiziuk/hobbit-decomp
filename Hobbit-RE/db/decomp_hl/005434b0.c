
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005434b0(int param_1,int param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  undefined *puVar9;
  int local_94;
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9487;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_anim_track_controller__SetAnim_00737f20);
  local_4 = 0;
  if (param_2 < 0) {
    param_2 = 0;
  }
  iVar7 = *(int *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (param_2 == iVar7) {
    iVar4 = FUN_00549470(param_1 + 4);
    FUN_00549580(param_1 + 4);
    iVar7 = *(int *)(param_1 + 8);
    if (((*(byte *)(iVar7 * 0x50 + 0x2e + *(int *)(iVar4 + 0x58)) & 1) == 0) ||
       ((*(int *)(param_1 + 0x14) < 1 &&
        (fVar2 = (float)(*(int *)(param_1 + 0xc) + -2),
        fVar2 < *(float *)(param_1 + 0x10) == (fVar2 == *(float *)(param_1 + 0x10))))))
    goto LAB_00543881;
  }
  if (iVar7 != -1) {
    if (DAT_006e92e4 < param_3) {
      FUN_005449e0();
      iVar7 = param_1 + 4;
      if (*(float *)(param_1 + 0x2c) <= DAT_006e92e4) {
        iVar4 = FUN_00549470(iVar7);
        FUN_00549580(iVar7);
        uVar6 = *(undefined4 *)(param_1 + 0x28);
        iVar4 = *(int *)(param_1 + 8) * 0x50 + *(int *)(iVar4 + 0x58);
        fVar8 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x10),
                                      (float)(*(short *)(iVar4 + 0x24) + -1),uVar6);
        FUN_0053fe50(*(undefined4 *)(iVar4 + 0x20),(float)fVar8,uVar6);
      }
      else {
        fVar2 = *(float *)(param_1 + 0x30) / *(float *)(param_1 + 0x2c);
        iVar4 = FUN_00549470(iVar7);
        FUN_00549580(iVar7);
        local_94 = *(int *)(iVar4 + 0x4c);
        iVar4 = FUN_00549470(iVar7);
        FUN_00549580(iVar7);
        iVar4 = *(int *)(param_1 + 8) * 0x50 + *(int *)(iVar4 + 0x58);
        puVar9 = &DAT_007698d0;
        fVar8 = (float10)FUN_0064c6b0(*(undefined4 *)(param_1 + 0x10),
                                      (float)(*(short *)(iVar4 + 0x24) + -1),&DAT_007698d0);
        FUN_0053fe50(*(undefined4 *)(iVar4 + 0x20),(float)fVar8,puVar9);
        if (0 < local_94) {
          iVar4 = 0;
          do {
            iVar1 = *(int *)(param_1 + 0x28) + iVar4;
            pfVar5 = (float *)(iVar1 + 0xc);
            fVar3 = *pfVar5 * *(float *)((int)&DAT_007698dc + iVar4) +
                    *(float *)(iVar1 + 0x14) * *(float *)((int)&DAT_007698e4 + iVar4) +
                    *(float *)((int)&DAT_007698e0 + iVar4) * *(float *)(iVar1 + 0x10) +
                    *(float *)((int)&DAT_007698e8 + iVar4) *
                    *(float *)(*(int *)(param_1 + 0x28) + 0x18 + iVar4);
            if ((_DAT_006e999c < fVar3) ||
               (fVar3 < _DAT_006ef7fc != (NAN(fVar3) || NAN(_DAT_006ef7fc)))) {
              FUN_0042fda0(pfVar5);
            }
            else {
              FUN_00542ec0(pfVar5,(float *)((int)&DAT_007698dc + iVar4),fVar3,fVar2,iVar1 + 0xc);
            }
            pfVar5 = (float *)FUN_00405080(local_24,&DAT_007698d0 + iVar4,iVar1);
            FUN_00401f00(fVar2 * *pfVar5,fVar2 * pfVar5[1],fVar2 * pfVar5[2]);
            uVar6 = FUN_00402130(local_18,iVar1,local_7c);
            FUN_004357e0(uVar6);
            uVar6 = FUN_00405080(local_48,&DAT_007698ec + iVar4,iVar1 + 0x1c);
            uVar6 = FUN_0042eea0(local_3c,fVar2,uVar6);
            uVar6 = FUN_00402130(local_30,iVar1 + 0x1c,uVar6);
            FUN_004357e0(uVar6);
            iVar4 = iVar4 + 0x28;
            local_94 = local_94 + -1;
          } while (local_94 != 0);
        }
      }
      if (*(int *)(param_1 + 0x38) != 0) {
        iVar4 = FUN_00549470(iVar7);
        FUN_00549580(iVar7);
        iVar7 = *(int *)(param_1 + 8) * 0x50;
        FUN_0053f7a0(*(undefined4 *)(iVar7 + *(int *)(iVar4 + 0x58) + 0x20),
                     (int)(0 % (longlong)(int)*(short *)(iVar7 + 0x24 + *(int *)(iVar4 + 0x58))),0,
                     local_70);
        iVar7 = *(int *)(param_1 + 0x28);
        *(undefined4 *)(iVar7 + 0xc) = local_64;
        *(undefined4 *)(iVar7 + 0x10) = local_60;
        *(undefined4 *)(iVar7 + 0x14) = local_5c;
        *(undefined4 *)(iVar7 + 0x18) = local_58;
      }
    }
    *(float *)(param_1 + 0x2c) = param_3;
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(int *)(param_1 + 8) = param_2;
  iVar7 = FUN_00549470(param_1 + 4);
  FUN_00549580(param_1 + 4);
  *(int *)(param_1 + 0xc) =
       (int)*(short *)(*(int *)(param_1 + 8) * 0x50 + 0x24 + *(int *)(iVar7 + 0x58));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x34);
LAB_00543881:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

