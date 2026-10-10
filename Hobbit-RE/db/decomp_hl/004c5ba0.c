
undefined4 * __thiscall FUN_004c5ba0(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float local_4c0;
  undefined4 local_4bc [2];
  undefined4 local_4b4 [127];
  undefined1 local_2b5;
  undefined1 local_2b4 [24];
  undefined1 local_29c [4];
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  uint local_270;
  float local_26c;
  uint local_268;
  undefined4 local_264;
  undefined4 local_25c [134];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d496b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_rigid_instance__GetProperty_0072d064);
  local_4 = 0;
  iVar3 = FUN_00647ed0(param_3,s_CurrAnimIndex_0072cf74);
  if (iVar3 == 0) {
    local_4c0 = -1.0;
    if (*(int *)(param_1 + 0x140) != 0) {
      local_4c0 = (float)*(int *)(*(int *)(param_1 + 0x140) + 8);
    }
    FUN_00406a80();
    local_4bc[0] = 2;
    local_26c = local_4c0;
    *param_2 = 2;
    puVar7 = local_4b4;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647ed0(param_3,s_CurrentFrame_0072cf64);
  if (iVar3 == 0) {
    local_4c0 = 0.0;
    if (*(int *)(param_1 + 0x140) != 0) {
      local_4c0 = *(float *)(*(int *)(param_1 + 0x140) + 0x10);
    }
    FUN_00406a80();
    local_4bc[0] = 2;
    local_26c = local_4c0;
    *param_2 = 2;
    puVar7 = local_4b4;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s____Reset_Anim____0072cfb8);
  if (iVar3 == 0) {
    FUN_00406a80();
    puVar7 = local_4b4;
    local_4bc[0] = 3;
    local_268 = 1;
    *param_2 = 3;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Has_LOD_0072cf48);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x15a);
    local_4bc[0] = 3;
    *param_2 = 3;
    puVar7 = local_4b4;
    local_268 = bVar1 & 1;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Is_Ladder_0072cf3c);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x15a);
LAB_004c5d61:
    local_268 = bVar1 >> 1 & 1;
    puVar7 = local_4b4;
    local_4bc[0] = 3;
    *param_2 = 3;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Is_Vine_0072cf34);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x15a);
    puVar7 = local_4b4;
    local_4bc[0] = 3;
    *param_2 = 3;
    local_268 = (bVar1 & 4) >> 2;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Is_Hoistable_0072cf14);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x15a);
    local_4bc[0] = 3;
    *param_2 = 3;
    puVar7 = local_4b4;
    local_268 = (bVar1 & 0x10) >> 4;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Is_Leaf_Pile_0072cf24);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x15a);
    puVar7 = local_4b4;
    local_4bc[0] = 3;
    *param_2 = 3;
    local_268 = (bVar1 & 8) >> 3;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Is_Animating_0072cf04);
  if (iVar3 == 0) {
    FUN_00406a80();
    uVar2 = *(ushort *)(param_1 + 0x15a);
    puVar7 = local_4b4;
    local_4bc[0] = 3;
    *param_2 = 3;
    local_268 = (uVar2 & 0x4000) >> 0xe;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Is_Moving_Platform_0072cef0);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x15a);
    local_4bc[0] = 3;
    *param_2 = 3;
    puVar7 = local_4b4;
    local_268 = (bVar1 & 0x20) >> 5;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Is_Auto_Edge_Grabbable_0072ced8);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar1 = *(byte *)(param_1 + 0x15a);
    puVar7 = local_4b4;
    local_4bc[0] = 3;
    *param_2 = 3;
    local_268 = (bVar1 & 0x40) >> 6;
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Geometry_Resource_007299e4);
  if (iVar3 == 0) {
    FUN_00406a80();
    local_4bc[0] = 7;
    puVar4 = (undefined1 *)FUN_005493e0(param_1 + 0xbc);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0075b6e0;
    }
    FUN_00647d70(local_4b4,puVar4,0x200);
    puVar7 = local_4b4;
    local_2b5 = 0;
    *param_2 = local_4bc[0];
    goto LAB_004c6c19;
  }
  iVar3 = FUN_00647e40(param_3,s_Animation_Resource_00724f6c);
  if (iVar3 == 0) {
    FUN_00406a80();
    local_4bc[0] = 7;
    uVar5 = FUN_004c7170();
    FUN_00647d10(local_4b4,uVar5);
    puVar7 = local_4b4;
    *param_2 = local_4bc[0];
    goto LAB_004c6c19;
  }
  FUN_00406a80();
  iVar3 = FUN_00647cf0(s_Rotation_007207f0);
  iVar6 = FUN_00647e80(param_3,s_Rotation_007207f0,iVar3);
  if (iVar6 == 0) {
    iVar6 = FUN_00647cf0(param_3);
    if (iVar3 == iVar6) {
      local_288 = *(undefined4 *)(param_1 + 0x6c);
      local_284 = *(undefined4 *)(param_1 + 0x70);
      local_28c = *(undefined4 *)(param_1 + 0x68);
      local_4bc[0] = 0xb;
      puVar7 = local_4b4;
      *param_2 = 0xb;
      goto LAB_004c6c19;
    }
    iVar3 = iVar3 + param_3;
    iVar6 = FUN_004ad2b0(iVar3,local_4bc,s__Pitch_007207e8,(undefined4 *)(param_1 + 0x68));
    if (((iVar6 != 0) ||
        (iVar6 = FUN_004ad2b0(iVar3,local_4bc,&DAT_007207e0,param_1 + 0x6c), iVar6 != 0)) ||
       (iVar3 = FUN_004ad2b0(iVar3,local_4bc,s__Roll_007207d8,param_1 + 0x70), iVar3 != 0)) {
      puVar7 = local_4b4;
      *param_2 = local_4bc[0];
      goto LAB_004c6c19;
    }
  }
  FUN_00406a80();
  iVar3 = FUN_00647cf0(s_Scale_00725a04);
  iVar6 = FUN_00647e80(param_3,s_Scale_00725a04,iVar3);
  if (iVar6 != 0) {
LAB_004c620a:
    iVar3 = FUN_00647e40(param_3,s_AnimSpeed_00724c3c);
    if (iVar3 == 0) {
      FUN_00425440();
      local_4bc[0] = 2;
      if (*(int *)(param_1 + 0x140) == 0) {
        puVar7 = local_4b4;
        local_26c = 1.0;
        *param_2 = 2;
      }
      else {
        local_26c = *(float *)(*(int *)(param_1 + 0x140) + 0x80);
        puVar7 = local_4b4;
        *param_2 = 2;
      }
      goto LAB_004c6c19;
    }
    iVar3 = FUN_00647e40(param_3,s_LoopDelay_0072cb7c);
    if (iVar3 == 0) {
      FUN_00406a80();
      local_4bc[0] = 2;
      if (*(int *)(param_1 + 0x140) != 0) {
        local_26c = *(float *)(*(int *)(param_1 + 0x140) + 0x8c);
        puVar7 = local_4b4;
        *param_2 = 2;
        goto LAB_004c6c19;
      }
LAB_004c62d1:
      local_4bc[0] = 2;
      puVar7 = local_4b4;
      local_26c = 0.0;
      *param_2 = 2;
      goto LAB_004c6c19;
    }
    iVar3 = FUN_00647e40(param_3,s_IsLooping_0072cfa0);
    if (iVar3 == 0) {
      FUN_00406a80();
      local_4bc[0] = 3;
      if (*(int *)(param_1 + 0x140) == 0) {
        local_268 = 0;
        *param_2 = 3;
        puVar7 = local_4b4;
      }
      else {
        local_268 = *(uint *)(*(int *)(param_1 + 0x140) + 0x90);
        *param_2 = 3;
        puVar7 = local_4b4;
      }
      goto LAB_004c6c19;
    }
    iVar3 = FUN_00647e40(param_3,s_IsInterpolating_0072cf90);
    if (iVar3 == 0) {
      FUN_00406a80();
      local_4bc[0] = 3;
      if (*(int *)(param_1 + 0x140) != 0) {
        local_268 = *(uint *)(*(int *)(param_1 + 0x140) + 0x94);
        puVar7 = local_4b4;
        *param_2 = 3;
        goto LAB_004c6c19;
      }
    }
    else {
      iVar3 = FUN_00647e40(param_3,s_AnimOffset_0072cfac);
      if (iVar3 == 0) {
        FUN_00406a80();
        local_4bc[0] = 2;
        if (*(int *)(param_1 + 0x140) != 0) {
          local_26c = *(float *)(*(int *)(param_1 + 0x140) + 0x84);
          puVar7 = local_4b4;
          *param_2 = 2;
          goto LAB_004c6c19;
        }
        goto LAB_004c62d1;
      }
      iVar3 = FUN_00647e40(param_3,s_SETUP_INITIAL_ANIM_0072cf50);
      if (iVar3 != 0) {
        iVar3 = FUN_00647e40(param_3,s_Show_Path_0072cf84);
        if (iVar3 == 0) {
          FUN_00406a80();
          bVar1 = *(byte *)(param_1 + 0x15a);
          puVar7 = local_4b4;
          local_4bc[0] = 3;
          *param_2 = 3;
          local_268 = (uint)(bVar1 >> 7);
          goto LAB_004c6c19;
        }
        iVar3 = FUN_00647e40(param_3,s_Does_Float_0072cecc);
        if (iVar3 == 0) {
          FUN_00406a80();
          bVar1 = *(byte *)(param_1 + 0x15b);
          local_4bc[0] = 3;
          *param_2 = 3;
          puVar7 = local_4b4;
          local_268 = bVar1 & 1;
          goto LAB_004c6c19;
        }
        iVar3 = FUN_00647e40(s_Float_Y_Tweak_0072cebc,param_3);
        if (iVar3 == 0) {
          FUN_00406a80();
          puVar7 = local_4b4;
          local_4bc[0] = 2;
          local_26c = (float)(int)*(char *)(param_1 + 0x15c);
          *param_2 = 2;
          goto LAB_004c6c19;
        }
        iVar3 = FUN_00647e40(param_3,s_Is_Destructible_0072ceac);
        if (iVar3 == 0) {
          FUN_00406a80();
          uVar2 = *(ushort *)(param_1 + 0x15a);
          puVar7 = local_4b4;
          local_4bc[0] = 3;
          *param_2 = 3;
          local_268 = (uVar2 & 0x400) >> 10;
          goto LAB_004c6c19;
        }
        iVar3 = FUN_00647e40(param_3,s_Destructible_By_Bilbo_0072ce94);
        if (iVar3 == 0) {
          FUN_00406a80();
          bVar1 = *(byte *)(param_1 + 0x15d);
          local_4bc[0] = 3;
          *param_2 = 3;
          puVar7 = local_4b4;
          local_268 = (bVar1 & 4) >> 2;
          goto LAB_004c6c19;
        }
        iVar3 = FUN_00647e40(param_3,s_Destructible_By_NPC_0072ce80);
        if (iVar3 == 0) {
          FUN_00406a80();
          bVar1 = *(byte *)(param_1 + 0x15d);
          goto LAB_004c5d61;
        }
        iVar3 = FUN_00647e40(param_3,s_Pain_On_Destroy_0072ce70);
        if (iVar3 == 0) {
          FUN_00406a80();
          uVar2 = *(ushort *)(param_1 + 0x15a);
          puVar7 = local_4b4;
          local_4bc[0] = 3;
          *param_2 = 3;
          local_268 = (uVar2 & 0x800) >> 0xb;
          goto LAB_004c6c19;
        }
        iVar3 = FUN_00647e40(param_3,s_Is_Destroyed_0072ce24);
        if (iVar3 == 0) {
          FUN_00406a80();
          uVar2 = *(ushort *)(param_1 + 0x15a);
          local_4bc[0] = 3;
          *param_2 = 3;
          puVar7 = local_4b4;
          local_268 = (uVar2 & 0x1000) >> 0xc;
          goto LAB_004c6c19;
        }
        if (*(undefined4 **)(param_1 + 0x144) != (undefined4 *)0x0) {
          uVar5 = FUN_00434e80(**(undefined4 **)(param_1 + 0x144));
          FUN_0064a2e0(uVar5);
          iVar3 = FUN_00647e40(param_3,s_DestructGeometry_0072ce48);
          if (iVar3 == 0) {
            FUN_00406a80();
            iVar3 = *(int *)(param_1 + 0x144) + 8;
          }
          else {
            iVar3 = FUN_00647e40(param_3,s_DestructAnimation_0072ce34);
            if (iVar3 != 0) goto LAB_004c678a;
            FUN_00406a80();
            iVar3 = *(int *)(param_1 + 0x144) + 0xc;
          }
          local_4bc[0] = 7;
          puVar4 = (undefined1 *)FUN_005493e0(iVar3);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0075b6e0;
          }
          FUN_00647d70(local_4b4,puVar4,0x200);
          puVar7 = local_4b4;
          local_2b5 = 0;
          *param_2 = local_4bc[0];
          goto LAB_004c6c19;
        }
LAB_004c678a:
        iVar3 = FUN_00647ed0(param_3,s_DestructContentType_0072ce5c);
        if ((iVar3 == 0) &&
           (iVar3 = FUN_00647e40(param_3,s_DestructContentType_0072ce5c), iVar3 == 0)) {
          FUN_00406a80();
          local_4bc[0] = 0xd;
          FUN_00647d70(local_4b4,DAT_0075da14,0x200);
          puVar7 = local_4b4;
          local_2b5 = 0;
          *param_2 = local_4bc[0];
          goto LAB_004c6c19;
        }
        iVar3 = FUN_00647e40(param_3,s_Is_Plant_0072ce18);
        if (iVar3 == 0) {
          FUN_00406a80();
          bVar1 = *(byte *)(param_1 + 0x15d);
          puVar7 = local_4b4;
          local_4bc[0] = 3;
          *param_2 = 3;
          local_268 = bVar1 & 1;
          goto LAB_004c6c19;
        }
        iVar3 = FUN_00647e40(param_3,s_Plant_Geometry_Resource_0072ce00);
        if (iVar3 == 0) {
          FUN_00406a80();
          iVar3 = *(int *)(param_1 + 0x148);
          if (iVar3 == 0) {
            FUN_00647d10(local_4b4,&DAT_0075b6e0);
            puVar7 = local_4b4;
            *param_2 = local_4bc[0];
            goto LAB_004c6c19;
          }
        }
        else {
          iVar3 = FUN_00647e40(param_3,s_Plant_Animation_Resource_0072cde4);
          if (iVar3 != 0) {
            iVar3 = FUN_00647e40(param_3,s_Is_At_Last_Frame_0072cdd0);
            if (iVar3 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              bVar1 = *(byte *)(param_1 + 0x15d);
              local_4bc[0] = 3;
              *param_2 = 3;
              puVar7 = local_4b4;
              local_268 = (bVar1 & 8) >> 3;
              goto LAB_004c6c19;
            }
            iVar3 = FUN_00647e40(param_3,s_Lighting_Type_0072cdc0);
            if (iVar3 == 0) {
              FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
              FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
              local_4bc[0] = 1;
              local_270 = (uint)*(byte *)(param_1 + 0x15e);
              *param_2 = 1;
              puVar7 = local_4b4;
              puVar8 = param_2 + 2;
              for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              FUN_00480f60(local_2b4);
              FUN_00425250(local_29c);
              FUN_004357e0(&local_298);
              FUN_004357e0(&local_28c);
              param_2[0x92] = local_274;
              param_2[0x90] = local_27c;
              param_2[0x91] = local_278;
              param_2[0x95] = local_268;
              param_2[0x93] = local_270;
              param_2[0x94] = local_26c;
              local_4 = 0xffffffff;
              FUN_006501e0();
              ExceptionList = local_c;
              return param_2;
            }
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            iVar3 = FUN_00647cf0(s_Minimum_Ambient_0072cdb0);
            iVar6 = FUN_00647e80(param_3,s_Minimum_Ambient_0072cdb0,iVar3);
            if (iVar6 != 0) {
LAB_004c6c39:
              FUN_004d1720(param_2,param_3);
              local_4 = 0xffffffff;
              FUN_006501e0();
              ExceptionList = local_c;
              return param_2;
            }
            iVar6 = FUN_00647cf0(param_3);
            if (iVar3 == iVar6) {
              local_41 = *(undefined1 *)(param_1 + 0x85);
              local_42 = *(undefined1 *)(param_1 + 0x84);
              local_43 = *(undefined1 *)(param_1 + 0x83);
              local_44 = *(undefined1 *)(param_1 + 0x82);
              uVar5 = 0x11;
            }
            else {
              iVar3 = iVar3 + param_3;
              iVar6 = FUN_00647e40(&DAT_00728244,iVar3);
              if (iVar6 == 0) {
                local_18 = (uint)*(byte *)(param_1 + 0x84);
              }
              else {
                iVar6 = FUN_00647e40(&DAT_00728240,iVar3);
                if (iVar6 == 0) {
                  bVar1 = *(byte *)(param_1 + 0x83);
                }
                else {
                  iVar6 = FUN_00647e40(&DAT_0072823c,iVar3);
                  if (iVar6 == 0) {
                    local_18 = (uint)*(byte *)(param_1 + 0x82);
                    goto LAB_004c6bfc;
                  }
                  iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
                  if (iVar3 != 0) goto LAB_004c6c39;
                  bVar1 = *(byte *)(param_1 + 0x85);
                }
                local_18 = (uint)bVar1;
              }
LAB_004c6bfc:
              uVar5 = 1;
            }
            puVar7 = local_25c;
            local_264 = uVar5;
            goto LAB_004c6c0f;
          }
          FUN_00406a80();
          if (*(int *)(param_1 + 0x148) == 0) {
            FUN_00647d10(local_4b4,&DAT_0075b6e0);
            puVar7 = local_4b4;
            *param_2 = local_4bc[0];
            goto LAB_004c6c19;
          }
          iVar3 = *(int *)(param_1 + 0x148) + 4;
        }
        local_4bc[0] = 7;
        puVar4 = (undefined1 *)FUN_005493e0(iVar3);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_0075b6e0;
        }
        FUN_00647d10(local_4b4,puVar4);
        puVar7 = local_4b4;
        *param_2 = local_4bc[0];
        goto LAB_004c6c19;
      }
      FUN_00406a80();
    }
    local_4bc[0] = 3;
    puVar7 = local_4b4;
    local_268 = 1;
    *param_2 = 3;
    goto LAB_004c6c19;
  }
  iVar6 = FUN_00647cf0(param_3);
  if (iVar3 == iVar6) {
    local_298 = *(undefined4 *)(param_1 + 0x130);
    local_294 = *(undefined4 *)(param_1 + 0x134);
    local_290 = *(undefined4 *)(param_1 + 0x138);
    uVar5 = 8;
    local_4bc[0] = 8;
    puVar7 = local_4b4;
  }
  else {
    iVar3 = iVar3 + param_3;
    iVar6 = FUN_00647e40(&DAT_00724e78,iVar3);
    if (iVar6 == 0) {
      local_26c = *(float *)(param_1 + 0x130);
    }
    else {
      iVar6 = FUN_00647e40(&DAT_00724e74,iVar3);
      if (iVar6 == 0) {
        local_26c = *(float *)(param_1 + 0x134);
        uVar5 = 2;
        local_4bc[0] = 2;
        puVar7 = local_4b4;
        goto LAB_004c6c0f;
      }
      iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
      if (iVar3 != 0) goto LAB_004c620a;
      local_26c = *(float *)(param_1 + 0x138);
    }
    uVar5 = 2;
    local_4bc[0] = 2;
    puVar7 = local_4b4;
  }
LAB_004c6c0f:
  *param_2 = uVar5;
LAB_004c6c19:
  FUN_00424770(puVar7);
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return param_2;
}

