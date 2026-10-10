
undefined1 * FUN_00655020(int param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_20;
  undefined1 *local_1c;
  int local_14;
  
  bVar5 = (byte)param_4;
  param_3 = param_3 >> (bVar5 & 0x1f);
  iVar12 = param_2 >> (bVar5 & 0x1f);
  puVar2 = (undefined1 *)
           thunk_FUN_0064ff70(param_3 * iVar12 * 4,s_C__projects_meridian_xCore_x_fil_0074de78,0x37a
                             );
  local_14 = 0;
  puVar10 = puVar2;
  local_1c = puVar2;
  if (0 < param_3) {
    do {
      local_30 = 0;
      if (0 < iVar12) {
        iVar3 = local_14 << (bVar5 & 0x1f);
        iVar8 = local_14 + 1 << (bVar5 & 0x1f);
        do {
          iVar13 = 0;
          iVar14 = 0;
          local_40 = 0;
          local_44 = 0;
          local_48 = 0;
          local_34 = 0;
          local_38 = 0;
          local_3c = 0;
          if (iVar3 < iVar8) {
            iVar4 = local_30 << (bVar5 & 0x1f);
            iVar9 = local_30 + 1 << (bVar5 & 0x1f);
            iVar6 = iVar3 * param_2;
            local_20 = iVar8 - iVar3;
            do {
              if (iVar4 < iVar9) {
                pbVar7 = (byte *)(param_1 + 2 + (iVar6 + iVar4) * 4);
                iVar11 = iVar9 - iVar4;
                do {
                  if (pbVar7[1] < 0x80) {
                    local_48 = local_48 + (uint)*pbVar7;
                    local_44 = local_44 + (uint)pbVar7[-1];
                    local_40 = local_40 + (uint)pbVar7[-2];
                    iVar13 = iVar13 + 1;
                  }
                  else {
                    local_3c = local_3c + (uint)*pbVar7;
                    local_38 = local_38 + (uint)pbVar7[-1];
                    local_34 = local_34 + (uint)pbVar7[-2];
                    iVar14 = iVar14 + 1;
                  }
                  pbVar7 = pbVar7 + 4;
                  iVar11 = iVar11 + -1;
                  puVar10 = local_1c;
                } while (iVar11 != 0);
              }
              iVar6 = iVar6 + param_2;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            if (iVar13 <= iVar14) goto LAB_006551a4;
            puVar10[3] = 0;
            puVar10[2] = (char)(local_48 / iVar13);
            puVar10[1] = (char)(local_44 / iVar13);
            uVar1 = (undefined1)(local_40 / iVar13);
          }
          else {
LAB_006551a4:
            puVar10[3] = 0xff;
            puVar10[2] = (char)(local_3c / iVar14);
            puVar10[1] = (char)(local_38 / iVar14);
            uVar1 = (undefined1)(local_34 / iVar14);
          }
          *puVar10 = uVar1;
          if (DAT_007e86ec != 0) {
            iVar13 = param_4;
            if (5 < param_4) {
              iVar13 = 6;
            }
            puVar10[2] = (&DAT_007e86d2)[iVar13 * 4];
            iVar13 = param_4;
            if (5 < param_4) {
              iVar13 = 6;
            }
            puVar10[1] = (&DAT_007e86d1)[iVar13 * 4];
            iVar13 = param_4;
            if (5 < param_4) {
              iVar13 = 6;
            }
            *puVar10 = (&DAT_007e86d0)[iVar13 * 4];
          }
          puVar10 = puVar10 + 4;
          local_30 = local_30 + 1;
          local_1c = puVar10;
        } while (local_30 < iVar12);
      }
      local_14 = local_14 + 1;
    } while (local_14 < param_3);
  }
  return puVar2;
}

