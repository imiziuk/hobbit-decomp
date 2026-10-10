
int FUN_005597e0(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = DAT_00771f60;
  iVar5 = 0;
  iVar4 = DAT_00771f60;
  if (0 < DAT_00771f60) {
    iVar6 = 0;
    while( true ) {
      iVar3 = FUN_00647ed0(param_1,iVar6 + DAT_00771f64);
      iVar4 = DAT_00771f64;
      if (iVar3 == 0) break;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x44;
      if (iVar2 <= iVar5) {
        return iVar3;
      }
    }
    pbVar1 = (byte *)(iVar5 * 0x44 + 0x42 + DAT_00771f64);
    *pbVar1 = *pbVar1 | 2;
    iVar4 = iVar5 * 0x44 + 0x42 + iVar4;
    DAT_00771f74 = 1;
  }
  return iVar4;
}

