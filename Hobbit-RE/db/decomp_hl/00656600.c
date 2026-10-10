
uint FUN_00656600(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint local_14;
  
  if (DAT_007e87bc != 0) {
    uVar2 = param_1 >> 0x10;
    uVar3 = param_1 >> 0x18;
    uVar1 = param_1 >> 8;
    uVar4 = param_1 & 0xff;
    iVar8 = 0x7fffffff;
    local_14 = 0;
    param_1 = 0;
    if (0 < DAT_007e87a0) {
      pbVar6 = (byte *)(DAT_007e87f4 + 1);
      do {
        iVar9 = pbVar6[2] - uVar3;
        iVar10 = pbVar6[-1] - uVar4;
        iVar7 = (uint)*pbVar6 - (uVar1 & 0xff);
        iVar5 = (uint)pbVar6[1] - (uVar2 & 0xff);
        iVar5 = iVar5 * iVar5 + iVar7 * iVar7 + iVar10 * iVar10 + iVar9 * iVar9;
        if (iVar5 < iVar8) {
          local_14 = param_1;
          iVar8 = iVar5;
        }
        param_1 = param_1 + 1;
        pbVar6 = pbVar6 + 4;
      } while ((int)param_1 < DAT_007e87a0);
    }
    return local_14;
  }
  return (uint)*(byte *)((((param_1 >> 0x10 & 0xfc) << 6 | param_1 >> 8 & 0xfc) << 4 |
                         (param_1 & 0xff) >> 2) + DAT_007e8838);
}

