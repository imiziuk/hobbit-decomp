
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00656e80(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  DAT_007eb844 = 1;
  FUN_006571e0(0,0,0,0x3f,0x3f,0x3f,&local_2c,&local_28,&local_24,&local_20,&local_1c,&local_18);
  FUN_00657080(local_2c,local_28,local_24,local_20,local_1c,local_18,&local_14,&local_10,&local_c,
               &local_8,&local_4);
  DAT_007e8844 = local_14;
  _DAT_007e8848 = local_10;
  DAT_007e884c = local_c;
  DAT_007e8850 = local_8;
  DAT_007e8854 = local_4;
  DAT_007e8858 = local_2c;
  DAT_007e885c = local_28;
  DAT_007e8860 = local_24;
  DAT_007e8840 = 1;
  DAT_007e8864 = local_20;
  DAT_007e8868 = local_1c;
  DAT_007e886c = local_18;
  if (DAT_007eb844 < param_2) {
    while( true ) {
      iVar8 = 0;
      iVar6 = 0;
      iVar3 = 0;
      if (DAT_007eb844 < 1) break;
      piVar9 = &DAT_007e8840;
      do {
        if (iVar6 < *piVar9) {
          iVar6 = *piVar9;
          iVar8 = iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar9 = piVar9 + 0xc;
      } while (iVar3 < DAT_007eb844);
      if (((iVar6 == 0) ||
          ((((&DAT_007e8858)[iVar8 * 0xc] == (&DAT_007e8864)[iVar8 * 0xc] &&
            ((&DAT_007e885c)[iVar8 * 0xc] == (&DAT_007e8868)[iVar8 * 0xc])) &&
           ((&DAT_007e8860)[iVar8 * 0xc] == (&DAT_007e886c)[iVar8 * 0xc])))) ||
         (FUN_00657520(iVar8), param_2 <= DAT_007eb844)) break;
    }
  }
  param_2 = 0;
  iVar6 = 0;
  if (0 < iVar1) {
    piVar9 = &DAT_007e884c;
    puVar4 = (undefined1 *)(param_1 + 2);
    param_1 = iVar1;
    do {
      iVar1 = piVar9[-2];
      if (iVar1 == 0) {
        uVar7 = 0;
        uVar5 = 0xff;
        uVar2 = 0;
      }
      else {
        iVar6 = iVar1 >> 1;
        uVar7 = (undefined1)((iVar6 + *piVar9 * 4) / iVar1);
        uVar5 = (undefined1)((iVar6 + piVar9[1] * 4) / iVar1);
        uVar2 = (undefined1)((iVar6 + piVar9[2] * 4) / iVar1);
        param_2 = param_2 + 1;
      }
      puVar4[-2] = uVar2;
      puVar4[1] = 0xff;
      *puVar4 = uVar7;
      puVar4[-1] = uVar5;
      piVar9 = piVar9 + 0xc;
      puVar4 = puVar4 + 4;
      param_1 = param_1 + -1;
      iVar6 = param_2;
    } while (param_1 != 0);
  }
  return iVar6;
}

