
undefined4 FUN_006962ff(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar3 = param_1;
  local_18 = *(int *)(param_1 + 0x16c);
  iVar1 = *(int *)(param_1 + 0x194);
  local_1c = *(undefined4 *)(param_1 + 0x174);
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(iVar1 + 0x34) != 0)) ||
     (cVar4 = FUN_006960a7(), cVar4 != '\0')) {
    if (*(int *)(iVar1 + 0x20) == 0) {
      local_2c = param_1;
      local_48 = **(undefined4 **)(param_1 + 0x14);
      local_44 = (*(undefined4 **)(param_1 + 0x14))[1];
      local_40 = *(undefined4 *)(param_1 + 0x178);
      iVar9 = *(int *)(iVar1 + 0x10);
      iVar5 = *(int *)(iVar1 + 0x14);
      local_28 = iVar1 + 0x18;
      local_20 = *param_2;
      local_14 = *(int *)(iVar1 + 0x48);
      local_8 = 0;
      iVar8 = *(int *)(param_1 + 0x168);
      local_c = iVar9;
      while (iVar8 <= local_18) {
        if (iVar5 < 8) {
          cVar4 = FUN_00695943(&local_48,iVar9,iVar5,0);
          if (cVar4 == '\0') goto LAB_006964dd;
          local_c = local_3c;
          iVar5 = local_30;
          iVar9 = local_3c;
          if (7 < local_30) goto LAB_006963c4;
          uVar6 = 1;
LAB_006963f4:
          param_1 = FUN_00695a2d(&local_48,iVar9,iVar5,local_14,uVar6);
          if ((int)param_1 < 0) goto LAB_006964dd;
          local_c = local_3c;
          iVar5 = local_30;
          iVar9 = local_3c;
        }
        else {
LAB_006963c4:
          uVar7 = iVar9 >> ((char)iVar5 - 8U & 0x1f) & 0xff;
          iVar2 = *(int *)(local_14 + 0xd4 + uVar7 * 4);
          if (iVar2 == 0) {
            uVar6 = 9;
            goto LAB_006963f4;
          }
          iVar5 = iVar5 - iVar2;
          param_1 = (uint)*(byte *)(uVar7 + 0x4d4 + local_14);
        }
        local_10 = (int)param_1 >> 4;
        param_1 = param_1 & 0xf;
        if (param_1 == 0) {
          if (local_10 != 0xf) {
            iVar8 = 1 << ((byte)local_10 & 0x1f);
            local_8 = iVar8;
            if (local_10 != 0) {
              if ((iVar5 < local_10) &&
                 (cVar4 = FUN_00695943(&local_48,iVar9,iVar5,local_10), iVar5 = local_30,
                 iVar9 = local_3c, cVar4 == '\0')) goto LAB_006964dd;
              iVar5 = iVar5 - local_10;
              local_8 = local_8 + (iVar9 >> ((byte)iVar5 & 0x1f) & iVar8 - 1U);
            }
            local_8 = local_8 + -1;
            break;
          }
          param_2 = (int *)(iVar8 + 0xf);
        }
        else {
          param_2 = (int *)(iVar8 + local_10);
          if (iVar5 < (int)param_1) {
            cVar4 = FUN_00695943(&local_48,iVar9,iVar5,param_1);
            if (cVar4 == '\0') goto LAB_006964dd;
            local_c = local_3c;
            iVar5 = local_30;
            iVar9 = local_3c;
          }
          iVar5 = iVar5 - param_1;
          uVar7 = (1 << (sbyte)param_1) - 1U & iVar9 >> ((byte)iVar5 & 0x1f);
          if ((int)uVar7 < *(int *)(&DAT_006fc420 + param_1 * 4)) {
            uVar7 = *(int *)(&DAT_006fc460 + param_1 * 4) + uVar7;
          }
          *(short *)(local_20 + (&DAT_006fb870)[(int)param_2] * 2) =
               (short)(uVar7 << ((byte)local_1c & 0x1f));
          iVar9 = local_c;
        }
        iVar8 = (int)param_2 + 1;
      }
      **(undefined4 **)(iVar3 + 0x14) = local_48;
      *(undefined4 *)(*(int *)(iVar3 + 0x14) + 4) = local_44;
      *(undefined4 *)(iVar3 + 0x178) = local_40;
      *(int *)(iVar1 + 0x14) = iVar5;
      *(int *)(iVar1 + 0x10) = iVar9;
    }
    else {
      local_8 = *(int *)(iVar1 + 0x20) + -1;
    }
    *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + -1;
    *(int *)(iVar1 + 0x20) = local_8;
    uVar6 = 1;
  }
  else {
LAB_006964dd:
    uVar6 = 0;
  }
  return uVar6;
}

