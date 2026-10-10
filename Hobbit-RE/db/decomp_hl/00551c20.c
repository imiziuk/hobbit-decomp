
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00551c20(int param_1,float param_2)

{
  short sVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d9ae8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_weather_mgr__OnAdvanceLogic_0073d348);
  local_4 = 0;
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    if (*(float *)(param_1 + 0x10) < _DAT_006e9350 == (*(float *)(param_1 + 0x10) == _DAT_006e9350))
    {
      FUN_0065a050(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x10));
    }
    else {
      *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe;
      FUN_00659c80(*(undefined4 *)(param_1 + 0x50),0);
    }
  }
  if ((*(byte *)(param_1 + 0x54) & 2) != 0) {
    FUN_005c98c0(*(undefined4 *)(param_1 + 0x10));
    FUN_005c9770(param_2);
  }
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    iVar2 = __ftol();
    fStack_24 = 3.4028235e+38;
    fStack_20 = 3.4028235e+38;
    fStack_1c = 3.4028235e+38;
    fStack_18 = -3.4028235e+38;
    fStack_14 = -3.4028235e+38;
    fStack_10 = -3.4028235e+38;
    FUN_0065fce0(0);
    pfVar3 = (float *)FUN_00672260(auStack_3c);
    FUN_00401f00(*pfVar3 - _DAT_006e9344,pfVar3[1] - _DAT_006e9344,pfVar3[2] - _DAT_006e9344);
    FUN_004357e0(&uStack_54);
    uVar4 = FUN_00401f00(0x44bb8000,0x44bb8000,0x44bb8000);
    uVar4 = FUN_00402130(auStack_30,pfVar3,uVar4);
    FUN_004357e0(uVar4);
    uVar4 = FUN_0054c5c0(0x26,s_C__projects_meridian_Support_Wea_0073d310,0x396);
    sVar1 = FUN_0054c7c0();
    while (-1 < sVar1) {
      if ((((((sVar1 != -1) && (iVar7 = *(int *)(DAT_0076f648 + sVar1 * 0x14), iVar7 != 0)) &&
            ((*(byte *)(iVar7 + 0x7f) & 0x10) != 0)) &&
           ((iVar7 != 0 && (pfVar3 = (float *)FUN_005c0150(), fStack_24 <= pfVar3[3])))) &&
          ((fStack_18 < *pfVar3 == (NAN(fStack_18) || NAN(*pfVar3)) &&
           ((fStack_1c <= pfVar3[5] && (fStack_10 < pfVar3[2] == (NAN(fStack_10) || NAN(pfVar3[2])))
            ))))) &&
         ((fStack_20 <= pfVar3[4] &&
          ((fStack_14 < pfVar3[1] == (NAN(fStack_14) || NAN(pfVar3[1])) &&
           (iVar7 = iVar2, 0 < iVar2)))))) {
        do {
          FUN_004e79c0(auStack_48);
          uVar11 = 0x40000000;
          uStack_54 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          fVar8 = (float10)FUN_00647b30(0x42480000,0x43160000,0x40000000);
          fVar10 = (float)fVar8;
          fVar8 = (float10)FUN_00647b30(0x40400000,0x40a00000,fVar10);
          FUN_004e7e70(auStack_48,&uStack_54,0x40,(float)fVar8,fVar10,uVar11);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      sVar1 = FUN_0054c7c0();
    }
    FUN_0054c880(uVar4);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    if ((*(float *)(param_1 + 0x80) < DAT_006e92e4 == (*(float *)(param_1 + 0x80) == DAT_006e92e4))
       || (*(int *)(param_1 + 0x6c) < 1)) {
      *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) - param_2;
    }
    else {
      *(int *)(&DAT_007f23e0 + DAT_007f23d4 * 4) = DAT_007f23cc;
      DAT_007f23d4 = DAT_007f23d4 + 1;
      iVar2 = *(int *)(param_1 + 0x6c);
      iVar6 = DAT_007f23cc - (iVar2 * 4 + 0xfU & 0xfffffff0);
      iVar7 = 0;
      DAT_007f23cc = iVar6;
      if (0 < iVar2) {
        do {
          *(int *)(iVar6 + iVar7 * 4) = iVar7;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar2);
      }
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar5 = FUN_00647b10(0,iVar2 + -1);
          uVar4 = *(undefined4 *)(iVar6 + iVar5 * 4);
          *(undefined4 *)(iVar6 + iVar7 * 4) = uVar4;
          iVar7 = iVar7 + 1;
          *(undefined4 *)(iVar6 + iVar5 * 4) = uVar4;
        } while (iVar7 < iVar2);
      }
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar5 = *(int *)(param_1 + 0x70) + *(int *)(iVar6 + iVar7 * 4) * 0x28;
          fVar8 = (float10)FUN_00647b30(0,0x43c80000);
          fVar9 = (float10)*(float *)(iVar5 + 0x20) * (float10)*(float *)(param_1 + 0x5c);
          if (fVar8 < fVar9 != (NAN(fVar8) || NAN(fVar9))) {
            FUN_00552060(iVar5);
            fVar8 = (float10)FUN_00647b30(0x40000000,0x40c00000);
            *(float *)(param_1 + 0x80) = (float)fVar8;
            break;
          }
          fVar8 = (float10)FUN_00647b30(0x3f000000,0x40400000);
          *(float *)(param_1 + 0x80) = (float)fVar8;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar2);
      }
      DAT_007f23d4 = DAT_007f23d4 + -1;
      DAT_007f23cc = *(int *)(&DAT_007f23e0 + DAT_007f23d4 * 4);
    }
  }
  FUN_005003b0(*(undefined4 *)(param_1 + 0x90));
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

