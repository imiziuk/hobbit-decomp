
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004f11c0(int param_1,int param_2,int *param_3)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_00647cf0(s_Minimum_Color_0072f254);
  iVar4 = FUN_00647e80(param_2,s_Minimum_Color_0072f254,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_2);
    if (iVar3 == iVar4) {
      if (*param_3 == 0x11) {
        *(undefined1 *)(param_1 + 0x19b) = *(undefined1 *)((int)param_3 + 0x223);
        *(undefined1 *)(param_1 + 0x19a) = *(undefined1 *)((int)param_3 + 0x222);
        *(undefined1 *)(param_1 + 0x199) = *(undefined1 *)((int)param_3 + 0x221);
        *(char *)(param_1 + 0x198) = (char)param_3[0x88];
        return 1;
      }
    }
    else {
      iVar3 = iVar3 + param_2;
      iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
      if (iVar4 == 0) {
        if (*param_3 == 1) {
          *(char *)(param_1 + 0x19a) = (char)param_3[0x93];
          return 1;
        }
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
        if (iVar4 == 0) {
          if (*param_3 == 1) {
            *(char *)(param_1 + 0x199) = (char)param_3[0x93];
            return 1;
          }
        }
        else {
          iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
          if (iVar4 == 0) {
            if (*param_3 == 1) {
              *(char *)(param_1 + 0x198) = (char)param_3[0x93];
              return 1;
            }
          }
          else {
            iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
            if ((iVar3 == 0) && (*param_3 == 1)) {
              *(char *)(param_1 + 0x19b) = (char)param_3[0x93];
              return 1;
            }
          }
        }
      }
    }
  }
  iVar3 = FUN_00647e40(param_2,s_Breakable_by_Sting_0072f240);
  if (iVar3 == 0) {
    if (*param_3 == 3) {
      *(int *)(param_1 + 0x184) = param_3[0x95];
      return 1;
    }
    return 0;
  }
  iVar3 = FUN_00647e40(param_2,s_Breakable_by_Stick_0072f22c);
  if (iVar3 == 0) {
    if (*param_3 == 3) {
      *(int *)(param_1 + 0x188) = param_3[0x95];
      return 1;
    }
    return 0;
  }
  iVar3 = FUN_00647e40(param_2,s_Breakable_by_Stone_0072f218);
  if (iVar3 == 0) {
    if (*param_3 == 3) {
      *(int *)(param_1 + 0x18c) = param_3[0x95];
      return 1;
    }
    return 0;
  }
  iVar3 = FUN_00647e40(param_2,s_Breakable_by_any_pain_0072f200);
  if (iVar3 == 0) {
    if (*param_3 == 3) {
      *(int *)(param_1 + 400) = param_3[0x95];
      return 1;
    }
    return 0;
  }
  bVar2 = false;
  iVar3 = FUN_00647ed0(param_2,s_Rotation_X_00728c5c);
  if ((((((iVar3 == 0) || (iVar3 = FUN_00647ed0(param_2,s_Rotation_Z_00728c50), iVar3 == 0)) ||
        (iVar3 = FUN_00647ed0(param_2,s_Rotation_Y_00728c44), iVar3 == 0)) ||
       ((iVar3 = FUN_00647ed0(param_2,s_Rotation_007207f0), iVar3 == 0 ||
        (iVar3 = FUN_00647ed0(param_2,s_Scale_X_00728c1c), iVar3 == 0)))) ||
      ((iVar3 = FUN_00647ed0(param_2,s_Scale_Y_00728c14), iVar3 == 0 ||
       ((iVar3 = FUN_00647ed0(param_2,s_Scale_Z_00728c0c), iVar3 == 0 ||
        (iVar3 = FUN_00647ed0(param_2,s_WorldBBox_00724d10), iVar3 == 0)))))) ||
     ((iVar3 = FUN_00647ed0(param_2,s_Position_X_00728c00), iVar3 == 0 ||
      (((iVar3 = FUN_00647ed0(param_2,s_Position_Y_00728bf4), iVar3 == 0 ||
        (iVar3 = FUN_00647ed0(param_2,s_Position_Z_00728be8), iVar3 == 0)) ||
       (iVar3 = FUN_00647ed0(param_2,s_Position_00724d1c), iVar3 == 0)))))) {
    bVar2 = true;
  }
  iVar3 = FUN_00647e40(param_2,s_Texture_Resource_0072ee64);
  if (iVar3 == 0) {
    if ((*param_3 != 4) && (*param_3 != 7)) {
      return 0;
    }
    if ((char)param_3[2] != '\0') {
      FUN_00549430(param_1 + 0x158,param_3 + 2);
      *(undefined4 *)(param_1 + 0x1f0) = 0;
      return 1;
    }
    uVar5 = FUN_005496c0(s_WebWall1_xbmp_0072f054,&DAT_0071ef4c);
    FUN_00549430(param_1 + 0x158,uVar5);
    *(undefined4 *)(param_1 + 0x1f0) = 1;
    return 1;
  }
  iVar3 = FUN_00647e40(param_2,s_Blend_Mode_0072f1f4);
  if (iVar3 == 0) {
    if ((*param_3 != 0xc) && (*param_3 != 1)) {
      return 0;
    }
    iVar3 = param_3[0x93];
    *(int *)(param_1 + 0x180) = iVar3;
    if (iVar3 < 3) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0x180) = 2;
    return 1;
  }
  iVar3 = FUN_00647e40(param_2,s_Scale_X_00728c1c);
  if (iVar3 == 0) {
    fVar1 = (float)param_3[0x94] * *(float *)(param_1 + 0xd4);
    *(float *)(param_1 + 0xd4) = fVar1;
    if (fVar1 < DAT_006e92e8) {
      fVar1 = DAT_006e92e8;
    }
    *(float *)(param_1 + 0xd4) = fVar1;
  }
  else {
    iVar3 = FUN_00647e40(param_2,s_Scale_Y_00728c14);
    if (iVar3 == 0) {
      fVar1 = (float)param_3[0x94] * *(float *)(param_1 + 0xd8);
      *(float *)(param_1 + 0xd8) = fVar1;
      if (fVar1 < DAT_006e92e8) {
        fVar1 = DAT_006e92e8;
      }
      *(float *)(param_1 + 0xd8) = fVar1;
    }
    else {
      iVar3 = FUN_00647e40(param_2,s_Scale_Z_00728c0c);
      if (iVar3 == 0) {
        return 1;
      }
      iVar3 = FUN_00647e40(param_2,s___Cells_Wide_0072f1e4);
      if (iVar3 == 0) {
        iVar3 = param_3[0x93];
        iVar4 = *(int *)(param_1 + 0x164);
        *(int *)(param_1 + 0x164) = iVar3;
        if (iVar3 < 3) {
          iVar3 = 3;
        }
        *(int *)(param_1 + 0x164) = iVar3;
        if (iVar3 == iVar4) goto LAB_004f1873;
      }
      else {
        iVar3 = FUN_00647e40(param_2,s___Cells_High_0072f1d4);
        if (iVar3 == 0) {
          iVar3 = param_3[0x93];
          iVar4 = *(int *)(param_1 + 0x168);
          *(int *)(param_1 + 0x168) = iVar3;
          if (iVar3 < 2) {
            iVar3 = 2;
          }
          *(int *)(param_1 + 0x168) = iVar3;
          if (iVar3 == iVar4) goto LAB_004f1873;
        }
        else {
          iVar3 = FUN_00647e40(param_2,s_Texture_U_Tile_Amt_0072f1a8);
          if (iVar3 == 0) {
            fVar1 = (float)param_3[0x94];
            *(float *)(param_1 + 0x16c) = fVar1;
            if (fVar1 < _DAT_006e95a8) {
              fVar1 = _DAT_006e95a8;
            }
            *(float *)(param_1 + 0x16c) = fVar1;
          }
          else {
            iVar3 = FUN_00647e40(param_2,s_Texture_V_Tile_Amt_0072f194);
            if (iVar3 == 0) {
              fVar1 = (float)param_3[0x94];
              *(float *)(param_1 + 0x170) = fVar1;
              if (fVar1 < _DAT_006e95a8) {
                fVar1 = _DAT_006e95a8;
              }
              *(float *)(param_1 + 0x170) = fVar1;
            }
            else {
              iVar3 = FUN_00647e40(param_2,s_Freeze_Distance__cm__0072f17c);
              if (iVar3 == 0) {
                fVar1 = (float)param_3[0x94];
                *(float *)(param_1 + 0x174) = fVar1;
                if (fVar1 < DAT_006e92e8) {
                  fVar1 = DAT_006e92e8;
                }
                *(float *)(param_1 + 0x174) = fVar1;
              }
              else {
                iVar3 = FUN_00647e40(param_2,s_Sleep_Time__sec__0072f168);
                if (iVar3 == 0) {
                  fVar1 = (float)param_3[0x94];
                  *(float *)(param_1 + 0x178) = fVar1;
                  if (fVar1 < _DAT_006e95a8) {
                    fVar1 = _DAT_006e95a8;
                  }
                  *(float *)(param_1 + 0x178) = fVar1;
                }
                else {
                  iVar3 = FUN_00647e40(param_2,s_Collision_Response_Scale_0072f14c);
                  if (iVar3 == 0) {
                    fVar1 = (float)param_3[0x94];
                    *(float *)(param_1 + 0x17c) = fVar1;
                    if (fVar1 < DAT_006e92e4) {
                      fVar1 = DAT_006e92e4;
                    }
                    *(float *)(param_1 + 0x17c) = fVar1;
                    goto LAB_004f1873;
                  }
                  iVar3 = FUN_00647e40(param_2,s_Broken_0072f144);
                  if (iVar3 != 0) goto LAB_004f1873;
                  if (*param_3 != 3) {
                    return 0;
                  }
                  if (param_3[0x95] != 0) {
                    FUN_004ee6f0();
                    return 1;
                  }
                  *(undefined4 *)(param_1 + 0x1c8) = 0;
                  *(undefined1 *)(param_1 + 0x1d8) = 0xff;
                }
              }
            }
          }
        }
      }
    }
  }
  bVar2 = true;
LAB_004f1873:
  uVar5 = FUN_004e52c0(param_2,param_3);
  if (bVar2) {
    FUN_004ee720();
    FUN_004f03e0();
    return 1;
  }
  return uVar5;
}

