
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006af470(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  uint *puVar2;
  bool bVar3;
  undefined1 uVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  int local_a50;
  int local_a4c;
  int local_a48;
  int local_a44;
  int local_a40;
  int local_a2c;
  int *local_a28;
  int local_a24;
  int local_a10;
  undefined4 *local_a0c;
  int local_a08;
  float local_9fc;
  float local_9f8;
  float local_9f4;
  undefined4 local_9f0;
  float local_9ec;
  int local_9e8;
  float local_9e4;
  float local_9e0;
  float local_9dc;
  int local_9d8;
  undefined1 local_9d4 [4];
  undefined1 local_9d0 [4];
  undefined1 local_9cc [4];
  undefined1 local_9c8 [4];
  undefined1 local_9c4 [4];
  undefined1 local_9c0 [4];
  undefined1 local_9bc [4];
  undefined1 local_9b8 [4];
  undefined1 local_9b4 [4];
  undefined1 local_9b0 [4];
  undefined1 local_9ac [4];
  undefined1 local_9a8 [4];
  undefined1 local_9a4 [4];
  undefined1 local_9a0 [4];
  undefined1 local_99c [4];
  undefined1 local_998 [4];
  undefined1 local_994 [4];
  undefined1 local_990 [4];
  undefined1 local_98c [128];
  undefined1 local_90c [128];
  undefined1 local_88c [128];
  undefined1 local_80c [128];
  undefined1 local_78c [128];
  undefined1 local_70c [128];
  undefined1 local_68c [128];
  undefined1 local_60c [128];
  undefined1 local_58c [128];
  undefined1 local_50c [256];
  undefined1 local_40c [256];
  undefined1 local_30c [512];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8210;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar5 = operator_new(0x6bc);
  local_4 = 0;
  if (pvVar5 == (void *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_0063ddb0();
  }
  local_4 = 0xffffffff;
  FUN_006af3f0();
  iVar7 = FUN_0063df60(param_2);
  if (iVar7 != 0) {
    iVar7 = thunk_FUN_0064ff70(0x200000,s_C__projects_meridian_xCore_Auxil_00756718,0x4b);
    FUN_00648600(iVar7,0,0x200000);
    iVar8 = FUN_0063e510();
    while (iVar8 == 1) {
      iVar8 = FUN_00647ed0(iVar6,s_Hierarchy_00756754);
      if (iVar8 == 0) {
        if (param_3 != 0) goto LAB_006b103b;
        iVar8 = *(int *)(iVar6 + 0x100);
        *param_1 = iVar8;
        pvVar5 = operator_new(iVar8 * 0x130);
        param_1[1] = (int)pvVar5;
        FUN_00648600(pvVar5,0,*param_1 * 0x130);
        iVar8 = 0;
        if (0 < *(int *)(iVar6 + 0x100)) {
          local_a4c = 0;
          do {
            iVar14 = param_1[1] + local_a4c;
            iVar9 = FUN_0063e6a0();
            if (iVar9 == 0) goto LAB_006b1069;
            FUN_0063ea10(iVar6,s_Index_d_00756760,local_990);
            FUN_0063ea10(iVar6,s_Name_s_00756768,iVar14);
            FUN_0063ea10(iVar6,s_nChildren_d_00756770,iVar14 + 0x100);
            FUN_0063ea10(iVar6,s_iParent_d_0075677c,iVar14 + 0x104);
            FUN_0063ea10(iVar6,s_Scale_fff_00756788,iVar14 + 0x108,iVar14 + 0x10c,iVar14 + 0x110);
            FUN_0063ea10(iVar6,s_Rotate_ffff_00756794,iVar14 + 0x114,iVar14 + 0x118,iVar14 + 0x11c,
                         iVar14 + 0x120);
            FUN_0063ea10(iVar6,s_Pos_fff_007567a0,iVar14 + 0x124,iVar14 + 0x128,iVar14 + 300);
            iVar8 = iVar8 + 1;
            local_a4c = local_a4c + 0x130;
          } while (iVar8 < *(int *)(iVar6 + 0x100));
        }
      }
      else {
        iVar8 = FUN_00647ed0(iVar6,s_Vertices_007567a8);
        if (iVar8 == 0) {
          if (param_3 != 0) goto LAB_006b103b;
          iVar8 = *(int *)(iVar6 + 0x100);
          param_1[3] = iVar8;
          pvVar5 = operator_new(iVar8 * 0x160);
          local_4 = 1;
          if (pvVar5 == (void *)0x0) {
            pvVar5 = (void *)0x0;
          }
          else if (-1 < iVar8 + -1) {
            iVar9 = (int)pvVar5 + 0x60;
            do {
              FUN_00401080(iVar9 + -0x40,8,8,FUN_0041def0);
              FUN_00401080(iVar9,0xc,8,FUN_0041def0);
              FUN_00401080(iVar9 + 0x60,4,8,FUN_0041def0);
              iVar9 = iVar9 + 0x160;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          local_4 = 0xffffffff;
          param_1[4] = (int)pvVar5;
          FUN_00648600(pvVar5,0,param_1[3] * 0x160);
          iVar8 = 0;
          if (0 < *(int *)(iVar6 + 0x100)) {
            local_a4c = 0;
            do {
              iVar14 = param_1[4] + local_a4c;
              iVar9 = FUN_0063e6a0();
              if (iVar9 == 0) goto LAB_006b1069;
              FUN_0063ea10(iVar6,s_Index_d_007567b4,local_9cc);
              FUN_0063ea10(iVar6,s_Pos_fff_007567bc,iVar14,iVar14 + 4,iVar14 + 8);
              FUN_0063ea10(iVar6,s_nNormals_d_007567c4,iVar14 + 0x14);
              FUN_0063ea10(iVar6,s_nUVSets_d_007567d0,iVar14 + 0x18);
              FUN_0063ea10(iVar6,s_nColors_d_007567dc,iVar14 + 0x1c);
              piVar15 = (int *)(iVar14 + 0x10);
              FUN_0063ea10(iVar6,s_nWeights_d_007567e8,piVar15);
              iVar9 = *piVar15;
              if (0xf < iVar9) {
                iVar9 = 0x10;
              }
              *piVar15 = iVar9;
              iVar8 = iVar8 + 1;
              local_a4c = local_a4c + 0x160;
            } while (iVar8 < *(int *)(iVar6 + 0x100));
          }
        }
        else {
          iVar8 = FUN_00647ed0(iVar6,s_Colors_007567f4);
          if (iVar8 == 0) {
            if (param_3 != 0) goto LAB_006b103b;
            iVar8 = *(int *)(iVar6 + 0x100);
            local_a48 = 0;
            if (0 < iVar8) {
              do {
                iVar9 = FUN_0063e6a0();
                if (iVar9 == 0) goto LAB_006b1069;
                FUN_0063ea10(iVar6,s_iVertex_d_007567fc,&local_9d8);
                FUN_0063ea10(iVar6,s_Index_d_00756808,&local_9e8);
                puVar1 = (undefined1 *)(param_1[4] + 0xc0 + (local_9d8 * 0x58 + local_9e8) * 4);
                FUN_0063ea10(iVar6,s_Color_ffff_00756810,&local_9fc,&local_9f4,&local_9e4,&local_9e0
                            );
                uVar4 = __ftol();
                puVar1[3] = uVar4;
                uVar4 = __ftol();
                puVar1[2] = uVar4;
                uVar4 = __ftol();
                puVar1[1] = uVar4;
                uVar4 = __ftol();
                *puVar1 = uVar4;
                local_a48 = local_a48 + 1;
              } while (local_a48 < iVar8);
            }
          }
          else {
            iVar8 = FUN_00647ed0(iVar6,s_Normals_0075681c);
            if (iVar8 == 0) {
              if (param_3 != 0) goto LAB_006b103b;
              local_a48 = 0;
              if (0 < param_1[3]) {
                local_a4c = 0;
                do {
                  iVar9 = 0;
                  iVar8 = local_a4c;
                  if (0 < *(int *)(local_a4c + 0x14 + param_1[4])) {
                    do {
                      iVar14 = FUN_0063e6a0();
                      if (iVar14 == 0) goto LAB_006b1065;
                      FUN_0063ea10(iVar6,s_iVertex_d_00756824,local_9c4);
                      FUN_0063ea10(iVar6,s_Index_d_00756830,local_9a0);
                      iVar14 = param_1[4];
                      FUN_0063ea10(iVar6,s_Normal_fff_00756838,iVar8 + 0x60 + iVar14,
                                   iVar8 + 100 + iVar14,iVar8 + 0x68 + iVar14);
                      iVar9 = iVar9 + 1;
                      iVar8 = iVar8 + 0xc;
                    } while (iVar9 < *(int *)(local_a4c + 0x14 + param_1[4]));
                  }
                  local_a48 = local_a48 + 1;
                  local_a4c = local_a4c + 0x160;
                } while (local_a48 < param_1[3]);
              }
            }
            else {
              iVar8 = FUN_00647ed0(iVar6,s_UVSet_00756844);
              if (iVar8 == 0) {
                if (param_3 != 0) goto LAB_006b103b;
                local_a48 = 0;
                if (0 < param_1[3]) {
                  iVar8 = 0;
                  local_a4c = 0;
                  do {
                    iVar9 = 0;
                    if (0 < *(int *)(local_a4c + 0x18 + param_1[4])) {
                      do {
                        iVar14 = FUN_0063e6a0();
                        if (iVar14 == 0) goto LAB_006b1065;
                        FUN_0063ea10(iVar6,s_iVertex_d_0075684c,local_9c8);
                        FUN_0063ea10(iVar6,s_Index_d_00756858,local_998);
                        FUN_0063ea10(iVar6,s_UV_ff_00756860,param_1[4] + 0x20 + (iVar8 + iVar9) * 8,
                                     param_1[4] + 0x24 + (iVar8 + iVar9) * 8);
                        iVar9 = iVar9 + 1;
                      } while (iVar9 < *(int *)(local_a4c + 0x18 + param_1[4]));
                    }
                    local_a48 = local_a48 + 1;
                    local_a4c = local_a4c + 0x160;
                    iVar8 = iVar8 + 0x2c;
                  } while (local_a48 < param_1[3]);
                }
              }
              else {
                iVar8 = FUN_00647ed0(iVar6,&DAT_00756868);
                if (iVar8 == 0) {
                  iVar8 = 0;
                  if (param_3 != 0) goto LAB_006b103b;
                  iVar9 = *(int *)(iVar6 + 0x100);
                  if (param_1[3] < *(int *)(iVar6 + 0x100)) {
                    iVar9 = param_1[3];
                  }
                  local_a50 = 0;
                  if (0 < iVar9) {
                    local_a4c = 0;
                    do {
                      iVar14 = 0;
                      if (0 < *(int *)(local_a4c + 0x10 + param_1[4])) {
                        do {
                          iVar10 = FUN_0063e6a0();
                          if (iVar10 == 0) goto LAB_006b1069;
                          FUN_0063ea10(iVar6,s_iVertex_d_00756870,local_9c0);
                          FUN_0063ea10(iVar6,s_Index_d_0075687c,local_9d4);
                          FUN_0063ea10(iVar6,s_iBone_d_00756884,
                                       param_1[4] + 0xe0 + (iVar8 + iVar14) * 8);
                          FUN_0063ea10(iVar6,s_Weight_f_0075688c,
                                       param_1[4] + 0xe4 + (iVar8 + iVar14) * 8);
                          iVar14 = iVar14 + 1;
                        } while (iVar14 < *(int *)(local_a4c + 0x10 + param_1[4]));
                      }
                      local_a50 = local_a50 + 1;
                      local_a4c = local_a4c + 0x160;
                      iVar8 = iVar8 + 0x2c;
                    } while (local_a50 < iVar9);
                  }
                  if (iVar9 < param_1[3]) {
                    iVar8 = iVar9 * 0x160;
                    do {
                      *(undefined4 *)(iVar8 + 0xe0 + param_1[4]) = 0;
                      *(undefined4 *)(iVar8 + 0xe4 + param_1[4]) = 0x3f800000;
                      iVar9 = iVar9 + 1;
                      iVar8 = iVar8 + 0x160;
                    } while (iVar9 < param_1[3]);
                  }
                }
                else {
                  iVar8 = FUN_00647ed0(iVar6,s_Polygons_00756898);
                  if (iVar8 == 0) {
                    iVar8 = *(int *)(iVar6 + 0x100);
                    param_1[5] = iVar8;
                    pvVar5 = operator_new(iVar8 * 0x5c);
                    param_1[6] = (int)pvVar5;
                    FUN_00648600(pvVar5,0,param_1[5] * 0x5c);
                    local_a48 = 0;
                    if (0 < param_1[5]) {
                      local_a50 = 0;
                      do {
                        piVar15 = (int *)(param_1[6] + local_a50);
                        iVar8 = FUN_0063e6a0();
                        if (iVar8 == 0) goto LAB_006b1069;
                        FUN_0063ea10(iVar6,s_Index_d_007568a4,local_9a4);
                        FUN_0063ea10(iVar6,s_iMesh_d_007568ac,piVar15);
                        FUN_0063ea10(iVar6,s_nVerts_d_007568b4,piVar15 + 1);
                        FUN_0063ea10(iVar6,s_Normal_fff_007568c0,piVar15 + 0x13,piVar15 + 0x14,
                                     piVar15 + 0x15);
                        FUN_0063ea10(iVar6,s_iMaterial_d_007568cc,piVar15 + 0x12);
                        iVar8 = piVar15[0x12];
                        if (-1 < iVar8) {
                          *(undefined1 *)(*piVar15 * 0x200 + iVar8 + iVar7) = 1;
                        }
                        local_a48 = local_a48 + 1;
                        local_a50 = local_a50 + 0x5c;
                      } while (local_a48 < param_1[5]);
                    }
                  }
                  else {
                    iVar8 = FUN_00647ed0(iVar6,s_FacetIndex_007568d8);
                    if (iVar8 == 0) {
                      if (param_3 != 0) goto LAB_006b103b;
                      local_a48 = 0;
                      if (0 < param_1[5]) {
                        iVar8 = 0;
                        local_a50 = 2;
                        do {
                          iVar9 = 0;
                          if (0 < *(int *)(param_1[6] + 4 + iVar8)) {
                            do {
                              iVar14 = FUN_0063e6a0();
                              if (iVar14 == 0) goto LAB_006b1065;
                              FUN_0063ea10(iVar6,s_iFacet_d_007568e4,local_9b4);
                              FUN_0063ea10(iVar6,s_Index_d_007568f0,local_994);
                              FUN_0063ea10(iVar6,s_iVertex_d_007568f8,
                                           param_1[6] + (local_a50 + iVar9) * 4);
                              iVar9 = iVar9 + 1;
                            } while (iVar9 < *(int *)(param_1[6] + 4 + iVar8));
                          }
                          local_a48 = local_a48 + 1;
                          local_a50 = local_a50 + 0x17;
                          iVar8 = iVar8 + 0x5c;
                        } while (local_a48 < param_1[5]);
                      }
                    }
                    else {
                      iVar8 = FUN_00647ed0(iVar6,s_Textures_00756904);
                      if (iVar8 == 0) {
                        iVar8 = *(int *)(iVar6 + 0x100);
                        param_1[7] = iVar8;
                        pvVar5 = operator_new(iVar8 << 8);
                        param_1[8] = (int)pvVar5;
                        FUN_00648600(pvVar5,0,param_1[7] << 8);
                        iVar8 = 0;
                        if (0 < param_1[7]) {
                          local_a50 = 0;
                          do {
                            iVar9 = param_1[8];
                            iVar14 = FUN_0063e6a0();
                            if (iVar14 == 0) goto LAB_006b1069;
                            FUN_0063ea10(iVar6,s_Index_d_00756910,local_9ac);
                            FUN_0063ea10(iVar6,s_FileName_s_00756918,iVar9 + local_a50);
                            iVar8 = iVar8 + 1;
                            local_a50 = local_a50 + 0x100;
                          } while (iVar8 < param_1[7]);
                        }
                      }
                      else {
                        iVar8 = FUN_00647ed0(iVar6,s_Materials_00756924);
                        if (iVar8 == 0) {
                          iVar8 = *(int *)(iVar6 + 0x100);
                          param_1[9] = iVar8;
                          pvVar5 = operator_new(iVar8 * 0x338);
                          local_4 = 2;
                          if (pvVar5 == (void *)0x0) {
                            pvVar5 = (void *)0x0;
                          }
                          else if (-1 < iVar8 + -1) {
                            iVar9 = (int)pvVar5 + 0x138;
                            do {
                              FUN_00401080(iVar9,0x40,8,FUN_0041def0);
                              iVar9 = iVar9 + 0x338;
                              iVar8 = iVar8 + -1;
                            } while (iVar8 != 0);
                          }
                          local_4 = 0xffffffff;
                          param_1[10] = (int)pvVar5;
                          FUN_00648600(pvVar5,0,param_1[9] * 0x338);
                          local_a48 = 0;
                          if (0 < param_1[9]) {
                            iVar8 = 0;
                            do {
                              iVar14 = param_1[10] + iVar8;
                              iVar9 = FUN_0063e6a0();
                              if (iVar9 == 0) goto LAB_006b1069;
                              FUN_0063ea10(iVar6,s_Index_d_00756930,local_99c);
                              FUN_0063ea10(iVar6,s_MaterialName_s_00756938,iVar14);
                              FUN_0063ea10(iVar6,s_MaterialType_s_00756948,local_10c);
                              FUN_0063ea10(iVar6,s_IlluminationType_s_00756958,local_40c);
                              FUN_0063ea10(iVar6,s_CompositionType_s_0075696c,local_50c);
                              FUN_0063ea10(iVar6,s_nTexMaterials_d_00756980,iVar14 + 0x134);
                              FUN_0063ea10(iVar6,s_bDoubleSide_d_00756990,iVar14 + 0x10c);
                              FUN_0063ea10(iVar6,s_nConstants_d_007569a0,iVar14 + 0x110);
                              iVar9 = FUN_00647ed0(local_40c,s_DYNAMIC_I_007569b0);
                              if (iVar9 == 0) {
                                *(undefined4 *)(iVar14 + 0x104) = 2;
                              }
                              else {
                                iVar9 = FUN_00647ed0(local_40c,s_LIGHTMAP_007569bc);
                                if (iVar9 == 0) {
                                  *(undefined4 *)(iVar14 + 0x104) = 3;
                                }
                                else {
                                  iVar9 = FUN_00647ed0(local_40c,s_DYNAMIC_007569c8);
                                  if (iVar9 == 0) {
                                    *(undefined4 *)(iVar14 + 0x104) = 1;
                                  }
                                  else {
                                    *(undefined4 *)(iVar14 + 0x104) = 0;
                                  }
                                }
                              }
                              iVar9 = FUN_00647ed0(local_50c,s_OVERWRITE_007569d0);
                              if (iVar9 == 0) {
                                *(undefined4 *)(iVar14 + 0x108) = 1;
                              }
                              else {
                                iVar9 = FUN_00647ed0(local_50c,&DAT_007569dc);
                                if (iVar9 == 0) {
                                  *(undefined4 *)(iVar14 + 0x108) = 2;
                                }
                                else {
                                  iVar9 = FUN_00647ed0(local_50c,&PTR_LAB_007569e0);
                                  if (iVar9 == 0) {
                                    *(undefined4 *)(iVar14 + 0x108) = 3;
                                  }
                                  else {
                                    iVar9 = FUN_00647ed0(local_50c,&DAT_007569e4);
                                    if (iVar9 == 0) {
                                      *(undefined4 *)(iVar14 + 0x108) = 4;
                                    }
                                    else {
                                      *(undefined4 *)(iVar14 + 0x108) = 0;
                                    }
                                  }
                                }
                              }
                              local_a48 = local_a48 + 1;
                              iVar8 = iVar8 + 0x338;
                            } while (local_a48 < param_1[9]);
                          }
                        }
                        else {
                          iVar8 = FUN_00647ed0(iVar6,s_MatTexture_007569e8);
                          if (iVar8 == 0) {
                            iVar8 = 0;
                            if (0 < param_1[9]) {
                              do {
                                iVar9 = iVar8 * 0x338;
                                local_a48 = 0;
                                if (0 < *(int *)(param_1[10] + 0x134 + iVar9)) {
                                  do {
                                    iVar14 = FUN_0063e6a0();
                                    if (iVar14 == 0) goto LAB_006b1065;
                                    FUN_0063ea10(iVar6,s_iMaterial_d_007569f4,local_9bc);
                                    FUN_0063ea10(iVar6,s_Index_d_00756a00,local_9b8);
                                    puVar2 = (uint *)(local_a48 * 0x40 + param_1[10] + 0x138 + iVar9
                                                     );
                                    FUN_0063ea10(iVar6,s_ChanelType_s_00756a08,local_90c);
                                    FUN_0063ea10(iVar6,s_iChanel_d_00756a18,puVar2 + 1);
                                    FUN_0063ea10(iVar6,s_TextureType_s_00756a24,local_98c);
                                    FUN_0063ea10(iVar6,s_iTexture_d_00756a34,puVar2 + 3);
                                    FUN_0063ea10(iVar6,s_UVWAddressMode_sss_00756a40,local_70c,
                                                 local_68c,local_78c);
                                    FUN_0063ea10(iVar6,s_UVWAnimMode_s_00756a54,local_58c);
                                    FUN_0063ea10(iVar6,s_nUVWAnimFrames_d_00756a64,puVar2 + 10);
                                    FUN_0063ea10(iVar6,s_iUVWAnimID_d_00756a78,puVar2 + 0xb);
                                    FUN_0063ea10(iVar6,s_Filtering_s_00756a88,local_80c);
                                    FUN_0063ea10(iVar6,s_TexBias_f_00756a94,puVar2 + 8);
                                    FUN_0063ea10(iVar6,s_AnimTexPlayType_s_00756aa0,local_88c);
                                    FUN_0063ea10(iVar6,s_AnimTexPlaySpeed_f_00756ab4,puVar2 + 0xd);
                                    FUN_0063ea10(iVar6,s_TintingType_s_00756ac8,local_60c);
                                    FUN_0063ea10(iVar6,s_Color_fff_00756ad8,&local_9ec,&local_9dc,
                                                 &local_9f8);
                                    *(undefined1 *)((int)puVar2 + 0x3f) = 0xff;
                                    uVar4 = __ftol();
                                    *(undefined1 *)((int)puVar2 + 0x3e) = uVar4;
                                    uVar4 = __ftol();
                                    *(undefined1 *)((int)puVar2 + 0x3d) = uVar4;
                                    uVar4 = __ftol();
                                    *(undefined1 *)(puVar2 + 0xf) = uVar4;
                                    iVar14 = FUN_00647ed0(local_90c,s_CONSTANT_00756ae4);
                                    if (iVar14 == 0) {
                                      *puVar2 = 4;
                                    }
                                    else {
                                      iVar14 = FUN_00647ed0(local_90c,s_VERTEX_00756af0);
                                      if (iVar14 == 0) {
                                        *puVar2 = 3;
                                      }
                                      else {
                                        iVar14 = FUN_00647ed0(local_90c,s_TEXTURE_00756af8);
                                        if (iVar14 == 0) {
                                          *puVar2 = 2;
                                        }
                                        else {
                                          iVar14 = FUN_00647ed0(local_90c,s_TEXTURE_AUTOGEN_00756b00
                                                               );
                                          *puVar2 = (uint)(iVar14 == 0);
                                        }
                                      }
                                    }
                                    iVar14 = FUN_00647ed0(local_98c,s_BASE1_00756b10);
                                    if (iVar14 == 0) {
                                      puVar2[2] = 1;
                                    }
                                    else {
                                      iVar14 = FUN_00647ed0(local_98c,s_BASE2_00756b18);
                                      if (iVar14 == 0) {
                                        puVar2[2] = 2;
                                      }
                                      else {
                                        iVar14 = FUN_00647ed0(local_98c,s_BASE3_00756b20);
                                        if (iVar14 == 0) {
                                          puVar2[2] = 3;
                                        }
                                        else {
                                          iVar14 = FUN_00647ed0(local_98c,s_BASE4_00756b28);
                                          if (iVar14 == 0) {
                                            puVar2[2] = 4;
                                          }
                                          else {
                                            iVar14 = FUN_00647ed0(local_98c,s_BLEND_RGB_00756b30);
                                            if (iVar14 == 0) {
                                              puVar2[2] = 5;
                                            }
                                            else {
                                              iVar14 = FUN_00647ed0(local_98c,s_BLEND_RG_00756b3c);
                                              if (iVar14 == 0) {
                                                puVar2[2] = 6;
                                              }
                                              else {
                                                iVar14 = FUN_00647ed0(local_98c,s_BLEND_R_00756b48);
                                                if (iVar14 == 0) {
                                                  puVar2[2] = 7;
                                                }
                                                else {
                                                  iVar14 = FUN_00647ed0(local_98c,
                                                                        s_OPACITY_ALPHA_00756b50);
                                                  if (iVar14 == 0) {
                                                    puVar2[2] = 8;
                                                  }
                                                  else {
                                                    iVar14 = FUN_00647ed0(local_98c,
                                                                          s_OPACITY_PUNCH_00756b60);
                                                    if (iVar14 == 0) {
                                                      puVar2[2] = 9;
                                                    }
                                                    else {
                                                      iVar14 = FUN_00647ed0(local_98c,
                                                                            s_ENVMAP_00756b70);
                                                      if (iVar14 == 0) {
                                                        puVar2[2] = 10;
                                                      }
                                                      else {
                                                        iVar14 = FUN_00647ed0(local_98c,
                                                                              &DAT_00756b78);
                                                        if (iVar14 == 0) {
                                                          puVar2[2] = 0xd;
                                                        }
                                                        else {
                                                          iVar14 = FUN_00647ed0(local_98c,
                                                                                                                                                                
                                                  s_SELF_ILLUM_00756b80);
                                                  if (iVar14 == 0) {
                                                    puVar2[2] = 0x10;
                                                  }
                                                  else {
                                                    iVar14 = FUN_00647ed0(local_98c,
                                                                          s_SPECULAR_00756b8c);
                                                    if (iVar14 == 0) {
                                                      puVar2[2] = 0xb;
                                                    }
                                                    else {
                                                      iVar14 = FUN_00647ed0(local_98c,
                                                                            s_INTENSITY_00756b98);
                                                      if (iVar14 == 0) {
                                                        puVar2[2] = 0xe;
                                                      }
                                                      else {
                                                        iVar14 = FUN_00647ed0(local_98c,
                                                                              s_NORMAL_00756ba4);
                                                        if (iVar14 == 0) {
                                                          puVar2[2] = 0xf;
                                                        }
                                                        else {
                                                          iVar14 = FUN_00647ed0(local_98c,
                                                                                s_LIGHTMAP_00756bac)
                                                          ;
                                                          if (iVar14 == 0) {
                                                            puVar2[2] = 0x11;
                                                          }
                                                          else {
                                                            iVar14 = FUN_00647ed0(local_98c,
                                                                                                                                                                    
                                                  s_ANISOTROPIC_00756bb8);
                                                  if (iVar14 == 0) {
                                                    puVar2[2] = 0xc;
                                                  }
                                                  else {
                                                    puVar2[2] = 0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    iVar14 = FUN_00647ed0(local_70c,s_MIRROR_00756bc4);
                                    if (iVar14 == 0) {
                                      puVar2[4] = 3;
                                    }
                                    else {
                                      iVar14 = FUN_00647ed0(local_70c,&DAT_00756bcc);
                                      if (iVar14 == 0) {
                                        puVar2[4] = 1;
                                      }
                                      else {
                                        iVar14 = FUN_00647ed0(local_70c,s_CLAMP_00756bd4);
                                        if (iVar14 == 0) {
                                          puVar2[4] = 2;
                                        }
                                        else {
                                          puVar2[4] = 0;
                                        }
                                      }
                                    }
                                    iVar14 = FUN_00647ed0(local_68c,s_MIRROR_00756bdc);
                                    if (iVar14 == 0) {
                                      puVar2[5] = 3;
                                    }
                                    else {
                                      iVar14 = FUN_00647ed0(local_68c,&DAT_00756be4);
                                      if (iVar14 == 0) {
                                        puVar2[5] = 1;
                                      }
                                      else {
                                        iVar14 = FUN_00647ed0(local_68c,s_CLAMP_00756bec);
                                        if (iVar14 == 0) {
                                          puVar2[5] = 2;
                                        }
                                        else {
                                          puVar2[5] = 0;
                                        }
                                      }
                                    }
                                    iVar14 = FUN_00647ed0(local_78c,s_MIRROR_00756bf4);
                                    if (iVar14 == 0) {
                                      puVar2[6] = 3;
                                    }
                                    else {
                                      iVar14 = FUN_00647ed0(local_78c,&DAT_00756bfc);
                                      if (iVar14 == 0) {
                                        puVar2[6] = 1;
                                      }
                                      else {
                                        iVar14 = FUN_00647ed0(local_78c,s_CLAMP_00756c04);
                                        if (iVar14 == 0) {
                                          puVar2[6] = 2;
                                        }
                                        else {
                                          puVar2[6] = 0;
                                        }
                                      }
                                    }
                                    iVar14 = FUN_00647ed0(local_58c,&DAT_00756c0c);
                                    if (iVar14 == 0) {
                                      puVar2[9] = 1;
                                    }
                                    else {
                                      iVar14 = FUN_00647ed0(local_58c,s_RELATIVE_00756c14);
                                      if (iVar14 == 0) {
                                        puVar2[9] = 2;
                                      }
                                      else {
                                        puVar2[9] = 0;
                                      }
                                    }
                                    iVar14 = FUN_00647ed0(local_80c,s_BILINEAR_00756c20);
                                    if (iVar14 == 0) {
                                      puVar2[7] = 1;
                                    }
                                    else {
                                      iVar14 = FUN_00647ed0(local_80c,s_TRILINEAR_00756c2c);
                                      if (iVar14 == 0) {
                                        puVar2[7] = 2;
                                      }
                                      else {
                                        iVar14 = FUN_00647ed0(local_80c,s_ANISOTROPIC_00756c38);
                                        if (iVar14 == 0) {
                                          puVar2[7] = 3;
                                        }
                                        else {
                                          puVar2[7] = 0;
                                        }
                                      }
                                    }
                                    iVar14 = FUN_00647ed0(local_88c,s_FORWARD_00756c44);
                                    if (iVar14 == 0) {
                                      puVar2[0xc] = 1;
                                    }
                                    else {
                                      iVar14 = FUN_00647ed0(local_88c,s_REVERSE_00756c4c);
                                      if (iVar14 == 0) {
                                        puVar2[0xc] = 2;
                                      }
                                      else {
                                        iVar14 = FUN_00647ed0(local_88c,s_PING_PONG_00756c54);
                                        if (iVar14 == 0) {
                                          puVar2[0xc] = 3;
                                        }
                                        else {
                                          iVar14 = FUN_00647ed0(local_88c,s_RANDOM_00756c60);
                                          if (iVar14 == 0) {
                                            puVar2[0xc] = 4;
                                          }
                                          else {
                                            puVar2[0xc] = 0;
                                          }
                                        }
                                      }
                                    }
                                    iVar14 = FUN_00647ed0(local_60c,&DAT_00756c68);
                                    if (iVar14 == 0) {
                                      puVar2[0xe] = 1;
                                    }
                                    else {
                                      iVar14 = FUN_00647ed0(local_60c,&DAT_00756c6c);
                                      if (iVar14 == 0) {
                                        puVar2[0xe] = 2;
                                      }
                                      else {
                                        iVar14 = FUN_00647ed0(local_60c,&DAT_00756c70);
                                        if (iVar14 == 0) {
                                          puVar2[0xe] = 3;
                                        }
                                        else {
                                          puVar2[0xe] = 0;
                                        }
                                      }
                                    }
                                    local_a48 = local_a48 + 1;
                                  } while (local_a48 < *(int *)(param_1[10] + 0x134 + iVar9));
                                }
                                iVar8 = iVar8 + 1;
                              } while (iVar8 < param_1[9]);
                            }
                          }
                          else {
                            iVar8 = FUN_00647ed0(iVar6,s_MatConstants_00756c78);
                            if (iVar8 == 0) {
                              if (0 < param_1[9]) {
                                iVar8 = 0;
                                local_a50 = 0x45;
                                local_a48 = 0;
                                do {
                                  iVar9 = 0;
                                  if (0 < *(int *)(param_1[10] + 0x110 + iVar8)) {
                                    do {
                                      iVar14 = FUN_0063e6a0();
                                      if (iVar14 == 0) goto LAB_006b1065;
                                      FUN_0063ea10(iVar6,s_iMaterial_d_00756c88,local_9b0);
                                      FUN_0063ea10(iVar6,s_Index_d_00756c94,local_9a8);
                                      FUN_0063ea10(iVar6,&DAT_00756c9c,&local_9f0);
                                      *(undefined4 *)(param_1[10] + (local_a50 + iVar9) * 4) =
                                           local_9f0;
                                      iVar9 = iVar9 + 1;
                                    } while (iVar9 < *(int *)(param_1[10] + 0x110 + iVar8));
                                  }
                                  local_a48 = local_a48 + 1;
                                  local_a50 = local_a50 + 0xce;
                                  iVar8 = iVar8 + 0x338;
                                } while (local_a48 < param_1[9]);
                              }
                            }
                            else {
                              iVar8 = FUN_00647ed0(iVar6,s_UVAnimation_00756ca0);
                              if (iVar8 == 0) {
                                if (param_3 == 0) {
                                  iVar8 = *(int *)(iVar6 + 0x100);
                                  param_1[0xd] = iVar8;
                                  pvVar5 = operator_new(iVar8 * 0x2c);
                                  param_1[0xe] = (int)pvVar5;
                                  FUN_00648600(pvVar5,0,param_1[0xd] * 0x2c);
                                  iVar8 = 0;
                                  if (0 < param_1[0xd]) {
                                    local_a50 = 0;
                                    do {
                                      iVar14 = param_1[0xe] + local_a50;
                                      iVar9 = FUN_0063e6a0();
                                      if (iVar9 == 0) goto LAB_006b1069;
                                      FUN_0063ea10(iVar6,s_iAnimID_d_00756cac,iVar14);
                                      FUN_0063ea10(iVar6,s_Index_d_00756cb8,iVar14 + 4);
                                      FUN_0063ea10(iVar6,s_Scale_fff_00756cc0,iVar14 + 8,
                                                   iVar14 + 0xc,iVar14 + 0x10);
                                      FUN_0063ea10(iVar6,s_Rotate_fff_00756ccc,iVar14 + 0x28,
                                                   iVar14 + 0x20,iVar14 + 0x24);
                                      FUN_0063ea10(iVar6,s_Scale_fff_00756cd8,iVar14 + 0x14,
                                                   iVar14 + 0x18,iVar14 + 0x1c);
                                      iVar8 = iVar8 + 1;
                                      local_a50 = local_a50 + 0x2c;
                                    } while (iVar8 < param_1[0xd]);
                                  }
                                }
                                else {
LAB_006b103b:
                                  FUN_0063f330();
                                }
                              }
                              else {
                                iVar8 = FUN_00647ed0(iVar6,&DAT_00756ce4);
                                if (iVar8 != 0) goto LAB_006b103b;
                                local_a0c = (undefined4 *)0x0;
                                local_a10 = 0;
                                local_a08 = 0;
                                local_a28 = (int *)0x0;
                                local_a2c = 0;
                                local_a24 = 0;
                                iVar8 = *(int *)(iVar6 + 0x100);
                                param_1[0xb] = iVar8;
                                local_4 = 4;
                                pvVar5 = operator_new(iVar8 * 0x40c);
                                param_1[0xc] = (int)pvVar5;
                                FUN_00648600(pvVar5,0,param_1[0xb] * 0x40c);
                                local_a44 = 0;
                                if (0 < param_1[0xb]) {
                                  local_a40 = 0;
                                  do {
                                    iVar9 = param_1[0xc] + local_a40;
                                    iVar8 = FUN_0063e6a0();
                                    if (iVar8 == 0) {
                                      FUN_0063de30();
                                      FUN_006bf840(iVar6);
                                      local_4 = CONCAT31(local_4._1_3_,3);
                                      FUN_006bf840(local_a28);
                                      local_4 = 0xffffffff;
                                      FUN_006bf840(local_a0c);
                                      ExceptionList = local_c;
                                      return 0;
                                    }
                                    FUN_0063ea10(iVar6,s_Index_d_00756cec,local_9d0);
                                    if (DAT_008132dc == 0) {
                                      FUN_0063ea10(iVar6,s_Name_s_00756d04,iVar9);
                                    }
                                    else {
                                      FUN_0063ea10(iVar6,s_Name_s_00756cf4,local_30c);
                                      bVar3 = false;
                                      local_a48 = 0;
                                      if (0 < local_a10) {
                                        piVar15 = local_a28;
                                        do {
                                          if (bVar3) goto LAB_006b0f6d;
                                          iVar8 = FUN_00647e40(*(undefined4 *)
                                                                (((int)local_a0c - (int)local_a28) +
                                                                (int)piVar15),local_30c);
                                          if (iVar8 == 0) {
                                            iVar8 = *piVar15;
                                            *piVar15 = iVar8 + 1;
                                            FUN_0064f190(iVar9,&DAT_00756cfc,local_30c,iVar8 + 1);
                                            bVar3 = true;
                                          }
                                          local_a48 = local_a48 + 1;
                                          piVar15 = piVar15 + 1;
                                        } while (local_a48 < local_a10);
                                        if (bVar3) goto LAB_006b0f6d;
                                      }
                                      FUN_00647d10(iVar9,local_30c);
                                      if (local_a08 < local_a10 + 1) {
                                        local_a08 = local_a08 / 2;
                                        iVar8 = 1;
                                        if (0 < local_a08) {
                                          iVar8 = local_a08;
                                        }
                                        if (iVar8 + local_a10 < 1) {
                                          local_a50 = 1;
                                        }
                                        else {
                                          if (local_a08 < 1) {
                                            local_a08 = 1;
                                          }
                                          local_a50 = local_a10 + local_a08;
                                        }
                                        puVar11 = (undefined4 *)operator_new(local_a50 * 4);
                                        if (0 < local_a10) {
                                          puVar12 = puVar11;
                                          local_a48 = local_a10;
                                          do {
                                            *puVar12 = *(undefined4 *)
                                                        (((int)local_a0c - (int)puVar11) +
                                                        (int)puVar12);
                                            puVar12 = puVar12 + 1;
                                            local_a48 = local_a48 + -1;
                                          } while (local_a48 != 0);
                                        }
                                        FUN_006bf840(local_a0c);
                                        local_a08 = local_a50;
                                        local_a0c = puVar11;
                                      }
                                      local_a0c[local_a10] = iVar9;
                                      if (local_a24 < local_a2c + 1) {
                                        local_a24 = local_a24 / 2;
                                        iVar8 = 1;
                                        if (0 < local_a24) {
                                          iVar8 = local_a24;
                                        }
                                        if (local_a2c + iVar8 < 1) {
                                          local_a50 = 1;
                                        }
                                        else {
                                          if (local_a24 < 1) {
                                            local_a24 = 1;
                                          }
                                          local_a50 = local_a24 + local_a2c;
                                        }
                                        piVar15 = (int *)operator_new(local_a50 * 4);
                                        if (0 < local_a2c) {
                                          piVar13 = piVar15;
                                          iVar8 = local_a2c;
                                          do {
                                            *piVar13 = *(int *)(((int)local_a28 - (int)piVar15) +
                                                               (int)piVar13);
                                            piVar13 = piVar13 + 1;
                                            iVar8 = iVar8 + -1;
                                          } while (iVar8 != 0);
                                        }
                                        FUN_006bf840(local_a28);
                                        local_a24 = local_a50;
                                        local_a28 = piVar15;
                                      }
                                      local_a28[local_a2c] = 0;
                                      local_a2c = local_a2c + 1;
                                      local_a10 = local_a10 + 1;
                                    }
LAB_006b0f6d:
                                    FUN_00647d10(iVar9 + 0x100,&DAT_00756d0c);
                                    *(undefined4 *)(iVar9 + 0x204) = 0;
                                    *(undefined4 *)(iVar9 + 0x200) = 0;
                                    *(undefined4 *)(iVar9 + 0x208) = 0;
                                    FUN_0063ea10(iVar6,s_GroupName_s_00756d14,iVar9 + 0x100);
                                    FUN_0063ea10(iVar6,s_StartFrame_d_00756d20,
                                                 (undefined4 *)(iVar9 + 0x200));
                                    FUN_0063ea10(iVar6,s_EndFrame_d_00756d30,
                                                 (undefined4 *)(iVar9 + 0x204));
                                    FUN_0063ea10(iVar6,s_IsAnimated_d_00756d3c,
                                                 (undefined4 *)(iVar9 + 0x208));
                                    local_a44 = local_a44 + 1;
                                    local_a40 = local_a40 + 0x40c;
                                  } while (local_a44 < param_1[0xb]);
                                }
                                local_4 = CONCAT31(local_4._1_3_,3);
                                FUN_006bf840(local_a28);
                                local_4 = 0xffffffff;
                                FUN_006bf840(local_a0c);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar8 = FUN_0063e510();
    }
    iVar8 = FUN_00643a60();
    if (iVar8 != 0) {
      iVar8 = 0;
      local_a44 = 0;
      local_a50 = iVar7;
      if (0 < param_1[0xb]) {
        do {
          iVar9 = 0;
          do {
            puVar1 = (undefined1 *)(local_a50 + iVar9);
            iVar14 = iVar8 + iVar9;
            iVar9 = iVar9 + 1;
            *(undefined1 *)(iVar14 + 0x20c + param_1[0xc]) = *puVar1;
          } while (iVar9 < 0x200);
          local_a44 = local_a44 + 1;
          iVar8 = iVar8 + 0x40c;
          local_a50 = local_a50 + 0x200;
        } while (local_a44 < param_1[0xb]);
      }
      FUN_0064ff40(iVar7,s_C__projects_meridian_xCore_Auxil_00756d4c,0x2d7);
      if (iVar6 != 0) {
        FUN_0063de30();
        FUN_006bf840(iVar6);
      }
      ExceptionList = local_c;
      return 1;
    }
  }
LAB_006b1065:
  if (iVar6 != 0) {
LAB_006b1069:
    FUN_0063de30();
    FUN_006bf840(iVar6);
  }
  ExceptionList = local_c;
  return 0;
}

