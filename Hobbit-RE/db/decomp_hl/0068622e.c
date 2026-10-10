
undefined4 __thiscall FUN_0068622e(undefined4 *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  int local_1c;
  uint local_18;
  byte *local_14;
  uint local_10;
  uint local_c;
  
  if (param_3 < 0x28) {
    return 0x80004005;
  }
  if (*param_2 < 0x28) {
    return 0x80004005;
  }
  uVar12 = param_2[2];
  uVar13 = param_2[1];
  local_c = uVar12;
  if ((int)uVar12 < 1) {
    local_c = -uVar12;
  }
  uVar2 = *(ushort *)((int)param_2 + 0xe);
  uVar4 = param_2[8];
  if ((uVar2 < 9) && (uVar4 == 0)) {
    uVar4 = 1 << ((byte)uVar2 & 0x1f);
  }
  uVar4 = *param_2 + uVar4 * 4;
  if (param_3 < uVar4) {
    return 0x80004005;
  }
  if ((short)param_2[3] != 1) {
    return 0x80004005;
  }
  if ((((int)uVar12 < 0) && (param_2[4] != 0)) && (param_2[4] != 3)) {
    return 0x80004005;
  }
  if (param_2[4] < 3) {
    if (((uVar2 == 1) || (uVar2 == 4)) || (uVar2 == 8)) {
      uVar12 = param_2[8];
      param_3 = 0x29;
      if (uVar12 == 0) {
        uVar12 = 1 << ((byte)uVar2 & 0x1f);
      }
      param_1[9] = 1;
      pvVar5 = operator_new(0x400);
      param_1[7] = pvVar5;
      if (pvVar5 == (void *)0x0) {
        return 0x8007000e;
      }
      local_10 = 0;
      puVar6 = (undefined1 *)(*param_2 + (int)param_2);
      if (uVar12 != 0) {
        do {
          iVar9 = local_10 * 4;
          *(undefined1 *)(iVar9 + param_1[7]) = puVar6[2];
          *(undefined1 *)(param_1[7] + 1 + iVar9) = puVar6[1];
          *(undefined1 *)(param_1[7] + 2 + iVar9) = *puVar6;
          *(undefined1 *)(param_1[7] + 3 + iVar9) = 0xff;
          local_10 = local_10 + 1;
          puVar6 = puVar6 + 4;
        } while (local_10 < uVar12);
      }
      for (; uVar12 < 0x100; uVar12 = uVar12 + 1) {
        iVar9 = uVar12 * 4;
        *(undefined1 *)(iVar9 + param_1[7]) = 0xff;
        *(undefined1 *)(param_1[7] + 1 + iVar9) = 0xff;
        *(undefined1 *)(param_1[7] + 2 + iVar9) = 0xff;
        *(undefined1 *)(param_1[7] + 3 + iVar9) = 0xff;
      }
      goto LAB_00686559;
    }
    if (uVar2 == 0x10) {
LAB_0068649b:
      param_3 = 0x18;
      goto LAB_00686559;
    }
    if (uVar2 == 0x18) goto LAB_00686371;
    if (uVar2 != 0x20) {
      return 0x80004005;
    }
  }
  else {
    if (param_2[4] != 3) {
      return 0x80004001;
    }
    if (*param_2 < 0x6c) {
      return 0x80004005;
    }
    uVar12 = param_2[0xc];
    uVar7 = param_2[10];
    if (uVar2 == 0x10) {
      if (((uVar12 == 0xff) && (param_2[0xb] == 0xff)) &&
         ((uVar7 == 0xff && (param_2[0xd] == 0xff00)))) {
        param_3 = 0x33;
        goto LAB_00686559;
      }
      if (uVar12 == 0x1f) {
        if (((param_2[0xb] == 0x7e0) && (uVar7 == 0xf800)) && (param_2[0xd] == 0)) {
          param_3 = 0x17;
          goto LAB_00686559;
        }
        if ((param_2[0xb] == 0x3e0) && (uVar7 == 0x7c00)) {
          if (param_2[0xd] == 0) goto LAB_0068649b;
          if (param_2[0xd] == 0x8000) {
            param_3 = 0x19;
            goto LAB_00686559;
          }
        }
      }
      if (((uVar12 == 0xf) && (param_2[0xb] == 0xf0)) &&
         ((uVar7 == 0xf00 && (param_2[0xd] == 0xf000)))) {
        param_3 = 0x1a;
      }
      else {
        if ((((uVar12 != 3) || (param_2[0xb] != 0x1c)) || (uVar7 != 0xe0)) ||
           (param_2[0xd] != 0xff00)) {
          return 0x80004005;
        }
        param_3 = 0x1d;
      }
      goto LAB_00686559;
    }
    if (uVar2 == 0x18) {
      if (uVar12 != 0xff) {
        return 0x80004005;
      }
      if (param_2[0xb] != 0xff00) {
        return 0x80004005;
      }
      if (uVar7 != 0xff0000) {
        return 0x80004005;
      }
      if (param_2[0xd] != 0) {
        return 0x80004005;
      }
LAB_00686371:
      param_3 = 0x14;
      goto LAB_00686559;
    }
    if (uVar2 != 0x20) {
      return 0x80004005;
    }
    if (uVar12 != 0xff) {
      return 0x80004005;
    }
    if (param_2[0xb] != 0xff00) {
      return 0x80004005;
    }
    if (uVar7 != 0xff0000) {
      return 0x80004005;
    }
    if (param_2[0xd] != 0) {
      if (param_2[0xd] != 0xff000000) {
        return 0x80004005;
      }
      param_3 = 0x15;
      goto LAB_00686559;
    }
  }
  param_3 = 0x16;
LAB_00686559:
  uVar2 = *(ushort *)((int)param_2 + 0xe);
  uVar12 = uVar13;
  if (uVar2 == 1) {
    uVar7 = uVar13 >> 3;
  }
  else if (uVar2 == 4) {
    uVar7 = uVar13 >> 1;
  }
  else {
    uVar7 = (uVar2 >> 3) * uVar13;
    uVar12 = uVar7;
  }
  uVar10 = uVar7 + 3 & 0xfffffffc;
  *param_1 = param_3;
  param_1[5] = uVar13;
  uVar7 = uVar12 + 3 & 0xfffffffc;
  param_1[2] = uVar7;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = local_c;
  if (((int)param_2[2] < 0) && (7 < *(ushort *)((int)param_2 + 0xe))) {
    param_1[8] = 0;
    param_1[1] = uVar4 + (int)param_2;
  }
  else {
    param_1[8] = 1;
    pbVar8 = (byte *)operator_new(uVar7 * local_c);
    param_1[1] = pbVar8;
    if (pbVar8 == (byte *)0x0) {
      return 0x8007000e;
    }
    pbVar14 = (byte *)(uVar4 + (int)param_2);
    iVar9 = param_1[2];
    pbVar15 = pbVar8;
    local_1c = iVar9;
    if (-1 < (int)param_2[2]) {
      pbVar15 = pbVar8 + (local_c - 1) * iVar9;
      local_1c = -iVar9;
    }
    pbVar11 = pbVar8 + iVar9 * local_c;
    local_14 = pbVar15;
    if (param_2[4] == 2) {
      while (pbVar8 <= pbVar15) {
        if (*pbVar14 == 0) {
          bVar3 = pbVar14[1];
          if (bVar3 == 0) {
            pbVar15 = local_14 + -param_1[2];
            local_14 = pbVar15;
          }
          else if (bVar3 == 1) {
            pbVar15 = pbVar8 + -param_1[2];
          }
          else if (bVar3 == 2) {
            pbVar11 = pbVar14 + 3;
            pbVar14 = pbVar14 + 2;
            pbVar15 = pbVar15 + ((uint)*pbVar14 - (uint)*pbVar11 * param_1[2]);
          }
          else {
            uVar12 = 0;
            if (bVar3 != 0) {
              do {
                if ((uVar12 & 1) == 0) {
                  bVar3 = pbVar14[((int)uVar12 >> 1) + 2] >> 4;
                }
                else {
                  bVar3 = pbVar14[((int)uVar12 >> 1) + 2] & 0xf;
                }
                pbVar15[uVar12] = bVar3;
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (int)(uint)pbVar14[1]);
            }
            pbVar15 = pbVar15 + pbVar14[1];
            pbVar14 = pbVar14 + ((pbVar14[1] >> 1) + 1 & 0xfffffffe);
          }
        }
        else {
          uVar12 = 0;
          if (*pbVar14 != 0) {
            do {
              if ((uVar12 & 1) == 0) {
                bVar3 = pbVar14[1] >> 4;
              }
              else {
                bVar3 = pbVar14[1] & 0xf;
              }
              pbVar15[uVar12] = bVar3;
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)(uint)*pbVar14);
          }
          pbVar15 = pbVar15 + *pbVar14;
        }
        pbVar14 = pbVar14 + 2;
      }
    }
    else if (param_2[4] == 1) {
      while (pbVar8 <= pbVar15) {
        bVar3 = *pbVar14;
        if (bVar3 == 0) {
          uVar12 = (uint)pbVar14[1];
          if (uVar12 == 0) {
            pbVar15 = local_14 + -param_1[2];
            local_14 = pbVar15;
          }
          else if (uVar12 == 1) {
            pbVar15 = pbVar8 + -param_1[2];
          }
          else {
            if (uVar12 != 2) {
              pbVar11 = pbVar14 + 2;
              pbVar17 = pbVar15;
              for (uVar13 = (uint)(pbVar14[1] >> 2); uVar13 != 0; uVar13 = uVar13 - 1) {
                *(undefined4 *)pbVar17 = *(undefined4 *)pbVar11;
                pbVar11 = pbVar11 + 4;
                pbVar17 = pbVar17 + 4;
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *pbVar17 = *pbVar11;
                pbVar11 = pbVar11 + 1;
                pbVar17 = pbVar17 + 1;
              }
              uVar12 = (uint)pbVar14[1];
              pbVar14 = pbVar14 + (uVar12 + 1 & 0xfffffffe);
              goto LAB_006867a2;
            }
            pbVar11 = pbVar14 + 3;
            pbVar14 = pbVar14 + 2;
            pbVar15 = pbVar15 + ((uint)*pbVar14 - (uint)*pbVar11 * param_1[2]);
          }
        }
        else {
          bVar1 = pbVar14[1];
          pbVar11 = pbVar15;
          for (uVar12 = (uint)(bVar3 >> 2); uVar12 != 0; uVar12 = uVar12 - 1) {
            *(uint *)pbVar11 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
            pbVar11 = pbVar11 + 4;
          }
          for (uVar12 = bVar3 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
            *pbVar11 = bVar1;
            pbVar11 = pbVar11 + 1;
          }
          uVar12 = (uint)*pbVar14;
LAB_006867a2:
          pbVar15 = pbVar15 + uVar12;
        }
        pbVar14 = pbVar14 + 2;
      }
    }
    else if (*(short *)((int)param_2 + 0xe) == 1) {
      for (; (pbVar8 <= pbVar15 && (pbVar15 < pbVar11)); pbVar15 = pbVar15 + local_1c) {
        local_18 = 0;
        if (uVar13 != 0) {
          do {
            pbVar15[local_18] = pbVar14[local_18 >> 3] >> (7 - ((byte)local_18 & 7) & 0x1f) & 1;
            local_18 = local_18 + 1;
          } while (local_18 < uVar13);
        }
        pbVar14 = pbVar14 + uVar10;
      }
    }
    else if (*(short *)((int)param_2 + 0xe) == 4) {
      for (; (pbVar8 <= pbVar15 && (pbVar15 < pbVar11)); pbVar15 = pbVar15 + local_1c) {
        uVar12 = 0;
        if (uVar13 != 0) {
          do {
            if ((uVar12 & 1) == 0) {
              bVar3 = pbVar14[uVar12 >> 1] >> 4;
            }
            else {
              bVar3 = pbVar14[uVar12 >> 1] & 0xf;
            }
            pbVar15[uVar12] = bVar3;
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar13);
        }
        pbVar14 = pbVar14 + uVar10;
      }
    }
    else {
      while ((pbVar8 <= pbVar15 && (pbVar15 < pbVar11))) {
        pbVar16 = pbVar15 + local_1c;
        pbVar17 = pbVar14;
        for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
          *(undefined4 *)pbVar15 = *(undefined4 *)pbVar17;
          pbVar17 = pbVar17 + 4;
          pbVar15 = pbVar15 + 4;
        }
        pbVar14 = pbVar14 + uVar10;
        pbVar18 = pbVar15;
        for (uVar13 = uVar12 & 3; pbVar15 = pbVar16, uVar13 != 0; uVar13 = uVar13 - 1) {
          *pbVar18 = *pbVar17;
          pbVar17 = pbVar17 + 1;
          pbVar18 = pbVar18 + 1;
        }
      }
    }
  }
  return 0;
}

