
undefined4 __thiscall FUN_0063ee60(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  float *local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 *local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  double local_14;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e5b9d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_text_in__GetFieldAsString_0074af3c);
  local_4 = 0;
  if (*(int *)(param_1 + 0x6ac) == 1) {
    local_34 = (undefined4 *)0xffffffff;
    iVar3 = FUN_00647f20(param_2,&DAT_0074af56);
    if (iVar3 == 0) {
      uVar4 = FUN_0063dee0(param_1,s_User_forgot_to_put_the_type_in___0074af58,param_2);
      local_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = local_c;
      return uVar4;
    }
    iVar8 = 0;
    iVar7 = (int)param_2;
    if (0 < *(int *)(param_1 + 0x104)) {
      local_38 = (float *)0x0;
      do {
        iVar5 = FUN_0063e970(*(int *)(param_1 + 0x10c) + (int)local_38,param_2,iVar3 - (int)param_2)
        ;
        if (iVar5 == 0) {
          if (*(int *)(iVar8 * 0x148 + 0x100 + *(int *)(param_1 + 0x10c)) != -1) {
            pcVar10 = s_User_register_the_same_type___s__0074af80;
            goto LAB_0063f006;
          }
          *(undefined4 *)(iVar8 * 0x148 + 0x100 + *(int *)(param_1 + 0x10c)) = 0;
          *(int *)(param_1 + 0x69c) = *(int *)(param_1 + 0x69c) + 1;
          local_34 = (undefined4 *)iVar8;
          break;
        }
        iVar8 = iVar8 + 1;
        local_38 = (float *)((int)local_38 + 0x148);
      } while (iVar8 < *(int *)(param_1 + 0x104));
    }
    if (iVar8 == *(int *)(param_1 + 0x104)) {
      pcVar10 = s_The_field__s_was_not_found_in_th_0074afa8;
    }
    else {
      iVar8 = 0;
      iVar7 = (int)local_34 * 0x148 + *(int *)(param_1 + 0x10c);
      iVar5 = iVar3 + 1;
      if (*(char *)(iVar3 + 1) != '\0') {
        piVar9 = (int *)(iVar7 + 0x108);
        do {
          switch(*(undefined1 *)(iVar8 + iVar5)) {
          case 0x44:
          case 100:
            iVar3 = 2;
            break;
          default:
            uVar4 = FUN_0063dee0(param_1,s_Unkown_type__c_from__s_field_0074b034,
                                 (int)*(char *)(iVar8 + iVar5),iVar7);
            goto LAB_0063f00f;
          case 0x46:
          case 0x66:
            iVar3 = 1;
            break;
          case 0x47:
          case 0x67:
            iVar3 = 4;
            break;
          case 0x53:
          case 0x73:
            iVar3 = 3;
          }
          iVar2 = *piVar9;
          iVar8 = iVar8 + 1;
          piVar9 = piVar9 + 1;
          if (iVar3 != iVar2) {
            pcVar10 = s_For__s_field_the_types_don_t_mat_0074b010;
            goto LAB_0063f006;
          }
        } while (*(char *)(iVar8 + iVar5) != '\0');
      }
      if (iVar8 == *(int *)(iVar7 + 0x104)) {
        iVar3 = *(int *)(param_1 + 0x6b0);
        if (*(int *)(param_1 + 0x6a4) <= iVar3) {
          iVar3 = iVar3 / 2 + 1 + iVar3;
          if (iVar3 < 0x20) {
            iVar3 = 0x20;
          }
          *(int *)(param_1 + 0x6a4) = iVar3;
          uVar4 = thunk_FUN_0064ffa0(*(undefined4 *)(param_1 + 0x6a8),iVar3 * 8,
                                     s_C__projects_meridian_xCore_Auxil_0074b054,0x349);
          *(undefined4 *)(param_1 + 0x6a8) = uVar4;
        }
        *(undefined4 **)(*(int *)(param_1 + 0x6a8) + *(int *)(param_1 + 0x6b0) * 8) = param_2;
        *(undefined4 **)(*(int *)(param_1 + 0x6a8) + 4 + *(int *)(param_1 + 0x6b0) * 8) = local_34;
        goto LAB_0063f0be;
      }
      pcVar10 = s_For_field__s_the_types_are_diffe_0074afd0;
    }
LAB_0063f006:
    uVar4 = FUN_0063dee0(param_1,pcVar10,iVar7);
LAB_0063f00f:
    local_4 = 0xffffffff;
    FUN_00649720();
  }
  else {
LAB_0063f0be:
    iVar7 = FUN_00647e40(*(undefined4 *)(*(int *)(param_1 + 0x6a8) + *(int *)(param_1 + 0x6b0) * 8),
                         param_2);
    iVar3 = param_3;
    if (iVar7 == 0) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x6a8) + 4 + *(int *)(param_1 + 0x6b0) * 8);
      iVar8 = iVar7 * 0x148;
      local_20 = iVar8 + *(int *)(param_1 + 0x10c);
      iVar7 = iVar7 * 0x4a0 + *(int *)(param_1 + 0x6b4);
      iVar5 = 0;
      if (0 < *(int *)(iVar8 + 0x104 + *(int *)(param_1 + 0x10c))) {
        local_2c = (undefined4 *)(iVar7 + 0x498);
        local_30 = iVar7 + 0x94;
        local_38 = (float *)(iVar7 + 0x14);
        local_34 = (undefined4 *)(iVar7 + 0x54);
        param_2 = (undefined4 *)(local_20 + 0x108);
        do {
          switch(*param_2) {
          case 1:
            uVar4 = *(undefined4 *)(iVar3 + iVar5 * 4);
            local_14 = (double)*local_38;
            local_38 = local_38 + 1;
            FUN_00649920(local_28,&DAT_0074b090,local_14);
            local_4 = CONCAT31(local_4._1_3_,2);
            uVar6 = FUN_00649940();
            FUN_00647d10(uVar4,uVar6);
            break;
          case 2:
            uVar4 = *local_34;
            uVar6 = *(undefined4 *)(iVar3 + iVar5 * 4);
            local_34 = local_34 + 1;
            FUN_00649920(&param_3,&DAT_0074b08c,uVar4);
            local_4 = CONCAT31(local_4._1_3_,1);
            uVar4 = FUN_00649940();
            FUN_00647d10(uVar6,uVar4);
            break;
          case 3:
            FUN_00647d10(*(undefined4 *)(iVar3 + iVar5 * 4),local_30);
            local_30 = local_30 + 0x100;
            goto switchD_0063f166_default;
          case 4:
            puVar1 = local_2c + 1;
            uVar4 = *local_2c;
            uVar6 = *(undefined4 *)(iVar3 + iVar5 * 4);
            local_2c = local_2c + 2;
            FUN_00649920(local_24,&PTR_LAB_0074b094,uVar4,*puVar1);
            local_4 = CONCAT31(local_4._1_3_,3);
            uVar4 = FUN_00649940();
            FUN_00647d10(uVar6,uVar4);
            break;
          default:
            goto switchD_0063f166_default;
          }
          local_4 = local_4 & 0xffffff00;
          FUN_00649950();
switchD_0063f166_default:
          iVar5 = iVar5 + 1;
          param_2 = param_2 + 1;
        } while (iVar5 < *(int *)(local_20 + 0x104));
      }
      *(int *)(param_1 + 0x6b0) = *(int *)(param_1 + 0x6b0) + 1;
      local_4 = 0xffffffff;
      FUN_00649720();
      uVar4 = 1;
    }
    else {
      local_4 = 0xffffffff;
      FUN_00649720();
      uVar4 = 0;
    }
  }
  ExceptionList = local_c;
  return uVar4;
}

