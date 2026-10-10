
void __thiscall FUN_005368d0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d8e18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(byte *)(param_1 + 0x7a) = *(byte *)(param_1 + 0x7a) | 1;
  *(byte *)(param_1 + 0x7f) = *(byte *)(param_1 + 0x7f) | 1;
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 5;
    FUN_00647d10();
    *(undefined4 *)(iVar2 + 0x84) = 0x15;
    *(undefined4 *)(iVar2 + 0x100) = 0;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 0xe;
      FUN_00647d10();
      *(undefined4 *)(iVar2 + 0x84) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 300);
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 1;
    FUN_00647d10();
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf0) = 0;
    *(undefined4 *)(iVar2 + 0xf4) = 0xffffffff;
  }
  param_2 = 0;
  if (0 < *(int *)(param_1 + 0x120)) {
    do {
      FUN_00649920();
      uStack_4 = 0;
      FUN_00649940();
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 0xe;
        FUN_00647d10();
        *(undefined4 *)(iVar2 + 0x84) = 0;
      }
      uStack_4 = 0xffffffff;
      FUN_00649950();
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x120));
  }
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 2;
    FUN_00647d10();
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
    if (DAT_0075d338 == 0) {
      iVar2 = FUN_00425010();
      *(undefined4 *)(iVar2 + 0x80) = 2;
      FUN_00647d10();
      *(undefined4 *)(iVar2 + 0x84) = 2;
      *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
      *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
      if (DAT_0075d338 == 0) {
        iVar2 = FUN_00425010();
        *(undefined4 *)(iVar2 + 0x80) = 2;
        FUN_00647d10();
        *(undefined4 *)(iVar2 + 0x84) = 2;
        *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
        *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
        if (DAT_0075d338 == 0) {
          iVar2 = FUN_00425010();
          *(undefined4 *)(iVar2 + 0x80) = 2;
          FUN_00647d10();
          *(undefined4 *)(iVar2 + 0x84) = 2;
          *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
          *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
          if (DAT_0075d338 == 0) {
            iVar2 = FUN_00425010();
            *(undefined4 *)(iVar2 + 0x80) = 2;
            FUN_00647d10();
            *(undefined4 *)(iVar2 + 0x84) = 2;
            *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
            *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
            if (DAT_0075d338 == 0) {
              iVar2 = FUN_00425010();
              *(undefined4 *)(iVar2 + 0x80) = 2;
              FUN_00647d10();
              *(undefined4 *)(iVar2 + 0x84) = 2;
              *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
              *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
              if (DAT_0075d338 == 0) {
                iVar2 = FUN_00425010();
                *(undefined4 *)(iVar2 + 0x80) = 2;
                FUN_00647d10();
                *(undefined4 *)(iVar2 + 0x84) = 2;
                *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
                *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
                if (DAT_0075d338 == 0) {
                  iVar2 = FUN_00425010();
                  *(undefined4 *)(iVar2 + 0x80) = 2;
                  FUN_00647d10();
                  *(undefined4 *)(iVar2 + 0x84) = 2;
                  *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
                  *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
                  if (DAT_0075d338 == 0) {
                    iVar2 = FUN_00425010();
                    *(undefined4 *)(iVar2 + 0x80) = 2;
                    FUN_00647d10();
                    *(undefined4 *)(iVar2 + 0x84) = 2;
                    *(undefined4 *)(iVar2 + 0xf8) = 0x800000;
                    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_005359f0();
  FUN_00538050();
  FUN_00649b60(param_1 + 0x164);
  FUN_00535a60();
  FUN_00535ad0();
  FUN_00538050();
  FUN_00538050();
  FUN_00537ff0(uVar1,s_MinCombatThreshold_0073756c);
  FUN_00537ff0(uVar1,s_MaxCombatThreshold_00737558,2,0x800000,0x7f7fffff);
  FUN_00499e60();
  FUN_00499e60();
  FUN_00499e60(uVar1,s_m_CurrentState_00737528,0x38,0);
  FUN_00499e60(uVar1,s_m_AmbientIntensity_00737514,0x38,0,0xffffffff);
  FUN_00499e60();
  FUN_00537ff0();
  FUN_00538050(uVar1,s_m_DefaultAmbientTrack_007374d0,&DAT_007644fc);
  FUN_00538050(uVar1,s_m_DefaultCombatTrack_007374b8,&DAT_007644fc,0x38);
  FUN_005669e0();
  FUN_00474220();
  FUN_004ab4e0();
  ExceptionList = pvStack_c;
  return;
}

