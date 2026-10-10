
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_006cccf0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  
  iVar2 = _DAT_00816368;
  if (DAT_00815f34 == 0) {
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) {
          return 0;
        }
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    bVar5 = (bVar5 < bVar3) * -2 + 1;
  }
  else {
    LOCK();
    _DAT_00816368 = _DAT_00816368 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_00816364;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_00816368 = iVar2;
      FUN_006c56f9(0x13);
    }
    uVar6 = (uint)bVar1;
    bVar5 = 0xff;
    do {
      do {
        if (bVar5 == 0) goto LAB_006ccd9f;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      bVar4 = FUN_006c0ecf(bVar4,bVar5);
      bVar5 = FUN_006c0ecf();
    } while (bVar4 == bVar5);
    bVar5 = (bVar4 < bVar5) * -2 + 1;
LAB_006ccd9f:
    if (uVar6 == 0) {
      LOCK();
      _DAT_00816368 = _DAT_00816368 + -1;
      UNLOCK();
    }
    else {
      FUN_006c575a(0x13);
    }
  }
  return bVar5;
}

