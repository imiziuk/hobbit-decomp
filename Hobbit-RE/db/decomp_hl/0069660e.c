
undefined4 FUN_0069660e(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int aiStack_154 [64];
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_3c;
  int *local_38;
  int local_34;
  uint local_2c;
  uint local_28;
  short *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  piVar4 = param_1;
  local_10 = param_1[0x5b];
  iVar2 = param_1[0x65];
  local_28 = 1 << ((byte)param_1[0x5d] & 0x1f);
  local_2c = -1 << ((byte)param_1[0x5d] & 0x1f);
  if (((param_1[0x3f] != 0) && (*(int *)(iVar2 + 0x34) == 0)) &&
     (cVar5 = FUN_006960a7(), cVar5 == '\0')) {
    return 0;
  }
  local_18 = 0;
  local_38 = param_1;
  local_54 = *(undefined4 *)param_1[5];
  local_50 = ((undefined4 *)param_1[5])[1];
  local_4c = param_1[0x5e];
  iVar8 = *(int *)(iVar2 + 0x14);
  local_34 = iVar2 + 0x18;
  local_14 = *param_2;
  local_c = *(int *)(iVar2 + 0x20);
  local_1c = *(int *)(iVar2 + 0x48);
  param_2 = (int *)param_1[0x5a];
  param_1 = (int *)*(int *)(iVar2 + 0x10);
  if (local_c == 0) {
    for (; (int)param_2 <= local_10; param_2 = (int *)((int)param_2 + 1)) {
      if (iVar8 < 8) {
        cVar5 = FUN_00695943(&local_54,param_1,iVar8,0);
        if (cVar5 == '\0') goto LAB_00696974;
        param_1 = (int *)local_48;
        iVar8 = local_3c;
        if (7 < local_3c) goto LAB_006966e7;
        uVar6 = 1;
LAB_00696714:
        local_8 = FUN_00695a2d(&local_54,param_1,iVar8,local_1c,uVar6);
        if ((int)local_8 < 0) goto LAB_00696974;
        param_1 = (int *)local_48;
        iVar8 = local_3c;
      }
      else {
LAB_006966e7:
        uVar7 = (int)param_1 >> ((char)iVar8 - 8U & 0x1f) & 0xff;
        iVar3 = *(int *)(local_1c + 0xd4 + uVar7 * 4);
        if (iVar3 == 0) {
          uVar6 = 9;
          goto LAB_00696714;
        }
        local_8 = (uint)*(byte *)(uVar7 + 0x4d4 + local_1c);
        iVar8 = iVar8 - iVar3;
      }
      local_20 = (int)local_8 >> 4;
      local_8 = local_8 & 0xf;
      if (local_8 == 0) {
        uVar7 = 0;
        if (local_20 != 0xf) {
          local_1c = 1 << ((byte)local_20 & 0x1f);
          local_c = local_1c;
          if (local_20 == 0) goto LAB_006968ac;
          if (iVar8 < local_20) {
            cVar5 = FUN_00695943(&local_54,param_1,iVar8,local_20);
            if (cVar5 == '\0') goto LAB_00696974;
            param_1 = (int *)local_48;
            iVar8 = local_3c;
          }
          iVar8 = iVar8 - local_20;
          local_c = local_c + ((int)param_1 >> ((byte)iVar8 & 0x1f) & local_1c - 1U);
          goto LAB_006968ac;
        }
      }
      else {
        if (local_8 != 1) {
          *(undefined4 *)(*piVar4 + 0x14) = 0x72;
          (**(code **)(*piVar4 + 4))(piVar4,0xffffffff);
        }
        if (iVar8 < 1) {
          cVar5 = FUN_00695943(&local_54,param_1,iVar8,1);
          if (cVar5 == '\0') goto LAB_00696974;
          param_1 = (int *)local_48;
          iVar8 = local_3c;
        }
        iVar8 = iVar8 + -1;
        uVar7 = local_28;
        if (((int)param_1 >> ((byte)iVar8 & 0x1f) & 1U) == 0) {
          uVar7 = local_2c;
        }
      }
      do {
        local_8 = uVar7;
        local_24 = (short *)(local_14 + (&DAT_006fb870)[(int)param_2] * 2);
        if (*local_24 == 0) {
          local_20 = local_20 + -1;
          if (local_20 < 0) break;
        }
        else {
          if (iVar8 < 1) {
            cVar5 = FUN_00695943(&local_54,param_1,iVar8,1);
            if (cVar5 == '\0') goto LAB_00696974;
            param_1 = (int *)local_48;
            iVar8 = local_3c;
          }
          iVar8 = iVar8 + -1;
          if ((((int)param_1 >> ((byte)iVar8 & 0x1f) & 1U) != 0) &&
             ((local_28 & (int)*local_24) == 0)) {
            uVar7 = local_28;
            if (*local_24 < 0) {
              uVar7 = local_2c;
            }
            *local_24 = *local_24 + (short)uVar7;
          }
        }
        param_2 = (int *)((int)param_2 + 1);
        uVar7 = local_8;
      } while ((int)param_2 <= local_10);
      if (local_8 != 0) {
        iVar3 = (&DAT_006fb870)[(int)param_2];
        *(short *)(local_14 + iVar3 * 2) = (short)local_8;
        piVar1 = aiStack_154 + local_18;
        local_18 = local_18 + 1;
        *piVar1 = iVar3;
      }
    }
  }
  else {
LAB_006968ac:
    if (local_c != 0) {
      for (; (int)param_2 <= local_10; param_2 = (int *)((int)param_2 + 1)) {
        local_24 = (short *)(local_14 + (&DAT_006fb870)[(int)param_2] * 2);
        if (*local_24 != 0) {
          if (iVar8 < 1) {
            cVar5 = FUN_00695943(&local_54,param_1,iVar8,1);
            if (cVar5 == '\0') {
LAB_00696974:
              for (; 0 < local_18; local_18 = local_18 + -1) {
                *(undefined2 *)(local_14 + aiStack_154[local_18 + -1] * 2) = 0;
              }
              return 0;
            }
            param_1 = (int *)local_48;
            iVar8 = local_3c;
          }
          iVar8 = iVar8 + -1;
          if ((((int)param_1 >> ((byte)iVar8 & 0x1f) & 1U) != 0) &&
             ((local_28 & (int)*local_24) == 0)) {
            uVar7 = local_28;
            if (*local_24 < 0) {
              uVar7 = local_2c;
            }
            *local_24 = *local_24 + (short)uVar7;
          }
        }
      }
      local_c = local_c + -1;
    }
  }
  *(undefined4 *)piVar4[5] = local_54;
  *(undefined4 *)(piVar4[5] + 4) = local_50;
  piVar4[0x5e] = local_4c;
  *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + -1;
  *(int **)(iVar2 + 0x10) = param_1;
  *(int *)(iVar2 + 0x20) = local_c;
  *(int *)(iVar2 + 0x14) = iVar8;
  return 1;
}

