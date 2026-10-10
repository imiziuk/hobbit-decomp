
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bdfd0(int param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float afStack_84 [6];
  float afStack_6c [6];
  float afStack_54 [6];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30 [12];
  
  local_30[0] = *(float *)(param_1 + 0x264);
  local_30[1] = 0.0;
  local_30[2] = *(float *)(param_1 + 0x264);
  local_30[4] = 0.0;
  local_30[3] = *(float *)(param_1 + 0x264);
  local_30[7] = 0.0;
  local_30[10] = 0.0;
  local_30[5] = -*(float *)(param_1 + 0x264);
  local_30[0xb] = *(float *)(param_1 + 0x264);
  local_30[6] = local_30[5];
  local_30[8] = local_30[5];
  local_30[9] = local_30[5];
  piVar5 = (int *)FUN_0041bcc0();
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x28))();
  uStack_90 = *puVar6;
  uStack_8c = puVar6[1];
  uStack_88 = puVar6[2];
  afStack_84[0] = 0.0;
  afStack_84[1] = 0.0;
  iVar7 = 0;
  do {
    pfVar1 = local_30 + iVar7 * 3;
    FUN_00428790(*(undefined4 *)(param_1 + 0x70));
    FUN_004286f0(*(undefined4 *)(param_1 + 0x68));
    FUN_00428740(*(undefined4 *)(param_1 + 0x6c));
    *pfVar1 = *(float *)(param_1 + 0x14) + *pfVar1;
    local_30[iVar7 * 3 + 1] = local_30[iVar7 * 3 + 1] + *(float *)(param_1 + 0x18);
    local_30[iVar7 * 3 + 2] = local_30[iVar7 * 3 + 2] + *(float *)(param_1 + 0x1c);
    FUN_00405080(afStack_54,&uStack_90,pfVar1);
    fVar9 = (float10)FUN_00402000();
    fVar4 = afStack_84[0];
    if (iVar7 == 0) {
      afStack_84[0] = (float)fVar9;
      afStack_6c[0] = local_30[0];
      afStack_6c[1] = local_30[1];
      afStack_6c[2] = local_30[2];
    }
    else if (fVar9 <= (float10)afStack_84[0]) {
      if ((iVar7 == 1) || ((float10)afStack_84[1] < fVar9)) {
        afStack_84[1] = (float)fVar9;
        afStack_6c[3] = *pfVar1;
        afStack_6c[4] = local_30[iVar7 * 3 + 1];
        afStack_6c[5] = local_30[iVar7 * 3 + 2];
      }
    }
    else {
      afStack_6c[3] = afStack_6c[0];
      afStack_84[0] = (float)fVar9;
      afStack_6c[4] = afStack_6c[1];
      afStack_6c[5] = afStack_6c[2];
      afStack_84[1] = fVar4;
      afStack_6c[0] = *pfVar1;
      afStack_6c[1] = local_30[iVar7 * 3 + 1];
      afStack_6c[2] = local_30[iVar7 * 3 + 2];
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    uVar2 = *(undefined4 *)((int)afStack_6c + iVar7);
    uVar3 = *(undefined4 *)((int)afStack_6c + iVar7 + 4);
    *(undefined4 *)((int)afStack_84 + iVar7 + 8) = *(undefined4 *)((int)afStack_6c + iVar7 + 8);
    *(undefined4 *)((int)afStack_84 + iVar7) = uVar2;
    *(undefined4 *)((int)afStack_84 + iVar7 + 4) = uVar3;
    FUN_00401f00(*(float *)((int)afStack_84 + iVar7) - *(float *)(param_1 + 0x14),
                 *(float *)((int)afStack_84 + iVar7 + 4) - *(float *)(param_1 + 0x18),
                 *(float *)((int)afStack_84 + iVar7 + 8) - *(float *)(param_1 + 0x1c));
    iVar8 = iVar7 + 0xc;
    *(undefined4 *)((int)afStack_54 + iVar7) = uStack_90;
    *(undefined4 *)((int)afStack_54 + iVar7 + 4) = uStack_8c;
    *(undefined4 *)((int)afStack_54 + iVar7 + 8) = uStack_88;
    iVar7 = iVar8;
  } while (iVar8 < 0x18);
  FUN_00401f00(afStack_54[3] + afStack_54[0],afStack_54[4] + afStack_54[1],
               afStack_54[5] + afStack_54[2]);
  *(undefined4 *)(param_1 + 0x24c) = uStack_88;
  *(undefined4 *)(param_1 + 0x244) = uStack_90;
  *(undefined4 *)(param_1 + 0x248) = uStack_8c;
  *(float *)(param_1 + 0x244) = *(float *)(param_1 + 0x244) * _DAT_006e99ec;
  *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x248) * _DAT_006e99ec;
  *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x24c) * _DAT_006e99ec;
  *(undefined4 *)(param_1 + 0x214) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 0x1c);
  afStack_84[2] = *(float *)(param_1 + 0x24c);
  afStack_84[0] = *(float *)(param_1 + 0x244);
  afStack_84[1] = *(float *)(param_1 + 0x248);
  FUN_0042e1f0();
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  uStack_88 = 0;
  FUN_00468380(&uStack_3c,&uStack_90);
  FUN_00404870(uStack_3c,uStack_38,uStack_34);
  return;
}

