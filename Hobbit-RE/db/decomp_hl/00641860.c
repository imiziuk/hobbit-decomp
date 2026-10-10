
void __thiscall FUN_00641860(int param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint local_60;
  uint *local_5c;
  undefined4 local_58;
  int local_54;
  uint local_50;
  int local_4c;
  int local_48;
  char *local_44;
  uint *local_40;
  uint local_3c;
  undefined4 local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    local_58 = 0x29a;
    if (param_2 != 0) {
      local_58 = 0x9a020000;
    }
    local_54 = param_1;
    FUN_0064f420(&local_58,4,1,param_3);
    local_58 = 0;
    FUN_0064f420(&local_58,4,1,param_3);
    uVar6 = 0;
    uVar3 = 0;
    local_50 = 0;
    local_60 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar9 = uVar3 * 0x2c;
        uVar3 = uVar3 + 1;
        uVar6 = uVar6 + 1 + *(int *)(iVar9 + 0x24 + *(int *)(param_1 + 0xc));
        local_60 = uVar3;
        local_50 = uVar6;
      } while ((int)uVar3 < *(int *)(param_1 + 8));
    }
    if (param_2 != 0) {
      local_60 = (local_60 & 0xff0000 | local_60 >> 0x10) >> 8 |
                 (local_60 & 0xff00 | local_60 << 0x10) << 8;
      local_50 = (local_50 & 0xff0000 | local_50 >> 0x10) >> 8 |
                 (local_50 & 0xff00 | local_50 << 0x10) << 8;
    }
    FUN_0064f420(&local_60,4,1,param_3);
    FUN_0064f420(&local_50,4,1,param_3);
    local_60 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        FUN_0064f420(*(undefined4 *)(local_60 * 0x2c + *(int *)(param_1 + 0xc)),
                     *(int *)(local_60 * 0x2c + 0x24 + *(int *)(param_1 + 0xc)) + 1,1,param_3);
        local_60 = local_60 + 1;
      } while ((int)local_60 < *(int *)(param_1 + 8));
    }
    local_60 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        iVar9 = *(int *)(local_60 * 0x2c + 0x18 + *(int *)(param_1 + 0x28));
        iVar8 = local_60 * 0x2c + *(int *)(param_1 + 0x28);
        iVar14 = 0;
        *(undefined4 *)(iVar8 + 8) = 0x10;
        if (0 < iVar9) {
          iVar9 = 0;
          do {
            iVar12 = *(int *)(*(int *)(iVar8 + 0x1c) + 0x10 + iVar9);
            piVar4 = (int *)(*(int *)(iVar8 + 0x1c) + iVar9);
            *piVar4 = 0;
            if (0 < iVar12) {
              piVar7 = (int *)(piVar4[5] + 4);
              do {
                *piVar4 = *piVar4 + *piVar7 + 8;
                piVar7 = piVar7 + 3;
                iVar12 = iVar12 + -1;
              } while (iVar12 != 0);
            }
            iVar14 = iVar14 + 1;
            iVar9 = iVar9 + 0x24;
            *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + *piVar4 + 8;
            param_1 = local_54;
          } while (iVar14 < *(int *)(iVar8 + 0x18));
        }
        local_60 = local_60 + 1;
      } while ((int)local_60 < *(int *)(param_1 + 0x24));
    }
    local_60 = 0;
    if (0 < *(int *)(param_1 + 0x24)) {
      do {
        puVar5 = (uint *)(local_60 * 0x2c + *(int *)(param_1 + 0x28));
        local_30 = puVar5;
        iVar9 = FUN_0064f6f0(param_3);
        puVar5[2] = puVar5[2] + iVar9;
        if (local_60 == *(int *)(param_1 + 0x24) - 1U) {
          puVar5[2] = 0;
        }
        local_10 = *puVar5;
        local_c = puVar5[1];
        local_8 = puVar5[2];
        local_4 = puVar5[3];
        if (param_2 != 0) {
          uVar6 = puVar5[2];
          local_8 = (uVar6 << 0x10 | uVar6 & 0xff00 | uVar6 >> 0x10 & 0xff) << 8 |
                    (uint)*(byte *)((int)puVar5 + 0xb);
          uVar6 = *puVar5;
          local_10 = (uVar6 << 0x10 | uVar6 & 0xff00 | uVar6 >> 0x10 & 0xff) << 8 |
                     (uint)*(byte *)((int)puVar5 + 3);
          uVar6 = puVar5[1];
          local_38._2_1_ = (undefined1)(uVar6 >> 0x10);
          local_c = (uint)CONCAT11(local_38._2_1_,*(undefined1 *)((int)puVar5 + 7)) |
                    (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
          local_38 = uVar6;
        }
        FUN_0064f420(&local_10,0x10,1,param_3);
        local_38 = 0;
        if (0 < (int)puVar5[6]) {
          local_48 = 0;
          do {
            local_20 = *(uint *)(puVar5[7] + local_48);
            puVar13 = (uint *)(puVar5[7] + local_48);
            local_1c = puVar13[1];
            if (param_2 != 0) {
              local_3c = *puVar13;
              local_20 = (local_3c << 0x10 | local_3c & 0xff00 | local_3c >> 0x10 & 0xff) << 8 |
                         (uint)*(byte *)((int)puVar13 + 3);
            }
            local_2c = puVar13;
            FUN_0064f420(&local_20,8,1,param_3);
            local_3c = 0;
            if (0 < (int)puVar13[4]) {
              local_4c = 0;
              do {
                local_28 = *(uint *)(puVar13[5] + local_4c);
                puVar10 = (uint *)(puVar13[5] + local_4c);
                local_24 = puVar10[1];
                if (param_2 != 0) {
                  uVar6 = *puVar10;
                  local_28 = (uVar6 << 0x10 | uVar6 & 0xff00 | uVar6 >> 0x10 & 0xff) << 8 |
                             (uint)*(byte *)((int)puVar10 + 3);
                  local_40 = (uint *)puVar10[1];
                  local_24 = ((int)local_40 << 0x10 | (uint)local_40 & 0xff00 |
                             (uint)local_40 >> 0x10 & 0xff) << 8 | (uint)*(byte *)((int)puVar10 + 7)
                  ;
                }
                local_34 = puVar10;
                FUN_0064f420(&local_28,8,1,param_3);
                if (puVar10[1] != 0) {
                  if (param_2 == 0) {
                    FUN_0064f420(puVar10[2],puVar10[1],1,param_3);
                  }
                  else {
                    iVar9 = FUN_00648010(*(undefined4 *)(*puVar10 * 0x2c + *(int *)(local_54 + 0xc))
                                         ,0x3a);
                    pcVar11 = (char *)(iVar9 + 1);
                    puVar13 = (uint *)operator_new(puVar10[1]);
                    puVar5 = (uint *)puVar10[2];
                    cVar2 = *pcVar11;
                    local_5c = puVar13;
                    local_40 = puVar13;
                    while (cVar2 != '\0') {
                      switch(*pcVar11) {
                      case 'D':
                      case 'F':
                      case 'd':
                      case 'f':
                        uVar6 = *puVar5;
                        *puVar13 = (uVar6 << 0x10 | uVar6 & 0xff00 | uVar6 >> 0x10 & 0xff) << 8 |
                                   (uint)*(byte *)((int)puVar5 + 3);
                        puVar5 = puVar5 + 1;
                        puVar13 = puVar13 + 1;
                        local_5c = puVar13;
                        break;
                      case 'G':
                      case 'g':
                        uVar6 = *puVar5;
                        uVar3 = puVar5[1];
                        local_14 = 0;
                        *local_5c = (uVar6 >> 0x10 |
                                    ((uVar6 & 0xff0000) >> 0x10 | uVar6 & 0xff00) << 0x10) >> 8 |
                                    uVar6 << 0x18;
                        puVar5 = puVar5 + 2;
                        local_5c[1] = (uVar3 << 0x10 |
                                      ((uVar3 & 0xff00) << 0x10 | uVar3 & 0xff0000) >> 0x10) << 8 |
                                      uVar3 >> 0x18;
                        puVar13 = local_5c + 2;
                        puVar10 = local_34;
                        local_5c = puVar13;
                        break;
                      case 'S':
                      case 's':
                        local_44 = pcVar11;
                        FUN_00647d10(puVar13,puVar5);
                        iVar9 = FUN_00647cf0(puVar5);
                        puVar13 = (uint *)((int)puVar13 + (iVar9 + 0x24U & 0xffffffe0));
                        local_5c = puVar13;
                        iVar9 = FUN_00647cf0(puVar5);
                        puVar5 = (uint *)((int)puVar5 + (iVar9 + 0x24U & 0xffffffe0));
                      }
                      pcVar1 = pcVar11 + 1;
                      pcVar11 = pcVar11 + 1;
                      local_44 = pcVar11;
                      cVar2 = *pcVar1;
                    }
                    FUN_0064f420(local_40,puVar10[1],1,param_3);
                    FUN_006bf840(local_40);
                    puVar13 = local_2c;
                    puVar5 = local_30;
                  }
                }
                local_3c = local_3c + 1;
                local_4c = local_4c + 0xc;
              } while ((int)local_3c < (int)puVar13[4]);
            }
            local_38 = local_38 + 1;
            local_48 = local_48 + 0x24;
          } while ((int)local_38 < (int)puVar5[6]);
        }
        local_60 = local_60 + 1;
        param_1 = local_54;
      } while ((int)local_60 < *(int *)(local_54 + 0x24));
    }
  }
  return;
}

