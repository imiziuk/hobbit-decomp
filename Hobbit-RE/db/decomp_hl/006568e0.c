
void FUN_006568e0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iStack00000008;
  int in_stack_00042c60;
  int in_stack_00042c64;
  int in_stack_00042c68;
  
  FUN_006c04f0();
  FUN_0064cbe0();
  FUN_0064cc00();
  if (in_stack_00042c68 == 0) {
    FUN_00656720();
    if (DAT_007eb840 != 0) {
      pbVar5 = (byte *)(DAT_007eb84c + 1);
      iVar15 = DAT_007eb840;
      do {
        iVar2 = ((uint)(pbVar5[1] >> 2) * 0x40 + (uint)(*pbVar5 >> 2)) * 0x40 +
                (uint)(pbVar5[-1] >> 2);
        pbVar5 = pbVar5 + 4;
        iVar15 = iVar15 + -1;
        *(int *)(DAT_007eb848 + iVar2 * 4) = *(int *)(DAT_007eb848 + iVar2 * 4) + 1;
      } while (iVar15 != 0);
    }
    FUN_00656e80();
  }
  else {
    iVar15 = 0x100;
    do {
      FUN_00401080();
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    FUN_00648600();
    FUN_00648600();
    if (DAT_007eb840 != 0) {
      pbVar5 = (byte *)(DAT_007eb84c + 3);
      iVar15 = DAT_007eb840;
      do {
        bVar1 = *pbVar5;
        pbVar5 = pbVar5 + 4;
        iVar15 = iVar15 + -1;
        *(int *)(&stack0x0000005c + (uint)bVar1 * 8) =
             *(int *)(&stack0x0000005c + (uint)bVar1 * 8) + 1;
      } while (iVar15 != 0);
    }
    iVar15 = 1;
    FUN_00656790();
    puVar11 = (undefined4 *)&stack0x00000878;
    while( true ) {
      iVar2 = in_stack_00042c64 / 2;
      if (0x1f < in_stack_00042c64 / 2) {
        iVar2 = 0x20;
      }
      if (iVar2 <= iVar15) break;
      iVar12 = 0;
      iVar2 = 0;
      iVar3 = 0;
      if (iVar15 < 1) break;
      piVar7 = (int *)&stack0x00000864;
      do {
        if (iVar12 < *piVar7) {
          iVar2 = iVar3;
          iVar12 = *piVar7;
        }
        iVar3 = iVar3 + 1;
        piVar7 = piVar7 + 7;
      } while (iVar3 < iVar15);
      if (iVar12 == 0) break;
      FUN_00656810();
      puVar13 = (undefined4 *)&stack0x00000024;
      puVar16 = (undefined4 *)(&stack0x0000085c + iVar2 * 0x1c);
      for (iVar12 = 7; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar16 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar16 = puVar16 + 1;
      }
      iVar15 = iVar15 + 1;
      puVar13 = (undefined4 *)&stack0x00000040;
      puVar16 = puVar11;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar16 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar16 = puVar16 + 1;
      }
      puVar11 = puVar11 + 7;
    }
    if (0 < iVar15) {
      iVar12 = 0;
      puVar11 = (undefined4 *)&stack0x00002c5c;
      iVar2 = iVar15;
      do {
        FUN_00656720();
        if (DAT_007eb840 != 0) {
          pbVar5 = (byte *)(DAT_007eb84c + 3);
          iVar3 = DAT_007eb840;
          do {
            if ((*(int *)(&stack0x0000085c + iVar12) <= (int)(uint)*pbVar5) &&
               ((int)(uint)*pbVar5 <= *(int *)(&stack0x00000860 + iVar12))) {
              piVar7 = (int *)(DAT_007eb848 +
                              (((uint)(pbVar5[-1] >> 2) * 0x40 + (uint)(pbVar5[-2] >> 2)) * 0x40 +
                              (uint)(pbVar5[-3] >> 2)) * 4);
              *piVar7 = *piVar7 + 1;
            }
            pbVar5 = pbVar5 + 4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        uVar4 = FUN_00656e80();
        *puVar11 = uVar4;
        iVar12 = iVar12 + 0x1c;
        puVar11 = puVar11 + 0x101;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (0 < iVar15) {
      piVar7 = (int *)&stack0x00002c5c;
      piVar6 = (int *)&stack0x0000086c;
      iVar2 = iVar15;
      do {
        iVar12 = piVar6[-4];
        *piVar6 = 0;
        if (iVar12 <= piVar6[-3]) {
          iVar3 = 0;
          do {
            iVar3 = iVar3 + *(int *)(&stack0x0000005c + iVar12 * 8);
            iVar12 = iVar12 + 1;
          } while (iVar12 <= piVar6[-3]);
          *piVar6 = iVar3;
        }
        iVar3 = (*piVar6 * in_stack_00042c64) / DAT_007eb840;
        iVar12 = *piVar7;
        piVar6[1] = iVar3;
        if (iVar12 < iVar3) {
          piVar6[1] = iVar12;
        }
        if (piVar6[1] < 1) {
          piVar6[1] = 1;
        }
        piVar7 = piVar7 + 0x101;
        piVar6 = piVar6 + 7;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = 0;
    if (0 < iVar15) {
      piVar7 = (int *)&stack0x00000870;
      iVar12 = iVar15;
      do {
        iVar2 = iVar2 + *piVar7;
        piVar7 = piVar7 + 7;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if (in_stack_00042c64 < iVar2) {
      iVar2 = iVar2 - in_stack_00042c64;
      do {
        iVar12 = 0;
        iVar3 = 0;
        if (0 < iVar15) {
          iVar8 = 0;
          iVar14 = 0;
          do {
            if (*(int *)(&stack0x00000870 + iVar14) < *(int *)(&stack0x00000870 + iVar8)) {
              iVar12 = iVar3;
              iVar14 = iVar8;
            }
            iVar3 = iVar3 + 1;
            iVar8 = iVar8 + 0x1c;
          } while (iVar3 < iVar15);
        }
        iVar2 = iVar2 + -1;
        *(int *)(&stack0x00000870 + iVar12 * 0x1c) = *(int *)(&stack0x00000870 + iVar12 * 0x1c) + -1
        ;
      } while (iVar2 != 0);
    }
    while( true ) {
      iVar3 = 0;
      iVar2 = 0;
      iVar12 = 0;
      iStack00000008 = -1;
      if (0 < iVar15) {
        piVar7 = (int *)&stack0x00002c5c;
        piVar6 = (int *)&stack0x00000870;
        do {
          iVar12 = iVar12 + *piVar6;
          iVar14 = *piVar7;
          if ((0 < iVar14) && (iVar14 = ((iVar14 - *piVar6) * 1000) / iVar14, iVar2 <= iVar14)) {
            iVar2 = iVar14;
            iStack00000008 = iVar3;
          }
          iVar3 = iVar3 + 1;
          piVar6 = piVar6 + 7;
          piVar7 = piVar7 + 0x101;
        } while (iVar3 < iVar15);
      }
      if ((iVar12 == in_stack_00042c64) || (iStack00000008 == -1)) break;
      *(int *)(&stack0x00000870 + iStack00000008 * 0x1c) =
           *(int *)(&stack0x00000870 + iStack00000008 * 0x1c) + 1;
    }
    iVar2 = 0;
    if (0 < iVar15) {
      iVar12 = 0;
      piVar7 = (int *)&stack0x00002c5c;
      iStack00000008 = iVar15;
      do {
        if (*(int *)(&stack0x00000870 + iVar12) == *piVar7) {
          FUN_00648480();
          iVar15 = *piVar7;
        }
        else {
          FUN_00656720();
          if (DAT_007eb840 != 0) {
            pbVar5 = (byte *)(DAT_007eb84c + 3);
            iVar15 = DAT_007eb840;
            do {
              if ((*(int *)(&stack0x0000085c + iVar12) <= (int)(uint)*pbVar5) &&
                 ((int)(uint)*pbVar5 <= *(int *)(&stack0x00000860 + iVar12))) {
                piVar6 = (int *)(DAT_007eb848 +
                                (((uint)(pbVar5[-1] >> 2) * 0x40 + (uint)(pbVar5[-2] >> 2)) * 0x40 +
                                (uint)(pbVar5[-3] >> 2)) * 4);
                *piVar6 = *piVar6 + 1;
              }
              pbVar5 = pbVar5 + 4;
              iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
          }
          iVar15 = FUN_00656e80();
        }
        if (0 < iVar15) {
          puVar10 = &stack0x0000245e;
          puVar9 = (undefined1 *)(in_stack_00042c60 + 3 + iVar2 * 4);
          iVar3 = iVar15;
          do {
            *puVar9 = puVar10[1];
            puVar9[-1] = *puVar10;
            puVar9[-2] = puVar10[-1];
            puVar9[-3] = puVar10[-2];
            *puVar9 = (&stack0x00000868)[iVar12];
            puVar10 = puVar10 + 4;
            puVar9 = puVar9 + 4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar12 = iVar12 + 0x1c;
        iVar2 = iVar2 + iVar15;
        piVar7 = piVar7 + 0x101;
        iStack00000008 = iStack00000008 + -1;
      } while (iStack00000008 != 0);
    }
    if (iVar2 < in_stack_00042c64) {
      puVar9 = (undefined1 *)(in_stack_00042c60 + 1 + iVar2 * 4);
      iVar2 = in_stack_00042c64 - iVar2;
      do {
        puVar9[1] = 0;
        *puVar9 = 0xff;
        puVar9[-1] = 0;
        puVar9[2] = 0xff;
        puVar9 = puVar9 + 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_0064ff40();
  DAT_007eb848 = 0;
  FUN_0064cc50();
  return;
}

