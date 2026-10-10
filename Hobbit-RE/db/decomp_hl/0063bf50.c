
void __thiscall FUN_0063bf50(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  undefined4 **ppuVar16;
  int **ppiVar17;
  undefined1 **ppuVar18;
  int iVar19;
  int *piVar20;
  byte *local_e4;
  int *local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  byte *local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 *local_b8;
  int local_b4;
  int *local_b0;
  undefined4 local_ac;
  int local_a8 [4];
  int local_98;
  uint local_94;
  undefined4 *local_90;
  int local_8c;
  int local_84;
  int local_80;
  int local_7c [5];
  int local_68 [5];
  int *local_54;
  int local_50;
  undefined1 *local_40;
  int local_3c;
  
  local_d4 = 0xffffffff;
  local_d8 = -1;
  local_c8 = -1;
  local_c4 = -1;
  local_cc = 0;
  local_ac = 0;
  param_3 = *(int *)(*(int *)(param_1 + 0x68) + 0xc + param_2 * 0x2c) + param_3;
  local_94 = param_3 * 0x34 + *(int *)(param_1 + 0x78);
  iVar4 = *(int *)(local_94 + 0x28) * 0x20;
  piVar12 = (int *)(param_3 * 0x10 + *(int *)(param_1 + 0xa4));
  iVar5 = *(int *)(iVar4 + 8 + *(int *)(param_1 + 0x70));
  if (iVar5 != 0) {
    *piVar12 = *(int *)(iVar4 + *(int *)(param_1 + 0x70) + 0x14) / iVar5;
  }
  local_7c[0] = 0;
  local_68[0] = 0;
  local_90 = (undefined4 *)0x0;
  local_54 = (int *)0x0;
  local_40 = (undefined1 *)0x0;
  local_b0 = piVar12;
  iVar5 = FUN_005c03b0(0,param_2,&local_d4,&local_cc,&local_d8,&local_c8,&local_c4,&local_ac);
  if (iVar5 != 0) {
    local_a8[0] = local_cc;
    local_a8[1] = local_d4;
    local_a8[2] = local_d8;
    local_a8[3] = local_c8 / 3;
    local_98 = local_c4 * 3;
    if (local_c4 * 3 == 0) {
      local_98 = 0xc;
    }
    piVar20 = local_a8;
    piVar13 = local_7c;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar13 = *piVar20;
      piVar20 = piVar20 + 1;
      piVar13 = piVar13 + 1;
    }
  }
  iVar5 = FUN_005c03b0(0x18,param_2,&local_d4,&local_cc,&local_d8,&local_c8,&local_c4,&local_ac);
  if (iVar5 != 0) {
    local_a8[2] = local_d8;
    local_a8[0] = local_cc;
    local_a8[1] = local_d4;
    local_a8[3] = local_c8 / 3;
    local_98 = local_c4 * 3;
    if (local_c4 * 3 == 0) {
      local_98 = 0xc;
    }
    piVar20 = local_a8;
    piVar13 = local_68;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar13 = *piVar20;
      piVar20 = piVar20 + 1;
      piVar13 = piVar13 + 1;
    }
  }
  iVar5 = FUN_005c03b0(0x10,param_2,&local_d4,&local_cc,&local_d8,&local_c8,&local_c4,&local_ac);
  if (iVar5 != 0) {
    piVar12[1] = local_d8;
    local_a8[0] = local_cc;
    local_a8[2] = local_d8;
    local_a8[3] = local_c8 / 2;
    local_a8[1] = local_d4;
    local_98 = local_c4 * 2;
    if (local_c4 * 2 == 0) {
      local_98 = 8;
    }
    piVar20 = local_a8;
    ppuVar16 = &local_90;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar16 = (undefined4 *)*piVar20;
      piVar20 = piVar20 + 1;
      ppuVar16 = ppuVar16 + 1;
    }
  }
  FUN_005c03b0(8,param_2,&local_d4,&local_cc,&local_d8,&local_c8,&local_c4,&local_ac);
  local_b4 = *(int *)(*(int *)(param_1 + 0x6c) * 0x20 + -8 + *(int *)(param_1 + 0x70));
  iVar5 = FUN_005c03b0(0x28,param_2,&local_d4,&local_cc,&local_d8,&local_c8,&local_c4,&local_ac);
  if (iVar5 != 0) {
    local_a8[2] = local_d8;
    local_a8[0] = local_cc;
    local_a8[1] = local_d4;
    local_a8[3] = local_c8;
    local_98 = local_c4;
    if (local_c4 == 0) {
      local_98 = 4;
    }
    piVar20 = local_a8;
    ppiVar17 = &local_54;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppiVar17 = (int *)*piVar20;
      piVar20 = piVar20 + 1;
      ppiVar17 = ppiVar17 + 1;
    }
  }
  iVar5 = FUN_005c03b0(0x20,param_2,&local_d4,&local_cc,&local_d8,&local_c8,&local_c4,&local_ac);
  if (iVar5 != 0) {
    local_a8[1] = local_d4;
    local_a8[0] = local_cc;
    local_a8[2] = local_d8;
    local_a8[3] = local_c8;
    local_98 = local_c4;
    if (local_c4 == 0) {
      local_98 = 4;
    }
    piVar20 = local_a8;
    ppuVar18 = &local_40;
    for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ppuVar18 = (undefined1 *)*piVar20;
      piVar20 = piVar20 + 1;
      ppuVar18 = ppuVar18 + 1;
    }
  }
  iVar5 = piVar12[1];
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar4 = iVar5 * 8 + 0x1c;
    piVar12[2] = 0;
    local_c0 = (int *)operator_new((*piVar12 + 2) * iVar4);
    piVar12[3] = (int)local_c0;
    local_b4 = 0;
    if (0 < *piVar12) {
      puVar15 = (undefined4 *)(local_68[0] + 8);
      local_b8 = (undefined4 *)(local_7c[0] + 8);
      puVar6 = (undefined4 *)((int)local_c0 + 0x14);
      local_d0 = (byte *)local_90;
      puVar14 = local_40;
      do {
        puVar6[-5] = local_b8[-2];
        puVar6[-4] = local_b8[-1];
        puVar6[-3] = *local_b8;
        puVar6[-2] = puVar15[-2];
        puVar6[-1] = puVar15[-1];
        *puVar6 = *puVar15;
        *(undefined1 *)(puVar6 + 1) = *puVar14;
        iVar19 = 0;
        if (0 < piVar12[1]) {
          puVar10 = (undefined4 *)local_d0;
          puVar11 = puVar6;
          do {
            puVar11[2] = *puVar10;
            puVar11[3] = puVar10[1];
            iVar19 = iVar19 + 1;
            puVar10 = (undefined4 *)((int)puVar10 + local_84 * local_80);
            puVar11 = puVar11 + 2;
          } while (iVar19 < piVar12[1]);
        }
        puVar6 = puVar6 + iVar5 * 2 + 7;
        local_b8 = (undefined4 *)((int)local_b8 + local_7c[1]);
        puVar15 = (undefined4 *)((int)puVar15 + local_68[1]);
        puVar14 = puVar14 + local_3c;
        local_d0 = (byte *)((int)local_d0 + local_8c);
        local_b4 = local_b4 + 1;
      } while (local_b4 < *piVar12);
    }
    FUN_0063bec0();
    iVar5 = *piVar12;
    if (0 < iVar5) {
      local_d0 = (byte *)((int)local_c0 + 0x18);
      iVar19 = 1;
      piVar20 = local_c0;
      do {
        local_d0 = local_d0 + iVar4;
        iVar8 = iVar5 + -1;
        if (iVar19 < iVar5 + -1) {
          iVar8 = iVar19;
        }
        *(undefined1 *)((int)piVar20 + 0x19) = *(undefined1 *)(iVar8 * iVar4 + 0x18 + (int)local_c0)
        ;
        local_e4 = local_d0;
        local_e0 = (int *)iVar19;
        while( true ) {
          iVar5 = *piVar12;
          if (iVar19 + 5 <= *piVar12) {
            iVar5 = iVar19 + 5;
          }
          if (iVar5 <= (int)local_e0) goto LAB_0063c789;
          local_94 = (uint)*local_e4;
          cVar3 = FUN_0063bee0(local_94);
          if (cVar3 != '\0') break;
          local_e0 = (int *)((int)local_e0 + 1);
          local_e4 = local_e4 + iVar4;
        }
        *(undefined1 *)((int)piVar20 + 0x19) = (undefined1)local_94;
LAB_0063c789:
        FUN_0063bee0(*(undefined1 *)((int)piVar20 + 0x18));
        FUN_0063bee0(*(undefined1 *)((int)piVar20 + 0x19));
        piVar20 = (int *)((int)piVar20 + iVar4);
        iVar5 = *piVar12;
        bVar1 = iVar19 < iVar5;
        iVar19 = iVar19 + 1;
      } while (bVar1);
    }
  }
  else {
    local_d0 = (byte *)(iVar5 * 8 + 0x3c);
    piVar12[3] = 0;
    local_b8 = (undefined4 *)operator_new((*piVar12 + 1) * (int)local_d0);
    piVar12[2] = (int)local_b8;
    local_c0 = (int *)0x0;
    if (0 < *piVar12) {
      local_e4 = (byte *)local_90;
      puVar15 = (undefined4 *)(local_68[0] + 8);
      local_bc = (int *)(local_7c[0] + 8);
      puVar6 = (undefined4 *)((int)local_b8 + 0x18);
      piVar12 = local_54;
      do {
        puVar6[-6] = local_bc[-2];
        puVar6[-5] = local_bc[-1];
        puVar6[-4] = *local_bc;
        puVar6[-3] = 0x3f800000;
        puVar6[-2] = puVar15[-2];
        puVar6[-1] = puVar15[-1];
        *puVar6 = *puVar15;
        iVar5 = 0;
        puVar6[1] = 0;
        puVar6[1] = 0;
        piVar20 = (int *)(local_b4 + *piVar12 * 0x24);
        puVar6[2] = *piVar20;
        if (0 < local_b0[1]) {
          puVar11 = puVar6 + 9;
          pbVar9 = local_e4;
          do {
            *puVar11 = *(undefined4 *)pbVar9;
            puVar11[1] = *(undefined4 *)((int)pbVar9 + 4);
            iVar5 = iVar5 + 1;
            pbVar9 = (byte *)((int)pbVar9 + local_84 * local_80);
            puVar11 = puVar11 + 2;
          } while (iVar5 < local_b0[1]);
        }
        iVar5 = 0;
        if (*piVar20 < 1) {
LAB_0063c3de:
          puVar11 = puVar6 + iVar5 + 4;
          do {
            *puVar11 = 0;
            *(undefined1 *)(iVar5 + 0xc + (int)puVar6) = 0;
            iVar5 = iVar5 + 1;
            puVar11 = puVar11 + 1;
          } while (iVar5 < 4);
        }
        else {
          piVar13 = puVar6 + 4;
          iVar4 = iVar5;
          piVar2 = piVar20;
          do {
            *piVar13 = piVar2[5];
            iVar5 = iVar4 + 1;
            *(char *)(iVar4 + 0xc + (int)puVar6) = (char)piVar2[1] + *(char *)(local_94 + 0x30);
            piVar13 = piVar13 + 1;
            iVar4 = iVar5;
            piVar2 = piVar2 + 1;
          } while (iVar5 < *piVar20);
          if (iVar5 < 4) goto LAB_0063c3de;
        }
        puVar6 = (undefined4 *)((int)puVar6 + (int)local_d0);
        local_bc = (int *)((int)local_bc + local_7c[1]);
        puVar15 = (undefined4 *)((int)puVar15 + local_68[1]);
        piVar12 = (int *)((int)piVar12 + local_50);
        local_e4 = (byte *)((int)local_e4 + local_8c);
        local_c0 = (int *)((int)local_c0 + 1);
      } while ((int)local_c0 < *local_b0);
    }
    FUN_0063bec0();
    if (0 < *local_b0) {
      local_94 = -(int)local_d0;
      local_e0 = (int *)((int)local_b8 + (int)local_d0 + 0x20);
      iVar5 = -0x38 - (int)local_b8;
      local_b4 = 6;
      puVar14 = (undefined1 *)((int)local_b8 + 0x38);
      do {
        local_dc = 0;
        puVar7 = puVar14;
        do {
          if ((int)(puVar7 + iVar5) < 4) {
            *puVar7 = puVar7[-0x14];
          }
          else {
            *puVar7 = puVar14[-0x14];
          }
          puVar7 = puVar7 + 1;
        } while ((int)(puVar7 + iVar5) < 2);
        local_e4 = (byte *)(local_b4 + -5);
        piVar12 = local_e0 + 1;
        local_c0 = local_e0;
        local_b8 = (undefined4 *)iVar5;
        while( true ) {
          iVar4 = local_b4;
          puVar15 = local_b8;
          iVar5 = *local_b0;
          if (local_b4 <= *local_b0) {
            iVar5 = local_b4;
          }
          local_bc = piVar12;
          if ((iVar5 <= (int)local_e4) || (1 < local_dc)) break;
          iVar5 = 0;
          if (0 < *local_e0) {
            do {
              if (1 < local_dc) break;
              iVar4 = *piVar12;
              cVar3 = FUN_0063bee0((char)iVar4);
              if (cVar3 != '\0') {
                puVar14[local_dc] = (char)iVar4;
                local_dc = local_dc + 1;
              }
              iVar5 = iVar5 + 1;
              piVar12 = (int *)((int)piVar12 + 1);
            } while (iVar5 < local_bc[-1]);
          }
          local_e4 = (byte *)((int)local_e4 + 1);
          local_e0 = (int *)((int)local_e0 + (int)local_d0);
          piVar12 = (int *)((int)local_bc + (int)local_d0);
        }
        iVar5 = 0;
        if (0 < *(int *)(puVar14 + -0x18)) {
          do {
            FUN_0063bee0(puVar14[iVar5 + -0x14]);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(puVar14 + -0x18));
        }
        iVar5 = 0;
        do {
          FUN_0063bee0(puVar14[iVar5]);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 2);
        iVar5 = (int)puVar15 + local_94;
        local_e0 = (int *)((int)local_c0 + (int)local_d0);
        puVar14 = puVar14 + (int)local_d0;
        local_b4 = iVar4 + 1;
        if (*local_b0 <= iVar4 + -5) {
          return;
        }
      } while( true );
    }
  }
  return;
}

