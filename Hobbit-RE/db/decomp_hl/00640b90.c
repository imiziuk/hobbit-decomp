
/* WARNING: Removing unreachable block (ram,0x00641061) */
/* WARNING: Removing unreachable block (ram,0x00640ee8) */
/* WARNING: Removing unreachable block (ram,0x00640fa5) */

void FUN_00640b90(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  double *pdVar13;
  double *pdVar14;
  int iVar15;
  char *pcVar16;
  char *local_64;
  int local_4c;
  void *local_48;
  int local_44;
  undefined1 local_38 [44];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar6 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5d70;
  local_c = ExceptionList;
  iVar12 = (param_1[9] + -1) * 0x2c;
  iVar15 = *(int *)(param_1[10] + iVar12 + 0x1c);
  iVar9 = (*(int *)(param_1[10] + 0x18 + iVar12) * 9 + -9) * 4;
  iVar3 = *(int *)(iVar15 + 0x18 + iVar9);
  iVar15 = iVar15 + 8 + iVar9;
  iVar5 = *(int *)(iVar15 + 8);
  ExceptionList = &local_c;
  if (iVar3 < iVar5 + 1) {
    if (*(int *)(iVar15 + 0x18) == 0) {
      iVar3 = iVar3 / 2;
      iVar8 = 1;
      if (0 < iVar3) {
        iVar8 = iVar3;
      }
      if (iVar8 + iVar5 < 1) {
        puVar10 = (undefined4 *)0x1;
      }
      else {
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        puVar10 = (undefined4 *)(iVar5 + iVar3);
      }
    }
    else {
      puVar10 = (undefined4 *)(*(int *)(iVar15 + 0x18) + iVar5);
    }
    ExceptionList = &local_c;
    param_1 = puVar10;
    pvVar4 = operator_new((int)puVar10 * 0xc);
    iVar3 = 0;
    if (0 < *(int *)(iVar15 + 8)) {
      iVar5 = 0;
      do {
        puVar10 = (undefined4 *)(*(int *)(iVar15 + 0xc) + iVar5);
        puVar11 = (undefined4 *)((int)pvVar4 + iVar5);
        *puVar11 = *puVar10;
        puVar11[1] = puVar10[1];
        puVar11[2] = puVar10[2];
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0xc;
        puVar10 = param_1;
      } while (iVar3 < *(int *)(iVar15 + 8));
    }
    FUN_006bf840(*(undefined4 *)(iVar15 + 0xc));
    *(undefined4 **)(iVar15 + 0x10) = puVar10;
    *(void **)(iVar15 + 0xc) = pvVar4;
  }
  iVar3 = *(int *)(iVar15 + 8) + 1;
  *(int *)(iVar15 + 8) = iVar3;
  piVar2 = (int *)(*(int *)(iVar15 + 0xc) + -0xc + iVar3 * 0xc);
  iVar15 = 0;
  if (0 < (int)puVar6[2]) {
    iVar3 = 0;
    do {
      iVar5 = FUN_00647ed0(param_2,*(undefined4 *)(iVar3 + puVar6[3]));
      if (iVar5 == 0) break;
      iVar15 = iVar15 + 1;
      iVar3 = iVar3 + 0x2c;
    } while (iVar15 < (int)puVar6[2]);
  }
  *piVar2 = iVar15;
  if (iVar15 == puVar6[2]) {
    FUN_00649b20(param_2);
    iVar15 = puVar6[2];
    local_4 = 0;
    if ((int)puVar6[4] < iVar15 + 1) {
      if (puVar6[6] == 0) {
        iVar5 = (int)puVar6[4] / 2;
        iVar3 = 1;
        if (0 < iVar5) {
          iVar3 = iVar5;
        }
        if (iVar3 + iVar15 < 1) {
          param_1 = (undefined4 *)0x1;
        }
        else {
          if (iVar5 < 1) {
            iVar5 = 1;
          }
          param_1 = (undefined4 *)(iVar5 + iVar15);
        }
      }
      else {
        param_1 = (undefined4 *)(puVar6[6] + iVar15);
      }
      puVar10 = (undefined4 *)operator_new((int)param_1 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (puVar10 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        puVar11 = puVar10 + 1;
        *puVar10 = param_1;
        FUN_006c043b(puVar11,0x2c,param_1,FUN_006499d0,FUN_00649ba0);
      }
      iVar15 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < (int)puVar6[2]) {
        iVar3 = 0;
        do {
          FUN_0064a320(puVar6[3] + iVar3);
          iVar15 = iVar15 + 1;
          iVar3 = iVar3 + 0x2c;
        } while (iVar15 < (int)puVar6[2]);
      }
      if (puVar6[3] != 0) {
        FUN_00407f70(3);
      }
      puVar6[3] = puVar11;
      puVar6[4] = param_1;
    }
    FUN_0064a320(local_38);
    puVar6[2] = puVar6[2] + 1;
    local_4 = 0xffffffff;
    FUN_00649ba0();
  }
  iVar15 = *(int *)(*(int *)(puVar6[10] + 0x1c + iVar12) + 0x10 + iVar9);
  iVar3 = 0;
  if (iVar15 != 1 && -1 < iVar15 + -1) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar15 + -1);
  }
  piVar2[1] = 0;
  iVar15 = FUN_00648010(param_2,0x3a);
  pcVar16 = (char *)(iVar15 + 1);
  iVar3 = 0;
  iVar15 = 0;
  local_48 = (void *)0x0;
  local_4c = 0;
  local_44 = 0;
  local_4 = 2;
  if (*pcVar16 != '\0') {
    puVar6 = &param_2;
    pdVar13 = (double *)&param_1;
    local_64 = pcVar16;
    do {
      pdVar14 = pdVar13;
      switch(*local_64) {
      case 'D':
      case 'd':
        param_1 = puVar6 + 1;
        pdVar14 = (double *)((int)pdVar13 + 4);
        if (iVar15 < iVar3 + 1) {
          iVar15 = iVar15 / 2;
          iVar5 = 1;
          if (0 < iVar15) {
            iVar5 = iVar15;
          }
          if (iVar5 + iVar3 < 1) {
            local_44 = 1;
          }
          else {
            if (iVar15 < 1) {
              iVar15 = 1;
            }
            local_44 = iVar15 + iVar3;
          }
          pvVar4 = operator_new(local_44 * 8);
          iVar15 = 0;
          if (0 < local_4c) {
            do {
              *(undefined4 *)((int)pvVar4 + iVar15 * 8) =
                   *(undefined4 *)((int)local_48 + iVar15 * 8);
              *(undefined4 *)((int)pvVar4 + iVar15 * 8 + 4) =
                   *(undefined4 *)((int)local_48 + iVar15 * 8 + 4);
              iVar15 = iVar15 + 1;
            } while (iVar15 < local_4c);
          }
          FUN_006bf840(local_48);
          iVar3 = local_4c;
          local_48 = pvVar4;
        }
        local_4c = iVar3 + 1;
        *(undefined4 *)((int)local_48 + local_4c * 8 + -8) = *param_1;
        iVar15 = piVar2[1] + 4;
        puVar6 = param_1;
        break;
      default:
        goto switchD_00640e9a_caseD_45;
      case 'F':
      case 'f':
        param_1 = puVar6 + 2;
        pdVar14 = pdVar13 + 1;
        if (iVar15 < iVar3 + 1) {
          iVar15 = iVar15 / 2;
          iVar5 = 1;
          if (0 < iVar15) {
            iVar5 = iVar15;
          }
          if (iVar5 + iVar3 < 1) {
            local_44 = 1;
          }
          else {
            if (iVar15 < 1) {
              iVar15 = 1;
            }
            local_44 = iVar15 + iVar3;
          }
          pvVar4 = operator_new(local_44 * 8);
          iVar15 = 0;
          if (0 < local_4c) {
            do {
              *(undefined4 *)((int)pvVar4 + iVar15 * 8) =
                   *(undefined4 *)((int)local_48 + iVar15 * 8);
              *(undefined4 *)((int)pvVar4 + iVar15 * 8 + 4) =
                   *(undefined4 *)((int)local_48 + iVar15 * 8 + 4);
              iVar15 = iVar15 + 1;
            } while (iVar15 < local_4c);
          }
          FUN_006bf840(local_48);
          iVar3 = local_4c;
          local_48 = pvVar4;
        }
        local_4c = iVar3 + 1;
        *(float *)((int)local_48 + local_4c * 8 + -8) = (float)*pdVar14;
        iVar15 = piVar2[1] + 4;
        puVar6 = param_1;
        break;
      case 'G':
      case 'g':
        pdVar14 = pdVar13 + 1;
        puVar10 = (undefined4 *)FUN_006420d0();
        uVar7 = *(undefined4 *)((int)pdVar13 + 0xc);
        *puVar10 = *(undefined4 *)pdVar14;
        puVar10[1] = uVar7;
        iVar15 = piVar2[1] + 8;
        puVar6 = puVar6 + 2;
        break;
      case 'S':
      case 's':
        param_1 = puVar6 + 1;
        pdVar14 = (double *)((int)pdVar13 + 4);
        if (iVar15 < iVar3 + 1) {
          iVar15 = iVar15 / 2;
          iVar5 = 1;
          if (0 < iVar15) {
            iVar5 = iVar15;
          }
          if (iVar5 + iVar3 < 1) {
            local_44 = 1;
          }
          else {
            if (iVar15 < 1) {
              iVar15 = 1;
            }
            local_44 = iVar15 + iVar3;
          }
          pvVar4 = operator_new(local_44 * 8);
          iVar15 = 0;
          if (0 < local_4c) {
            do {
              *(undefined4 *)((int)pvVar4 + iVar15 * 8) =
                   *(undefined4 *)((int)local_48 + iVar15 * 8);
              *(undefined4 *)((int)pvVar4 + iVar15 * 8 + 4) =
                   *(undefined4 *)((int)local_48 + iVar15 * 8 + 4);
              iVar15 = iVar15 + 1;
            } while (iVar15 < local_4c);
          }
          FUN_006bf840(local_48);
          iVar3 = local_4c;
          local_48 = pvVar4;
        }
        puVar6 = param_1;
        local_4c = iVar3 + 1;
        *(undefined4 *)((int)local_48 + local_4c * 8 + -8) = *param_1;
        iVar15 = FUN_00647cf0(*(undefined4 *)((int)local_48 + local_4c * 8 + -8));
        piVar2[1] = piVar2[1] + (iVar15 + 0x24U & 0xffffffe0);
        iVar15 = local_44;
        iVar3 = local_4c;
        goto switchD_00640e9a_caseD_45;
      }
      piVar2[1] = iVar15;
      iVar15 = local_44;
      iVar3 = local_4c;
switchD_00640e9a_caseD_45:
      local_64 = local_64 + 1;
      pdVar13 = pdVar14;
    } while (*local_64 != '\0');
  }
  puVar6 = (undefined4 *)operator_new(piVar2[1]);
  piVar2[2] = (int)puVar6;
  if (*pcVar16 != '\0') {
    iVar15 = 0;
    do {
      param_2 = pcVar16;
      switch(*pcVar16) {
      case 'D':
      case 'd':
        *puVar6 = *(undefined4 *)(iVar15 + (int)local_48);
        puVar6 = puVar6 + 1;
        break;
      case 'F':
      case 'f':
        *puVar6 = *(undefined4 *)(iVar15 + (int)local_48);
        puVar6 = puVar6 + 1;
        break;
      case 'G':
      case 'g':
        uVar7 = __aullshr();
        *puVar6 = uVar7;
        puVar6[1] = *(undefined4 *)(iVar15 + (int)local_48);
        puVar6 = puVar6 + 2;
        break;
      case 'S':
      case 's':
        iVar3 = FUN_00647cf0(*(undefined4 *)(iVar15 + (int)local_48));
        iVar5 = FUN_00647cf0(*(undefined4 *)(iVar15 + (int)local_48));
        FUN_00648480(puVar6,*(undefined4 *)(iVar15 + (int)local_48),iVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + (iVar3 + 0x24U & 0xffffffe0));
        pcVar16 = param_2;
      }
      pcVar1 = pcVar16 + 1;
      iVar15 = iVar15 + 8;
      pcVar16 = pcVar16 + 1;
      param_2 = pcVar16;
    } while (*pcVar1 != '\0');
  }
  local_4 = 0xffffffff;
  FUN_006bf840(local_48);
  ExceptionList = local_c;
  return;
}

