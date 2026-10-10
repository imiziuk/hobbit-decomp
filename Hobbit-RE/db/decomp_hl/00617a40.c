
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00617a40(int param_1,float param_2)

{
  uint *puVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  float10 fVar14;
  int local_c4;
  float local_c0 [3];
  int local_b4;
  int local_b0;
  float *local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  float local_9c [6];
  int local_84 [3];
  float afStack_78 [4];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [5];
  float local_28;
  float local_1c;
  float local_10;
  float local_4;
  
  if ((*(float *)(param_1 + 0xe4) <= DAT_006e92e4) || (*(float *)(param_1 + 0x118) <= DAT_006e92e4))
  {
    _DAT_007cc710 = 1;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x118) - DAT_006e92e8;
    *(float *)(param_1 + 0x118) = fVar4;
    if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    *(float *)(param_1 + 0xe4) = param_2 + *(float *)(param_1 + 0xe4);
  }
  if ((*(byte *)(param_1 + 0xb4) & 2) == 0) {
    *(undefined4 *)(param_1 + 0xe0) = 0;
    local_c0[0] = *(float *)(param_1 + 0xe8) - *(float *)(param_1 + 0xf4);
    local_c0[1] = *(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xf8);
    local_c0[2] = *(float *)(param_1 + 0xf0) - *(float *)(param_1 + 0xfc);
    fVar4 = DAT_006e92e8 /
            SQRT(local_c0[1] * local_c0[1] + local_c0[2] * local_c0[2] + local_c0[0] * local_c0[0]);
    iVar8 = FUN_0064cf30(fVar4);
    if (iVar8 == 0) {
      local_c0[0] = 0.0;
      local_c0[1] = 0.0;
      local_c0[2] = 0.0;
    }
    else {
      local_c0[0] = local_c0[0] * fVar4;
      local_c0[1] = local_c0[1] * fVar4;
      local_c0[2] = local_c0[2] * fVar4;
    }
    fVar14 = (float10)FUN_00647b30(*(undefined4 *)(param_1 + 0x538),*(undefined4 *)(param_1 + 0x53c)
                                  );
    afStack_78[2] = (float)((float10)local_c0[2] * fVar14);
    *(float *)(param_1 + 0x10c) = (float)((float10)local_c0[0] * fVar14);
    *(float *)(param_1 + 0x114) = afStack_78[2];
    *(float *)(param_1 + 0x110) = (float)((float10)local_c0[1] * fVar14);
    _DAT_007cc710 = 0;
  }
  else {
    iVar8 = 0;
    piVar12 = (int *)(param_1 + 0xe0);
    do {
      if (*piVar12 == 0) {
        FUN_00618da0(iVar8);
        *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
        break;
      }
      iVar8 = iVar8 + 1;
      piVar12 = piVar12 + 1;
    } while (iVar8 < 1);
  }
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xc0);
  iVar8 = 0;
  local_a0 = 0;
  if (0 < *(int *)(param_1 + 0x578)) {
    do {
      iVar9 = *(int *)(*(int *)(param_1 + 0x57c) + iVar8 * 4);
      if ((*(byte *)(iVar9 + 0x18) & 2) != 0) {
        puVar1 = (uint *)(iVar9 + 0x18);
        *puVar1 = *puVar1 & 0xfffffffd;
        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x57c) + iVar8 * 4) + 0x18);
        *puVar1 = *puVar1 | 8;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x578));
  }
  local_c4 = 0;
  do {
    iVar8 = *(int *)(param_1 + 0xe0 + local_c4 * 4);
    local_a0 = local_a0 + iVar8;
    if (*(float *)(param_1 + 0xe4 + local_c4 * 4) <= DAT_006e92e4) {
      uVar11 = *(uint *)(param_1 + 0xb4) & 2;
      if ((uVar11 == 0) || (*(int *)(param_1 + 0xd8) != 1)) {
        if ((uVar11 == 0) && (*(int *)(param_1 + 0xd8) != 0)) {
          if (iVar8 != 0) {
            *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -1;
          }
          *(undefined4 *)(param_1 + 0xe0 + local_c4 * 4) = 0;
          if (*(int *)(param_1 + 0xd8) == 0) {
            *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
          }
        }
      }
      else {
        FUN_00618da0(local_c4);
      }
    }
    else {
      iVar8 = param_1 + local_c4 * 0xc;
      pfVar2 = (float *)(iVar8 + 0xe8);
      pfVar3 = (float *)(iVar8 + 0xf4);
      *(float *)(param_1 + 0xe4 + local_c4 * 4) =
           *(float *)(param_1 + 0xe4 + local_c4 * 4) - param_2;
      local_28 = param_2 * *(float *)(iVar8 + 0x108);
      *pfVar2 = param_2 * *(float *)(iVar8 + 0x100) + *pfVar2;
      *(float *)(iVar8 + 0xec) = param_2 * *(float *)(iVar8 + 0x104) + *(float *)(iVar8 + 0xec);
      *(float *)(iVar8 + 0xf0) = local_28 + *(float *)(iVar8 + 0xf0);
      local_4 = param_2 * *(float *)(iVar8 + 0x114);
      *pfVar3 = param_2 * *(float *)(iVar8 + 0x10c) + *pfVar3;
      *(float *)(iVar8 + 0xf8) = param_2 * *(float *)(iVar8 + 0x110) + *(float *)(iVar8 + 0xf8);
      *(float *)(iVar8 + 0xfc) = local_4 + *(float *)(iVar8 + 0xfc);
      FUN_005798f0(1);
      afStack_78[3] = *pfVar2 + *(float *)(iVar8 + 0x100);
      local_68 = *(float *)(iVar8 + 0xec) + *(float *)(iVar8 + 0x104);
      local_64 = *(float *)(iVar8 + 0xf0) + *(float *)(iVar8 + 0x108);
      FUN_00579720(0,0,pfVar2,afStack_78 + 3,1);
      if ((((NAN(*pfVar2) || NAN(*(float *)(param_1 + 0xc4))) ==
            (*pfVar2 == *(float *)(param_1 + 0xc4))) ||
          ((NAN(*(float *)(iVar8 + 0xec)) || NAN(*(float *)(param_1 + 200))) ==
           (*(float *)(iVar8 + 0xec) == *(float *)(param_1 + 200)))) ||
         ((NAN(*(float *)(iVar8 + 0xf0)) || NAN(*(float *)(param_1 + 0xcc))) ==
          (*(float *)(iVar8 + 0xf0) == *(float *)(param_1 + 0xcc)))) {
        fVar4 = *(float *)(iVar8 + 0x100) + *pfVar2;
        local_50 = *(float *)(iVar8 + 0xec) + *(float *)(iVar8 + 0x104);
        local_4c = *(float *)(iVar8 + 0xf0) + *(float *)(iVar8 + 0x108);
        if (((((NAN(fVar4) || NAN(*(float *)(param_1 + 0xc4))) !=
               (fVar4 == *(float *)(param_1 + 0xc4))) &&
             ((NAN(local_50) || NAN(*(float *)(param_1 + 200))) !=
              (local_50 == *(float *)(param_1 + 200)))) &&
            ((NAN(local_4c) || NAN(*(float *)(param_1 + 0xcc))) !=
             (local_4c == *(float *)(param_1 + 0xcc)))) || (iVar9 = FUN_00577e70(), iVar9 != 0))
        goto LAB_00617e22;
      }
      else {
LAB_00617e22:
        local_b4 = 0;
        if (0 < DAT_00773970) {
          puVar13 = &DAT_007734fc;
          do {
            fVar4 = *pfVar2 - *(float *)(iVar8 + 0x100);
            fVar7 = *(float *)(iVar8 + 0xec) - *(float *)(iVar8 + 0x104);
            fVar6 = *(float *)(iVar8 + 0xf0) - *(float *)(iVar8 + 0x108);
            if ((float)puVar13[-3] < SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar6 * fVar6)) {
              *pfVar2 = (float)puVar13[-2];
              *(undefined4 *)(iVar8 + 0xec) = puVar13[-1];
              *(undefined4 *)(iVar8 + 0xf0) = *puVar13;
              *(undefined4 *)(iVar8 + 0x108) = 0;
              *(undefined4 *)(iVar8 + 0x104) = 0;
              *(undefined4 *)(iVar8 + 0x100) = 0;
            }
            local_b4 = local_b4 + 1;
            puVar13 = puVar13 + 0x12;
          } while (local_b4 < DAT_00773970);
        }
      }
      FUN_005798f0(1);
      local_48 = *pfVar3 + *(float *)(iVar8 + 0x10c);
      local_44 = *(float *)(iVar8 + 0xf8) + *(float *)(iVar8 + 0x110);
      local_40 = *(float *)(iVar8 + 0xfc) + *(float *)(iVar8 + 0x114);
      FUN_00579720(0,0,pfVar3,&local_48,1);
      if ((((((NAN(*pfVar3) || NAN(*(float *)(param_1 + 0xc4))) !=
              (*pfVar3 == *(float *)(param_1 + 0xc4))) &&
            ((NAN(*(float *)(iVar8 + 0xf8)) || NAN(*(float *)(param_1 + 200))) !=
             (*(float *)(iVar8 + 0xf8) == *(float *)(param_1 + 200)))) &&
           ((NAN(*(float *)(iVar8 + 0xfc)) || NAN(*(float *)(param_1 + 0xcc))) !=
            (*(float *)(iVar8 + 0xfc) == *(float *)(param_1 + 0xcc)))) ||
          (iVar9 = FUN_00577e70(), iVar9 != 0)) && (local_b4 = 0, 0 < DAT_00773970)) {
        puVar13 = &DAT_007734fc;
        do {
          fVar4 = *pfVar3 - *(float *)(iVar8 + 0x10c);
          fVar7 = *(float *)(iVar8 + 0xf8) - *(float *)(iVar8 + 0x110);
          fVar6 = *(float *)(iVar8 + 0xfc) - *(float *)(iVar8 + 0x114);
          if ((float)puVar13[-3] < SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar6 * fVar6)) {
            *pfVar3 = (float)puVar13[-2];
            *(undefined4 *)(iVar8 + 0xf8) = puVar13[-1];
            *(undefined4 *)(iVar8 + 0xfc) = *puVar13;
            *(undefined4 *)(iVar8 + 0x114) = 0;
            *(undefined4 *)(iVar8 + 0x110) = 0;
            *(undefined4 *)(iVar8 + 0x10c) = 0;
          }
          local_b4 = local_b4 + 1;
          puVar13 = puVar13 + 0x12;
        } while (local_b4 < DAT_00773970);
      }
      local_a8 = 0;
      if (0 < *(int *)(param_1 + 0x578)) {
        do {
          puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x57c) + local_a8 * 4);
          if (((*(byte *)(puVar13 + 6) & 1) == 0) &&
             (iVar9 = FUN_004021c0(*puVar13,puVar13[1]), iVar9 != 0)) {
            pfVar10 = (float *)FUN_005c0150();
            local_9c[0] = *pfVar10;
            local_9c[1] = pfVar10[1];
            local_9c[2] = pfVar10[2];
            FUN_004357e0(pfVar10 + 3);
            local_84[0] = 1;
            local_84[1] = 1;
            local_84[2] = 1;
            local_c0[0] = -1.0;
            local_c0[1] = -1.0;
            local_c0[2] = -1.0;
            FUN_00405080(local_3c,pfVar2,pfVar3);
            local_b4 = (int)pfVar3 - (int)local_9c;
            iVar9 = 0;
            do {
              pfVar10 = (float *)((int)local_9c + iVar9);
              fVar4 = *(float *)((int)local_9c + iVar9 + 0xc);
              if (fVar4 < *(float *)(local_b4 + (int)pfVar10) ==
                  (NAN(fVar4) || NAN(*(float *)(local_b4 + (int)pfVar10)))) {
                if (*pfVar10 <= *(float *)(local_b4 + (int)pfVar10)) {
                  *(undefined4 *)((int)local_84 + iVar9) = 0;
                }
                else {
                  *(float *)((int)afStack_78 + iVar9) = *pfVar10;
                }
              }
              else {
                *(undefined4 *)((int)afStack_78 + iVar9) =
                     *(undefined4 *)((int)local_9c + iVar9 + 0xc);
              }
              iVar9 = iVar9 + 4;
            } while (iVar9 < 0xc);
            if (((local_84[0] == 0) && (local_84[1] == 0)) &&
               (fVar4 = DAT_006e92e4, local_84[2] == 0)) {
LAB_00618205:
              local_10 = *(float *)(iVar8 + 0xf0) - *(float *)(iVar8 + 0xfc);
              local_60 = (*pfVar2 - *pfVar3) * fVar4;
              local_5c = (*(float *)(iVar8 + 0xec) - *(float *)(iVar8 + 0xf8)) * fVar4;
              local_1c = fVar4 * local_10 + *(float *)(iVar8 + 0xfc);
              *pfVar2 = local_60 + *pfVar3;
              *(float *)(iVar8 + 0xf0) = local_1c;
              *(float *)(iVar8 + 0xec) = local_5c + *(float *)(iVar8 + 0xf8);
              *(undefined4 *)(iVar8 + 0x108) = 0;
              *(undefined4 *)(iVar8 + 0x104) = 0;
              *(undefined4 *)(iVar8 + 0x100) = 0;
              puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x57c) + local_a8 * 4) + 0x18);
              *puVar1 = *puVar1 | 2;
              iVar9 = *(int *)(*(int *)(param_1 + 0x57c) + local_a8 * 4);
              local_ac = *(float **)(iVar9 + 0x20);
              local_a4 = (int)local_ac - *(int *)(iVar9 + 0x1c);
              FUN_005893e0(iVar9 + 0x24,(DAT_006e92e8 / (float)(int)local_ac) * (float)local_a4,
                           0x3f400000,1,0,0);
            }
            else {
              iVar9 = 0;
              do {
                if ((*(int *)((int)local_84 + iVar9) != 0) &&
                   ((NAN(*(float *)((int)local_3c + iVar9)) || NAN(DAT_006e92e4)) ==
                    (*(float *)((int)local_3c + iVar9) == DAT_006e92e4))) {
                  *(float *)((int)local_c0 + iVar9) =
                       (*(float *)((int)afStack_78 + iVar9) - *(float *)(iVar9 + (int)pfVar3)) /
                       *(float *)((int)local_3c + iVar9);
                }
                iVar9 = iVar9 + 4;
              } while (iVar9 < 0xc);
              if (local_c0[0] <= local_c0[1]) {
                local_b0 = 1;
                if (local_c0[1] <= local_c0[2]) goto LAB_0061817b;
              }
              else if (local_c0[0] <= local_c0[2]) {
LAB_0061817b:
                local_b0 = 2;
              }
              else {
                local_b0 = 0;
              }
              local_ac = local_c0 + local_b0;
              if (local_c0[local_b0] < DAT_006e92e4 ==
                  (NAN(local_c0[local_b0]) || NAN(DAT_006e92e4))) {
                iVar9 = 0;
                local_a4 = (int)local_3c - (int)pfVar3;
                do {
                  if ((iVar9 != local_b0) &&
                     ((fVar4 = *(float *)((int)(&stack0x00000058 + local_b4 + iVar9 * 4 + -0xf4) +
                                         local_a4) * *local_ac +
                               *(float *)(&stack0x00000058 + local_b4 + iVar9 * 4 + -0xf4),
                      fVar4 < local_9c[iVar9] != (NAN(fVar4) || NAN(local_9c[iVar9])) ||
                      (local_9c[iVar9 + 3] < fVar4)))) goto LAB_006182d2;
                  iVar9 = iVar9 + 1;
                } while (iVar9 < 3);
                fVar4 = *local_ac;
                goto LAB_00618205;
              }
            }
LAB_006182d2:
            if (((((*pfVar2 < local_9c[3]) && (*(float *)(iVar8 + 0xec) < local_9c[4])) &&
                 (*(float *)(iVar8 + 0xf0) < local_9c[5])) &&
                ((local_9c[0] <= *pfVar2 && (local_9c[1] <= *(float *)(iVar8 + 0xec))))) &&
               (local_9c[2] <= *(float *)(iVar8 + 0xf0))) {
              *(undefined4 *)(iVar8 + 0x108) = 0;
              *(undefined4 *)(iVar8 + 0x104) = 0;
              *(undefined4 *)(iVar8 + 0x100) = 0;
            }
            if (((*pfVar3 < local_9c[3] != (*pfVar3 == local_9c[3])) &&
                (*(float *)(iVar8 + 0xf8) < local_9c[4] != (*(float *)(iVar8 + 0xf8) == local_9c[4])
                )) && ((*(float *)(iVar8 + 0xfc) < local_9c[5] !=
                        (*(float *)(iVar8 + 0xfc) == local_9c[5]) &&
                       (((local_9c[0] <= *pfVar3 && (local_9c[1] <= *(float *)(iVar8 + 0xf8))) &&
                        (local_9c[2] <= *(float *)(iVar8 + 0xfc))))))) {
              *(undefined4 *)(iVar8 + 0x114) = 0;
              *(undefined4 *)(iVar8 + 0x110) = 0;
              *(undefined4 *)(iVar8 + 0x10c) = 0;
            }
          }
          local_a8 = local_a8 + 1;
        } while (local_a8 < *(int *)(param_1 + 0x578));
      }
    }
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x578)) {
      do {
        puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x57c) + iVar8 * 4);
        uVar11 = puVar13[6];
        if (((uVar11 & 3) == 0) && ((uVar11 & 8) != 0)) {
          puVar13[7] = puVar13[7] + -1;
          puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0x57c) + iVar8 * 4) + 0x18);
          *puVar1 = *puVar1 & 0xfffffff7;
          puVar13 = *(undefined4 **)(*(int *)(param_1 + 0x57c) + iVar8 * 4);
          piVar12 = (int *)FUN_004021c0(*puVar13,puVar13[1]);
          iVar9 = *(int *)(*(int *)(param_1 + 0x57c) + iVar8 * 4);
          if (*(int *)(iVar9 + 0x1c) < 1) {
            puVar1 = (uint *)(iVar9 + 0x18);
            *puVar1 = *puVar1 | 0x20;
            iVar9 = *(int *)(*(int *)(param_1 + 0x57c) + iVar8 * 4);
            *(uint *)(iVar9 + 0x18) = *(uint *)(iVar9 + 0x18) | 1;
            if (piVar12 != (int *)0x0) {
              FUN_004c75f0(0);
              *(ushort *)((int)piVar12 + 0x15a) =
                   *(ushort *)((int)piVar12 + 0x15a) & 0xbfff ^ 0x4000;
              FUN_004c77d0(0);
              (**(code **)(*piVar12 + 0x8c))(1,0xffffffff);
              iVar9 = *(int *)(*(int *)(param_1 + 0x57c) + iVar8 * 4);
              piVar12 = (int *)FUN_004021c0(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc))
              ;
              if (piVar12 != (int *)0x0) {
                FUN_004c75f0(0);
                *(ushort *)((int)piVar12 + 0x15a) =
                     *(ushort *)((int)piVar12 + 0x15a) & 0xbfff ^ 0x4000;
                FUN_004c77d0(0);
                (**(code **)(*piVar12 + 0x8c))(1,0xffffffff);
              }
              iVar9 = *(int *)(*(int *)(param_1 + 0x57c) + iVar8 * 4);
              FUN_004021c0(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc));
            }
          }
        }
        else if ((uVar11 & 0x20) != 0) {
          iVar9 = FUN_004021c0(*puVar13,puVar13[1]);
          if (((iVar9 == 0) || ((*(byte *)(iVar9 + 0x15b) & 0x40) == 0)) &&
             (iVar5 = *(int *)(*(int *)(param_1 + 0x57c) + iVar8 * 4),
             *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) | 0xffffffdf, iVar9 != 0)) {
            FUN_004d22c0(1);
          }
          iVar9 = *(int *)(*(int *)(param_1 + 0x57c) + iVar8 * 4);
          iVar9 = FUN_004021c0(*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc));
          if ((iVar9 != 0) && ((*(byte *)(iVar9 + 0x15b) & 0x40) == 0)) {
            FUN_004d22c0(1);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(param_1 + 0x578));
    }
    local_c4 = local_c4 + 1;
    if (0 < local_c4) {
      if (local_a0 == 0) {
        *(undefined4 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
        if (DAT_007cc70c != 0) {
          *(undefined4 *)(param_1 + 0xe0) = 0;
          *(undefined4 *)(param_1 + 0xe4) = 0;
          *(undefined4 *)(param_1 + 0xe8) = 0;
          *(undefined4 *)(param_1 + 0xec) = 0;
          *(undefined4 *)(param_1 + 0xf0) = 0;
          *(undefined4 *)(param_1 + 0xf4) = 0;
          *(undefined4 *)(param_1 + 0xf8) = 0;
          *(undefined4 *)(param_1 + 0xfc) = 0;
          *(undefined4 *)(param_1 + 0x100) = 0;
          *(undefined4 *)(param_1 + 0x104) = 0;
          *(undefined4 *)(param_1 + 0x108) = 0;
          *(undefined4 *)(param_1 + 0x10c) = 0;
          *(undefined4 *)(param_1 + 0x110) = 0;
          *(undefined4 *)(param_1 + 0x114) = 0;
          DAT_007cc70c = 0;
          return;
        }
      }
      else {
        DAT_007cc70c = 1;
      }
      return;
    }
  } while( true );
}

