
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004e3380(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = 1.0;
  local_14 = 1.0;
  local_10 = 1.0;
  iVar4 = FUN_00647cf0(s_Scale_00725a04);
  iVar5 = FUN_00647e80(param_2,s_Scale_00725a04,iVar4);
  if (iVar5 == 0) {
    iVar5 = FUN_00647cf0(param_2);
    if (iVar4 == iVar5) {
      if (*param_3 != 8) goto LAB_004e34be;
      local_18 = (float)param_3[0x89];
      local_14 = (float)param_3[0x8a];
      fVar3 = (float)param_3[0x8b];
    }
    else {
      iVar4 = iVar4 + param_2;
      iVar5 = FUN_00647e40(&DAT_00724e78,iVar4);
      if (iVar5 == 0) {
        if (*param_3 != 2) goto LAB_004e34be;
        local_18 = (float)param_3[0x94];
        fVar3 = local_10;
      }
      else {
        iVar5 = FUN_00647e40(&DAT_00724e74,iVar4);
        if (iVar5 == 0) {
          if (*param_3 != 2) goto LAB_004e34be;
          local_14 = (float)param_3[0x94];
          fVar3 = local_10;
        }
        else {
          iVar4 = FUN_00647e40(&DAT_00724e70,iVar4);
          if ((iVar4 != 0) || (*param_3 != 2)) goto LAB_004e34be;
          fVar3 = (float)param_3[0x94];
        }
      }
    }
    param_1[0x2b] = (int)(local_18 * (float)param_1[0x2b]);
    param_1[0x2c] = (int)(local_14 * (float)param_1[0x2c]);
    param_1[0x2d] = (int)(fVar3 * (float)param_1[0x2d]);
    (**(code **)(*param_1 + 0x14))(param_1 + 5,0);
    FUN_004e2630();
    return 1;
  }
LAB_004e34be:
  iVar4 = FUN_00647e40(param_2,s_Using_Only_BBox_0072e90c);
  if (iVar4 == 0) {
    if (*param_3 != 3) {
      return 0;
    }
    param_1[0x39] = param_3[0x95];
    return 1;
  }
  pfVar2 = (float *)(param_1 + 0x2b);
  iVar4 = FUN_00647cf0(s_Half_Dimensions_0072e8fc);
  iVar5 = FUN_00647e80(param_2,s_Half_Dimensions_0072e8fc,iVar4);
  if (iVar5 == 0) {
    iVar5 = FUN_00647cf0(param_2);
    if (iVar4 == iVar5) {
      if (*param_3 == 8) {
        FUN_004357e0(param_3 + 0x89);
        return 1;
      }
    }
    else {
      iVar4 = iVar4 + param_2;
      iVar5 = FUN_00647e40(&DAT_00724e78,iVar4);
      if (iVar5 == 0) {
        if (*param_3 == 2) {
          *pfVar2 = (float)param_3[0x94];
          return 1;
        }
      }
      else {
        iVar5 = FUN_00647e40(&DAT_00724e74,iVar4);
        if (iVar5 == 0) {
          if (*param_3 == 2) {
            param_1[0x2c] = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar4 = FUN_00647e40(&DAT_00724e70,iVar4);
          if ((iVar4 == 0) && (*param_3 == 2)) {
            param_1[0x2d] = param_3[0x94];
            return 1;
          }
        }
      }
    }
  }
  iVar4 = FUN_00647e40(param_2,&DAT_0072e8c4);
  if ((iVar4 == 0) && (((iVar4 = *param_3, iVar4 == 0xd || (iVar4 == 4)) || (iVar4 == 0xe)))) {
    FUN_0064a2e0(param_3 + 2);
  }
  FUN_00401f00(*pfVar2 + *pfVar2,(float)param_1[0x2c] + (float)param_1[0x2c],
               (float)param_1[0x2d] + (float)param_1[0x2d]);
  iVar4 = FUN_004bfed0(param_2,param_3,s_Dimensions_0072e8f0,&local_c);
  if (iVar4 != 0) {
    if (local_c < DAT_006e92e8) {
      local_c = 1.0;
    }
    if (local_8 < DAT_006e92e8) {
      local_8 = 1.0;
    }
    if (local_4 < DAT_006e92e8) {
      local_4 = 1.0;
    }
    FUN_00401f00(local_c * _DAT_006e936c,local_8 * _DAT_006e936c,local_4 * _DAT_006e936c);
    param_1[0x2d] = (int)local_10;
    *pfVar2 = local_18;
    param_1[0x2c] = (int)local_14;
    FUN_004e2630();
  }
  uVar6 = FUN_004ab750(param_2,param_3);
  iVar4 = FUN_00647e80(param_2,s_Position_00724d1c,8);
  if ((iVar4 == 0) && (param_1[0x39] == 0)) {
    FUN_004e2630();
  }
  iVar4 = FUN_00647e80(param_2,s_Rotation_007207f0,8);
  if ((iVar4 == 0) && (param_1[0x39] != 0)) {
    FUN_004357e0(param_1 + 0xb);
    FUN_004357e0(param_1 + 0xe);
    piVar1 = param_1 + 5;
    FUN_0042faf0(piVar1);
    FUN_0042faf0(piVar1);
    uVar7 = FUN_0045bbd0(&local_18);
    FUN_004357e0(uVar7);
    param_1[0x39] = 0;
    FUN_004e2000(piVar1,pfVar2,param_1 + 0x1a);
  }
  return uVar6;
}

