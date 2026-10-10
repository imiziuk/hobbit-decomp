
/* WARNING: Removing unreachable block (ram,0x006818d0) */
/* WARNING: Removing unreachable block (ram,0x00681715) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006814c0(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  void *pvVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  uint local_28;
  int local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_10;
  
  if ((DAT_008091a9 & 1) == 0) {
    DAT_008091a9 = DAT_008091a9 | 1;
    _DAT_008091bc = FUN_00682060;
    _DAT_008091c0 = &LAB_006821a0;
  }
  uVar3 = *(ushort *)(param_1 + 0xc);
  uVar13 = (uint)uVar3;
  uVar4 = *(ushort *)(param_1 + 2);
  uVar5 = *(ushort *)(param_1 + 0x12);
  uVar14 = uVar13 * param_4;
  puVar9 = param_3;
  for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  uVar15 = (uint)uVar5 * (uint)uVar4 * 2;
  switch(*(undefined4 *)(param_1 + 0x14)) {
  case 0:
    uVar8 = (**(code **)(param_1 + 0x20))
                      (param_2,param_3,param_4,*(undefined2 *)(param_1 + 0xc),
                       *(undefined2 *)(param_1 + 0x12),param_1 + 0x18,param_1 + 0x1c);
    return uVar8;
  case 1:
    break;
  case 2:
    puVar9 = (undefined4 *)operator_new(uVar14);
    if (puVar9 == (undefined4 *)0x0) {
      return 0;
    }
    uVar13 = uVar15 * param_4;
    puVar10 = (undefined4 *)operator_new(uVar13);
    if (puVar10 == (undefined4 *)0x0) {
      FUN_006bf840(puVar9);
      return 0;
    }
    pcVar6 = *(code **)(&DAT_008091b8 + (uint)*(ushort *)(param_1 + 2) * 4);
    uVar7 = 0xffffffffffffffff;
    local_28 = 0;
    do {
      puVar17 = puVar9;
      for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
      for (uVar16 = uVar14 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar17 = 0;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      puVar17 = puVar10;
      for (uVar16 = uVar13 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
      for (uVar16 = uVar13 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
        *(undefined1 *)puVar17 = 0;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      puVar1 = (uint *)(param_1 + 0x1c);
      *(uint *)(param_1 + 0x18) = local_28;
      *puVar1 = local_28;
      iVar11 = (**(code **)(param_1 + 0x20))
                         (param_2,puVar9,param_4,*(undefined2 *)(param_1 + 0xc),
                          *(undefined2 *)(param_1 + 0x12),(uint *)(param_1 + 0x18),puVar1);
      if (((iVar11 != 0) &&
          (iVar11 = (*pcVar6)(puVar9,puVar10,param_4,*(undefined2 *)(param_1 + 0xc),0x40,
                              param_1 + 0x18,puVar1), iVar11 != 0)) &&
         (uVar19 = FUN_00681b50(param_2,puVar10,param_4,param_4,uVar15), uVar19 < uVar7)) {
        puVar17 = puVar9;
        puVar18 = param_3;
        for (uVar16 = uVar14 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
        for (uVar16 = uVar14 & 3; uVar7 = uVar19, uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
          puVar17 = (undefined4 *)((int)puVar17 + 1);
          puVar18 = (undefined4 *)((int)puVar18 + 1);
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < 0x59);
    FUN_006bf840(puVar9);
    FUN_006bf840(puVar10);
    return 1;
  case 3:
    puVar9 = (undefined4 *)operator_new(uVar13);
    if (puVar9 == (undefined4 *)0x0) {
      return 0;
    }
    puVar10 = (undefined4 *)operator_new(uVar15);
    if (puVar10 == (undefined4 *)0x0) {
      FUN_006bf840(puVar9);
      return 0;
    }
    pcVar6 = *(code **)(&DAT_008091b8 + (uint)*(ushort *)(param_1 + 2) * 4);
    uVar14 = 0xffffffff;
    if (param_4 != 0) {
      local_1c = param_3;
      local_10 = param_4;
      do {
        uVar7 = 0xffffffffffffffff;
        local_18 = 0xffffffff;
        if (uVar14 == 0xffffffff) {
          uVar16 = 0;
          local_20 = 0x59;
          uVar14 = local_18;
        }
        else {
          uVar16 = uVar14 - 0x18;
          local_20 = uVar14 + 0x19;
          uVar14 = local_18;
        }
        for (; (int)uVar16 < local_20; uVar16 = uVar16 + 1) {
          local_18 = uVar14;
          if ((-1 < (int)uVar16) && (uVar16 < 0x59)) {
            puVar17 = puVar9;
            for (uVar14 = (uint)(uVar3 >> 2); uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            for (uVar14 = uVar13 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined1 *)puVar17 = 0;
              puVar17 = (undefined4 *)((int)puVar17 + 1);
            }
            puVar17 = puVar10;
            for (uVar14 = uVar15 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *puVar17 = 0;
              puVar17 = puVar17 + 1;
            }
            for (uVar14 = uVar15 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
              *(undefined1 *)puVar17 = 0;
              puVar17 = (undefined4 *)((int)puVar17 + 1);
            }
            puVar1 = (uint *)(param_1 + 0x1c);
            puVar2 = (uint *)(param_1 + 0x18);
            *puVar1 = uVar16;
            *puVar2 = uVar16;
            iVar11 = (**(code **)(param_1 + 0x20))
                               (param_2,puVar9,1,*(undefined2 *)(param_1 + 0xc),
                                *(undefined2 *)(param_1 + 0x12),puVar2,puVar1);
            if (((iVar11 != 0) &&
                (iVar11 = (*pcVar6)(puVar9,puVar10,1,*(undefined2 *)(param_1 + 0xc),0x40,puVar2,
                                    puVar1), iVar11 != 0)) &&
               (uVar19 = FUN_00681b50(param_2,puVar10,1,param_4,uVar15), uVar19 < uVar7)) {
              puVar17 = puVar9;
              puVar18 = local_1c;
              for (uVar14 = (uint)(uVar3 >> 2); uVar14 != 0; uVar14 = uVar14 - 1) {
                *puVar18 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar18 = puVar18 + 1;
              }
              for (uVar14 = uVar13 & 3; local_18 = uVar16, uVar7 = uVar19, uVar14 != 0;
                  uVar14 = uVar14 - 1) {
                *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
                puVar17 = (undefined4 *)((int)puVar17 + 1);
                puVar18 = (undefined4 *)((int)puVar18 + 1);
              }
            }
          }
          uVar14 = local_18;
        }
        param_2 = param_2 + uVar15;
        local_1c = (undefined4 *)((int)local_1c + uVar13);
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    FUN_006bf840(puVar9);
    FUN_006bf840(puVar10);
    pvVar12 = operator_new(uVar15 * param_4);
    (*pcVar6)(param_3,pvVar12,param_4,*(undefined2 *)(param_1 + 0xc),0x40,param_1 + 0x18,
              param_1 + 0x1c);
    FUN_006bf840(pvVar12);
  default:
    return 1;
  }
  pvVar12 = operator_new(uVar15 * param_4);
  if (pvVar12 == (void *)0x0) {
    return 0;
  }
  pcVar6 = *(code **)(&DAT_008091b8 + (uint)*(ushort *)(param_1 + 2) * 4);
  iVar11 = (**(code **)(param_1 + 0x20))
                     (param_2,param_3,param_4,*(undefined2 *)(param_1 + 0xc),
                      *(undefined2 *)(param_1 + 0x12),param_1 + 0x18,param_1 + 0x1c);
  if (iVar11 == 0) {
    return 0;
  }
  iVar11 = (*pcVar6)(param_3,pvVar12,param_4,*(undefined2 *)(param_1 + 0xc),0x40,param_1 + 0x18,
                     param_1 + 0x1c);
  if (iVar11 == 0) {
    return 0;
  }
  FUN_006bf840(pvVar12);
  return 1;
}

