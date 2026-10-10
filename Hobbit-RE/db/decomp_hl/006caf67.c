
void FUN_006caf67(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  undefined1 uVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  ushort local_518 [256];
  undefined1 local_318 [256];
  undefined1 local_218 [256];
  undefined4 local_118 [64];
  undefined1 local_18 [6];
  byte local_12;
  byte local_11 [13];
  
  iVar1 = (*(code *)PTR_FUN_0075b2cc)(DAT_00816120,local_18);
  if (iVar1 == 1) {
    uVar2 = 0;
    do {
      *(char *)((int)local_118 + uVar2) = (char)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_118[0]._0_1_ = 0x20;
    if (local_12 != 0) {
      pbVar8 = local_11;
      do {
        uVar2 = (uint)local_12;
        if (uVar2 <= *pbVar8) {
          uVar4 = (*pbVar8 - uVar2) + 1;
          puVar9 = (undefined4 *)((int)local_118 + uVar2);
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = 0x20202020;
            puVar9 = puVar9 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar9 = 0x20;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
          }
        }
        local_12 = pbVar8[1];
        pbVar8 = pbVar8 + 2;
      } while (local_12 != 0);
    }
    FUN_006cba7a(1,local_118,0x100,local_518,DAT_00816120,DAT_00816344,0);
    FUN_006c6ce8(DAT_00816344,0x100,local_118,0x100,local_218,0x100,DAT_00816120,0);
    FUN_006c6ce8(DAT_00816344,0x200,local_118,0x100,local_318,0x100,DAT_00816120,0);
    uVar2 = 0;
    puVar6 = local_518;
    do {
      if ((*puVar6 & 1) == 0) {
        if ((*puVar6 & 2) != 0) {
          (&DAT_00816241)[uVar2] = (&DAT_00816241)[uVar2] | 0x20;
          uVar7 = local_318[uVar2];
          goto LAB_006cb073;
        }
        (&DAT_00816140)[uVar2] = 0;
      }
      else {
        (&DAT_00816241)[uVar2] = (&DAT_00816241)[uVar2] | 0x10;
        uVar7 = local_218[uVar2];
LAB_006cb073:
        (&DAT_00816140)[uVar2] = uVar7;
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < 0x100);
  }
  else {
    uVar2 = 0;
    do {
      if ((uVar2 < 0x41) || (0x5a < uVar2)) {
        if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
          (&DAT_00816241)[uVar2] = (&DAT_00816241)[uVar2] | 0x20;
          cVar3 = (char)uVar2 + -0x20;
          goto LAB_006cb0bd;
        }
        (&DAT_00816140)[uVar2] = 0;
      }
      else {
        (&DAT_00816241)[uVar2] = (&DAT_00816241)[uVar2] | 0x10;
        cVar3 = (char)uVar2 + ' ';
LAB_006cb0bd:
        (&DAT_00816140)[uVar2] = cVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
  }
  return;
}

