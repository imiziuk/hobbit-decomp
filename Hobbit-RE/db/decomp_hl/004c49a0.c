
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004c49a0(int *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  byte bVar12;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  float fStack_5c;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d494b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar6 = FUN_00647e40(param_2,s_Has_LOD_0072cf48);
  if (iVar6 == 0) {
    if (*param_3 == 3) {
      *(ushort *)((int)param_1 + 0x15a) =
           (byte)(*(byte *)(param_3 + 0x95) ^ (byte)*(ushort *)((int)param_1 + 0x15a)) & 1 ^
           *(ushort *)((int)param_1 + 0x15a);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Ladder_0072cf3c);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    uVar5 = (byte)((char)param_3[0x95] << 1 ^ (byte)*(ushort *)((int)param_1 + 0x15a)) & 2 ^
            *(ushort *)((int)param_1 + 0x15a);
    *(ushort *)((int)param_1 + 0x15a) = uVar5;
    if ((uVar5 & 2) != 0) {
      param_1[4] = param_1[4] | 0x2000;
      ExceptionList = local_c;
      return 1;
    }
    param_1[4] = param_1[4] & 0xffffdfff;
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Vine_0072cf34);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    uVar5 = (byte)((char)param_3[0x95] << 2 ^ (byte)*(ushort *)((int)param_1 + 0x15a)) & 4 ^
            *(ushort *)((int)param_1 + 0x15a);
    *(ushort *)((int)param_1 + 0x15a) = uVar5;
    if ((uVar5 & 4) == 0) {
      uVar7 = param_1[4] & 0xfffeffff;
    }
    else {
      uVar7 = param_1[4] | 0x10000;
    }
    param_1[4] = uVar7;
    if ((*(byte *)((int)param_1 + 0x15a) & 4) == 0) {
      ExceptionList = local_c;
      return 1;
    }
    *(byte *)((int)param_1 + 0x7a) = *(byte *)((int)param_1 + 0x7a) | 4;
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Hoistable_0072cf14);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    uVar5 = (byte)((char)param_3[0x95] << 4 ^ (byte)*(ushort *)((int)param_1 + 0x15a)) & 0x10 ^
            *(ushort *)((int)param_1 + 0x15a);
    *(ushort *)((int)param_1 + 0x15a) = uVar5;
    if ((uVar5 & 0x10) != 0) {
      param_1[4] = param_1[4] & 0xfffffffeU | 0x2000002;
      ExceptionList = local_c;
      return 1;
    }
    param_1[4] = param_1[4] & 0xfdffffff;
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Leaf_Pile_0072cf24);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    uVar5 = (byte)((char)param_3[0x95] << 3 ^ (byte)*(ushort *)((int)param_1 + 0x15a)) & 8 ^
            *(ushort *)((int)param_1 + 0x15a);
    *(ushort *)((int)param_1 + 0x15a) = uVar5;
    if ((uVar5 & 8) != 0) {
      param_1[4] = param_1[4] | 0x20000;
      ExceptionList = local_c;
      return 1;
    }
    param_1[4] = param_1[4] & 0xfffdffff;
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Animating_0072cf04);
  if (iVar6 == 0) {
    if (*param_3 == 3) {
      *(ushort *)((int)param_1 + 0x15a) =
           ((short)param_3[0x95] << 0xe ^ *(ushort *)((int)param_1 + 0x15a)) & 0x4000 ^
           *(ushort *)((int)param_1 + 0x15a);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Moving_Platform_0072cef0);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    uVar5 = (byte)((char)param_3[0x95] << 5 ^ (byte)*(ushort *)((int)param_1 + 0x15a)) & 0x20 ^
            *(ushort *)((int)param_1 + 0x15a);
    *(ushort *)((int)param_1 + 0x15a) = uVar5;
    if ((uVar5 & 0x20) == 0) {
      ExceptionList = local_c;
      return 1;
    }
    *(ushort *)((int)param_1 + 0x15a) = uVar5 | 0x40;
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Auto_Edge_Grabbable_0072ced8);
  if (iVar6 == 0) {
    if (*param_3 == 3) {
      *(ushort *)((int)param_1 + 0x15a) =
           (byte)((char)param_3[0x95] << 6 ^ (byte)*(ushort *)((int)param_1 + 0x15a)) & 0x40 ^
           *(ushort *)((int)param_1 + 0x15a);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s____Reset_Anim____0072cfb8);
  if (iVar6 == 0) {
    FUN_004c7660(0);
    goto LAB_004c5281;
  }
  iVar6 = FUN_00647e40(param_2,s_AnimSpeed_00724c3c);
  if (iVar6 == 0) {
    if (*param_3 == 2) {
      FUN_004c74d0(param_3[0x94]);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_CurrAnimIndex_0072cf74);
  if (iVar6 == 0) {
    if (*param_3 == 2) {
      uVar8 = __ftol();
      FUN_004c7660(uVar8);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_CurrentFrame_0072cf64);
  if (iVar6 == 0) {
    if (*param_3 == 2) {
      FUN_004c7580(param_3[0x94]);
      (**(code **)(*param_1 + 0x124))();
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_LoopDelay_0072cb7c);
  if (iVar6 == 0) {
    if (*param_3 == 2) {
      FUN_004c74f0(param_3[0x94]);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_IsLooping_0072cfa0);
  if (iVar6 == 0) {
    if (*param_3 == 3) {
      FUN_004c77d0(param_3[0x95]);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_IsInterpolating_0072cf90);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    if (param_1[0x50] == 0) {
      ExceptionList = local_c;
      return 1;
    }
    *(int *)(param_1[0x50] + 0x94) = param_3[0x95];
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_SETUP_INITIAL_ANIM_0072cf50);
  if (iVar6 == 0) {
    FUN_004c7660(0);
    goto LAB_004c5281;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Destructable_0072d054);
  if (iVar6 == 0) {
    FUN_004c7660(0);
    (**(code **)(*param_1 + 0x100))();
    (**(code **)(*param_1 + 0x124))();
  }
  iVar6 = FUN_00647e40(param_2,s_Show_Path_0072cf84);
  if (iVar6 == 0) {
    if (*param_3 == 3) {
      *(ushort *)((int)param_1 + 0x15a) =
           (byte)((char)param_3[0x95] << 7 ^ (byte)*(ushort *)((int)param_1 + 0x15a)) & 0x80 ^
           *(ushort *)((int)param_1 + 0x15a);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_AnimOffset_0072cfac);
  if (iVar6 == 0) {
    param_3 = (int *)param_3[0x94];
    if (DAT_006e92e8 < (float)param_3 != (NAN(DAT_006e92e8) || NAN((float)param_3))) {
      FUN_004c7520(0x3f800000);
      ExceptionList = local_c;
      return 1;
    }
    if ((float)param_3 < DAT_006e92e4) {
      param_3 = (int *)0x0;
    }
    FUN_004c7520(param_3);
    ExceptionList = local_c;
    return 1;
  }
  piVar9 = (int *)(**(code **)(*param_1 + 0x38))();
  iStack_50 = *piVar9;
  iStack_4c = piVar9[1];
  iStack_48 = piVar9[2];
  iStack_44 = piVar9[3];
  iStack_40 = piVar9[4];
  iStack_3c = piVar9[5];
  iVar6 = FUN_00647cf0(s_LocalBBox_00724d04);
  iVar10 = FUN_00647e80(param_2,s_LocalBBox_00724d04,iVar6);
  if (iVar10 == 0) {
    iVar10 = FUN_00647cf0(param_2);
    if (iVar6 == iVar10) {
      if (*param_3 == 9) {
        iStack_50 = param_3[0x82];
        iStack_4c = param_3[0x83];
        iStack_48 = param_3[0x84];
        FUN_004357e0(param_3 + 0x85);
LAB_004c502e:
        param_1[0xb] = iStack_50;
        param_1[0xc] = iStack_4c;
        param_1[0xd] = iStack_48;
        param_1[0xe] = iStack_44;
        param_1[0xf] = iStack_40;
        param_1[0x10] = iStack_3c;
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      iVar10 = FUN_004bfed0(iVar6 + param_2,param_3,&DAT_007278f4,&iStack_50);
      if ((iVar10 != 0) ||
         (iVar6 = FUN_004bfed0(iVar6 + param_2,param_3,&DAT_007278ec,&iStack_44), iVar6 != 0))
      goto LAB_004c502e;
    }
  }
  iVar6 = FUN_00647e40(param_2,s_Geometry_Resource_007299e4);
  if (iVar6 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      ExceptionList = local_c;
      return 0;
    }
    (**(code **)(*param_1 + 0xd0))(param_3 + 2);
    goto LAB_004c5281;
  }
  iVar6 = FUN_00647e40(param_2,s_Animation_Resource_00724f6c);
  if (iVar6 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      ExceptionList = local_c;
      return 0;
    }
    FUN_004c7010(param_3 + 2);
    goto LAB_004c5281;
  }
  iVar6 = FUN_00647cf0(s_Rotation_007207f0);
  iVar10 = FUN_00647e80(param_2,s_Rotation_007207f0,iVar6);
  if (iVar10 == 0) {
    iVar10 = FUN_00647cf0(param_2);
    if (iVar6 == iVar10) {
      if (*param_3 != 0xb) goto LAB_004c51a9;
      param_1[0x1a] = param_3[0x8c];
      param_1[0x1b] = param_3[0x8d];
      param_1[0x1c] = param_3[0x8e];
    }
    else {
      iVar6 = iVar6 + param_2;
      iVar10 = FUN_00647e40(iVar6,s__Pitch_007207e8);
      if ((iVar10 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
        param_1[0x1a] = param_3[0x94];
      }
      else {
        iVar10 = FUN_00647e40(iVar6,&DAT_007207e0);
        if ((iVar10 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
          param_1[0x1b] = param_3[0x94];
        }
        else {
          iVar6 = FUN_00647e40(iVar6,s__Roll_007207d8);
          if ((iVar6 != 0) || ((*param_3 != 2 && (*param_3 != 10)))) goto LAB_004c51a9;
          param_1[0x1c] = param_3[0x94];
        }
      }
    }
LAB_004c5273:
    (**(code **)(*param_1 + 0xf0))(param_1 + 0x1a);
LAB_004c5281:
    (**(code **)(*param_1 + 0x100))();
    (**(code **)(*param_1 + 0x124))();
    ExceptionList = local_c;
    return 1;
  }
LAB_004c51a9:
  fStack_5c = (float)param_1[0x4c];
  iVar6 = FUN_00647cf0(s_Scale_00725a04);
  iVar10 = FUN_00647e80(param_2,s_Scale_00725a04,iVar6);
  if (iVar10 == 0) {
    iVar10 = FUN_00647cf0(param_2);
    if (iVar6 == iVar10) {
      if (*param_3 == 8) {
        fVar2 = (float)param_3[0x89];
        goto LAB_004c5246;
      }
    }
    else {
      iVar6 = iVar6 + param_2;
      iVar10 = FUN_00647e40(&DAT_00724e78,iVar6);
      if (iVar10 == 0) {
        if (*param_3 == 2) {
          fVar2 = (float)param_3[0x94];
LAB_004c5246:
          if (fVar2 < _DAT_006e9350) {
            fVar2 = _DAT_006e9350;
          }
          param_1[0x4c] = (int)fVar2;
          param_1[0x4d] = (int)fVar2;
          param_1[0x4e] = (int)fVar2;
          goto LAB_004c5273;
        }
      }
      else {
        iVar10 = FUN_00647e40(&DAT_00724e74,iVar6);
        if (((iVar10 == 0) || (iVar6 = FUN_00647e40(&DAT_00724e70,iVar6), iVar6 == 0)) &&
           (fVar2 = fStack_5c, *param_3 == 2)) goto LAB_004c5246;
      }
    }
  }
  iStack_68 = param_1[5];
  iStack_64 = param_1[6];
  iStack_60 = param_1[7];
  iVar6 = FUN_00647cf0(s_Position_00724d1c);
  iVar10 = FUN_00647e80(param_2,s_Position_00724d1c,iVar6);
  if (iVar10 == 0) {
    iVar10 = FUN_00647cf0(param_2);
    if (iVar6 == iVar10) {
      if (*param_3 == 8) {
        iStack_68 = param_3[0x89];
        iStack_64 = param_3[0x8a];
        iStack_60 = param_3[0x8b];
        goto LAB_004c537d;
      }
    }
    else {
      iVar6 = iVar6 + param_2;
      iVar10 = FUN_00647e40(&DAT_00724e78,iVar6);
      if (iVar10 == 0) {
        if (*param_3 == 2) {
          iStack_68 = param_3[0x94];
          goto LAB_004c537d;
        }
      }
      else {
        iVar10 = FUN_00647e40(&DAT_00724e74,iVar6);
        if (iVar10 == 0) {
          if (*param_3 == 2) {
            iStack_64 = param_3[0x94];
LAB_004c537d:
            (**(code **)(*param_1 + 0x14))(&iStack_68,0);
            if ((float)param_1[5] < _DAT_006e9980 != (NAN((float)param_1[5]) || NAN(_DAT_006e9980)))
            {
              param_1[5] = -0x383cb000;
            }
            if (_DAT_006e997c < (float)param_1[5]) {
              param_1[5] = 0x47c35000;
            }
            if ((float)param_1[6] < _DAT_006e9980 != (NAN((float)param_1[6]) || NAN(_DAT_006e9980)))
            {
              param_1[6] = -0x383cb000;
            }
            if (_DAT_006e997c < (float)param_1[6]) {
              param_1[6] = 0x47c35000;
            }
            if ((float)param_1[7] < _DAT_006e9980 != (NAN((float)param_1[7]) || NAN(_DAT_006e9980)))
            {
              param_1[7] = -0x383cb000;
            }
            if (_DAT_006e997c < (float)param_1[7]) {
              param_1[7] = 0x47c35000;
            }
            (**(code **)(*param_1 + 0x100))();
            (**(code **)(*param_1 + 0x124))();
            ExceptionList = local_c;
            return 1;
          }
        }
        else {
          iVar6 = FUN_00647e40(&DAT_00724e70,iVar6);
          if ((iVar6 == 0) && (*param_3 == 2)) {
            iStack_60 = param_3[0x94];
            goto LAB_004c537d;
          }
        }
      }
    }
  }
  iVar6 = FUN_00647e40(param_2,s_Does_Float_0072cecc);
  if (iVar6 == 0) {
    if (*param_3 == 3) {
      *(ushort *)((int)param_1 + 0x15a) =
           ((ushort)*(byte *)(param_3 + 0x95) << 8 ^ *(ushort *)((int)param_1 + 0x15a)) & 0x100 ^
           *(ushort *)((int)param_1 + 0x15a);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  FUN_004c7930();
  iVar6 = FUN_00647e40(param_2,s_Float_Y_Tweak_0072cebc);
  if (iVar6 == 0) {
    if ((float)param_3[0x94] < _DAT_006e9998 != (NAN((float)param_3[0x94]) || NAN(_DAT_006e9998))) {
      uVar3 = __ftol();
      *(undefined1 *)(param_1 + 0x57) = uVar3;
      ExceptionList = local_c;
      return 1;
    }
    uVar3 = __ftol();
    *(undefined1 *)(param_1 + 0x57) = uVar3;
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Pain_On_Destroy_0072ce70);
  if (iVar6 == 0) {
    if (*param_3 == 3) {
      *(ushort *)((int)param_1 + 0x15a) =
           ((short)param_3[0x95] << 0xb ^ *(ushort *)((int)param_1 + 0x15a)) & 0x800 ^
           *(ushort *)((int)param_1 + 0x15a);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Destructible_0072ceac);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    uVar5 = ((short)param_3[0x95] << 10 ^ *(ushort *)((int)param_1 + 0x15a)) & 0x400 ^
            *(ushort *)((int)param_1 + 0x15a);
    *(ushort *)((int)param_1 + 0x15a) = uVar5;
    bVar4 = (byte)(uVar5 >> 10);
    bVar12 = (bVar4 << 2 ^ *(byte *)((int)param_1 + 0x15d)) & 4 ^ *(byte *)((int)param_1 + 0x15d);
    *(byte *)((int)param_1 + 0x15d) = (bVar4 << 1 ^ bVar12) & 2 ^ bVar12;
    if ((*(byte *)((int)param_1 + 0x15b) & 4) == 0) {
      iVar6 = param_1[0x51];
      if (iVar6 == 0) {
        ExceptionList = local_c;
        return 1;
      }
      puVar11 = (undefined4 *)(iVar6 + 0xc);
      uStack_4 = 0;
      FUN_00549580(puVar11);
      FUN_00549350(puVar11);
      *puVar11 = 0x7fffffff;
      puVar11 = (undefined4 *)(iVar6 + 8);
      uStack_4 = 0xffffffff;
      FUN_00549580(puVar11);
      FUN_00549350(puVar11);
      *puVar11 = 0x7fffffff;
      FUN_006bf840(iVar6);
      param_1[0x51] = 0;
      ExceptionList = local_c;
      return 1;
    }
    if (param_1[0x51] != 0) {
      ExceptionList = local_c;
      return 1;
    }
    puVar11 = (undefined4 *)operator_new(0x10);
    if (puVar11 != (undefined4 *)0x0) {
      puVar11[2] = 0x7fffffff;
      puVar11[3] = 0x7fffffff;
      *puVar11 = 0;
      puVar11[1] = 0xbf800000;
      param_1[0x51] = (int)puVar11;
      ExceptionList = local_c;
      return 1;
    }
    param_1[0x51] = 0;
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Destructible_By_Bilbo_0072ce94);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    *(byte *)((int)param_1 + 0x15d) =
         ((char)param_3[0x95] << 2 ^ *(byte *)((int)param_1 + 0x15d)) & 4 ^
         *(byte *)((int)param_1 + 0x15d);
  }
  iVar6 = FUN_00647e40(param_2,s_Destructible_By_NPC_0072ce80);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    *(byte *)((int)param_1 + 0x15d) =
         ((char)param_3[0x95] << 1 ^ *(byte *)((int)param_1 + 0x15d)) & 2 ^
         *(byte *)((int)param_1 + 0x15d);
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Destroyed_0072ce24);
  if (iVar6 == 0) {
    if (*param_3 == 3) {
      FUN_004c2f60(param_3[0x95],0);
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_Is_Plant_0072ce18);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    bVar4 = (*(byte *)(param_3 + 0x95) ^ *(byte *)((int)param_1 + 0x15d)) & 1 ^
            *(byte *)((int)param_1 + 0x15d);
    *(byte *)((int)param_1 + 0x15d) = bVar4;
    if ((bVar4 & 1) != 0) {
      if (param_1[0x52] == 0) {
        puVar11 = (undefined4 *)operator_new(8);
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          *puVar11 = 0x7fffffff;
          puVar11[1] = 0x7fffffff;
        }
        param_1[0x52] = (int)puVar11;
      }
      FUN_004d0a50();
      FUN_004d1cb0();
      param_1[4] = param_1[4] | 0x40000000;
      ExceptionList = local_c;
      return 1;
    }
    puVar11 = (undefined4 *)param_1[0x52];
    if (puVar11 != (undefined4 *)0x0) {
      puVar1 = puVar11 + 1;
      uStack_4 = 1;
      FUN_00549580(puVar1);
      FUN_00549350(puVar1);
      *puVar1 = 0x7fffffff;
      uStack_4 = 0xffffffff;
      FUN_00549580(puVar11);
      FUN_00549350(puVar11);
      *puVar11 = 0x7fffffff;
      FUN_006bf840(puVar11);
      param_1[0x52] = 0;
    }
    param_1[4] = param_1[4] & 0xbfffffff;
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Plant_Geometry_Resource_0072ce00);
  if (iVar6 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      ExceptionList = local_c;
      return 0;
    }
    if (param_1[0x52] == 0) {
      puVar11 = (undefined4 *)operator_new(8);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = 0x7fffffff;
        puVar11[1] = 0x7fffffff;
      }
      param_1[0x52] = (int)puVar11;
    }
    FUN_00549430(param_1[0x52],param_3 + 2);
  }
  iVar6 = FUN_00647e40(param_2,s_Plant_Animation_Resource_0072cde4);
  if (iVar6 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      ExceptionList = local_c;
      return 0;
    }
    if (param_1[0x52] == 0) {
      puVar11 = (undefined4 *)operator_new(8);
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = (undefined4 *)0x0;
      }
      else {
        *puVar11 = 0x7fffffff;
        puVar11[1] = 0x7fffffff;
      }
      param_1[0x52] = (int)puVar11;
    }
    FUN_00549430(param_1[0x52] + 4,param_3 + 2);
  }
  iVar6 = FUN_00647e40(param_2,s_Is_At_Last_Frame_0072cdd0);
  if (iVar6 == 0) {
    if (*param_3 != 3) {
      ExceptionList = local_c;
      return 0;
    }
    if (param_3[0x95] == 0) {
      ExceptionList = local_c;
      return 1;
    }
    iVar6 = param_1[0x50];
    if (iVar6 == 0) {
      ExceptionList = local_c;
      return 1;
    }
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x68) = 0;
    *(float *)(iVar6 + 0x10) = (float)(*(int *)(iVar6 + 0xc) + -2);
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Lighting_Type_0072cdc0);
  if (iVar6 == 0) {
    if ((*param_3 != 0xc) && (*param_3 != 1)) {
      ExceptionList = local_c;
      return 0;
    }
    *(char *)((int)param_1 + 0x15e) = (char)param_3[0x93];
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_Contents_Type_0072d044);
  if ((iVar6 == 0) || (iVar6 = FUN_00647e40(param_2,s_DestructContentType_0072ce5c), iVar6 == 0)) {
    if (*param_3 == 0xd) {
      uVar8 = FUN_00649b20(param_3 + 2);
      uStack_4 = 2;
      uVar8 = FUN_00434eb0(uVar8);
      *(undefined4 *)param_1[0x51] = uVar8;
      uStack_4 = 0xffffffff;
      FUN_00649ba0();
      ExceptionList = local_c;
      return 1;
    }
    ExceptionList = local_c;
    return 0;
  }
  iVar6 = FUN_00647e40(param_2,s_DestructGeometry_0072ce48);
  if (iVar6 == 0) {
    FUN_00549430(param_1[0x51] + 8,param_3 + 2);
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647e40(param_2,s_DestructAnimation_0072ce34);
  if (iVar6 == 0) {
    FUN_00549430(param_1[0x51] + 0xc,param_3 + 2);
    ExceptionList = local_c;
    return 1;
  }
  iVar6 = FUN_00647cf0(s_Minimum_Ambient_0072cdb0);
  iVar10 = FUN_00647e80(param_2,s_Minimum_Ambient_0072cdb0,iVar6);
  if (iVar10 == 0) {
    iVar10 = FUN_00647cf0(param_2);
    if (iVar6 == iVar10) {
      if (*param_3 == 0x11) {
        *(undefined1 *)((int)param_1 + 0x85) = *(undefined1 *)((int)param_3 + 0x223);
        *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((int)param_3 + 0x222);
        *(undefined1 *)((int)param_1 + 0x83) = *(undefined1 *)((int)param_3 + 0x221);
        *(char *)((int)param_1 + 0x82) = (char)param_3[0x88];
        ExceptionList = local_c;
        return 1;
      }
    }
    else {
      iVar6 = iVar6 + param_2;
      iVar10 = FUN_00647e40(&DAT_00728244,iVar6);
      if (iVar10 == 0) {
        if (*param_3 == 1) {
          *(char *)(param_1 + 0x21) = (char)param_3[0x93];
          ExceptionList = local_c;
          return 1;
        }
      }
      else {
        iVar10 = FUN_00647e40(&DAT_00728240,iVar6);
        if (iVar10 == 0) {
          if (*param_3 == 1) {
            *(char *)((int)param_1 + 0x83) = (char)param_3[0x93];
            ExceptionList = local_c;
            return 1;
          }
        }
        else {
          iVar10 = FUN_00647e40(&DAT_0072823c,iVar6);
          if (iVar10 == 0) {
            if (*param_3 == 1) {
              *(char *)((int)param_1 + 0x82) = (char)param_3[0x93];
              ExceptionList = local_c;
              return 1;
            }
          }
          else {
            iVar6 = FUN_00647e40(&DAT_00728238,iVar6);
            if ((iVar6 == 0) && (*param_3 == 1)) {
              *(char *)((int)param_1 + 0x85) = (char)param_3[0x93];
              ExceptionList = local_c;
              return 1;
            }
          }
        }
      }
    }
  }
  uVar8 = FUN_004d1430(param_2,param_3);
  ExceptionList = local_c;
  return uVar8;
}

