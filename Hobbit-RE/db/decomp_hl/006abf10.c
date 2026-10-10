
undefined4 __thiscall FUN_006abf10(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  void *pvVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int local_d60;
  int local_d5c;
  undefined4 local_d40;
  undefined4 local_d3c;
  undefined4 local_d38;
  undefined4 local_d34;
  undefined1 local_d30 [20];
  undefined4 local_d1c;
  undefined4 local_d18;
  undefined4 local_d14;
  undefined4 local_d10;
  undefined4 local_d0c;
  undefined4 local_d08;
  undefined4 local_d04;
  undefined4 local_d00;
  undefined4 local_cfc;
  undefined4 local_cf8;
  undefined4 local_cf4;
  undefined4 local_cf0;
  undefined4 local_cec;
  undefined4 local_ce8;
  undefined4 local_ce4;
  undefined4 local_ce0;
  undefined4 local_cdc;
  undefined1 local_cd8 [4];
  undefined1 local_cd4 [4];
  undefined1 local_cd0 [4];
  undefined1 local_ccc [4];
  undefined1 local_cc8 [256];
  int local_bc8;
  undefined1 local_60c [1024];
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8199;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063ddb0();
  local_4 = 0;
  if (param_2 != 0) {
    FUN_00647d10(&DAT_008131d8,param_2);
  }
  iVar10 = FUN_0063df60(param_2);
  if (iVar10 == 0) {
    local_4 = 0xffffffff;
    FUN_0063de30();
    uVar11 = 0;
  }
  else {
    param_1[3] = 0;
    iVar10 = FUN_0063e510();
    while (iVar10 == 1) {
      iVar15 = 0;
      iVar10 = FUN_00647ed0(local_cc8,s_Hierarchy_00756210);
      if (iVar10 == 0) {
        param_1[1] = local_bc8;
        pvVar12 = operator_new(local_bc8 * 0x1c4);
        *param_1 = (int)pvVar12;
        local_d5c = 0;
        if (0 < param_1[1]) {
          iVar10 = 0;
          do {
            FUN_0063e6a0();
            FUN_0063f560(s_Index_0075621c,*param_1 + iVar10);
            FUN_0063f5e0(&DAT_00756224,iVar10 + 0xc + *param_1);
            FUN_0063f560(s_nChildren_0075622c,iVar10 + 8 + *param_1);
            FUN_0063f560(s_iParent_00756238,iVar10 + 4 + *param_1);
            FUN_0063f3b0(s_Scale_00756240,iVar10 + 0x128 + *param_1);
            FUN_0063f7b0(s_Rotate_00756248,iVar10 + 0x118 + *param_1);
            FUN_0063f3b0(&PTR_s_o_Load_Audio_Descriptor__s_00756250,iVar10 + 0x10c + *param_1);
            FUN_0063f560(s_bScaleKeys_00756254,iVar10 + 0x1b4 + *param_1);
            FUN_0063f560(s_bRotKeys_00756260,iVar10 + 0x1b8 + *param_1);
            FUN_0063f560(s_bPosKeys_0075626c,iVar10 + 0x1bc + *param_1);
            *(undefined4 *)(iVar10 + 0x1c0 + *param_1) = 0;
            FUN_0063f560(s_bIsMasked_00756278,iVar10 + 0x1c0 + *param_1);
            fVar1 = *(float *)(iVar10 + 0x118 + *param_1);
            iVar15 = iVar10 + *param_1;
            fVar1 = fVar1 + fVar1;
            fVar7 = *(float *)(iVar15 + 0x11c) + *(float *)(iVar15 + 0x11c);
            fVar3 = *(float *)(iVar15 + 0x120) + *(float *)(iVar15 + 0x120);
            fVar2 = fVar1 * *(float *)(iVar15 + 0x124);
            fVar8 = fVar7 * *(float *)(iVar15 + 0x124);
            fVar4 = fVar3 * *(float *)(iVar15 + 0x124);
            fVar1 = fVar1 * *(float *)(iVar15 + 0x118);
            fVar9 = fVar7 * *(float *)(iVar15 + 0x118);
            fVar5 = fVar3 * *(float *)(iVar15 + 0x118);
            fVar7 = fVar7 * *(float *)(iVar15 + 0x11c);
            fVar6 = fVar3 * *(float *)(iVar15 + 0x11c);
            fVar3 = fVar3 * *(float *)(iVar15 + 0x120);
            *(float *)(iVar15 + 0x134) =
                 (DAT_006e92e8 - (fVar3 + fVar7)) * *(float *)(iVar15 + 0x128);
            *(float *)(iVar15 + 0x138) = (fVar9 + fVar4) * *(float *)(iVar15 + 0x128);
            *(float *)(iVar15 + 0x13c) = (fVar5 - fVar8) * *(float *)(iVar15 + 0x128);
            *(float *)(iVar15 + 0x144) = (fVar9 - fVar4) * *(float *)(iVar15 + 300);
            *(float *)(iVar15 + 0x148) = (DAT_006e92e8 - (fVar3 + fVar1)) * *(float *)(iVar15 + 300)
            ;
            *(float *)(iVar15 + 0x14c) = (fVar2 + fVar6) * *(float *)(iVar15 + 300);
            *(float *)(iVar15 + 0x154) = (fVar5 + fVar8) * *(float *)(iVar15 + 0x130);
            *(float *)(iVar15 + 0x158) = (fVar6 - fVar2) * *(float *)(iVar15 + 0x130);
            *(float *)(iVar15 + 0x15c) =
                 (DAT_006e92e8 - (fVar7 + fVar1)) * *(float *)(iVar15 + 0x130);
            *(undefined4 *)(iVar15 + 0x164) = *(undefined4 *)(iVar15 + 0x10c);
            *(undefined4 *)(iVar15 + 0x168) = *(undefined4 *)(iVar15 + 0x110);
            *(undefined4 *)(iVar15 + 0x16c) = *(undefined4 *)(iVar15 + 0x114);
            *(undefined4 *)(iVar15 + 0x140) = 0;
            *(undefined4 *)(iVar15 + 0x150) = 0;
            *(undefined4 *)(iVar15 + 0x160) = 0;
            *(undefined4 *)(iVar15 + 0x170) = 0x3f800000;
            iVar15 = iVar10 + *param_1;
            puVar14 = (undefined4 *)(iVar15 + 0x134);
            if (((undefined4 *)(iVar15 + 0x174) != puVar14) &&
               (puVar14 != (undefined4 *)(iVar15 + 0x174))) {
              puVar13 = (undefined4 *)(iVar15 + 0x17c);
              iVar16 = (int)puVar14 - (iVar15 + 0x174);
              do {
                puVar13[-2] = *puVar14;
                puVar13[-1] = puVar14[1];
                *puVar13 = *(undefined4 *)(iVar16 + (int)puVar13);
                puVar13[1] = puVar14[3];
                puVar14 = puVar14 + 4;
                puVar13 = puVar13 + 4;
              } while (puVar14 != (undefined4 *)(iVar15 + 0x174));
            }
            FUN_0064d6d0();
            local_d5c = local_d5c + 1;
            iVar10 = iVar10 + 0x1c4;
          } while (local_d5c < param_1[1]);
        }
      }
      else {
        iVar16 = FUN_00647ed0(local_cc8,s_Animation_00756284);
        iVar10 = local_bc8;
        if (iVar16 == 0) {
          iVar15 = param_1[3];
          iVar16 = local_bc8 / param_1[1] + iVar15;
          param_1[3] = iVar16;
          iVar16 = thunk_FUN_0064ffa0(param_1[2],iVar16 * param_1[1] * 0x28,
                                      s_C__projects_meridian_xCore_Auxil_00756290,0x79);
          param_1[2] = iVar16;
          if (0 < iVar10) {
            iVar15 = param_1[1] * iVar15 * 0x28;
            do {
              FUN_0063e6a0();
              FUN_0063ea10(local_cc8,s_Frame_d_007562cc,local_cd0);
              FUN_0063ea10(local_cc8,s_BoneName_s_007562d4,local_20c);
              FUN_0063ea10(local_cc8,s_BoneIndex_d_007562e0,local_cd4);
              FUN_0063ea10(local_cc8,s_Scale_fff_007562ec,&local_cf4,&local_cf0,&local_cec);
              FUN_0063ea10(local_cc8,s_Rotate_ffff_007562f8,&local_d04,&local_d00,&local_cfc,
                           &local_cf8);
              FUN_0063ea10(local_cc8,s_Pos_fff_00756304,&local_d10,&local_d0c,&local_d08);
              iVar16 = param_1[2];
              *(undefined4 *)(iVar16 + iVar15) = local_cf4;
              *(undefined4 *)(iVar16 + 4 + iVar15) = local_cf0;
              *(undefined4 *)(iVar16 + 8 + iVar15) = local_cec;
              iVar16 = param_1[2];
              *(undefined4 *)(iVar15 + 0xc + iVar16) = local_d04;
              iVar16 = iVar15 + 0xc + iVar16;
              *(undefined4 *)(iVar16 + 4) = local_d00;
              *(undefined4 *)(iVar16 + 8) = local_cfc;
              *(undefined4 *)(iVar16 + 0xc) = local_cf8;
              puVar14 = (undefined4 *)(iVar15 + 0x1c + param_1[2]);
              *puVar14 = local_d10;
              puVar14[1] = local_d0c;
              puVar14[2] = local_d08;
              iVar15 = iVar15 + 0x28;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        else {
          iVar10 = FUN_00647ed0(local_cc8,s_Events_0075630c);
          if (iVar10 == 0) {
            param_1[5] = local_bc8;
            pvVar12 = operator_new(local_bc8 * 0x9c);
            param_1[4] = (int)pvVar12;
            iVar10 = 0;
            if (0 < param_1[5]) {
              do {
                iVar16 = param_1[4] + iVar15;
                FUN_0063e6a0();
                FUN_0063f5e0(&DAT_00756314,iVar16);
                FUN_0063f560(&DAT_0075631c,iVar16 + 0x80);
                FUN_0063f4e0(s_Radius_00756324,iVar16 + 0x84);
                FUN_0063f560(s_Start_0075632c,iVar16 + 0x88);
                FUN_0063f560(&PTR_LAB_00756334,iVar16 + 0x8c);
                FUN_0063f5e0(s_ParentName_00756338,iVar16 + 0x40);
                FUN_0063f3b0(&PTR_s_o_Load_Audio_Descriptor__s_00756344,iVar16 + 0x90);
                iVar10 = iVar10 + 1;
                iVar15 = iVar15 + 0x9c;
              } while (iVar10 < param_1[5]);
            }
          }
          else {
            iVar15 = FUN_00647ed0(local_cc8,s_SuperEvents_00756348);
            iVar10 = local_bc8;
            if (iVar15 == 0) {
              param_1[7] = local_bc8;
              pvVar12 = operator_new(local_bc8 * 0x198);
              local_4._0_1_ = 1;
              if (pvVar12 == (void *)0x0) {
                pvVar12 = (void *)0x0;
              }
              else if (-1 < iVar10 + -1) {
                iVar15 = (int)pvVar12 + 0x188;
                do {
                  FUN_00401080(iVar15,4,4,FUN_0041def0);
                  iVar15 = iVar15 + 0x198;
                  iVar10 = iVar10 + -1;
                } while (iVar10 != 0);
              }
              param_1[6] = (int)pvVar12;
              local_4 = (uint)local_4._1_3_ << 8;
              local_d5c = 0;
              if (0 < param_1[7]) {
                local_d60 = 0;
                do {
                  iVar16 = param_1[6] + local_d60;
                  FUN_0063e6a0();
                  FUN_0063f5e0(&DAT_00756354,local_60c);
                  FUN_006abee0(local_60c);
                  FUN_00647d70(iVar16,local_60c,0x20);
                  FUN_0063f560(&DAT_0075635c,iVar16 + 0x44);
                  FUN_0063f4e0(s_Radius_00756364,iVar16 + 0x6c);
                  FUN_0063f560(s_Start_0075636c,iVar16 + 0x48);
                  FUN_0063f560(&PTR_LAB_00756374,iVar16 + 0x4c);
                  FUN_0063f5e0(s_ParentName_00756378,local_60c);
                  FUN_006abee0(local_60c);
                  FUN_00647d70(iVar16 + 0x21,local_60c,0x20);
                  FUN_0063f3b0(&PTR_s_o_Load_Audio_Descriptor__s_00756384,iVar16 + 0x50);
                  *(undefined4 *)(iVar16 + 0x5c) = 0;
                  *(undefined4 *)(iVar16 + 0x60) = 0;
                  *(undefined4 *)(iVar16 + 100) = 0;
                  *(undefined4 *)(iVar16 + 0x68) = 0x3f800000;
                  FUN_0063f7b0(s_Rotation_00756388,(undefined4 *)(iVar16 + 0x5c));
                  FUN_0063f830(s_ShowAxis_00756394,iVar16 + 0x70);
                  FUN_0063f830(s_ShowSphere_007563a0,iVar16 + 0x74);
                  FUN_0063f830(s_ShowBox_007563ac,iVar16 + 0x78);
                  FUN_0063f4e0(s_AxisSize_007563b4,iVar16 + 0x7c);
                  FUN_0063f4e0(s_Width_007563c0,iVar16 + 0x80);
                  FUN_0063f4e0(s_Length_007563c8,iVar16 + 0x84);
                  FUN_0063f4e0(s_Height_007563d0,iVar16 + 0x88);
                  iVar10 = 0;
                  iVar15 = iVar16 + 0x8c;
                  do {
                    iVar10 = iVar10 + 1;
                    FUN_0064f190(local_d30,s_String_i_007563d8,iVar10);
                    FUN_0063f5e0(local_d30,local_60c);
                    FUN_006abee0(local_60c);
                    FUN_00647d70(iVar15,local_60c,0x20);
                    iVar15 = iVar15 + 0x21;
                  } while (iVar10 < 5);
                  iVar10 = 0;
                  iVar15 = iVar16 + 0x134;
                  do {
                    iVar10 = iVar10 + 1;
                    FUN_0064f190(local_d30,s_Int_i_007563e4,iVar10);
                    FUN_0063f560(local_d30,iVar15);
                    iVar15 = iVar15 + 4;
                  } while (iVar10 < 5);
                  iVar10 = 0;
                  iVar15 = iVar16 + 0x148;
                  do {
                    iVar10 = iVar10 + 1;
                    FUN_0064f190(local_d30,s_Float_i_007563ec,iVar10);
                    FUN_0063f4e0(local_d30,iVar15);
                    iVar15 = iVar15 + 4;
                  } while (iVar10 < 8);
                  iVar10 = 0;
                  iVar15 = iVar16 + 0x168;
                  do {
                    iVar10 = iVar10 + 1;
                    FUN_0064f190(local_d30,s_Bool_i_007563f4,iVar10);
                    FUN_0063f830(local_d30,iVar15);
                    iVar15 = iVar15 + 4;
                  } while (iVar10 < 8);
                  iVar10 = 0;
                  iVar16 = iVar16 + 0x188;
                  do {
                    iVar10 = iVar10 + 1;
                    FUN_0064f190(local_d30,s_Color_i_007563fc,iVar10);
                    FUN_0063f430(local_d30,iVar16);
                    iVar16 = iVar16 + 4;
                  } while (iVar10 < 4);
                  local_d5c = local_d5c + 1;
                  local_d60 = local_d60 + 0x198;
                } while (local_d5c < param_1[7]);
              }
            }
            else {
              iVar10 = FUN_00647ed0(local_cc8,s_Props_00756404);
              if (iVar10 == 0) {
                param_1[9] = local_bc8;
                pvVar12 = operator_new(local_bc8 * 0xa1);
                param_1[8] = (int)pvVar12;
                local_d5c = 0;
                if (0 < param_1[9]) {
                  local_d60 = 0;
                  do {
                    iVar15 = param_1[8] + local_d60;
                    FUN_0063e6a0();
                    FUN_0063f5e0(&DAT_0075640c,iVar15);
                    iVar10 = FUN_0063f5e0(&DAT_00756414,iVar15 + 0x80);
                    if (iVar10 == 0) {
                      FUN_00647d10(iVar15 + 0x80,s_Weapon_0075641c);
                    }
                    FUN_0063f5e0(s_Parent_00756424,iVar15 + 0x40);
                    local_d5c = local_d5c + 1;
                    local_d60 = local_d60 + 0xa1;
                  } while (local_d5c < param_1[9]);
                }
              }
              else {
                iVar15 = FUN_00647ed0(local_cc8,s_PropFrames_0075642c);
                iVar10 = local_bc8;
                if (iVar15 == 0) {
                  iVar15 = local_bc8 / param_1[9];
                  param_1[0xb] = iVar15;
                  pvVar12 = operator_new(iVar15 * param_1[9] * 0x2c);
                  param_1[10] = (int)pvVar12;
                  if (0 < iVar10) {
                    iVar15 = 0;
                    do {
                      FUN_0063e6a0();
                      FUN_0063ea10(local_cc8,s_Frame_d_00756438,local_cd8);
                      FUN_0063ea10(local_cc8,s_Index_d_00756440,local_ccc);
                      FUN_0063ea10(local_cc8,s_AnimPropName_s_00756448,local_10c);
                      FUN_0063ea10(local_cc8,s_Scale_fff_00756458,&local_d3c,&local_d38,&local_d34);
                      FUN_0063ea10(local_cc8,s_Rotate_ffff_00756464,&local_ce8,&local_ce4,&local_ce0
                                   ,&local_cdc);
                      FUN_0063ea10(local_cc8,s_Pos_fff_00756470,&local_d1c,&local_d18,&local_d14);
                      FUN_0063ea10(local_cc8,s_Vis_d_00756478,&local_d40);
                      iVar16 = param_1[10];
                      *(undefined4 *)(iVar16 + iVar15) = local_d3c;
                      *(undefined4 *)(iVar16 + 4 + iVar15) = local_d38;
                      *(undefined4 *)(iVar16 + 8 + iVar15) = local_d34;
                      puVar14 = (undefined4 *)(param_1[10] + 0xc + iVar15);
                      *puVar14 = local_ce8;
                      puVar14[1] = local_ce4;
                      puVar14[2] = local_ce0;
                      puVar14[3] = local_cdc;
                      puVar14 = (undefined4 *)(param_1[10] + 0x1c + iVar15);
                      *puVar14 = local_d1c;
                      puVar14[1] = local_d18;
                      puVar14[2] = local_d14;
                      *(undefined4 *)(param_1[10] + 0x28 + iVar15) = local_d40;
                      iVar15 = iVar15 + 0x2c;
                      iVar10 = iVar10 + -1;
                    } while (iVar10 != 0);
                  }
                }
                else {
                  FUN_0063f330();
                }
              }
            }
          }
        }
      }
      iVar10 = FUN_0063e510();
    }
    iVar10 = FUN_00643a60();
    if (iVar10 == 0) {
      local_4 = 0xffffffff;
      FUN_0063de30();
      uVar11 = 0;
    }
    else {
      if (param_1[3] == 0) {
        param_1[3] = 2;
        iVar10 = thunk_FUN_0064ff70(param_1[1] * 0x50,s_C__projects_meridian_xCore_Auxil_00756480,
                                    0x145);
        param_1[2] = iVar10;
        iVar10 = 0;
        if (0 < param_1[3] * param_1[1]) {
          iVar15 = 0;
          do {
            puVar14 = (undefined4 *)(param_1[2] + iVar15);
            *puVar14 = 0x3f800000;
            puVar14[1] = 0x3f800000;
            puVar14[2] = 0x3f800000;
            puVar14 = (undefined4 *)(param_1[2] + 0xc + iVar15);
            *puVar14 = 0;
            puVar14[1] = 0;
            puVar14[2] = 0;
            puVar14[3] = 0x3f800000;
            puVar14 = (undefined4 *)(param_1[2] + 0x1c + iVar15);
            puVar14[2] = 0;
            puVar14[1] = 0;
            *puVar14 = 0;
            iVar10 = iVar10 + 1;
            iVar15 = iVar15 + 0x28;
          } while (iVar10 < param_1[3] * param_1[1]);
        }
      }
      FUN_006af040();
      local_4 = 0xffffffff;
      FUN_0063de30();
      uVar11 = 1;
    }
  }
  ExceptionList = local_c;
  return uVar11;
}

