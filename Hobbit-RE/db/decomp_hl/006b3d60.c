
void __fastcall FUN_006b3d60(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *local_48;
  int local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8317;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (8 < param_1[7]) {
    ExceptionList = &local_c;
    FUN_00649920(&local_40,s_Found_more_than__d_textures_this_007574f0,8);
    local_4 = 0;
    FUN_00649940();
    local_4 = 0xffffffff;
    FUN_00649950();
  }
  iVar4 = 0;
  if (0 < param_1[5]) {
    local_48 = (int *)0x0;
    do {
      piVar5 = (int *)(param_1[6] + (int)local_48);
      if (*(int *)(param_1[6] + 4 + (int)local_48) < 0) {
        FUN_00649920(&local_44,s_I_found_a_facet_that_had_a_negat_00757530,iVar4);
        local_4 = 1;
        FUN_00649940();
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      if (piVar5[1] < 3) {
        FUN_00649920(local_3c,s_I_found_a_facet_with_less_than_3_0075757c,iVar4);
        local_4 = 2;
        FUN_00649940();
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      if (0x10 < piVar5[1]) {
        FUN_00649920(local_38,s_I_found_a_facet_with_more_thatn_1_007575b0,iVar4);
        local_4 = 3;
        FUN_00649940();
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      if (piVar5[0x12] < 0) {
        FUN_00649920(local_34,s_I_found_a_facet_with_a_negative_m_00757620,iVar4);
        local_4 = 4;
        FUN_00649940();
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      if (param_1[9] <= piVar5[0x12]) {
        FUN_00649920(local_30,s_I_found_a_facet_that_had_an_inde_00757668,iVar4);
        local_4 = 5;
        FUN_00649940();
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      if (*piVar5 < 0) {
        FUN_00649920(local_2c,s_I_found_a_facet_indexing_to_a_ne_007576b0,iVar4);
        local_4 = 6;
        FUN_00649940();
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      if (param_1[0xb] <= *piVar5) {
        FUN_00649920(local_28,s_I_found_a_facet_indexing_to_a_no_007576f8,iVar4);
        local_4 = 7;
        FUN_00649940();
        local_4 = 0xffffffff;
        FUN_00649950();
      }
      local_40 = 0;
      if (0 < piVar5[1]) {
        piVar3 = piVar5 + 2;
        do {
          if (*piVar3 < 0) {
            FUN_00649920(local_24,s_I_found_a_facet_with_a_negative_i_00757734,iVar4);
            local_4 = 8;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if (param_1[3] <= *piVar3) {
            FUN_00649920(local_20,s_I_found_a_facet_with_a_index_to_a_00757778,iVar4);
            local_4 = 9;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          local_40 = local_40 + 1;
          piVar3 = piVar3 + 1;
        } while (local_40 < piVar5[1]);
      }
      iVar4 = iVar4 + 1;
      local_48 = (int *)((int)local_48 + 0x5c);
    } while (iVar4 < param_1[5]);
  }
  local_44 = 0;
  if (0 < param_1[5]) {
    local_40 = 0;
    do {
      local_14 = param_1[6] + local_40;
      iVar4 = 0;
      if (0 < *(int *)(param_1[6] + 4 + local_40)) {
        local_48 = (int *)(local_14 + 8);
        do {
          puVar6 = (undefined4 *)(*local_48 * 0x160 + param_1[4]);
          iVar1 = FUN_0064cf30(*puVar6);
          if (((iVar1 == 0) || (iVar1 = FUN_0064cf30(puVar6[1]), iVar1 == 0)) ||
             (iVar1 = FUN_0064cf30(puVar6[2]), iVar1 == 0)) {
            FUN_00649920(local_20,s_Just_got_a_infinete_vertex_posit_007577b8,iVar4);
            local_4 = 10;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if ((int)puVar6[4] < 0) {
            FUN_00649920(local_24,s_We_have_a_negative_count_of_weig_007577e8,iVar4);
            local_4 = 0xb;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if (0xf < (int)puVar6[4]) {
            FUN_00649920(local_28,s_Found_a_vertex_with_way_too_many_0075782c,iVar4);
            local_4 = 0xc;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if (*param_1 < (int)puVar6[4]) {
            FUN_00649920(local_2c,s_Found_a_vertex_pointing_to_a_non_0075785c,iVar4);
            local_4 = 0xd;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if ((int)puVar6[5] < 0) {
            FUN_00649920(local_30,s_Found_a_vertex_with_a_negative_n_00757890,iVar4);
            local_4 = 0xe;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if (7 < (int)puVar6[5]) {
            FUN_00649920(local_34,s_Found_a_vertex_with_way_too_many_007578c8,iVar4);
            local_4 = 0xf;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if ((int)puVar6[7] < 0) {
            FUN_00649920(local_38,s_I_found_a_vertex_with_a_negative_007578f8,iVar4);
            local_4 = 0x10;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if (7 < (int)puVar6[7]) {
            FUN_00649920(local_3c,s_I_found_a_vertex_with_way_too_ma_00757934,iVar4);
            local_4 = 0x11;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if ((int)puVar6[6] < 0) {
            FUN_00649920(local_1c,s_I_found_a_vertex_with_a_negative_00757968,iVar4);
            local_4 = 0x12;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          if (8 < (int)puVar6[6]) {
            FUN_00649920(local_18,s_I_found_a_vertex_with_way_too_ma_007579a0,iVar4);
            local_4 = 0x13;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          iVar1 = local_14;
          iVar2 = FUN_006b24c0();
          if (puVar6[6] != iVar2) {
            FUN_00649920(local_10,s_I_found_a_vertex_that_didn_t_hav_007579d0,iVar4,local_44);
            local_4 = 0x14;
            FUN_00649940();
            local_4 = 0xffffffff;
            FUN_00649950();
          }
          iVar4 = iVar4 + 1;
          local_48 = local_48 + 1;
        } while (iVar4 < *(int *)(iVar1 + 4));
      }
      local_44 = local_44 + 1;
      local_40 = local_40 + 0x5c;
    } while (local_44 < param_1[5]);
  }
  ExceptionList = local_c;
  return;
}

