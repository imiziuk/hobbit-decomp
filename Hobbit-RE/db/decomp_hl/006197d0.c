
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006197d0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iStack_34;
  undefined1 auStack_2c [4];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_c;
  
  if (DAT_007cc6fc == 0) {
    DAT_007cc6fc = 1;
    uVar1 = FUN_0054c5c0(5,s_C__projects_meridian_Support_AI__0074997c,0x7d5);
    lVar12 = FUN_0054c790();
    while (lVar12 != 0) {
      piVar2 = (int *)FUN_004021c0(lVar12);
      uVar3 = (**(code **)(*piVar2 + 0x4c))(s_BurntWood_00749970);
      iVar4 = FUN_00647f90(uVar3);
      if (iVar4 != 0) {
        FUN_005788e0(piVar2 + 0x11,lVar12);
        iStack_34 = 0;
        if (0 < DAT_00777218) {
          pfVar8 = (float *)&DAT_00773a28;
          do {
            FUN_004b8740(pfVar8 + -4,pfVar8 + -1,pfVar8 + 2);
            if ((float)s_333_FireSplash_007493c0._0_4_ < fStack_c) {
              fStack_14 = pfVar8[-2] + pfVar8[1];
              fStack_28 = (pfVar8[-4] + pfVar8[-1] + pfVar8[2]) * _DAT_006e9338;
              fStack_24 = (pfVar8[-3] + *pfVar8 + pfVar8[3]) * _DAT_006e9338;
              fStack_20 = (fStack_14 + pfVar8[4]) * _DAT_006e9338;
              FUN_0061aa70(&fStack_28);
            }
            iStack_34 = iStack_34 + 1;
            pfVar8 = pfVar8 + 0xe;
          } while (iStack_34 < DAT_00777218);
        }
      }
      lVar12 = FUN_0054c790();
    }
    FUN_0054c880(uVar1);
    iVar4 = *(int *)(param_1 + 0x5b4);
    if (DAT_007493bc <= *(int *)(param_1 + 0x5b4)) {
      iVar4 = DAT_007493bc;
    }
    if (0 < iVar4) {
      do {
        iVar4 = FUN_00647b10(0,*(int *)(param_1 + 0x5b4) + -1);
        iVar5 = iVar4 * 0xc;
        uStack_1c = *(undefined4 *)(*(int *)(param_1 + 0x5b8) + iVar5);
        iVar7 = *(int *)(param_1 + 0x5b8) + iVar5;
        uStack_18 = *(undefined4 *)(iVar7 + 4);
        fStack_14 = *(float *)(iVar7 + 8);
        iVar4 = (*(int *)(param_1 + 0x5b4) - iVar4) + -1;
        if (0 < iVar4) {
          do {
            iVar7 = *(int *)(param_1 + 0x5b8);
            *(undefined4 *)(iVar5 + iVar7) = *(undefined4 *)(iVar5 + 0xc + iVar7);
            *(undefined4 *)(iVar5 + 4 + iVar7) = *(undefined4 *)(iVar5 + 0x10 + iVar7);
            *(undefined4 *)(iVar5 + 8 + iVar7) = *(undefined4 *)(iVar5 + 0x14 + iVar7);
            iVar5 = iVar5 + 0xc;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        *(int *)(param_1 + 0x5b4) = *(int *)(param_1 + 0x5b4) + -1;
        uVar13 = FUN_0054bad0(0x2d,0,0);
        fStack_24 = (float)((ulonglong)uVar13 >> 0x20);
        piVar2 = (int *)FUN_004021c0(uVar13);
        (**(code **)(*piVar2 + 0xd0))(s_Torch_fxs_00749964);
        fVar9 = (float10)FUN_00647b30(0x40000000,0x40400000);
        fVar10 = (float10)FUN_00647b30(0x40000000,0x40400000);
        fVar11 = (float10)FUN_00647b30(0x40000000,0x40400000);
        (**(code **)(*piVar2 + 0xfc))((float)fVar11,(float)fVar10,(float)fVar9);
        (**(code **)(*piVar2 + 0x14))(auStack_2c,0);
        iVar4 = *(int *)(param_1 + 0x598);
        if (*(int *)(param_1 + 0x5a0) < iVar4 + 1) {
          if (*(int *)(param_1 + 0x5a8) == 0) {
            iVar7 = *(int *)(param_1 + 0x5a0) / 2;
            iVar5 = 1;
            if (0 < iVar7) {
              iVar5 = iVar7;
            }
            if (iVar5 + iVar4 < 1) {
              iVar4 = 1;
            }
            else {
              if (iVar7 < 1) {
                iVar7 = 1;
              }
              iVar4 = iVar4 + iVar7;
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0x5a8) + iVar4;
          }
          pvVar6 = operator_new(iVar4 * 8);
          iVar5 = 0;
          if (0 < *(int *)(param_1 + 0x598)) {
            do {
              iVar7 = *(int *)(param_1 + 0x59c);
              *(undefined4 *)((int)pvVar6 + iVar5 * 8) = *(undefined4 *)(iVar7 + iVar5 * 8);
              *(undefined4 *)((int)pvVar6 + iVar5 * 8 + 4) = *(undefined4 *)(iVar7 + 4 + iVar5 * 8);
              iVar5 = iVar5 + 1;
            } while (iVar5 < *(int *)(param_1 + 0x598));
          }
          FUN_006bf840(*(undefined4 *)(param_1 + 0x59c));
          *(void **)(param_1 + 0x59c) = pvVar6;
          *(int *)(param_1 + 0x5a0) = iVar4;
        }
        iVar4 = *(int *)(param_1 + 0x598);
        iVar5 = *(int *)(param_1 + 0x59c);
        *(int *)(iVar5 + iVar4 * 8) = (int)uVar13;
        *(float *)(iVar5 + 4 + iVar4 * 8) = fStack_24;
        *(int *)(param_1 + 0x598) = *(int *)(param_1 + 0x598) + 1;
      } while ((float)fVar10 != 1.4013e-45);
    }
  }
  return;
}

