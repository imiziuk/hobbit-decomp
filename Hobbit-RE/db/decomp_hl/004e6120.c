
undefined4 * __thiscall FUN_004e6120(int param_1,undefined4 *param_2,int param_3)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_4c4;
  int local_4c0;
  undefined4 local_4bc;
  undefined1 local_4b4 [540];
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  int local_270;
  undefined4 local_26c;
  uint local_268;
  undefined4 local_264;
  undefined4 local_25c [128];
  undefined1 local_5c [24];
  undefined1 local_44 [4];
  undefined1 local_40 [12];
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d5a7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00647e40(param_3,s_Scale_00725a04);
  if (iVar3 == 0) {
    if (*(float *)(param_1 + 0xd8) < *(float *)(param_1 + 0xd4) ==
        (NAN(*(float *)(param_1 + 0xd8)) || NAN(*(float *)(param_1 + 0xd4)))) {
      fVar1 = *(float *)(param_1 + 0xd8);
    }
    else {
      fVar1 = *(float *)(param_1 + 0xd4);
    }
    if (fVar1 <= *(float *)(param_1 + 0xdc)) {
      local_4c4 = *(undefined4 *)(param_1 + 0xdc);
    }
    else if (*(float *)(param_1 + 0xd8) < *(float *)(param_1 + 0xd4) ==
             (NAN(*(float *)(param_1 + 0xd8)) || NAN(*(float *)(param_1 + 0xd4)))) {
      local_4c4 = *(undefined4 *)(param_1 + 0xd8);
    }
    else {
      local_4c4 = *(undefined4 *)(param_1 + 0xd4);
    }
    FUN_00406a80();
    local_298 = local_4c4;
    local_294 = local_4c4;
    local_4bc = 8;
    local_290 = local_4c4;
    *param_2 = 8;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00406a80();
  iVar3 = FUN_00647cf0(&DAT_0072ea50);
  iVar4 = FUN_00647e80(param_3,&DAT_0072ea50,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_298 = *(undefined4 *)(param_1 + 0xd4);
      local_294 = *(undefined4 *)(param_1 + 0xd8);
      local_290 = *(undefined4 *)(param_1 + 0xdc);
      local_4bc = 8;
      goto LAB_004e62dc;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00724e78,iVar3);
    if (iVar4 == 0) {
      local_26c = *(undefined4 *)(param_1 + 0xd4);
    }
    else {
      iVar4 = FUN_00647e40(&DAT_00724e74,iVar3);
      if (iVar4 == 0) {
        local_26c = *(undefined4 *)(param_1 + 0xd8);
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
        if (iVar3 != 0) goto LAB_004e62fb;
        local_26c = *(undefined4 *)(param_1 + 0xdc);
      }
    }
    local_4bc = 2;
LAB_004e62dc:
    *param_2 = local_4bc;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
LAB_004e62fb:
  iVar3 = FUN_00647e40(param_3,s_ApplyToBilbo_0072ea3c);
  if (iVar3 == 0) {
    FUN_00425440();
    bVar2 = *(byte *)(param_1 + 0x154);
    local_4bc = 3;
    *param_2 = 3;
    local_268 = bVar2 & 1;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_ApplyToNPC_0072ea30);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar2 = *(byte *)(param_1 + 0x154);
    local_4bc = 3;
    *param_2 = 3;
    local_268 = (bVar2 & 4) >> 2;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_ApplyToPushBox_0072ea20);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar2 = *(byte *)(param_1 + 0x154);
    local_4bc = 3;
    *param_2 = 3;
    local_268 = bVar2 >> 1 & 1;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_ApplyToHoisting_0072ea10);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar2 = *(byte *)(param_1 + 0x154);
    local_4bc = 3;
    *param_2 = 3;
    local_268 = (bVar2 & 0x40) >> 6;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_ApplyToCamera_0072e9bc);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar2 = *(byte *)(param_1 + 0x154);
    local_4bc = 3;
    *param_2 = 3;
    local_268 = (bVar2 & 8) >> 3;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Blocks_Sight_0072ea8c);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar2 = *(byte *)(param_1 + 0x154);
    local_4bc = 3;
    *param_2 = 3;
    local_268 = (bVar2 & 0x10) >> 4;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Occluder_0072e9f8);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar2 = *(byte *)(param_1 + 0x154);
    local_4bc = 3;
    *param_2 = 3;
    local_268 = (bVar2 & 0x20) >> 5;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_Climbable_0072ea80);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar2 = *(byte *)(param_1 + 0x155);
    local_4bc = 3;
    *param_2 = 3;
    local_268 = bVar2 & 1;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  iVar3 = FUN_00647e40(param_3,s_DeathFall_0072e9e0);
  if (iVar3 == 0) {
    FUN_00406a80();
    bVar2 = *(byte *)(param_1 + 0x154);
    local_4bc = 3;
    *param_2 = 3;
    local_268 = (uint)(bVar2 >> 7);
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00406a80();
  iVar3 = FUN_00647cf0(s_Plane_Normal_0072ea70);
  iVar4 = FUN_00647e80(param_3,s_Plane_Normal_0072ea70,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_4bc = 8;
      FUN_004357e0((undefined4 *)(param_1 + 0xa8));
    }
    else {
      iVar3 = iVar3 + param_3;
      iVar4 = FUN_00647e40(&DAT_00724e78,iVar3);
      if (iVar4 == 0) {
        local_26c = *(undefined4 *)(param_1 + 0xa8);
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00724e74,iVar3);
        if (iVar4 == 0) {
          local_26c = *(undefined4 *)(param_1 + 0xac);
        }
        else {
          iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
          if (iVar3 != 0) goto LAB_004e66ee;
          local_26c = *(undefined4 *)(param_1 + 0xb0);
        }
      }
      local_4bc = 2;
    }
    *param_2 = local_4bc;
    FUN_00424770(local_4b4);
  }
  else {
LAB_004e66ee:
    iVar3 = FUN_00647e40(param_3,s_Plane_D_0072ea68);
    if (iVar3 == 0) {
      FUN_00425440();
      local_26c = *(undefined4 *)(param_1 + 0xb4);
      local_4bc = 2;
      *param_2 = 2;
      FUN_00424770(local_4b4);
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc0);
      local_4c0 = iVar3;
      iVar4 = FUN_00647e40(param_3,s_ApplyToGuidsCount_0072e9a8);
      if (iVar4 == 0) {
        FUN_00406a80();
        local_4bc = 1;
        *param_2 = 1;
        local_270 = iVar3;
        FUN_00424770(local_4b4);
      }
      else {
        iVar4 = 0;
        if (0 < iVar3) {
          do {
            FUN_00649920(&local_4c4,s_ApplyToGuid_02d_0072e998,iVar4);
            local_4 = 0;
            uVar5 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar5);
            local_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              local_264 = 0xf;
              local_24 = *(undefined4 *)(*(int *)(param_1 + 0xc4) + iVar4 * 8);
              local_20 = *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4 + iVar4 * 8);
              *param_2 = 0xf;
              puVar6 = local_25c;
              puVar7 = param_2 + 2;
              for (iVar3 = 0x80; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar7 = *puVar6;
                puVar6 = puVar6 + 1;
                puVar7 = puVar7 + 1;
              }
              FUN_00480f60(local_5c);
              FUN_00425250(local_44);
              FUN_004357e0(local_40);
              FUN_004357e0(local_34);
              param_2[0x91] = local_20;
              param_2[0x90] = local_24;
              param_2[0x92] = local_1c;
              param_2[0x94] = local_14;
              param_2[0x93] = local_18;
              param_2[0x95] = local_10;
              ExceptionList = local_c;
              return param_2;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_4c0);
        }
        FUN_004abdf0(param_2,param_3);
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

