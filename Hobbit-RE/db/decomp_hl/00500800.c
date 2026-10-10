
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00500800(undefined4 param_1)

{
  int iVar1;
  
  FUN_0066f810(param_1);
  iVar1 = FUN_006710d0(2,0);
  if (iVar1 != 0) {
    DAT_0076200c = 0;
    DAT_00762014 = 1;
    return 0;
  }
  iVar1 = FUN_006710d0(0x9e,0);
  if (iVar1 != 0) {
    DAT_0076200c = 0;
    DAT_00762014 = 1;
    return 0;
  }
  iVar1 = FUN_00670ef0(0x16d,0);
  if (iVar1 == 0) {
    iVar1 = FUN_00670ef0(0x165,0);
    if (iVar1 == 0) {
      if (DAT_007624b4 == 0) {
        iVar1 = FUN_006710d0(0x16d,0);
        if (iVar1 != 0) {
          _DAT_00762010 = _DAT_006efbdc + _DAT_00762010;
        }
        iVar1 = FUN_006710d0(0x165,0);
        if (iVar1 != 0) {
          _DAT_00762010 = _DAT_00762010 - _DAT_006efbdc;
        }
      }
      else {
        DAT_007624b4 = DAT_007624b4 + -1;
      }
      goto LAB_005008dc;
    }
    _DAT_00762010 = _DAT_00762010 - DAT_006e92e8;
  }
  else {
    _DAT_00762010 = _DAT_00762010 + DAT_006e92e8;
  }
  DAT_007624b4 = 0x1e;
LAB_005008dc:
  iVar1 = FUN_00670ef0(0xb9,0);
  if (iVar1 != 0) {
    FUN_00500980();
  }
  iVar1 = FUN_00670ef0(0xc6,0);
  if (iVar1 != 0) {
    DAT_0076200c = 0;
  }
  if (_DAT_00762010 < (float)DAT_00762008) {
    if (_DAT_00762010 < DAT_006e92e4 != (NAN(_DAT_00762010) || NAN(DAT_006e92e4))) {
      _DAT_00762010 = (float)DAT_00762008 - DAT_006e92e8;
    }
    return 1;
  }
  _DAT_00762010 = 0.0;
  return 1;
}

