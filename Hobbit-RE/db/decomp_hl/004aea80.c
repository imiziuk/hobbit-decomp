
undefined4 __thiscall FUN_004aea80(int *param_1,int param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  float10 extraout_ST0;
  int *piStack_d4;
  int *piStack_d0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 *puStack_6c;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d3f70;
  pvStack_c = ExceptionList;
  piStack_d0 = (int *)0x4aeab1;
  ExceptionList = &pvStack_c;
  iVar4 = FUN_00647cf0();
  piStack_d4 = (int *)s_Rotation_007207f0;
  piStack_d0 = (int *)iVar4;
  iVar5 = FUN_00647e80(param_2);
  if (iVar5 == 0) {
    piStack_d0 = (int *)0x4aeae5;
    iVar5 = FUN_00647cf0();
    if (iVar4 == iVar5) {
      if (*param_3 != 0xb) goto LAB_004aecdc;
      param_1[0x2a] = param_3[0x8c];
      param_1[0x2b] = param_3[0x8d];
      param_1[0x2c] = param_3[0x8e];
    }
    else {
      piStack_d0 = (int *)s__Pitch_007207e8;
      iVar4 = iVar4 + param_2;
      piStack_d4 = param_3;
      iVar5 = FUN_004af4a0(iVar4);
      if (iVar5 == 0) {
        piStack_d0 = (int *)&DAT_007207e0;
        piStack_d4 = param_3;
        iVar5 = FUN_004af4a0(iVar4);
        if (iVar5 == 0) {
          piStack_d0 = (int *)s__Roll_007207d8;
          piStack_d4 = param_3;
          iVar4 = FUN_004af4a0(iVar4);
          if (iVar4 == 0) goto LAB_004aecdc;
        }
      }
    }
    fStack_94 = 3.4028235e+38;
    fStack_88 = -3.4028235e+38;
    if (param_1[0x30] == 0) {
      fStack_94 = 0.0;
      fStack_88 = 0.0;
    }
    fStack_9c = fStack_94;
    fStack_98 = fStack_94;
    fStack_90 = fStack_88;
    fStack_8c = fStack_88;
    if (0 < param_1[0x30]) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        puStack_6c = (undefined1 *)&piStack_d4;
        FUN_004adb90(&piStack_d4,param_1[0x31] + iVar4);
        FUN_004adfa0(&fStack_ac);
        fStack_ac = fStack_ac - (float)param_1[5];
        fStack_a8 = fStack_a8 - (float)param_1[6];
        fStack_a4 = fStack_a4 - (float)param_1[7];
        if (fStack_ac < fStack_9c != (NAN(fStack_ac) || NAN(fStack_9c))) {
          fStack_9c = fStack_ac;
        }
        if (fStack_a8 < fStack_98 != (NAN(fStack_a8) || NAN(fStack_98))) {
          fStack_98 = fStack_a8;
        }
        if (fStack_a4 < fStack_94 != (NAN(fStack_a4) || NAN(fStack_94))) {
          fStack_94 = fStack_a4;
        }
        if (fStack_90 < fStack_ac) {
          fStack_90 = fStack_ac;
        }
        if (fStack_8c < fStack_a8) {
          fStack_8c = fStack_a8;
        }
        if (fStack_88 < fStack_a4) {
          fStack_88 = fStack_a4;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xe;
      } while (iVar5 < param_1[0x30]);
    }
    param_1[0xb] = (int)fStack_9c;
    param_1[0xc] = (int)fStack_98;
    param_1[0xd] = (int)fStack_94;
    piStack_d0 = (int *)0x4aecc5;
    FUN_004357e0();
    piStack_d0 = param_1 + 5;
    piStack_d4 = (int *)0x4aecd2;
    (**(code **)(*param_1 + 0x14))();
    uVar6 = 1;
  }
  else {
LAB_004aecdc:
    piStack_d0 = (int *)param_2;
    piStack_d4 = (int *)0x4aecee;
    FUN_00647e40();
    piStack_d4 = (int *)s_Click_here_to_refresh_from_anim__0072baa4;
    iVar4 = FUN_00647e40(param_2);
    if (iVar4 == 0) {
      if ((*param_3 == 0xe) || (*param_3 == 4)) {
        piStack_d0 = (int *)0x4aed27;
        FUN_00649b20();
        iVar4 = 0;
        uStack_4 = 0;
        if (iStack_14 != 0) {
          pfVar1 = (float *)(param_1 + 0xb);
          *pfVar1 = 3.4028235e+38;
          param_1[0xc] = 0x7f7fffff;
          param_1[0xd] = 0x7f7fffff;
          param_1[0xe] = -0x800001;
          param_1[0xf] = -0x800001;
          param_1[0x10] = -0x800001;
          FUN_006abe30();
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          piStack_d0 = (int *)0x4aed80;
          FUN_006abf10();
          param_1[0x30] = iStack_5c;
          if (param_1[0x31] != 0) {
            piStack_d0 = (int *)0x4aed9a;
            FUN_00674810();
          }
          piStack_d0 = (int *)0x4aedac;
          pvVar7 = operator_new(param_1[0x30] * 0xe);
          param_1[0x31] = (int)pvVar7;
          if (0 < param_1[0x30]) {
            iVar5 = 0;
            do {
              iVar2 = iStack_60 + 0x1c + iStack_64 * iVar4 * 0x28;
              fStack_b4 = *(float *)(iVar2 + 4);
              fStack_b0 = *(float *)(iVar2 + 8);
              uVar3 = __ftol();
              *(undefined2 *)(iVar5 + param_1[0x31]) = uVar3;
              uVar3 = __ftol();
              *(undefined2 *)(iVar5 + 2 + param_1[0x31]) = uVar3;
              uVar3 = __ftol();
              *(undefined2 *)(iVar5 + 4 + param_1[0x31]) = uVar3;
              fStack_a8 = *(float *)(iStack_60 + 0x10 + iStack_64 * iVar4 * 0x28);
              iVar2 = iStack_60 + 0xc + iStack_64 * iVar4 * 0x28;
              fStack_a4 = *(float *)(iVar2 + 8);
              uStack_a0 = *(undefined4 *)(iVar2 + 0xc);
              uVar3 = __ftol();
              *(undefined2 *)(iVar5 + 6 + param_1[0x31]) = uVar3;
              uVar3 = __ftol();
              *(undefined2 *)(iVar5 + 8 + param_1[0x31]) = uVar3;
              uVar3 = __ftol();
              *(undefined2 *)(iVar5 + 10 + param_1[0x31]) = uVar3;
              uVar3 = __ftol();
              *(undefined2 *)(iVar5 + 0xc + param_1[0x31]) = uVar3;
              if (extraout_ST0 < (float10)*pfVar1 != (NAN(extraout_ST0) || NAN((float10)*pfVar1))) {
                *pfVar1 = (float)extraout_ST0;
              }
              if (fStack_b4 < (float)param_1[0xc] != (NAN(fStack_b4) || NAN((float)param_1[0xc]))) {
                param_1[0xc] = (int)fStack_b4;
              }
              if (fStack_b0 < (float)param_1[0xd] != (NAN(fStack_b0) || NAN((float)param_1[0xd]))) {
                param_1[0xd] = (int)fStack_b0;
              }
              if ((float10)(float)param_1[0xe] < extraout_ST0) {
                param_1[0xe] = (int)(float)extraout_ST0;
              }
              if ((float)param_1[0xf] < fStack_b4) {
                param_1[0xf] = (int)fStack_b4;
              }
              if ((float)param_1[0x10] < fStack_b0) {
                param_1[0x10] = (int)fStack_b0;
              }
              iVar4 = iVar4 + 1;
              iVar5 = iVar5 + 0xe;
            } while (iVar4 < param_1[0x30]);
          }
          if (0 < param_1[0x30]) {
            piStack_d0 = (int *)0xff7fffff;
            piStack_d4 = (int *)0xff7fffff;
            fStack_78 = -3.4028235e+38;
            fStack_74 = -3.4028235e+38;
            fStack_70 = -3.4028235e+38;
            fStack_84 = 3.4028235e+38;
            fStack_80 = 3.4028235e+38;
            fStack_7c = 3.4028235e+38;
            FUN_00404870();
            iVar4 = 0;
            if (0 < param_1[0x30]) {
              iVar5 = 0;
              do {
                puStack_6c = (undefined1 *)&piStack_d4;
                FUN_004adb90(&piStack_d4,param_1[0x31] + iVar5);
                FUN_004adfa0(&fStack_b8);
                fStack_b8 = fStack_b8 - (float)param_1[5];
                fStack_b4 = fStack_b4 - (float)param_1[6];
                fStack_b0 = fStack_b0 - (float)param_1[7];
                if (fStack_b8 < fStack_84 != (NAN(fStack_b8) || NAN(fStack_84))) {
                  fStack_84 = fStack_b8;
                }
                if (fStack_b4 < fStack_80 != (NAN(fStack_b4) || NAN(fStack_80))) {
                  fStack_80 = fStack_b4;
                }
                if (fStack_b0 < fStack_7c != (NAN(fStack_b0) || NAN(fStack_7c))) {
                  fStack_7c = fStack_b0;
                }
                if (fStack_78 < fStack_b8) {
                  fStack_78 = fStack_b8;
                }
                if (fStack_74 < fStack_b4) {
                  fStack_74 = fStack_b4;
                }
                if (fStack_70 < fStack_b0) {
                  fStack_70 = fStack_b0;
                }
                iVar4 = iVar4 + 1;
                iVar5 = iVar5 + 0xe;
              } while (iVar4 < param_1[0x30]);
            }
            piStack_d0 = (int *)0x4af082;
            FUN_00480f60();
          }
          piStack_d0 = param_1 + 5;
          piStack_d4 = (int *)0x4af08f;
          (**(code **)(*param_1 + 0x14))();
          uStack_4 = uStack_4 & 0xffffff00;
          FUN_006abe70();
        }
        uStack_4 = 0xffffffff;
        FUN_00649ba0();
        uVar6 = 1;
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      piStack_d0 = (int *)param_2;
      piStack_d4 = (int *)0x4af0cc;
      iVar4 = FUN_00647e40();
      if (iVar4 == 0) {
        if (*param_3 == 1) {
          iVar4 = param_3[0x93];
          param_1[0x30] = iVar4;
          piStack_d0 = (int *)0x4af0f8;
          pvVar7 = operator_new(iVar4 * 0xe);
          param_1[0x31] = (int)pvVar7;
          iVar4 = 0;
          if (0 < param_1[0x30]) {
            iVar5 = 0;
            do {
              *(undefined2 *)(iVar5 + 4 + param_1[0x31]) = 0;
              *(undefined2 *)(iVar5 + 2 + param_1[0x31]) = 0;
              *(undefined2 *)(iVar5 + param_1[0x31]) = 0;
              *(undefined2 *)(iVar5 + 0xc + param_1[0x31]) = 0;
              *(undefined2 *)(iVar5 + 10 + param_1[0x31]) = 0;
              *(undefined2 *)(iVar5 + 8 + param_1[0x31]) = 0;
              *(undefined2 *)(iVar5 + 6 + param_1[0x31]) = 0;
              iVar4 = iVar4 + 1;
              iVar5 = iVar5 + 0xe;
            } while (iVar4 < param_1[0x30]);
          }
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        piStack_d0 = (int *)param_2;
        piStack_d4 = (int *)0x4af17b;
        uVar6 = FUN_004ab750();
      }
    }
  }
  ExceptionList = pvStack_c;
  return uVar6;
}

