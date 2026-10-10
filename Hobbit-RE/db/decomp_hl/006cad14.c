
undefined4 FUN_006cad14(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  uint local_1c;
  byte local_16 [14];
  uint local_8;
  
  FUN_006c56f9(0x19);
  iVar3 = FUN_006caec1(param_1);
  if (iVar3 != DAT_00816120) {
    if (iVar3 != 0) {
      iVar9 = 0;
      piVar4 = &DAT_0075abc8;
LAB_006cad51:
      if (*piVar4 != iVar3) goto code_r0x006cad55;
      local_8 = 0;
      puVar12 = (undefined4 *)&DAT_00816240;
      for (iVar7 = 0x40; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      }
      *(undefined1 *)puVar12 = 0;
      pbVar10 = &DAT_0075abd8 + iVar9 * 0x30;
      do {
        bVar1 = *pbVar10;
        pbVar8 = pbVar10;
        while ((bVar1 != 0 && (bVar1 = pbVar8[1], bVar1 != 0))) {
          uVar6 = (uint)*pbVar8;
          if (uVar6 <= bVar1) {
            bVar2 = (&DAT_0075abc0)[local_8];
            do {
              (&DAT_00816241)[uVar6] = (&DAT_00816241)[uVar6] | bVar2;
              uVar6 = uVar6 + 1;
            } while (uVar6 <= bVar1);
          }
          pbVar8 = pbVar8 + 2;
          bVar1 = *pbVar8;
        }
        local_8 = local_8 + 1;
        pbVar10 = pbVar10 + 8;
      } while (local_8 < 4);
      DAT_0081613c = 1;
      DAT_00816120 = iVar3;
      DAT_00816344 = FUN_006caf0b(iVar3);
      DAT_00816130 = (&DAT_0075abcc)[iVar9 * 0xc];
      DAT_00816134 = (&DAT_0075abd0)[iVar9 * 0xc];
      DAT_00816138 = (&DAT_0075abd4)[iVar9 * 0xc];
      goto LAB_006caea5;
    }
    goto LAB_006caea0;
  }
  goto LAB_006cad3b;
code_r0x006cad55:
  piVar4 = piVar4 + 0xc;
  iVar9 = iVar9 + 1;
  if (0x75acb7 < (int)piVar4) goto code_r0x006cad60;
  goto LAB_006cad51;
code_r0x006cad60:
  iVar9 = (*(code *)PTR_FUN_0075b2cc)(iVar3,&local_1c);
  uVar6 = 1;
  if (iVar9 == 1) {
    DAT_00816344 = 0;
    puVar12 = (undefined4 *)&DAT_00816240;
    for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    *(undefined1 *)puVar12 = 0;
    if (local_1c < 2) {
      DAT_0081613c = 0;
      DAT_00816120 = iVar3;
    }
    else {
      DAT_00816120 = iVar3;
      if (local_16[0] != 0) {
        pbVar10 = local_16 + 1;
        do {
          bVar1 = *pbVar10;
          if (bVar1 == 0) break;
          for (uVar5 = (uint)pbVar10[-1]; uVar5 <= bVar1; uVar5 = uVar5 + 1) {
            (&DAT_00816241)[uVar5] = (&DAT_00816241)[uVar5] | 4;
          }
          pbVar8 = pbVar10 + 1;
          pbVar10 = pbVar10 + 2;
        } while (*pbVar8 != 0);
      }
      do {
        (&DAT_00816241)[uVar6] = (&DAT_00816241)[uVar6] | 8;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0xff);
      DAT_00816344 = FUN_006caf0b(iVar3);
      DAT_0081613c = 1;
    }
    DAT_00816130 = 0;
    DAT_00816134 = 0;
    DAT_00816138 = 0;
  }
  else {
    if (DAT_00815f74 == 0) {
      uVar11 = 0xffffffff;
      goto LAB_006caeb2;
    }
LAB_006caea0:
    FUN_006caf3e();
  }
LAB_006caea5:
  FUN_006caf67();
LAB_006cad3b:
  uVar11 = 0;
LAB_006caeb2:
  FUN_006c575a(0x19);
  return uVar11;
}

