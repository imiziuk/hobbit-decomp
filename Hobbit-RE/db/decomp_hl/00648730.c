
int FUN_00648730(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  
  bVar1 = (&DAT_0074c490)[*param_1];
  while ((bVar1 & 1) != 0) {
    pbVar5 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar1 = (&DAT_0074c490)[*pbVar5];
  }
  bVar1 = *param_1;
  pbVar5 = param_1 + 1;
  if ((bVar1 == 0x2d) || (bVar2 = bVar1, bVar1 == 0x2b)) {
    bVar2 = *pbVar5;
    pbVar5 = param_1 + 2;
  }
  iVar4 = 0;
  bVar3 = (&DAT_0074c490)[bVar2];
  while ((bVar3 & 2) != 0) {
    iVar4 = (char)bVar2 + -0x30 + iVar4 * 10;
    bVar2 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = (&DAT_0074c490)[bVar2];
  }
  if (bVar1 == 0x2d) {
    iVar4 = -iVar4;
  }
  return iVar4;
}

