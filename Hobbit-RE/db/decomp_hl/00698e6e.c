
void FUN_00698e6e(int param_1,int param_2,int *param_3,int param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 *local_c;
  
  iVar3 = *(int *)(param_1 + 0x1a4);
  iVar4 = *(int *)(iVar3 + 0x18);
  iVar5 = *(int *)(param_1 + 0x11c);
  iVar6 = *(int *)(iVar3 + 0x28);
  iVar7 = *(int *)(param_1 + 0x5c);
  piVar8 = *(int **)(param_1 + 0x74);
  iVar9 = *piVar8;
  iVar10 = piVar8[1];
  iVar11 = piVar8[2];
  if (0 < param_4) {
    param_2 = param_2 - (int)param_3;
    local_20 = param_3;
    local_40 = param_4;
    do {
      pbVar12 = *(byte **)(param_2 + (int)local_20);
      local_c = (undefined1 *)*local_20;
      if (*(char *)(iVar3 + 0x24) == '\0') {
        psVar18 = *(short **)(iVar3 + 0x20);
        local_34 = 1;
        param_3 = (int *)0x3;
        *(undefined1 *)(iVar3 + 0x24) = 1;
      }
      else {
        local_34 = -1;
        *(undefined1 *)(iVar3 + 0x24) = 0;
        pbVar12 = pbVar12 + iVar7 * 3 + -3;
        local_c = local_c + iVar7 + -1;
        psVar18 = (short *)(*(int *)(iVar3 + 0x20) + (iVar7 * 3 + 3) * 2);
        param_3 = (int *)0xfffffffd;
      }
      iVar15 = 0;
      local_1c = 0;
      local_1c._0_2_ = 0;
      local_18 = 0;
      local_18._0_2_ = 0;
      local_14 = 0;
      local_14._0_2_ = 0;
      iVar19 = 0;
      param_4 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      for (iVar2 = iVar7; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar20 = (uint)*(byte *)(*(int *)(iVar6 + (psVar18[(int)param_3] + 8 + iVar19 >> 4) * 4) +
                                 (uint)*pbVar12 + iVar5);
        uVar16 = (uint)*(byte *)(*(int *)(iVar6 + (psVar18[(int)param_3 + 1] + 8 + iVar15 >> 4) * 4)
                                 + (uint)pbVar12[1] + iVar5);
        uVar13 = (uint)*(byte *)(*(int *)(iVar6 + (psVar18[(int)param_3 + 2] + 8 + param_4 >> 4) * 4
                                         ) + (uint)pbVar12[2] + iVar5);
        iVar19 = (int)uVar13 >> 3;
        iVar15 = (int)uVar20 >> 3;
        puVar1 = (ushort *)(*(int *)(iVar4 + iVar15 * 4) + (((int)uVar16 >> 2) * 0x20 + iVar19) * 2)
        ;
        if (*puVar1 == 0) {
          FUN_00698cf5(param_1,iVar15,iVar19);
        }
        iVar19 = *puVar1 - 1;
        *local_c = (char)iVar19;
        iVar21 = uVar20 - *(byte *)(iVar19 + iVar9);
        iVar17 = uVar16 - *(byte *)(iVar19 + iVar10);
        iVar14 = uVar13 - *(byte *)(iVar19 + iVar11);
        *psVar18 = (short)local_14 + (short)iVar21 * 3;
        local_14 = local_28 + iVar21 * 5;
        iVar19 = iVar21 * 7;
        psVar18[1] = (short)local_18 + (short)iVar17 * 3;
        local_18 = local_2c + iVar17 * 5;
        iVar15 = iVar17 * 7;
        psVar18[2] = (short)local_1c + (short)iVar14 * 3;
        local_1c = local_30 + iVar14 * 5;
        param_4 = iVar14 * 7;
        pbVar12 = pbVar12 + (int)param_3;
        local_c = local_c + local_34;
        psVar18 = psVar18 + (int)param_3;
        local_30 = iVar14;
        local_2c = iVar17;
        local_28 = iVar21;
      }
      local_20 = local_20 + 1;
      local_40 = local_40 + -1;
      *psVar18 = (short)local_14;
      psVar18[1] = (short)local_18;
      psVar18[2] = (short)local_1c;
    } while (local_40 != 0);
  }
  return;
}

