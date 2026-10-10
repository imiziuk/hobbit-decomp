
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004e52c0(int *param_1,int param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  float local_30;
  int local_2c;
  void *local_28;
  float local_24;
  float local_20;
  void *pvStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006d5a58;
  local_14 = ExceptionList;
  iVar7 = param_1[0x30];
  ExceptionList = &local_14;
  iVar3 = FUN_00647e40(param_2,s_Scale_00725a04);
  if (iVar3 == 0) {
    if (*param_3 == 8) {
      local_24 = (float)param_3[0x89];
      local_20 = (float)param_3[0x8a];
      fVar1 = local_20;
      if (local_20 < local_24) {
        fVar1 = local_24;
      }
      local_30 = (float)param_3[0x8b];
      if (((float)param_3[0x8b] < fVar1) && (local_30 = local_20, local_20 < local_24)) {
        local_30 = local_24;
      }
      fVar1 = DAT_006e92e4;
      if (((float)param_1[0x36] <= (float)param_1[0x35]) &&
         ((float)param_1[0x37] <= (float)param_1[0x35])) {
        fVar1 = local_30 / (float)param_1[0x35];
      }
      if (((float)param_1[0x35] <= (float)param_1[0x36]) &&
         ((float)param_1[0x37] <= (float)param_1[0x36])) {
        fVar1 = local_30 / (float)param_1[0x36];
      }
      if (((float)param_1[0x35] <= (float)param_1[0x37]) &&
         ((float)param_1[0x36] <= (float)param_1[0x37])) {
        fVar1 = local_30 / (float)param_1[0x37];
      }
      param_1[0x35] = (int)(fVar1 * (float)param_1[0x35]);
      param_1[0x36] = (int)(fVar1 * (float)param_1[0x36]);
      param_1[0x37] = (int)(fVar1 * (float)param_1[0x37]);
      fVar1 = _DAT_006ed4e0;
      if ((float)param_1[0x35] <= _DAT_006ed4e0) {
        fVar1 = (float)param_1[0x35];
      }
      param_1[0x35] = (int)fVar1;
      fVar2 = _DAT_006ed4e0;
      if ((float)param_1[0x36] <= _DAT_006ed4e0) {
        fVar2 = (float)param_1[0x36];
      }
      param_1[0x36] = (int)fVar2;
      if (fVar1 < DAT_006e92e8 != (NAN(fVar1) || NAN(DAT_006e92e8))) {
        fVar1 = DAT_006e92e8;
      }
      param_1[0x35] = (int)fVar1;
      if (fVar2 < DAT_006e92e8 != (NAN(fVar2) || NAN(DAT_006e92e8))) {
        fVar2 = DAT_006e92e8;
      }
      iVar7 = *param_1;
      param_1[0x36] = (int)fVar2;
      param_1[0x37] = 0x40a00000;
      uVar4 = (**(code **)(iVar7 + 0x28))(0);
      (**(code **)(iVar7 + 0x14))(uVar4);
      ExceptionList = pvStack_1c;
      return 1;
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar5 = FUN_00647cf0(s_Position_00724d1c);
  iVar3 = FUN_00647e80(param_2,s_Position_00724d1c,iVar5);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar5 == iVar3) {
      if (*param_3 == 8) {
        param_1[5] = param_3[0x89];
        param_1[6] = param_3[0x8a];
        param_1[7] = param_3[0x8b];
        goto LAB_004e5601;
      }
    }
    else {
      iVar5 = iVar5 + param_2;
      iVar3 = FUN_00647e40(&DAT_00724e78,iVar5);
      if (iVar3 == 0) {
        if (*param_3 == 2) {
          param_1[5] = param_3[0x94];
          goto LAB_004e5601;
        }
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e74,iVar5);
        if (iVar3 == 0) {
          if (*param_3 == 2) {
            param_1[6] = param_3[0x94];
LAB_004e5601:
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
            iVar7 = *param_1;
            uVar4 = (**(code **)(iVar7 + 0x28))(0);
            (**(code **)(iVar7 + 0x14))(uVar4);
            ExceptionList = pvStack_1c;
            return 1;
          }
        }
        else {
          iVar3 = FUN_00647e40(&DAT_00724e70,iVar5);
          if ((iVar3 == 0) && (*param_3 == 2)) {
            param_1[7] = param_3[0x94];
            goto LAB_004e5601;
          }
        }
      }
    }
  }
  iVar5 = FUN_00647cf0(s_Rotation_007207f0);
  iVar3 = FUN_00647e80(param_2,s_Rotation_007207f0,iVar5);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar5 == iVar3) {
      if (*param_3 == 0xb) {
        param_1[0x1a] = param_3[0x8c];
        param_1[0x1b] = param_3[0x8d];
        param_1[0x1c] = param_3[0x8e];
        goto LAB_004e5797;
      }
    }
    else {
      iVar5 = iVar5 + param_2;
      iVar3 = FUN_00647e40(iVar5,s__Pitch_007207e8);
      if ((iVar3 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
        param_1[0x1a] = param_3[0x94];
LAB_004e5797:
        iVar7 = *param_1;
        uVar4 = (**(code **)(iVar7 + 0x28))(0);
        (**(code **)(iVar7 + 0x14))(uVar4);
        ExceptionList = pvStack_1c;
        return 1;
      }
      iVar3 = FUN_00647e40(iVar5,&DAT_007207e0);
      if ((iVar3 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
        param_1[0x1b] = param_3[0x94];
        goto LAB_004e5797;
      }
      iVar3 = FUN_00647e40(iVar5,s__Roll_007207d8);
      if ((iVar3 == 0) && ((*param_3 == 2 || (*param_3 == 10)))) {
        param_1[0x1c] = param_3[0x94];
        goto LAB_004e5797;
      }
    }
  }
  iVar5 = FUN_00647cf0(&DAT_0072ea50);
  iVar3 = FUN_00647e80(param_2,&DAT_0072ea50,iVar5);
  if (iVar3 == 0) {
    iVar3 = FUN_00647cf0(param_2);
    if (iVar5 == iVar3) {
      if (*param_3 == 8) {
        param_1[0x35] = param_3[0x89];
        param_1[0x36] = param_3[0x8a];
        param_1[0x37] = param_3[0x8b];
        goto LAB_004e58b2;
      }
    }
    else {
      iVar5 = iVar5 + param_2;
      iVar3 = FUN_00647e40(&DAT_00724e78,iVar5);
      if (iVar3 == 0) {
        if (*param_3 == 2) {
          param_1[0x35] = param_3[0x94];
          goto LAB_004e58b2;
        }
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e74,iVar5);
        if (iVar3 == 0) {
          if (*param_3 == 2) {
            param_1[0x36] = param_3[0x94];
LAB_004e58b2:
            iVar7 = *param_1;
            param_1[0x37] = 0x40a00000;
            uVar4 = (**(code **)(iVar7 + 0x28))(0);
            (**(code **)(iVar7 + 0x14))(uVar4);
            ExceptionList = pvStack_1c;
            return 1;
          }
        }
        else {
          iVar3 = FUN_00647e40(&DAT_00724e70,iVar5);
          if ((iVar3 == 0) && (*param_3 == 2)) {
            param_1[0x37] = param_3[0x94];
            goto LAB_004e58b2;
          }
        }
      }
    }
  }
  iVar3 = FUN_00647ed0(s_Occluder_0072e9f8,param_2);
  if (iVar3 == 0) {
    *(ushort *)(param_1 + 0x55) =
         (byte)((char)param_3[0x95] << 5 ^ (byte)*(ushort *)(param_1 + 0x55)) & 0x20 ^
         *(ushort *)(param_1 + 0x55);
    ExceptionList = local_14;
    return 1;
  }
  iVar3 = FUN_00647e40(param_2,s_ApplyToGuidsCount_0072e9a8);
  if (iVar3 == 0) {
    if (*param_3 != 1) {
      ExceptionList = local_14;
      return 0;
    }
    local_2c = param_3[0x93];
    iVar7 = param_1[0x30];
    if (iVar7 < local_2c) {
      if (iVar7 < local_2c) {
        local_2c = local_2c - iVar7;
        do {
          iVar7 = param_1[0x30];
          if (param_1[0x32] < iVar7 + 1) {
            if (param_1[0x34] == 0) {
              iVar5 = param_1[0x32] / 2;
              iVar3 = 1;
              if (0 < iVar5) {
                iVar3 = iVar5;
              }
              if (iVar3 + iVar7 < 1) {
                local_30 = 1.4013e-45;
              }
              else {
                if (iVar5 < 1) {
                  iVar5 = 1;
                }
                local_30 = (float)(iVar5 + iVar7);
              }
            }
            else {
              local_30 = (float)(param_1[0x34] + iVar7);
            }
            pvVar6 = operator_new((int)local_30 * 8);
            iVar7 = 0;
            if (0 < param_1[0x30]) {
              do {
                iVar3 = param_1[0x31];
                *(undefined4 *)((int)pvVar6 + iVar7 * 8) = *(undefined4 *)(iVar3 + iVar7 * 8);
                *(undefined4 *)((int)pvVar6 + iVar7 * 8 + 4) =
                     *(undefined4 *)(iVar3 + 4 + iVar7 * 8);
                iVar7 = iVar7 + 1;
              } while (iVar7 < param_1[0x30]);
            }
            FUN_006bf840(param_1[0x31]);
            param_1[0x31] = (int)pvVar6;
            param_1[0x32] = (int)local_30;
          }
          iVar7 = param_1[0x30];
          iVar3 = param_1[0x31];
          *(undefined4 *)(iVar3 + iVar7 * 8) = 0;
          *(undefined4 *)(iVar3 + 4 + iVar7 * 8) = 0;
          local_2c = local_2c + -1;
          param_1[0x30] = param_1[0x30] + 1;
        } while (local_2c != 0);
        ExceptionList = local_14;
        return 1;
      }
    }
    else if (local_2c < iVar7) {
      iVar7 = param_1[0x32];
      iVar3 = iVar7;
      if (iVar7 < local_2c) {
        iVar3 = local_2c;
      }
      if (iVar3 != iVar7) {
        local_28 = operator_new(iVar3 << 3);
        iVar7 = 0;
        if (0 < param_1[0x30]) {
          do {
            iVar5 = param_1[0x31];
            *(undefined4 *)((int)local_28 + iVar7 * 8) = *(undefined4 *)(iVar5 + iVar7 * 8);
            *(undefined4 *)((int)local_28 + iVar7 * 8 + 4) = *(undefined4 *)(iVar5 + 4 + iVar7 * 8);
            iVar7 = iVar7 + 1;
          } while (iVar7 < param_1[0x30]);
        }
        FUN_006bf840(param_1[0x31]);
        param_1[0x31] = (int)local_28;
        param_1[0x32] = iVar3;
      }
      param_1[0x30] = local_2c;
    }
    ExceptionList = local_14;
    return 1;
  }
  local_30 = 0.0;
  if (0 < iVar7) {
    do {
      FUN_00649920(&local_28,s_ApplyToGuid_02d_0072e998,local_30);
      local_c = 0;
      uVar4 = FUN_00649940();
      iVar3 = FUN_00647e40(param_2,uVar4);
      local_c = 0xffffffff;
      FUN_00649950();
      if (iVar3 == 0) {
        if ((*param_3 != 0xf) && (*param_3 != 0x10)) {
          ExceptionList = local_14;
          return 0;
        }
        iVar7 = param_1[0x31];
        *(int *)(iVar7 + (int)local_30 * 8) = param_3[0x90];
        *(int *)(iVar7 + 4 + (int)local_30 * 8) = param_3[0x91];
        ExceptionList = local_14;
        return 1;
      }
      local_30 = (float)((int)local_30 + 1);
    } while ((int)local_30 < iVar7);
  }
  iVar7 = FUN_00647e40(param_2,s_ApplyToBilbo_0072ea3c);
  if (iVar7 == 0) {
    if (*param_3 == 3) {
      *(ushort *)(param_1 + 0x55) =
           (byte)(*(byte *)(param_3 + 0x95) ^ (byte)*(ushort *)(param_1 + 0x55)) & 1 ^
           *(ushort *)(param_1 + 0x55);
      ExceptionList = local_14;
      return 1;
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar7 = FUN_00647e40(param_2,s_ApplyToNPC_0072ea30);
  if (iVar7 == 0) {
    if (*param_3 == 3) {
      *(ushort *)(param_1 + 0x55) =
           (byte)((char)param_3[0x95] << 2 ^ (byte)*(ushort *)(param_1 + 0x55)) & 4 ^
           *(ushort *)(param_1 + 0x55);
      ExceptionList = local_14;
      return 1;
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar7 = FUN_00647e40(param_2,s_ApplyToPushBox_0072ea20);
  if (iVar7 == 0) {
    if (*param_3 == 3) {
      *(ushort *)(param_1 + 0x55) =
           (byte)((char)param_3[0x95] << 1 ^ (byte)*(ushort *)(param_1 + 0x55)) & 2 ^
           *(ushort *)(param_1 + 0x55);
      ExceptionList = local_14;
      return 1;
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar7 = FUN_00647e40(param_2,s_ApplyToHoisting_0072ea10);
  if (iVar7 == 0) {
    if (*param_3 == 3) {
      *(ushort *)(param_1 + 0x55) =
           (byte)((char)param_3[0x95] << 6 ^ (byte)*(ushort *)(param_1 + 0x55)) & 0x40 ^
           *(ushort *)(param_1 + 0x55);
      ExceptionList = local_14;
      return 1;
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar7 = FUN_00647e40(param_2,s_ApplyToCamera_0072e9bc);
  if (iVar7 == 0) {
    if (*param_3 == 3) {
      *(ushort *)(param_1 + 0x55) =
           (byte)((char)param_3[0x95] << 3 ^ (byte)*(ushort *)(param_1 + 0x55)) & 8 ^
           *(ushort *)(param_1 + 0x55);
      ExceptionList = local_14;
      return 1;
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar7 = FUN_00647e40(param_2,s_Blocks_Sight_0072ea8c);
  if (iVar7 != 0) {
    iVar7 = FUN_00647e40(param_2,s_DeathFall_0072e9e0);
    if (iVar7 == 0) {
      if (*param_3 == 3) {
        *(ushort *)(param_1 + 0x55) =
             (byte)((char)param_3[0x95] << 7 ^ (byte)*(ushort *)(param_1 + 0x55)) & 0x80 ^
             *(ushort *)(param_1 + 0x55);
        ExceptionList = local_14;
        return 1;
      }
      ExceptionList = local_14;
      return 0;
    }
    iVar7 = FUN_00647e40(param_2,s_Climbable_0072ea80);
    if (iVar7 == 0) {
      if (*param_3 == 3) {
        *(ushort *)(param_1 + 0x55) =
             ((ushort)*(byte *)(param_3 + 0x95) << 8 ^ *(ushort *)(param_1 + 0x55)) & 0x100 ^
             *(ushort *)(param_1 + 0x55);
        ExceptionList = local_14;
        return 1;
      }
      ExceptionList = local_14;
      return 0;
    }
    iVar7 = FUN_00647cf0(s_Plane_Normal_0072ea70);
    iVar3 = FUN_00647e80(param_2,s_Plane_Normal_0072ea70,iVar7);
    if (iVar3 == 0) {
      iVar3 = FUN_00647cf0(param_2);
      if (iVar7 == iVar3) {
        if (*param_3 == 8) {
          param_1[0x2a] = param_3[0x89];
          param_1[0x2b] = param_3[0x8a];
          param_1[0x2c] = param_3[0x8b];
          ExceptionList = local_14;
          return 1;
        }
      }
      else {
        iVar7 = iVar7 + param_2;
        iVar3 = FUN_00647e40(&DAT_00724e78,iVar7);
        if (iVar3 == 0) {
          if (*param_3 == 2) {
            param_1[0x2a] = param_3[0x94];
            ExceptionList = local_14;
            return 1;
          }
        }
        else {
          iVar3 = FUN_00647e40(&DAT_00724e74,iVar7);
          if (iVar3 == 0) {
            if (*param_3 == 2) {
              param_1[0x2b] = param_3[0x94];
              ExceptionList = local_14;
              return 1;
            }
          }
          else {
            iVar7 = FUN_00647e40(&DAT_00724e70,iVar7);
            if ((iVar7 == 0) && (*param_3 == 2)) {
              param_1[0x2c] = param_3[0x94];
              ExceptionList = local_14;
              return 1;
            }
          }
        }
      }
    }
    iVar7 = FUN_00647e40(param_2,s_Plane_D_0072ea68);
    if (iVar7 != 0) {
      uVar4 = FUN_004ab750(param_2,param_3);
      ExceptionList = local_14;
      return uVar4;
    }
    if (*param_3 == 2) {
      param_1[0x2d] = param_3[0x94];
      ExceptionList = local_14;
      return 1;
    }
    ExceptionList = local_14;
    return 0;
  }
  if (*param_3 == 3) {
    *(ushort *)(param_1 + 0x55) =
         (byte)((char)param_3[0x95] << 4 ^ (byte)*(ushort *)(param_1 + 0x55)) & 0x10 ^
         *(ushort *)(param_1 + 0x55);
    ExceptionList = local_14;
    return 1;
  }
  ExceptionList = local_14;
  return 0;
}

