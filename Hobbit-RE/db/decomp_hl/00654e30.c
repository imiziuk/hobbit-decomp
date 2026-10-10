
undefined1 * FUN_00654e30(int param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_38;
  int local_34;
  int local_28;
  undefined1 *local_24;
  int local_20;
  int local_18;
  
  bVar6 = (byte)param_4;
  param_3 = param_3 >> (bVar6 & 0x1f);
  iVar11 = param_2 >> (bVar6 & 0x1f);
  puVar3 = (undefined1 *)
           thunk_FUN_0064ff70(param_3 * iVar11 * 4,s_C__projects_meridian_xCore_x_fil_0074de30,0x344
                             );
  local_18 = 0;
  puVar10 = puVar3;
  local_24 = puVar3;
  if (0 < param_3) {
    do {
      local_20 = 0;
      if (0 < iVar11) {
        iVar15 = local_18 << (bVar6 & 0x1f);
        iVar4 = local_18 + 1 << (bVar6 & 0x1f);
        do {
          iVar16 = 0;
          iVar12 = 0;
          local_34 = 0;
          local_38 = 0;
          if (iVar15 < iVar4) {
            iVar5 = local_20 << (bVar6 & 0x1f);
            iVar13 = local_20 + 1 << (bVar6 & 0x1f);
            iVar8 = iVar15 * param_2;
            local_28 = iVar4 - iVar15;
            do {
              if (iVar5 < iVar13) {
                pbVar9 = (byte *)(param_1 + 2 + (iVar8 + iVar5) * 4);
                iVar14 = iVar13 - iVar5;
                do {
                  pbVar1 = pbVar9 + 1;
                  pbVar2 = pbVar9 + -2;
                  iVar16 = iVar16 + (uint)*pbVar9;
                  iVar12 = iVar12 + (uint)pbVar9[-1];
                  pbVar9 = pbVar9 + 4;
                  local_38 = local_38 + (uint)*pbVar2;
                  local_34 = local_34 + (uint)*pbVar1;
                  iVar14 = iVar14 + -1;
                  puVar10 = local_24;
                } while (iVar14 != 0);
              }
              iVar8 = iVar8 + param_2;
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          bVar7 = bVar6 * '\x02' - 1;
          puVar10[2] = (char)((iVar16 >> (bVar7 & 0x1f)) + 1 >> 1);
          puVar10[1] = (char)((iVar12 >> (bVar7 & 0x1f)) + 1 >> 1);
          *puVar10 = (char)((local_38 >> (bVar7 & 0x1f)) + 1 >> 1);
          puVar10[3] = (char)((local_34 >> (bVar7 & 0x1f)) + 1 >> 1);
          if (DAT_007e86ec != 0) {
            iVar12 = param_4;
            if (5 < param_4) {
              iVar12 = 6;
            }
            puVar10[3] = (&DAT_007e86d3)[iVar12 * 4];
            puVar10[2] = (&DAT_007e86d2)[iVar12 * 4];
            puVar10[1] = (&DAT_007e86d1)[iVar12 * 4];
            *puVar10 = (&DAT_007e86d0)[iVar12 * 4];
          }
          puVar10 = puVar10 + 4;
          local_20 = local_20 + 1;
          local_24 = puVar10;
        } while (local_20 < iVar11);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_3);
  }
  return puVar3;
}

