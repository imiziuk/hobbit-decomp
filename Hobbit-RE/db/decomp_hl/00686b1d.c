
undefined4 __thiscall FUN_00686b1d(int *param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  bool bVar20;
  bool bVar21;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  int local_c;
  
  pbVar7 = (byte *)param_2;
  if ((((param_3 < 0x12) || ((*(byte *)((int)param_2 + 1) & 0xfe) != 0)) ||
      (bVar4 = *(byte *)((int)param_2 + 2), (bVar4 & 0xf4) != 0)) ||
     ((*(short *)((int)param_2 + 0xc) == 0 || (*(short *)((int)param_2 + 0xe) == 0)))) {
    return 0x80004005;
  }
  uVar9 = (uint)*(byte *)((int)param_2 + 7);
  local_14 = 0;
  if (*(byte *)((int)param_2 + 1) != 0) {
    if (uVar9 == 0xf) {
      local_14 = 0x18;
    }
    else if (uVar9 == 0x10) {
      local_14 = 0x19;
    }
    else if (uVar9 == 0x18) {
      local_14 = 0x14;
    }
    else {
      if (uVar9 != 0x20) {
        return 0x80004005;
      }
      local_14 = 0x15;
    }
  }
  uVar14 = (uint)*(byte *)((int)param_2 + 0x10);
  uVar10 = uVar14 + 7 >> 3;
  bVar8 = bVar4 & 3;
  if (bVar8 == 1) {
    if (*(byte *)((int)param_2 + 1) == 0) {
      return 0x80004005;
    }
    if (*(byte *)((int)param_2 + 0x10) != 8) {
      return 0x80004005;
    }
    local_c = 0x29;
  }
  else if (bVar8 == 2) {
    if (uVar14 == 0xf) {
      local_c = 0x18;
    }
    else if (uVar14 == 0x10) {
      local_c = 0x19;
    }
    else if (uVar14 == 0x18) {
      local_c = 0x14;
    }
    else {
      if (uVar14 != 0x20) {
        return 0x80004005;
      }
      local_c = 0x15;
    }
  }
  else {
    if (bVar8 != 3) {
      return 0x80004005;
    }
    if (*(byte *)((int)param_2 + 0x10) != 8) {
      return 0x80004005;
    }
    local_c = 0x32;
  }
  bVar20 = (*(byte *)((int)param_2 + 0x11) & 0x20) != 0x20;
  bVar21 = (*(byte *)((int)param_2 + 0x11) & 0x10) == 0x10;
  uVar11 = (uint)*(byte *)param_2;
  if (param_3 - 0x12 < uVar11) {
    return 0x80004005;
  }
  param_3 = (param_3 - 0x12) - uVar11;
  uVar9 = (uint)*(ushort *)((int)param_2 + 5) * (uVar9 + 7 >> 3);
  if (param_3 < uVar9) {
    return 0x80004005;
  }
  if (local_c == 0x29) {
    if (0x100 < (uint)*(ushort *)((int)param_2 + 3) + (uint)*(ushort *)((int)param_2 + 5)) {
      return 0x80004005;
    }
    puVar12 = (undefined4 *)operator_new(0x400);
    param_1[7] = (int)puVar12;
    if (puVar12 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    param_1[9] = 1;
    for (iVar15 = 0x100; iVar15 != 0; iVar15 = iVar15 + -1) {
      *puVar12 = 0xffffffff;
      puVar12 = puVar12 + 1;
    }
    puVar2 = (undefined1 *)(param_1[7] + (uint)*(ushort *)((int)param_2 + 3) * 4);
    puVar3 = puVar2 + (uint)*(ushort *)((int)param_2 + 5) * 4;
    uVar16 = param_3;
    uVar17 = param_3;
    puVar18 = (uint *)((int)param_2 + uVar11 + 0x12);
    for (; puVar2 < puVar3; puVar2 = puVar2 + 4) {
      if (local_14 == 0x14) {
        uVar16 = (uint)*(byte *)((int)puVar18 + 2);
        uVar17 = (uint)*(byte *)((int)puVar18 + 1);
        local_18 = (uint)(byte)*puVar18;
        puVar18 = (uint *)((int)puVar18 + 3);
LAB_00686dcf:
        local_1c = 0xff;
      }
      else if (local_14 == 0x15) {
        uVar6 = *puVar18;
        local_1c = uVar6 >> 0x18;
        uVar16 = uVar6 >> 0x10 & 0xff;
        uVar17 = uVar6 >> 8 & 0xff;
        local_18 = uVar6 & 0xff;
        puVar18 = puVar18 + 1;
      }
      else {
        if (local_14 == 0x18) {
          uVar5 = (ushort)*puVar18;
          uVar16 = uVar5 >> 10 & 0x1f;
          uVar17 = uVar5 >> 5 & 0x1f;
          uVar16 = uVar16 >> 2 | uVar16 << 3;
          uVar17 = uVar17 >> 2 | uVar17 << 3;
          local_18 = (uVar5 & 0x1f) >> 2 | (uVar5 & 0x1f) << 3;
          puVar18 = (uint *)((int)puVar18 + 2);
          goto LAB_00686dcf;
        }
        if (local_14 == 0x19) {
          uVar5 = (ushort)*puVar18;
          local_1c = (uint)(uVar5 >> 0xf) * 0xff;
          uVar16 = uVar5 >> 10 & 0x1f;
          uVar17 = uVar5 >> 5 & 0x1f;
          uVar16 = uVar16 >> 2 | uVar16 << 3;
          uVar17 = uVar17 >> 2 | uVar17 << 3;
          local_18 = (uVar5 & 0x1f) >> 2 | (uVar5 & 0x1f) << 3;
          puVar18 = (uint *)((int)puVar18 + 2);
        }
      }
      puVar2[2] = (char)local_18;
      puVar2[3] = (undefined1)local_1c;
      *puVar2 = (char)uVar16;
      puVar2[1] = (char)uVar17;
    }
  }
  param_3 = param_3 - uVar9;
  puVar18 = (uint *)((int)((int)param_2 + uVar11 + 0x12) + uVar9);
  uVar9 = (uint)*(ushort *)((int)param_2 + 0xe) * (uint)*(ushort *)((int)param_2 + 0xc) * uVar10;
  *param_1 = local_c;
  param_1[1] = (int)puVar18;
  param_1[2] = *(ushort *)((int)param_2 + 0xc) * uVar10;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = (uint)*(ushort *)((int)param_2 + 0xc);
  param_1[6] = (uint)*(ushort *)((int)param_2 + 0xe);
  if ((((bVar4 & 8) != 0) || (bVar20)) || (bVar21)) {
    puVar13 = (uint *)operator_new(uVar9);
    param_1[1] = (int)puVar13;
    if (puVar13 == (uint *)0x0) {
      return 0x8007000e;
    }
    param_1[8] = 1;
    if (bVar20) {
      puVar13 = (uint *)((*(ushort *)((int)param_2 + 0xe) - 1) * param_1[2] + (int)puVar13);
    }
    pbVar1 = (byte *)((int)param_2 + 0xe);
    local_14 = 0;
    param_2 = puVar18;
    if (*(short *)pbVar1 != 0) {
      do {
        local_10 = puVar13;
        if (bVar21) {
          local_10 = (uint *)((param_1[2] - uVar10) + (int)puVar13);
        }
        uVar9 = (uint)*(ushort *)(pbVar7 + 0xc);
        local_18 = 0;
        if (uVar9 != 0) {
          do {
            if ((bVar4 & 8) == 0) {
              local_1c = 0;
            }
            else {
              if (param_3 == 0) {
                return 0x80004005;
              }
              local_1c = (byte)*param_2 & 0x80;
              uVar9 = ((byte)*param_2 & 0x7f) + 1;
              param_2 = (uint *)((int)param_2 + 1);
              param_3 = param_3 - 1;
            }
            local_18 = local_18 + uVar9;
            while (uVar9 != 0) {
              uVar9 = uVar9 - 1;
              if (param_3 < uVar10) {
                return 0x80004005;
              }
              puVar18 = param_2;
              puVar19 = local_10;
              for (uVar11 = uVar14 + 7 >> 5; uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar19 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar19 = puVar19 + 1;
              }
              for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
                *(byte *)puVar19 = (byte)*puVar18;
                puVar18 = (uint *)((int)puVar18 + 1);
                puVar19 = (uint *)((int)puVar19 + 1);
              }
              if (local_1c == 0) {
                param_2 = (uint *)((int)param_2 + uVar10);
                param_3 = param_3 - uVar10;
              }
              uVar11 = uVar10;
              if (bVar21) {
                uVar11 = -uVar10;
              }
              local_10 = (uint *)((int)local_10 + uVar11);
            }
            if (local_1c != 0) {
              param_2 = (uint *)((int)param_2 + uVar10);
              param_3 = param_3 - uVar10;
            }
            uVar9 = (uint)*(ushort *)(pbVar7 + 0xc);
          } while (local_18 < uVar9);
        }
        if (bVar20) {
          iVar15 = -param_1[2];
        }
        else {
          iVar15 = param_1[2];
        }
        puVar13 = (uint *)((int)puVar13 + iVar15);
        local_14 = local_14 + 1;
      } while (local_14 < *(ushort *)(pbVar7 + 0xe));
    }
  }
  else {
    if (param_3 < uVar9) {
      return 0x80004005;
    }
    param_1[1] = (int)puVar18;
    param_1[8] = 0;
  }
  return 0;
}

