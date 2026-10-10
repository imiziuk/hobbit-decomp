
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fee90(void)

{
  char cVar1;
  DWORD dwMilliseconds;
  int iVar2;
  undefined4 extraout_ECX;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  _DAT_0075eba0 = 1.0;
  DAT_0076035c = 1;
  DAT_00760358 = 0;
  if (DAT_00760354 != 0) {
    do {
      cVar1 = FUN_006628b0();
      if (cVar1 != '\0') {
        _DAT_0075eba0 = 0.0;
        DAT_00760354 = 0;
        return;
      }
      FUN_00671320();
      FUN_00649050();
      FUN_00648d60();
      if (DAT_0075fb98 == 0) {
        if (DAT_0075fb94 != 0) {
          FUN_00650130(s_WVMemDump_txt_00730e60);
          DAT_0075fb94 = 0;
        }
        fVar3 = (float10)FUN_0064cd30();
        if ((float10)DAT_006e92e4 < (float10)_DAT_006efbd8 - fVar3) {
          dwMilliseconds = __ftol();
          Sleep(dwMilliseconds);
        }
        fVar3 = (float10)FUN_0064ce40();
        _DAT_0075fb68 = (float)fVar3;
        FUN_0064cbe0();
        FUN_0064cc00();
        iVar2 = FUN_004ff0a0();
        if (iVar2 == 0) {
          _DAT_0075eba0 = 0.0;
          DAT_00760354 = 0;
          return;
        }
        fVar3 = (float10)FUN_0064cd30();
        _DAT_0075fb90 = (float)fVar3;
        FUN_0064cc30();
        if (DAT_007600f4 == 0) {
          FUN_0064cc00();
          FUN_004ff9f0();
          fVar3 = (float10)FUN_0064cd30();
          _DAT_0075fb88 = (float)fVar3;
          FUN_0064cc30();
        }
        FUN_0064cc00();
        FUN_005a3dc0();
        if (DAT_00760358 == 0) {
          FUN_004ff4d0();
        }
        fVar3 = (float10)FUN_0064cd30();
        _DAT_0075fb8c = (float)fVar3;
        FUN_0064cc30();
        FUN_006b6940();
        FUN_004f7560();
        if (DAT_0076035c != 0) {
          if (_DAT_0075eba4 < DAT_006e92e4 == (NAN(_DAT_0075eba4) || NAN(DAT_006e92e4))) {
            uVar5 = 0x3f28f5c3;
            uVar4 = extraout_ECX;
            FUN_00406b70(0xff000000);
            FUN_004f8520(0,uVar4,uVar5);
          }
          if (_DAT_0075eba0 < DAT_006e92e4 != (_DAT_0075eba0 == DAT_006e92e4)) {
            DAT_0076035c = 0;
          }
        }
        if (DAT_00760358 != 0) {
          DAT_00760358 = 0;
          DAT_00760354 = 0;
          DAT_00760360 = 1;
          FUN_004f8fb0();
        }
      }
      else {
        FUN_00500740();
        DAT_0075fb98 = 0;
      }
    } while (DAT_00760354 != 0);
  }
  DAT_00760354 = 0;
  _DAT_0075eba0 = 0.0;
  return;
}

