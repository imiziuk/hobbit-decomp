
void __thiscall FUN_004c3f80(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d491c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006501d0(s_rigid_instance__EnumeratePropert_0072d020);
  local_4 = 0;
  if (DAT_0072c7d4 != 0) {
    DAT_0072c7d4 = 0;
    FUN_00649b20(s_Basic___Ambient_only_0072d008);
    local_4._0_1_ = 1;
    piVar5 = DAT_0075d9cc;
    iVar2 = DAT_0075d9d0;
    if (DAT_0075d9d0 < DAT_0075d9c8 + 1) {
      if (DAT_0075d9d8 == 0) {
        iVar2 = DAT_0075d9d0 / 2;
        iVar7 = 1;
        if (0 < iVar2) {
          iVar7 = iVar2;
        }
        if (iVar7 + DAT_0075d9c8 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = DAT_0075d9c8 + iVar2;
        }
      }
      else {
        iVar2 = DAT_0075d9c8 + DAT_0075d9d8;
      }
      piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
      local_4._0_1_ = 2;
      if (piVar3 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = piVar3 + 1;
        *piVar3 = iVar2;
        FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4._0_1_ = 1;
      if (0 < DAT_0075d9c8) {
        iVar6 = 0;
        do {
          FUN_0064a320((int)DAT_0075d9cc + iVar6);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075d9c8);
      }
      if (DAT_0075d9cc != (int *)0x0) {
        FUN_00407f70(3);
      }
    }
    DAT_0075d9d0 = iVar2;
    DAT_0075d9cc = piVar5;
    FUN_0064a320(&local_38);
    DAT_0075d9c8 = DAT_0075d9c8 + 1;
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00649b20(s_Simple___Statics_as_single_0072cfec);
    local_4._0_1_ = 3;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 3;
    piVar5 = DAT_0075d9cc;
    iVar2 = DAT_0075d9d0;
    if (DAT_0075d9d0 < DAT_0075d9c8 + 1) {
      if (DAT_0075d9d8 == 0) {
        iVar2 = DAT_0075d9d0 / 2;
        iVar7 = 1;
        if (0 < iVar2) {
          iVar7 = iVar2;
        }
        if (iVar7 + DAT_0075d9c8 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = DAT_0075d9c8 + iVar2;
        }
      }
      else {
        iVar2 = DAT_0075d9c8 + DAT_0075d9d8;
      }
      piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
      local_4._0_1_ = 4;
      if (piVar3 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = piVar3 + 1;
        *piVar3 = iVar2;
        FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
      }
      iVar7 = 0;
      local_4._0_1_ = 3;
      if (0 < DAT_0075d9c8) {
        iVar6 = 0;
        do {
          FUN_0064a320((int)DAT_0075d9cc + iVar6);
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar7 < DAT_0075d9c8);
      }
      uVar1 = (undefined1)local_4;
      if (DAT_0075d9cc != (int *)0x0) {
        FUN_00407f70(3);
        uVar1 = (undefined1)local_4;
      }
    }
    local_4._0_1_ = uVar1;
    DAT_0075d9d0 = iVar2;
    DAT_0075d9cc = piVar5;
    FUN_0064a320(&local_38);
    DAT_0075d9c8 = DAT_0075d9c8 + 1;
    local_4._0_1_ = 0;
    FUN_00649ba0();
    FUN_00649b20(s_Complex___Statics_as_multiple_0072cfcc);
    local_4._0_1_ = 5;
    uVar1 = (undefined1)local_4;
    local_4._0_1_ = 5;
    piVar5 = DAT_0075d9cc;
    iVar2 = DAT_0075d9d0;
    if (DAT_0075d9d0 < DAT_0075d9c8 + 1) {
      if (DAT_0075d9d8 == 0) {
        iVar2 = DAT_0075d9d0 / 2;
        iVar7 = 1;
        if (0 < iVar2) {
          iVar7 = iVar2;
        }
        if (iVar7 + DAT_0075d9c8 < 1) {
          iVar2 = 1;
        }
        else {
          if (iVar2 < 1) {
            iVar2 = 1;
          }
          iVar2 = DAT_0075d9c8 + iVar2;
        }
      }
      else {
        iVar2 = DAT_0075d9c8 + DAT_0075d9d8;
      }
      piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
      local_4._0_1_ = 6;
      if (piVar3 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = piVar3 + 1;
        *piVar3 = iVar2;
        FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
      }
      local_4._0_1_ = 5;
      if (0 < DAT_0075d9c8) {
        iVar7 = 0;
        iVar6 = 0;
        do {
          FUN_0064a320((int)DAT_0075d9cc + iVar7);
          iVar6 = iVar6 + 1;
          iVar7 = iVar7 + 0x2c;
        } while (iVar6 < DAT_0075d9c8);
      }
      uVar1 = (undefined1)local_4;
      if (DAT_0075d9cc != (int *)0x0) {
        FUN_00407f70(3);
        uVar1 = (undefined1)local_4;
      }
    }
    local_4._0_1_ = uVar1;
    DAT_0075d9d0 = iVar2;
    DAT_0075d9cc = piVar5;
    FUN_0064a320(&local_38);
    DAT_0075d9c8 = DAT_0075d9c8 + 1;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649ba0();
    if (DAT_0075d9f0 == 0) {
      if (DAT_0075d9e8 != (int *)0x0) {
        FUN_00407f70(3);
      }
      DAT_0075d9e8 = (int *)0x0;
      DAT_0075d9ec = 0;
    }
    DAT_0075d9e4 = 0;
    local_5c = 0;
    iVar2 = FUN_00434e50();
    if (0 < iVar2) {
      do {
        uVar4 = FUN_00434e80(local_5c);
        FUN_00649b20(uVar4);
        local_4._0_1_ = 7;
        piVar5 = DAT_0075d9e8;
        iVar2 = DAT_0075d9ec;
        if (DAT_0075d9ec < DAT_0075d9e4 + 1) {
          if (DAT_0075d9f4 == 0) {
            iVar2 = DAT_0075d9ec / 2;
            iVar7 = 1;
            if (0 < iVar2) {
              iVar7 = iVar2;
            }
            if (iVar7 + DAT_0075d9e4 < 1) {
              iVar2 = 1;
            }
            else {
              if (iVar2 < 1) {
                iVar2 = 1;
              }
              iVar2 = iVar2 + DAT_0075d9e4;
            }
          }
          else {
            iVar2 = DAT_0075d9e4 + DAT_0075d9f4;
          }
          piVar3 = (int *)operator_new(iVar2 * 0x2c + 4);
          local_4._0_1_ = 8;
          if (piVar3 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            piVar5 = piVar3 + 1;
            *piVar3 = iVar2;
            FUN_006c043b(piVar5,0x2c,iVar2,FUN_006499d0,FUN_00649ba0);
          }
          iVar7 = 0;
          local_4._0_1_ = 7;
          if (0 < DAT_0075d9e4) {
            iVar6 = 0;
            do {
              FUN_0064a320((int)DAT_0075d9e8 + iVar6);
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + 0x2c;
            } while (iVar7 < DAT_0075d9e4);
          }
          if (DAT_0075d9e8 != (int *)0x0) {
            FUN_00407f70(3);
          }
        }
        DAT_0075d9ec = iVar2;
        DAT_0075d9e8 = piVar5;
        FUN_0064a320(&local_38);
        DAT_0075d9e4 = DAT_0075d9e4 + 1;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00649ba0();
        local_5c = local_5c + 1;
        iVar2 = FUN_00434e50();
      } while (local_5c < iVar2);
    }
  }
  FUN_004d1180(param_2);
  local_2c = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_24 = 0;
  local_38 = 0;
  local_34 = 0;
  local_4 = CONCAT31(local_4._1_3_,9);
  local_44 = 0x7f7fffff;
  local_40 = 0x7f7fffff;
  local_3c = 0x7f7fffff;
  FUN_00401f00(0x800000,0x800000,0x800000);
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    FUN_00647d10(iVar2,s_Scale_00725a04);
    *(undefined4 *)(iVar2 + 0x80) = 8;
    FUN_004357e0(&local_50);
    FUN_004357e0(&local_44);
    *(undefined4 *)(iVar2 + 0x84) = 3;
    iVar2 = FUN_00425010();
    FUN_00647d10(iVar2,s_Scale_00725a04);
    FUN_00647dc0(iVar2,&DAT_00724e78);
    *(undefined4 *)(iVar2 + 0x80) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = local_50;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar2 + 0x84) = 0x12;
    iVar2 = FUN_00425010();
    FUN_00647d10(iVar2,s_Scale_00725a04);
    FUN_00647dc0(iVar2,&DAT_00724e74);
    *(undefined4 *)(iVar2 + 0x80) = 2;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar2 + 0xf8) = local_4c;
    *(undefined4 *)(iVar2 + 0x84) = 0x16;
    iVar2 = FUN_00425010();
    FUN_00647d10(iVar2,s_Scale_00725a04);
    FUN_00647dc0(iVar2,&DAT_00724e70);
    *(undefined4 *)(iVar2 + 0x80) = 2;
    *(undefined4 *)(iVar2 + 0xf8) = local_48;
    *(undefined4 *)(iVar2 + 0xfc) = 0x7f7fffff;
    *(undefined4 *)(iVar2 + 0x84) = 0x16;
  }
  if (0 < *(int *)(param_2 + 8)) {
    iVar2 = 0;
    iVar7 = 0;
    do {
      iVar6 = FUN_00647e40(*(int *)(param_2 + 0xc) + iVar2,s_Position_Z_00728be8);
      iVar7 = iVar7 + 1;
      if (iVar6 == 0) {
        FUN_0049ab20(iVar7,&local_38);
        break;
      }
      iVar2 = iVar2 + 0x108;
    } while (iVar7 < *(int *)(param_2 + 8));
  }
  if (DAT_0075d338 == 0) {
    iVar2 = FUN_00425010();
    *(undefined4 *)(iVar2 + 0x80) = 7;
    FUN_00647d10(iVar2,s_Geometry_Resource_007299e4);
    *(undefined4 *)(iVar2 + 0x84) = 2;
    *(undefined4 *)(iVar2 + 0x100) = 1;
    *(undefined4 *)(iVar2 + 0x104) = 0;
  }
  FUN_004f1e00(param_2,s_Animation_Resource_00724f6c,3,1,2);
  if (*(int *)(param_1 + 0x140) != 0) {
    FUN_005669e0(param_2,s____Reset_Anim____0072cfb8,0x12);
    FUN_00537ff0(param_2,s_AnimSpeed_00724c3c,0x22,0x800000,0x7f7fffff);
    FUN_00537ff0(param_2,s_AnimOffset_0072cfac,0x22,0x800000,0x7f7fffff);
    FUN_00537ff0(param_2,s_LoopDelay_0072cb7c,2,0x800000,0x7f7fffff);
    FUN_005669e0(param_2,s_IsLooping_0072cfa0,0x22);
    FUN_005669e0(param_2,s_IsInterpolating_0072cf90,2);
    FUN_005669e0(param_2,s_Show_Path_0072cf84,2);
    FUN_00537ff0(param_2,s_CurrAnimIndex_0072cf74,0x34,0x800000,0x7f7fffff);
    FUN_00537ff0(param_2,s_CurrentFrame_0072cf64,0x34,0x800000,0x7f7fffff);
    FUN_005669e0(param_2,s_SETUP_INITIAL_ANIM_0072cf50,10);
  }
  FUN_005669e0(param_2,s_Has_LOD_0072cf48,2);
  FUN_005669e0(param_2,s_Is_Ladder_0072cf3c,2);
  FUN_005669e0(param_2,s_Is_Vine_0072cf34,2);
  FUN_005669e0(param_2,s_Is_Leaf_Pile_0072cf24,2);
  FUN_005669e0(param_2,s_Is_Hoistable_0072cf14,2);
  FUN_005669e0(param_2,s_Is_Animating_0072cf04,0x22);
  FUN_005669e0(param_2,s_Is_Moving_Platform_0072cef0,2);
  FUN_005669e0(param_2,s_Is_Auto_Edge_Grabbable_0072ced8,2);
  FUN_005669e0(param_2,s_Does_Float_0072cecc,2);
  FUN_00537ff0(param_2,s_Float_Y_Tweak_0072cebc,2,0x800000,0x7f7fffff);
  FUN_005669e0(param_2,s_Is_Destructible_0072ceac,2);
  if ((*(byte *)(param_1 + 0x15b) & 4) != 0) {
    FUN_005669e0(param_2,s_Destructible_By_Bilbo_0072ce94,2);
    FUN_005669e0(param_2,s_Destructible_By_NPC_0072ce80,2);
    FUN_005669e0(param_2,s_Pain_On_Destroy_0072ce70,2);
    FUN_00538050(param_2,s_DestructContentType_0072ce5c,&DAT_0075d9dc,2);
    FUN_004f1e00(param_2,s_DestructGeometry_0072ce48,1,1,2);
    FUN_004f1e00(param_2,s_DestructAnimation_0072ce34,3,1,2);
    FUN_005669e0(param_2,s_Is_Destroyed_0072ce24,0x38);
  }
  FUN_005669e0(param_2,s_Is_Plant_0072ce18,2);
  if ((*(byte *)(param_1 + 0x15d) & 1) != 0) {
    FUN_004f1e00(param_2,s_Plant_Geometry_Resource_0072ce00,1,0,2);
    FUN_004f1e00(param_2,s_Plant_Animation_Resource_0072cde4,3,0,2);
  }
  FUN_005669e0(param_2,s_Is_At_Last_Frame_0072cdd0,0x38);
  iVar2 = FUN_004c71a0();
  if (iVar2 != 0) {
    FUN_00496020(param_2,s_Lighting_Type_0072cdc0,&DAT_0075d9c0,2);
  }
  FUN_0048b8e0(param_2,s_Minimum_Ambient_0072cdb0,2);
  if (local_24 != 2) {
    FUN_006bf840(local_2c);
  }
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = local_c;
  return;
}

