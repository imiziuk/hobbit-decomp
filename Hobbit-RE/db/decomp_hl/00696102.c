
undefined4 FUN_00696102(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_34 [5];
  undefined2 *local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  iVar7 = param_1;
  local_c = *(int *)(param_1 + 0x194);
  local_1c = *(undefined4 *)(param_1 + 0x174);
  if (((*(int *)(param_1 + 0xfc) == 0) || (*(int *)(*(int *)(param_1 + 0x194) + 0x34) != 0)) ||
     (cVar2 = FUN_006960a7(), cVar2 != '\0')) {
    iVar5 = local_c;
    local_10 = 0;
    iVar1 = *(int *)(param_1 + 0x13c);
    local_40 = param_1;
    local_5c = **(undefined4 **)(param_1 + 0x14);
    local_58 = (*(undefined4 **)(param_1 + 0x14))[1];
    local_54 = *(undefined4 *)(param_1 + 0x178);
    iVar9 = *(int *)(local_c + 0x10);
    iVar8 = *(int *)(local_c + 0x14);
    local_3c = local_c + 0x18;
    piVar10 = (int *)(local_c + 0x20);
    piVar11 = local_34;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    }
    if (0 < iVar1) {
      local_14 = (int *)(param_1 + 0x140);
      param_1 = iVar9;
      do {
        local_20 = *(undefined2 **)(param_2 + local_10 * 4);
        local_18 = *local_14;
        iVar9 = *(int *)(iVar5 + 0x38 + *(int *)(*(int *)(iVar7 + 0x124 + *local_14 * 4) + 0x14) * 4
                        );
        if (iVar8 < 8) {
          cVar2 = FUN_00695943(&local_5c,param_1,iVar8,0);
          if (cVar2 == '\0') goto LAB_006962fb;
          param_1 = local_50;
          iVar5 = local_c;
          iVar8 = local_44;
          if (7 < local_44) goto LAB_006961e6;
          uVar3 = 1;
LAB_0069620e:
          uVar4 = FUN_00695a2d(&local_5c,param_1,iVar8,iVar9,uVar3);
          if ((int)uVar4 < 0) goto LAB_006962fb;
          param_1 = local_50;
          iVar5 = local_c;
          iVar8 = local_44;
        }
        else {
LAB_006961e6:
          uVar4 = param_1 >> ((char)iVar8 - 8U & 0x1f) & 0xff;
          iVar1 = *(int *)(iVar9 + 0xd4 + uVar4 * 4);
          if (iVar1 == 0) {
            uVar3 = 9;
            goto LAB_0069620e;
          }
          uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + iVar9);
          iVar8 = iVar8 - iVar1;
        }
        if (uVar4 != 0) {
          if (iVar8 < (int)uVar4) {
            cVar2 = FUN_00695943(&local_5c,param_1,iVar8,uVar4);
            if (cVar2 == '\0') goto LAB_006962fb;
            param_1 = local_50;
            iVar5 = local_c;
            iVar8 = local_44;
          }
          iVar8 = iVar8 - uVar4;
          local_8 = (1 << ((byte)uVar4 & 0x1f)) - 1;
          iVar9 = uVar4 * 4;
          uVar4 = local_8 & param_1 >> ((byte)iVar8 & 0x1f);
          if ((int)uVar4 < *(int *)(&DAT_006fc420 + iVar9)) {
            uVar4 = *(int *)(&DAT_006fc460 + iVar9) + uVar4;
          }
        }
        local_14 = local_14 + 1;
        piVar10 = local_34 + local_18 + 1;
        *piVar10 = *piVar10 + uVar4;
        local_10 = local_10 + 1;
        *local_20 = (short)(*piVar10 << ((byte)local_1c & 0x1f));
        iVar9 = param_1;
      } while (local_10 < *(int *)(iVar7 + 0x13c));
    }
    param_1 = iVar9;
    **(undefined4 **)(iVar7 + 0x14) = local_5c;
    *(undefined4 *)(*(int *)(iVar7 + 0x14) + 4) = local_58;
    *(undefined4 *)(iVar7 + 0x178) = local_54;
    *(int *)(iVar5 + 0x34) = *(int *)(iVar5 + 0x34) + -1;
    *(int *)(iVar5 + 0x10) = param_1;
    *(int *)(iVar5 + 0x14) = iVar8;
    piVar10 = local_34;
    piVar11 = (int *)(iVar5 + 0x20);
    for (iVar7 = 5; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    }
    uVar3 = 1;
  }
  else {
LAB_006962fb:
    uVar3 = 0;
  }
  return uVar3;
}

