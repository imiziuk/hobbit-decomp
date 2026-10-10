
void FUN_0069b2e9(uint param_1,int *param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  byte *local_18;
  undefined1 *local_10;
  uint local_c;
  byte *local_8;
  
  piVar6 = param_2;
  iVar5 = param_1;
  local_8 = (byte *)*param_2;
  local_c = param_2[1];
  puVar10 = *(undefined1 **)(param_1 + 0x34);
  piVar3 = *(int **)(param_1 + 4);
  param_2 = *(int **)(param_1 + 0x20);
  if (puVar10 < *(undefined1 **)(param_1 + 0x30)) {
    local_10 = *(undefined1 **)(param_1 + 0x30) + (-1 - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x1c);
  }
  else {
    local_10 = (undefined1 *)(*(int *)(param_1 + 0x2c) - (int)puVar10);
    param_1 = *(uint *)(param_1 + 0x1c);
  }
  do {
    puVar9 = puVar10;
    switch(*piVar3) {
    case 0:
      if (((undefined1 *)0x101 < local_10) && (9 < local_c)) {
        *(int **)(iVar5 + 0x20) = param_2;
        *(uint *)(iVar5 + 0x1c) = param_1;
        piVar6[1] = local_c;
        piVar6[2] = (int)(local_8 + (piVar6[2] - *piVar6));
        *piVar6 = (int)local_8;
        *(undefined1 **)(iVar5 + 0x34) = puVar10;
        param_3 = FUN_0069dc8f((char)piVar3[4],*(undefined1 *)((int)piVar3 + 0x11),piVar3[5],
                               piVar3[6],iVar5,piVar6);
        puVar10 = *(undefined1 **)(iVar5 + 0x34);
        local_8 = (byte *)*piVar6;
        local_c = piVar6[1];
        param_2 = *(int **)(iVar5 + 0x20);
        param_1 = *(uint *)(iVar5 + 0x1c);
        if (puVar10 < *(undefined1 **)(iVar5 + 0x30)) {
          local_10 = *(undefined1 **)(iVar5 + 0x30) + (-1 - (int)puVar10);
        }
        else {
          local_10 = (undefined1 *)(*(int *)(iVar5 + 0x2c) - (int)puVar10);
        }
        if (param_3 != 0) {
          *piVar3 = (uint)(param_3 != 1) * 2 + 7;
          break;
        }
      }
      piVar3[3] = (uint)*(byte *)(piVar3 + 4);
      piVar3[2] = piVar3[5];
      *piVar3 = 1;
    case 1:
      for (; param_1 < (uint)piVar3[3]; param_1 = param_1 + 8) {
        if (local_c == 0) goto LAB_0069b778;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      local_18 = (byte *)(piVar3[2] + (*(uint *)(&DAT_00755730 + piVar3[3] * 4) & (uint)param_2) * 8
                         );
      param_2 = (int *)((uint)param_2 >> (local_18[1] & 0x1f));
      param_1 = param_1 - local_18[1];
      bVar2 = *local_18;
      uVar8 = (uint)bVar2;
      if (uVar8 == 0) {
        piVar3[2] = *(int *)(local_18 + 4);
        *piVar3 = 6;
      }
      else if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) == 0) {
LAB_0069b56c:
          piVar3[3] = uVar8;
          piVar3[2] = (int)(local_18 + *(int *)(local_18 + 4) * 8);
        }
        else {
          if ((bVar2 & 0x20) == 0) {
            *piVar3 = 9;
            piVar6[6] = (int)"invalid literal/length code";
switchD_0069b334_caseD_9:
            param_3 = -3;
            puVar9 = puVar10;
            goto LAB_0069b7e7;
          }
          *piVar3 = 7;
        }
      }
      else {
        piVar3[2] = uVar8 & 0xf;
        piVar3[1] = *(int *)(local_18 + 4);
        *piVar3 = 2;
      }
      break;
    case 2:
      for (; param_1 < (uint)piVar3[2]; param_1 = param_1 + 8) {
        if (local_c == 0) goto LAB_0069b778;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      piVar3[1] = piVar3[1] + (*(uint *)(&DAT_00755730 + piVar3[2] * 4) & (uint)param_2);
      param_2 = (int *)((uint)param_2 >> ((byte)piVar3[2] & 0x1f));
      param_1 = param_1 - piVar3[2];
      piVar3[3] = (uint)*(byte *)((int)piVar3 + 0x11);
      piVar3[2] = piVar3[6];
      *piVar3 = 3;
    case 3:
      for (; param_1 < (uint)piVar3[3]; param_1 = param_1 + 8) {
        if (local_c == 0) goto LAB_0069b778;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      local_18 = (byte *)(piVar3[2] + (*(uint *)(&DAT_00755730 + piVar3[3] * 4) & (uint)param_2) * 8
                         );
      param_2 = (int *)((uint)param_2 >> (local_18[1] & 0x1f));
      param_1 = param_1 - local_18[1];
      bVar2 = *local_18;
      uVar8 = (uint)bVar2;
      if ((bVar2 & 0x10) == 0) {
        if ((bVar2 & 0x40) != 0) {
          *piVar3 = 9;
          piVar6[6] = (int)"invalid distance code";
          goto switchD_0069b334_caseD_9;
        }
        goto LAB_0069b56c;
      }
      piVar3[2] = uVar8 & 0xf;
      piVar3[3] = *(int *)(local_18 + 4);
      *piVar3 = 4;
      break;
    case 4:
      for (; param_1 < (uint)piVar3[2]; param_1 = param_1 + 8) {
        if (local_c == 0) goto LAB_0069b778;
        param_3 = 0;
        local_c = local_c - 1;
        param_2 = (int *)((uint)param_2 | (uint)*local_8 << ((byte)param_1 & 0x1f));
        local_8 = local_8 + 1;
      }
      piVar3[3] = piVar3[3] + (*(uint *)(&DAT_00755730 + piVar3[2] * 4) & (uint)param_2);
      param_2 = (int *)((uint)param_2 >> ((byte)piVar3[2] & 0x1f));
      param_1 = param_1 - piVar3[2];
      *piVar3 = 5;
    case 5:
      if ((uint)((int)puVar10 - *(int *)(iVar5 + 0x28)) < (uint)piVar3[3]) {
        iVar7 = (*(int *)(iVar5 + 0x2c) - *(int *)(iVar5 + 0x28)) - piVar3[3];
      }
      else {
        iVar7 = -piVar3[3];
      }
      local_18 = puVar10 + iVar7;
      iVar7 = piVar3[1];
      while (iVar7 != 0) {
        puVar9 = puVar10;
        if (local_10 == (undefined1 *)0x0) {
          if (puVar10 == *(undefined1 **)(iVar5 + 0x2c)) {
            local_10 = *(undefined1 **)(iVar5 + 0x30);
            puVar9 = *(undefined1 **)(iVar5 + 0x28);
            if (local_10 != puVar9) {
              if (puVar9 < local_10) {
                local_10 = local_10 + (-1 - (int)puVar9);
              }
              else {
                local_10 = *(undefined1 **)(iVar5 + 0x2c) + -(int)puVar9;
              }
              puVar10 = puVar9;
              if (local_10 != (undefined1 *)0x0) goto LAB_0069b689;
            }
          }
          *(undefined1 **)(iVar5 + 0x34) = puVar10;
          param_3 = FUN_0069bd86(iVar5,piVar6,param_3);
          puVar9 = *(undefined1 **)(iVar5 + 0x34);
          puVar10 = *(undefined1 **)(iVar5 + 0x30);
          if (puVar9 < puVar10) {
            local_10 = puVar10 + (-1 - (int)puVar9);
          }
          else {
            local_10 = (undefined1 *)(*(int *)(iVar5 + 0x2c) - (int)puVar9);
          }
          if ((puVar9 == *(undefined1 **)(iVar5 + 0x2c)) &&
             (puVar4 = *(undefined1 **)(iVar5 + 0x28), puVar10 != puVar4)) {
            puVar9 = puVar4;
            if (puVar4 < puVar10) {
              local_10 = puVar10 + (-1 - (int)puVar4);
            }
            else {
              local_10 = *(undefined1 **)(iVar5 + 0x2c) + -(int)puVar4;
            }
          }
          if (local_10 == (undefined1 *)0x0) goto LAB_0069b7e7;
        }
LAB_0069b689:
        param_3 = 0;
        *puVar9 = *local_18;
        puVar10 = puVar9 + 1;
        local_18 = local_18 + 1;
        local_10 = local_10 + -1;
        if (local_18 == *(undefined1 **)(iVar5 + 0x2c)) {
          local_18 = *(byte **)(iVar5 + 0x28);
        }
        piVar1 = piVar3 + 1;
        *piVar1 = *piVar1 + -1;
        iVar7 = *piVar1;
      }
LAB_0069b6b3:
      *piVar3 = 0;
      break;
    case 6:
      if (local_10 == (undefined1 *)0x0) {
        if (puVar10 == *(undefined1 **)(iVar5 + 0x2c)) {
          local_10 = *(undefined1 **)(iVar5 + 0x30);
          puVar9 = *(undefined1 **)(iVar5 + 0x28);
          if (local_10 != puVar9) {
            if (puVar9 < local_10) {
              local_10 = local_10 + (-1 - (int)puVar9);
            }
            else {
              local_10 = *(undefined1 **)(iVar5 + 0x2c) + -(int)puVar9;
            }
            puVar10 = puVar9;
            if (local_10 != (undefined1 *)0x0) goto LAB_0069b745;
          }
        }
        *(undefined1 **)(iVar5 + 0x34) = puVar10;
        param_3 = FUN_0069bd86(iVar5,piVar6,param_3);
        puVar9 = *(undefined1 **)(iVar5 + 0x34);
        puVar10 = *(undefined1 **)(iVar5 + 0x30);
        if (puVar9 < puVar10) {
          local_10 = puVar10 + (-1 - (int)puVar9);
        }
        else {
          local_10 = (undefined1 *)(*(int *)(iVar5 + 0x2c) - (int)puVar9);
        }
        if ((puVar9 == *(undefined1 **)(iVar5 + 0x2c)) &&
           (puVar4 = *(undefined1 **)(iVar5 + 0x28), puVar10 != puVar4)) {
          puVar9 = puVar4;
          if (puVar4 < puVar10) {
            local_10 = puVar10 + (-1 - (int)puVar4);
          }
          else {
            local_10 = *(undefined1 **)(iVar5 + 0x2c) + -(int)puVar4;
          }
        }
        if (local_10 == (undefined1 *)0x0) goto LAB_0069b7e7;
      }
LAB_0069b745:
      param_3 = 0;
      *puVar9 = (char)piVar3[2];
      puVar10 = puVar9 + 1;
      local_10 = local_10 + -1;
      goto LAB_0069b6b3;
    case 7:
      if (7 < param_1) {
        param_1 = param_1 - 8;
        local_c = local_c + 1;
        local_8 = local_8 + -1;
      }
      *(undefined1 **)(iVar5 + 0x34) = puVar10;
      param_3 = FUN_0069bd86(iVar5,piVar6,param_3);
      puVar10 = *(undefined1 **)(iVar5 + 0x34);
      if (*(undefined1 **)(iVar5 + 0x30) == puVar10) {
        *piVar3 = 8;
switchD_0069b334_caseD_8:
        param_3 = 1;
        puVar9 = puVar10;
LAB_0069b7e7:
        *(int **)(iVar5 + 0x20) = param_2;
        *(uint *)(iVar5 + 0x1c) = param_1;
        piVar6[1] = local_c;
        puVar10 = puVar9;
LAB_0069b7f9:
        iVar7 = *piVar6;
        *piVar6 = (int)local_8;
        piVar6[2] = (int)(local_8 + (piVar6[2] - iVar7));
      }
      else {
        *(int **)(iVar5 + 0x20) = param_2;
        *(uint *)(iVar5 + 0x1c) = param_1;
        piVar6[1] = local_c;
        iVar7 = *piVar6;
        *piVar6 = (int)local_8;
        piVar6[2] = (int)(local_8 + (piVar6[2] - iVar7));
      }
      *(undefined1 **)(iVar5 + 0x34) = puVar10;
      FUN_0069bd86(iVar5,piVar6,param_3);
      return;
    case 8:
      goto switchD_0069b334_caseD_8;
    case 9:
      goto switchD_0069b334_caseD_9;
    default:
      param_3 = -2;
      goto LAB_0069b7e7;
    }
  } while( true );
LAB_0069b778:
  *(int **)(iVar5 + 0x20) = param_2;
  *(uint *)(iVar5 + 0x1c) = param_1;
  piVar6[1] = 0;
  goto LAB_0069b7f9;
}

