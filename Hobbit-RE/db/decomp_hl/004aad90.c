
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004aad90(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  longlong lVar8;
  undefined4 uVar9;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  uint local_54;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3e10;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_object__MakeSplash_0072b8d8);
  local_4 = 0;
  local_54 = (*(byte *)((int)param_1 + 0x7f) & 8) >> 3;
  lVar8 = FUN_004aac60();
  if (lVar8 != 0) {
    *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) | 8;
    pfVar3 = (float *)(**(code **)(*param_1 + 0x28))();
    fStack_3c = *pfVar3;
    fStack_38 = pfVar3[1];
    fStack_34 = pfVar3[2];
    FUN_00649600(s_obj_mgr__LockObject_Guid__0071cef0);
    local_4._0_1_ = 1;
    iVar4 = FUN_00406ce0(lVar8);
    local_4 = (uint)local_4._1_3_ << 8;
    if (iVar4 == -1) {
      FUN_00649720();
    }
    else {
      FUN_00649720();
    }
    fVar7 = (float10)FUN_004e7ba0(&fStack_3c);
    fStack_60 = (float)fVar7;
    if ((local_54 == 0) && ((char)param_1[0x1f] != '\x12')) {
      FUN_00405080(&uStack_24,param_1 + 0x14,param_1 + 0x11);
      fStack_30 = fStack_20 * _DAT_006e9360;
      fStack_44 = fStack_38 + fStack_60;
      fStack_48 = fStack_3c;
      fStack_40 = fStack_34;
      uStack_24 = 0;
      fStack_20 = 0.0;
      uStack_1c = 0;
      fStack_2c = fStack_30;
      fStack_28 = fStack_30;
      FUN_00488d30(s_Bilbo_Splash_Medium_007206d8,&fStack_48,&uStack_24,&fStack_30);
      FUN_00659630(s_BilboSplashWater_0071fe04,&fStack_48,1);
    }
    if (DAT_006e92e4 <= fStack_60) {
      FUN_00405080(&uStack_24,param_1 + 0x14,param_1 + 0x11);
      if ((fStack_60 < fStack_20 != (fStack_60 == fStack_20)) &&
         (_DAT_006ebfd8 <
          SQRT(param_2[2] * param_2[2] + param_2[1] * param_2[1] + *param_2 * *param_2))) {
        fStack_48 = *param_2;
        fStack_40 = param_2[2];
        fStack_44 = 0.0;
        FUN_0064c8e0(0x3fc90fdb,&fStack_60,&param_2);
        fVar1 = fStack_48 * fStack_60;
        fStack_48 = ((float)param_2 * fStack_48 + fStack_40 * fStack_60) * _DAT_006edf98 *
                    _DAT_006e9448;
        fStack_44 = fStack_44 * _DAT_006edf98 * _DAT_006e9448;
        fStack_40 = (fStack_40 * (float)param_2 - fVar1) * _DAT_006edf98 * _DAT_006e9448;
        fVar1 = fStack_44 * fStack_44 + fStack_48 * fStack_48 + fStack_40 * fStack_40;
        if (_DAT_006edf94 < SQRT(fVar1)) {
          param_2 = (float *)(DAT_006e92e8 / SQRT(fVar1));
          iVar4 = FUN_0064cf30(param_2);
          if (iVar4 == 0) {
            fStack_40 = 0.0;
            fStack_48 = DAT_006e92e4;
            fStack_44 = DAT_006e92e4;
          }
          else {
            fStack_40 = fStack_40 * (float)param_2;
            fStack_48 = (float)param_2 * fStack_48;
            fStack_44 = (float)param_2 * fStack_44;
          }
          fStack_48 = fStack_48 * _DAT_006edf94;
          fStack_44 = fStack_44 * _DAT_006edf94;
          fStack_40 = fStack_40 * _DAT_006edf94;
        }
        param_2 = (float *)(SQRT(fStack_44 * fStack_44 +
                                 fStack_48 * fStack_48 + fStack_40 * fStack_40) * _DAT_006edf90 +
                           _DAT_006e9580);
        FUN_004357e0(param_1 + 0x11);
        FUN_004357e0(param_1 + 0x14);
        FUN_00405080(&fStack_60,auStack_18,&uStack_24);
        fVar1 = SQRT(fStack_60 * fStack_60 + fStack_5c * fStack_5c + fStack_58 * fStack_58) *
                _DAT_006edf8c;
        if (((fVar1 < _DAT_006e95a8) ||
            (fVar2 = DAT_006e92e8, DAT_006e92e8 < fVar1 == (NAN(DAT_006e92e8) || NAN(fVar1)))) &&
           (fVar2 = fVar1, fVar1 < _DAT_006e95a8)) {
          fVar2 = _DAT_006e95a8;
        }
        fStack_48 = fStack_48 * fVar2;
        fStack_44 = fStack_44 * fVar2;
        fStack_40 = fStack_40 * fVar2;
        uVar5 = __ftol();
        uVar6 = __ftol();
        uVar9 = 0x40000000;
        param_2 = (float *)FUN_00647b10(uVar6,uVar5,0x40000000);
        FUN_004e7e70(&fStack_3c,&fStack_48,0x18,0x41a00000,(float)(int)param_2,uVar9);
        FUN_004ac490(0xbf800000);
        uVar9 = 0x40000000;
        param_2 = (float *)FUN_00647b10(uVar6,uVar5,0x40000000);
        FUN_004e7e70(&fStack_3c,&fStack_48,0x18,0x41a00000,(float)(int)param_2,uVar9);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

