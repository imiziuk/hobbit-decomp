
undefined4 FUN_00695b71(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_40;
  int local_3c;
  int local_38;
  int local_30 [4];
  uint local_20;
  undefined2 *local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar2 = *(int *)(param_1 + 0x194);
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(iVar2 + 0x30) != 0)) ||
     (cVar3 = FUN_00695b13(param_1), cVar3 != '\0')) {
    local_58 = **(undefined4 **)(param_1 + 0x14);
    local_54 = (*(undefined4 **)(param_1 + 0x14))[1];
    local_10 = 0;
    local_38 = iVar2 + 0x18;
    local_30[0] = *(int *)(iVar2 + 0x20);
    local_30[1] = *(undefined4 *)(iVar2 + 0x24);
    local_50 = *(undefined4 *)(param_1 + 0x178);
    local_30[2] = *(undefined4 *)(iVar2 + 0x28);
    iVar7 = *(int *)(iVar2 + 0x10);
    iVar5 = *(int *)(iVar2 + 0x14);
    local_3c = param_1;
    local_30[3] = *(undefined4 *)(iVar2 + 0x2c);
    if (0 < *(int *)(param_1 + 0x13c)) {
      local_14 = (uint *)(param_1 + 0x140);
      do {
        local_1c = *(undefined2 **)(param_2 + local_10 * 4);
        iVar9 = *(int *)(param_1 + 0x124 + *local_14 * 4);
        local_8 = *(int *)(iVar2 + 0x34 + *(int *)(iVar9 + 0x14) * 4);
        local_20 = *local_14;
        local_18 = iVar9;
        local_c = *(int *)(iVar2 + 0x44 + *(int *)(iVar9 + 0x18) * 4);
        if (iVar5 < 8) {
          cVar3 = FUN_00695943(&local_58,iVar7,iVar5,0);
          if (cVar3 == '\0') goto LAB_00695f3a;
          iVar5 = local_40;
          iVar7 = local_4c;
          if (7 < local_40) goto LAB_00695c4d;
          uVar6 = 1;
LAB_00695c7a:
          uVar4 = FUN_00695a2d(&local_58,iVar7,iVar5,local_8,uVar6);
          iVar5 = local_40;
          iVar7 = local_4c;
          if ((int)uVar4 < 0) goto LAB_00695f3a;
        }
        else {
LAB_00695c4d:
          uVar4 = iVar7 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
          iVar8 = *(int *)(local_8 + 0xd4 + uVar4 * 4);
          if (iVar8 == 0) {
            uVar6 = 9;
            goto LAB_00695c7a;
          }
          uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + local_8);
          iVar5 = iVar5 - iVar8;
        }
        if (uVar4 != 0) {
          if ((iVar5 < (int)uVar4) &&
             (cVar3 = FUN_00695943(&local_58,iVar7,iVar5,uVar4), iVar5 = local_40, iVar7 = local_4c,
             cVar3 == '\0')) goto LAB_00695f3a;
          iVar5 = iVar5 - uVar4;
          local_8 = (1 << ((byte)uVar4 & 0x1f)) - 1;
          iVar8 = uVar4 * 4;
          uVar4 = local_8 & iVar7 >> ((byte)iVar5 & 0x1f);
          iVar9 = local_18;
          if ((int)uVar4 < *(int *)(&DAT_006fc338 + iVar8)) {
            uVar4 = *(int *)(&DAT_006fc378 + iVar8) + uVar4;
          }
        }
        if (*(char *)(iVar9 + 0x30) == '\0') {
LAB_00695e29:
          local_8 = 1;
          do {
            if (iVar5 < 8) {
              cVar3 = FUN_00695943(&local_58,iVar7,iVar5,0);
              if (cVar3 == '\0') goto LAB_00695f3a;
              iVar5 = local_40;
              iVar7 = local_4c;
              if (7 < local_40) goto LAB_00695e60;
              uVar6 = 1;
LAB_00695e8a:
              uVar4 = FUN_00695a2d(&local_58,iVar7,iVar5,local_c,uVar6);
              iVar5 = local_40;
              iVar7 = local_4c;
              if ((int)uVar4 < 0) goto LAB_00695f3a;
            }
            else {
LAB_00695e60:
              uVar4 = iVar7 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
              iVar9 = *(int *)(local_c + 0xd4 + uVar4 * 4);
              if (iVar9 == 0) {
                uVar6 = 9;
                goto LAB_00695e8a;
              }
              uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + local_c);
              iVar5 = iVar5 - iVar9;
            }
            uVar10 = uVar4 & 0xf;
            if (uVar10 == 0) {
              if ((int)uVar4 >> 4 != 0xf) break;
              local_8 = local_8 + 0xf;
            }
            else {
              local_8 = local_8 + ((int)uVar4 >> 4);
              if ((iVar5 < (int)uVar10) &&
                 (cVar3 = FUN_00695943(&local_58,iVar7,iVar5,uVar10), iVar5 = local_40,
                 iVar7 = local_4c, cVar3 == '\0')) goto LAB_00695f3a;
              iVar5 = iVar5 - uVar10;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < 0x40);
        }
        else {
          piVar1 = local_30 + local_20;
          *piVar1 = *piVar1 + uVar4;
          *local_1c = (short)*piVar1;
          if (*(int *)(iVar9 + 0x24) < 2) goto LAB_00695e29;
          local_8 = 1;
          do {
            if (iVar5 < 8) {
              cVar3 = FUN_00695943(&local_58,iVar7,iVar5,0);
              if (cVar3 == '\0') goto LAB_00695f3a;
              iVar5 = local_40;
              iVar7 = local_4c;
              if (7 < local_40) goto LAB_00695d51;
              uVar6 = 1;
LAB_00695d7b:
              uVar4 = FUN_00695a2d(&local_58,iVar7,iVar5,local_c,uVar6);
              iVar5 = local_40;
              iVar7 = local_4c;
              if ((int)uVar4 < 0) goto LAB_00695f3a;
            }
            else {
LAB_00695d51:
              uVar4 = iVar7 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
              iVar9 = *(int *)(local_c + 0xd4 + uVar4 * 4);
              if (iVar9 == 0) {
                uVar6 = 9;
                goto LAB_00695d7b;
              }
              uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + local_c);
              iVar5 = iVar5 - iVar9;
            }
            uVar10 = uVar4 & 0xf;
            local_20 = uVar10;
            if (uVar10 == 0) {
              if ((int)uVar4 >> 4 != 0xf) break;
              local_8 = local_8 + 0xf;
            }
            else {
              local_8 = local_8 + ((int)uVar4 >> 4);
              if ((iVar5 < (int)uVar10) &&
                 (cVar3 = FUN_00695943(&local_58,iVar7,iVar5,uVar10), iVar5 = local_40,
                 iVar7 = local_4c, cVar3 == '\0')) goto LAB_00695f3a;
              iVar5 = iVar5 - uVar10;
              uVar4 = (1 << (sbyte)uVar10) - 1U & iVar7 >> ((byte)iVar5 & 0x1f);
              if ((int)uVar4 < *(int *)(&DAT_006fc338 + local_20 * 4)) {
                uVar4 = *(int *)(&DAT_006fc378 + local_20 * 4) + uVar4;
              }
              local_1c[(&DAT_006fb870)[local_8]] = (short)uVar4;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < 0x40);
        }
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
      } while (local_10 < *(int *)(param_1 + 0x13c));
    }
    **(undefined4 **)(param_1 + 0x14) = local_58;
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = local_54;
    *(undefined4 *)(param_1 + 0x178) = local_50;
    *(int *)(iVar2 + 0x30) = *(int *)(iVar2 + 0x30) + -1;
    *(int *)(iVar2 + 0x20) = local_30[0];
    *(int *)(iVar2 + 0x24) = local_30[1];
    *(int *)(iVar2 + 0x28) = local_30[2];
    *(int *)(iVar2 + 0x14) = iVar5;
    *(int *)(iVar2 + 0x10) = iVar7;
    *(int *)(iVar2 + 0x2c) = local_30[3];
    uVar6 = 1;
  }
  else {
LAB_00695f3a:
    uVar6 = 0;
  }
  return uVar6;
}

