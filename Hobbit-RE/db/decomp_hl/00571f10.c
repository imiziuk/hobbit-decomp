
void FUN_00571f10(void)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint local_c8;
  uint *local_c4;
  int *local_c0;
  uint *local_bc;
  int *local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 local_a8 [64];
  undefined1 local_68 [44];
  undefined4 local_3c;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006db7a1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_bc = (uint *)operator_new(0x6bc);
  iVar12 = 0;
  local_4 = 0;
  if (local_bc != (uint *)0x0) {
    iVar12 = FUN_0063ddb0();
  }
  local_4 = 0xffffffff;
  uVar3 = FUN_005496c0(s_PainTable_Info_0073fd0c,&DAT_0072adcc);
  iVar4 = FUN_0063df60(uVar3);
  iVar6 = local_b4;
  if (iVar4 != 0) {
    if (*(int *)(local_b4 + 0x14) == 0) {
      FUN_006bf840(*(undefined4 *)(local_b4 + 0xc));
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(undefined4 *)(iVar6 + 0x10) = 0;
    }
    *(undefined4 *)(iVar6 + 8) = 0;
    if (*(int *)(iVar6 + 0x30) == 0) {
      FUN_006bf840(*(undefined4 *)(iVar6 + 0x28));
      *(undefined4 *)(iVar6 + 0x28) = 0;
      *(undefined4 *)(iVar6 + 0x2c) = 0;
    }
    *(undefined4 *)(iVar6 + 0x24) = 0;
    if (*(int *)(iVar6 + 0x4c) == 0) {
      FUN_006bf840(*(undefined4 *)(iVar6 + 0x44));
      *(undefined4 *)(iVar6 + 0x44) = 0;
      *(undefined4 *)(iVar6 + 0x48) = 0;
    }
    *(undefined4 *)(iVar6 + 0x40) = 0;
    if (*(int *)(iVar6 + 0x94) == 0) {
      FUN_006bf840(*(undefined4 *)(iVar6 + 0x8c));
      *(undefined4 *)(iVar6 + 0x8c) = 0;
      *(undefined4 *)(iVar6 + 0x90) = 0;
    }
    *(undefined4 *)(iVar6 + 0x88) = 0;
    FUN_00649b20(&DAT_0072e8a4);
    iVar4 = *(int *)(iVar6 + 0x6c);
    local_4 = 1;
    if (*(int *)(iVar6 + 0x74) < iVar4 + 1) {
      if (*(int *)(iVar6 + 0x7c) == 0) {
        iVar5 = *(int *)(iVar6 + 0x74) / 2;
        iVar10 = 1;
        if (0 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar10 + iVar4 < 1) {
          uVar11 = 1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          uVar11 = iVar4 + iVar5;
        }
      }
      else {
        uVar11 = *(int *)(iVar6 + 0x7c) + iVar4;
      }
      local_c8 = uVar11;
      local_bc = (uint *)operator_new(uVar11 * 0x2c + 4);
      local_4._0_1_ = 2;
      if (local_bc == (uint *)0x0) {
        local_c4 = (uint *)0x0;
      }
      else {
        puVar2 = local_bc + 1;
        *local_bc = uVar11;
        FUN_006c043b(puVar2,0x2c,uVar11,FUN_006499d0,FUN_00649ba0);
        local_c4 = puVar2;
      }
      iVar4 = 0;
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0 < *(int *)(iVar6 + 0x6c)) {
        iVar10 = 0;
        do {
          FUN_0064a320(*(int *)(iVar6 + 0x70) + iVar10);
          iVar4 = iVar4 + 1;
          iVar10 = iVar10 + 0x2c;
        } while (iVar4 < *(int *)(iVar6 + 0x6c));
      }
      if (*(int *)(iVar6 + 0x70) != 0) {
        FUN_00407f70(3);
      }
      *(uint **)(iVar6 + 0x70) = local_c4;
      *(uint *)(iVar6 + 0x74) = local_c8;
    }
    FUN_0064a320(local_38);
    *(int *)(iVar6 + 0x6c) = *(int *)(iVar6 + 0x6c) + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
    iVar6 = FUN_0063e510();
    while (iVar6 == 1) {
      iVar6 = FUN_00647ed0(iVar12,s_PainTable_0073fd00);
      if (iVar6 == 0) {
        local_bc = (uint *)0x0;
        puVar2 = (uint *)0x0;
        if (0 < *(int *)(iVar12 + 0x100)) {
          do {
            local_bc = puVar2;
            FUN_0063e6a0();
            piVar7 = (int *)operator_new(0xa0);
            local_4 = 3;
            local_c0 = piVar7;
            if (piVar7 == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              FUN_006499d0();
              local_4._0_1_ = 4;
              FUN_006499d0();
              local_4 = CONCAT31(local_4._1_3_,5);
              FUN_006499d0();
            }
            local_4 = 0xffffffff;
            FUN_0063ea10(iVar12,s_CreatureEvent_s_0073fcf0,local_a8);
            uVar3 = FUN_00648080(local_a8);
            FUN_0064a2e0(uVar3);
            local_c8 = 1;
            FUN_0063ea10(iVar12,s_DamageToBilbo_d_0073fce0,piVar7 + 0xb);
            FUN_0063ea10(iVar12,s_DamageToNPC_d_0073fcd0,piVar7 + 0xc);
            FUN_0063ea10(iVar12,s_PoisonDamage_d_0073fcc0,piVar7 + 0xd);
            FUN_0063ea10(iVar12,s_PoisonTicks_d_0073fcb0,piVar7 + 0xe);
            FUN_0063ea10(iVar12,s_PoisonPct_d_0073fca4,piVar7 + 0xf);
            FUN_0063ea10(iVar12,s_Knockback_d_0073fc98,&local_c8);
            piVar7[0x10] = (piVar7[0x10] ^ local_c8) & 1 ^ piVar7[0x10];
            FUN_0063ea10(iVar12,s_BreakShields_d_0073fc88,&local_c8);
            piVar7[0x10] = (local_c8 * 2 ^ piVar7[0x10]) & 2 ^ piVar7[0x10];
            FUN_0063ea10(iVar12,s_Webbed_d_0073fc7c,&local_c8);
            piVar7[0x10] = (local_c8 * 4 ^ piVar7[0x10]) & 4 ^ piVar7[0x10];
            FUN_0063ea10(iVar12,s_Freeze_d_0073fc70,&local_c8);
            piVar7[0x10] = (local_c8 * 8 ^ piVar7[0x10]) & 8 ^ piVar7[0x10];
            FUN_0063ea10(iVar12,s_Fire_d_0073fc68,&local_c8);
            piVar7[0x10] = (local_c8 << 4 ^ piVar7[0x10]) & 0x10 ^ piVar7[0x10];
            FUN_0063ea10(iVar12,s_Sting_d_0073fc60,&local_c8);
            piVar7[0x10] = (local_c8 << 5 ^ piVar7[0x10]) & 0x20 ^ piVar7[0x10];
            FUN_0063ea10(iVar12,s_Stick_d_0073fc58,&local_c8);
            piVar7[0x10] = (local_c8 << 6 ^ piVar7[0x10]) & 0x40 ^ piVar7[0x10];
            FUN_0063ea10(iVar12,s_AudioSource_s_0073fc48,local_a8);
            FUN_0064a2e0(local_a8);
            FUN_0063ea10(iVar12,s_Type_s_0073fc40,local_a8);
            FUN_0064a2e0(local_a8);
            FUN_0063ea10(iVar12,s_DamageAllies_d_0073fc30,&local_c8);
            piVar7[0x10] = (local_c8 << 7 ^ piVar7[0x10]) & 0x80 ^ piVar7[0x10];
            iVar6 = FUN_00647f90(piVar7[0x1c],s_PROJECTILE_0073fc24);
            if (iVar6 == 0) {
              piVar7[0x27] = 0;
            }
            else {
              piVar7[0x27] = 1;
            }
            iVar6 = 0;
            if (0 < piVar7[9]) {
              do {
                if (*(char *)(iVar6 + *piVar7) == ' ') {
                  *(char *)(iVar6 + *piVar7) = '_';
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < piVar7[9]);
            }
            iVar6 = 0;
            if (0 < piVar7[0x1a]) {
              do {
                if (*(char *)(piVar7[0x11] + iVar6) == ' ') {
                  *(undefined1 *)(piVar7[0x11] + iVar6) = 0x5f;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < piVar7[0x1a]);
            }
            iVar6 = 0;
            if (0 < piVar7[0x25]) {
              do {
                pcVar9 = (char *)(iVar6 + piVar7[0x1c]);
                if (*pcVar9 == ' ') {
                  *pcVar9 = '_';
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < piVar7[0x25]);
            }
            FUN_00649b60(piVar7);
            iVar4 = local_b4;
            local_3c = 0;
            local_4 = 6;
            piVar8 = (int *)FUN_00576b70(local_b0,local_68);
            iVar6 = *piVar8;
            local_4 = 0xffffffff;
            FUN_00649ba0();
            *(int **)(iVar6 + 0x38) = piVar7;
            iVar6 = *(int *)(iVar4 + 0x6c);
            if (*(int *)(iVar4 + 0x74) < iVar6 + 1) {
              if (*(int *)(iVar4 + 0x7c) == 0) {
                iVar5 = *(int *)(iVar4 + 0x74) / 2;
                iVar10 = 1;
                if (0 < iVar5) {
                  iVar10 = iVar5;
                }
                if (iVar10 + iVar6 < 1) {
                  local_c4 = (uint *)0x1;
                }
                else {
                  if (iVar5 < 1) {
                    iVar5 = 1;
                  }
                  local_c4 = (uint *)(iVar6 + iVar5);
                }
              }
              else {
                local_c4 = (uint *)(iVar6 + *(int *)(iVar4 + 0x7c));
              }
              local_c0 = (int *)operator_new((int)local_c4 * 0x2c + 4);
              local_4 = 7;
              if (local_c0 == (int *)0x0) {
                local_b8 = (int *)0x0;
              }
              else {
                piVar8 = local_c0 + 1;
                *local_c0 = (int)local_c4;
                FUN_006c043b(piVar8,0x2c,local_c4,FUN_006499d0,FUN_00649ba0);
                local_b8 = piVar8;
              }
              local_4 = 0xffffffff;
              local_c0 = (int *)0x0;
              if (0 < *(int *)(iVar4 + 0x6c)) {
                iVar6 = 0;
                do {
                  FUN_0064a320(*(int *)(iVar4 + 0x70) + iVar6);
                  local_c0 = (int *)((int)local_c0 + 1);
                  iVar6 = iVar6 + 0x2c;
                } while ((int)local_c0 < *(int *)(iVar4 + 0x6c));
              }
              if (*(int *)(iVar4 + 0x70) != 0) {
                FUN_00407f70(3);
              }
              *(int **)(iVar4 + 0x70) = local_b8;
              *(uint **)(iVar4 + 0x74) = local_c4;
            }
            FUN_0064a320(piVar7);
            *(int *)(iVar4 + 0x6c) = *(int *)(iVar4 + 0x6c) + 1;
            local_bc = (uint *)((int)local_bc + 1);
            puVar2 = local_bc;
          } while ((int)local_bc < *(int *)(iVar12 + 0x100));
        }
      }
      iVar6 = FUN_0063e510();
    }
  }
  if (iVar12 != 0) {
    FUN_0063de30();
    FUN_006bf840(iVar12);
  }
  pcVar9 = &DAT_0072e8c4;
  DAT_00772c00 = 0x1505;
  cVar1 = DAT_0072e8c4;
  while (uVar11 = (uint)cVar1, uVar11 != 0) {
    pcVar9 = pcVar9 + 1;
    if ((0x60 < (int)uVar11) && ((int)uVar11 < 0x7b)) {
      uVar11 = uVar11 - 0x20;
    }
    DAT_00772c00 = DAT_00772c00 * 0x21 ^ uVar11;
    cVar1 = *pcVar9;
  }
  pcVar9 = s_Attached_Effect_0073fc14;
  DAT_00772c04 = 0x1505;
  cVar1 = s_Attached_Effect_0073fc14[0];
  while (uVar11 = (uint)cVar1, uVar11 != 0) {
    pcVar9 = pcVar9 + 1;
    if ((0x60 < (int)uVar11) && ((int)uVar11 < 0x7b)) {
      uVar11 = uVar11 - 0x20;
    }
    DAT_00772c04 = DAT_00772c04 * 0x21 ^ uVar11;
    cVar1 = *pcVar9;
  }
  pcVar9 = s_Unattached_Effect_0073fc00;
  DAT_00772c08 = 0x1505;
  cVar1 = s_Unattached_Effect_0073fc00[0];
  while (uVar11 = (uint)cVar1, uVar11 != 0) {
    pcVar9 = pcVar9 + 1;
    if ((0x60 < (int)uVar11) && ((int)uVar11 < 0x7b)) {
      uVar11 = uVar11 - 0x20;
    }
    DAT_00772c08 = DAT_00772c08 * 0x21 ^ uVar11;
    cVar1 = *pcVar9;
  }
  pcVar9 = s_Audio_Looped_0073fbf0;
  DAT_00772c0c = 0x1505;
  cVar1 = s_Audio_Looped_0073fbf0[0];
  while (uVar11 = (uint)cVar1, uVar11 != 0) {
    pcVar9 = pcVar9 + 1;
    if ((0x60 < (int)uVar11) && ((int)uVar11 < 0x7b)) {
      uVar11 = uVar11 - 0x20;
    }
    DAT_00772c0c = DAT_00772c0c * 0x21 ^ uVar11;
    cVar1 = *pcVar9;
  }
  pcVar9 = s_Contact_Audio_0073fbe0;
  DAT_00772c10 = 0x1505;
  cVar1 = s_Contact_Audio_0073fbe0[0];
  while (uVar11 = (uint)cVar1, uVar11 != 0) {
    pcVar9 = pcVar9 + 1;
    if ((0x60 < (int)uVar11) && ((int)uVar11 < 0x7b)) {
      uVar11 = uVar11 - 0x20;
    }
    DAT_00772c10 = DAT_00772c10 * 0x21 ^ uVar11;
    cVar1 = *pcVar9;
  }
  pcVar9 = s_Audio_OneShot_0073fbd0;
  DAT_00772c14 = 0x1505;
  cVar1 = s_Audio_OneShot_0073fbd0[0];
  while (uVar11 = (uint)cVar1, uVar11 != 0) {
    pcVar9 = pcVar9 + 1;
    if ((0x60 < (int)uVar11) && ((int)uVar11 < 0x7b)) {
      uVar11 = uVar11 - 0x20;
    }
    DAT_00772c14 = DAT_00772c14 * 0x21 ^ uVar11;
    cVar1 = *pcVar9;
  }
  pcVar9 = s_Projectile_0072be40;
  DAT_00772c18 = 0x1505;
  cVar1 = s_Projectile_0072be40[0];
  while (uVar11 = (uint)cVar1, uVar11 != 0) {
    pcVar9 = pcVar9 + 1;
    if ((0x60 < (int)uVar11) && ((int)uVar11 < 0x7b)) {
      uVar11 = uVar11 - 0x20;
    }
    DAT_00772c18 = DAT_00772c18 * 0x21 ^ uVar11;
    cVar1 = *pcVar9;
  }
  pcVar9 = s_Audio_Cinematic_0073fbc0;
  DAT_00772c1c = 0x1505;
  cVar1 = s_Audio_Cinematic_0073fbc0[0];
  while (uVar11 = (uint)cVar1, uVar11 != 0) {
    pcVar9 = pcVar9 + 1;
    if ((0x60 < (int)uVar11) && ((int)uVar11 < 0x7b)) {
      uVar11 = uVar11 - 0x20;
    }
    DAT_00772c1c = DAT_00772c1c * 0x21 ^ uVar11;
    cVar1 = *pcVar9;
  }
  pcVar9 = s_Generic_0073fbb8;
  DAT_00772c20 = 0x1505;
  cVar1 = s_Generic_0073fbb8[0];
  while (uVar11 = (uint)cVar1, uVar11 != 0) {
    pcVar9 = pcVar9 + 1;
    if ((0x60 < (int)uVar11) && ((int)uVar11 < 0x7b)) {
      uVar11 = uVar11 - 0x20;
    }
    DAT_00772c20 = DAT_00772c20 * 0x21 ^ uVar11;
    cVar1 = *pcVar9;
  }
  ExceptionList = local_c;
  return;
}

