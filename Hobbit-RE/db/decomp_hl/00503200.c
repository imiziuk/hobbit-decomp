
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00503200(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = FUN_0066f810(param_1);
  if (iVar3 == 0) {
LAB_005032ea:
    fVar1 = _DAT_00762500;
    if (_DAT_00762500 < DAT_006e92e4) {
      fVar1 = DAT_006e92e4;
    }
    fVar2 = (float)(DAT_00762508 + -1);
    if (fVar2 < fVar1 == (NAN(fVar2) || NAN(fVar1))) {
      if (_DAT_00762500 < DAT_006e92e4) {
        _DAT_00762500 = 0.0;
      }
      return;
    }
    _DAT_00762500 = (float)(DAT_00762508 + -1);
    return;
  }
  iVar3 = FUN_006710d0(2,0);
  if ((iVar3 == 0) && (iVar3 = FUN_006710d0(0x9e,0), iVar3 == 0)) {
    iVar3 = FUN_00670ef0(0x16d,0);
    if (iVar3 != 0) {
      _DAT_00762500 = _DAT_00762500 + DAT_006e92e8;
    }
    iVar3 = FUN_00670ef0(0x16a,0);
    if (iVar3 != 0) {
      _DAT_00762500 = _DAT_00762500 + DAT_006e92e8;
    }
    iVar3 = FUN_00670ef0(0x165,0);
    if (iVar3 != 0) {
      _DAT_00762500 = _DAT_00762500 - DAT_006e92e8;
    }
    iVar3 = FUN_00670ef0(0x16a,0);
    if (iVar3 != 0) {
      _DAT_00762500 = _DAT_00762500 - DAT_006e92e8;
    }
    iVar3 = FUN_00670ef0(0xc6,0);
    if (iVar3 == 0) goto LAB_005032ea;
  }
  DAT_00762504 = 0;
  return;
}

