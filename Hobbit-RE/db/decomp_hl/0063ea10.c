
undefined4 FUN_0063ea10(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *local_24;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = (int)param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5b73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__GetField_0074adf4);
  iVar7 = param_2;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0x6ac) != 1) {
LAB_0063ec96:
    piVar11 = (int *)(*(int *)(iVar3 + 0x6a8) + *(int *)(iVar3 + 0x6b0) * 8);
    if (*piVar11 == param_2) {
      iVar7 = piVar11[1];
      iVar4 = iVar7 * 0x148 + *(int *)(iVar3 + 0x10c);
      iVar10 = iVar7 * 0x4a0 + *(int *)(iVar3 + 0x6b4);
      iVar7 = FUN_006c16a0(param_2,iVar4);
      if (iVar7 != 0) {
        local_20 = 0;
        if (0 < *(int *)(iVar4 + 0x104)) {
          local_24 = (undefined4 *)(iVar10 + 0x14);
          puVar9 = (undefined4 *)(iVar10 + 0x498);
          iVar7 = iVar10 + 0x94;
          param_1 = (undefined4 *)(iVar10 + 0x54);
          puVar12 = &param_2;
          puVar8 = (undefined4 *)(iVar4 + 0x108);
          do {
            switch(*puVar8) {
            case 1:
              puVar2 = puVar12 + 1;
              puVar12 = puVar12 + 1;
              *(undefined4 *)*puVar2 = *local_24;
              local_24 = local_24 + 1;
              break;
            case 2:
              puVar2 = puVar12 + 1;
              puVar12 = puVar12 + 1;
              *(undefined4 *)*puVar2 = *param_1;
              param_1 = param_1 + 1;
              break;
            case 3:
              puVar2 = puVar12 + 1;
              puVar12 = puVar12 + 1;
              FUN_00647d10(*puVar2,iVar7);
              iVar7 = iVar7 + 0x100;
              break;
            case 4:
              puVar2 = (undefined4 *)puVar12[1];
              puVar12 = puVar12 + 1;
              *puVar2 = *puVar9;
              puVar2[1] = puVar9[1];
              puVar9 = puVar9 + 2;
            }
            local_20 = local_20 + 1;
            puVar8 = puVar8 + 1;
          } while (local_20 < *(int *)(iVar4 + 0x104));
        }
        *(int *)(iVar3 + 0x6b0) = *(int *)(iVar3 + 0x6b0) + 1;
        local_4 = 0xffffffff;
        FUN_00649720();
        ExceptionList = local_c;
        return 1;
      }
    }
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return 0;
  }
  local_24 = (undefined4 *)0xffffffff;
  iVar4 = FUN_00647f20(param_2,&DAT_0074ae06);
  if (iVar4 == 0) {
    uVar5 = FUN_0063dee0(param_1,s_User_forgot_to_put_the_type_in___0074ae08,iVar7);
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = local_c;
    return uVar5;
  }
  iVar10 = 0;
  if (0 < *(int *)((int)param_1 + 0x104)) {
    param_1 = (undefined4 *)0x0;
    do {
      iVar6 = FUN_0063e970(*(int *)(iVar3 + 0x10c) + (int)param_1,param_2,iVar4 - iVar7);
      if (iVar6 == 0) {
        if (*(int *)(iVar10 * 0x148 + 0x100 + *(int *)(iVar3 + 0x10c)) != -1) {
          pcVar13 = s_User_register_the_same_type___s__0074ae30;
          iVar7 = param_2;
          goto LAB_0063ebca;
        }
        *(undefined4 *)(iVar10 * 0x148 + 0x100 + *(int *)(iVar3 + 0x10c)) = 0;
        *(int *)(iVar3 + 0x69c) = *(int *)(iVar3 + 0x69c) + 1;
        local_24 = (undefined4 *)iVar10;
        break;
      }
      iVar10 = iVar10 + 1;
      param_1 = (undefined4 *)((int)param_1 + 0x148);
    } while (iVar10 < *(int *)(iVar3 + 0x104));
  }
  if (iVar10 == *(int *)(iVar3 + 0x104)) {
    pcVar13 = s_The_field__s_was_not_found_in_th_0074ae58;
    iVar7 = param_2;
  }
  else {
    iVar10 = 0;
    iVar7 = (int)local_24 * 0x148 + *(int *)(iVar3 + 0x10c);
    iVar6 = iVar4 + 1;
    if (*(char *)(iVar4 + 1) != '\0') {
      piVar11 = (int *)(iVar7 + 0x108);
      do {
        switch(*(undefined1 *)(iVar10 + iVar6)) {
        case 0x44:
        case 100:
          iVar4 = 2;
          break;
        default:
          uVar5 = FUN_0063dee0(iVar3,s_Unkown_type__c_from__s_field_0074aee4,
                               (int)*(char *)(iVar10 + iVar6),iVar7);
          goto LAB_0063ebd3;
        case 0x46:
        case 0x66:
          iVar4 = 1;
          break;
        case 0x47:
        case 0x67:
          iVar4 = 4;
          break;
        case 0x53:
        case 0x73:
          iVar4 = 3;
        }
        iVar1 = *piVar11;
        iVar10 = iVar10 + 1;
        piVar11 = piVar11 + 1;
        if (iVar4 != iVar1) {
          pcVar13 = s_For__s_field_the_types_don_t_mat_0074aec0;
          goto LAB_0063ebca;
        }
      } while (*(char *)(iVar10 + iVar6) != '\0');
    }
    if (iVar10 == *(int *)(iVar7 + 0x104)) {
      iVar7 = *(int *)(iVar3 + 0x6b0);
      if (*(int *)(iVar3 + 0x6a4) <= iVar7) {
        iVar7 = iVar7 / 2 + 1 + iVar7;
        if (iVar7 < 0x20) {
          iVar7 = 0x20;
        }
        *(int *)(iVar3 + 0x6a4) = iVar7;
        uVar5 = thunk_FUN_0064ffa0(*(undefined4 *)(iVar3 + 0x6a8),iVar7 * 8,
                                   s_C__projects_meridian_xCore_Auxil_0074af04,0x292);
        *(undefined4 *)(iVar3 + 0x6a8) = uVar5;
      }
      *(int *)(*(int *)(iVar3 + 0x6a8) + *(int *)(iVar3 + 0x6b0) * 8) = param_2;
      *(undefined4 **)(*(int *)(iVar3 + 0x6a8) + 4 + *(int *)(iVar3 + 0x6b0) * 8) = local_24;
      goto LAB_0063ec96;
    }
    pcVar13 = s_For_field__s_the_types_are_diffe_0074ae80;
  }
LAB_0063ebca:
  uVar5 = FUN_0063dee0(iVar3,pcVar13,iVar7);
LAB_0063ebd3:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return uVar5;
}

