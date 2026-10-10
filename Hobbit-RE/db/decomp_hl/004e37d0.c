
undefined4 * __thiscall FUN_004e37d0(int param_1,undefined4 *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_270;
  float local_26c;
  float local_268;
  undefined1 local_264 [12];
  undefined4 local_258 [2];
  undefined1 local_250 [511];
  undefined1 local_51;
  float local_8;
  undefined4 local_4;
  
  FUN_00425440();
  local_270 = 1.0;
  local_26c = 1.0;
  local_268 = 1.0;
  iVar3 = FUN_00647cf0(s_Scale_00725a04);
  iVar4 = FUN_00647e80(param_3,s_Scale_00725a04,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_258[0] = 8;
      FUN_004357e0(&local_270);
      goto LAB_004e39bd;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00724e78,iVar3);
    if (iVar4 == 0) {
      local_8 = local_270;
      fVar2 = local_8;
    }
    else {
      iVar4 = FUN_00647e40(&DAT_00724e74,iVar3);
      if (iVar4 == 0) {
        local_8 = local_26c;
        fVar2 = local_8;
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
        fVar2 = local_268;
        if (iVar3 != 0) goto LAB_004e38b3;
      }
    }
  }
  else {
LAB_004e38b3:
    iVar3 = FUN_00647e40(param_3,s_Using_Only_BBox_0072e90c);
    if (iVar3 == 0) {
      FUN_00425440();
      local_258[0] = 3;
      local_4 = 0;
      *param_2 = 3;
      FUN_00424770(local_250);
      return param_2;
    }
    FUN_00425440();
    pfVar1 = (float *)(param_1 + 0xac);
    iVar3 = FUN_00647cf0(s_Half_Dimensions_0072e8fc);
    iVar4 = FUN_00647e80(param_3,s_Half_Dimensions_0072e8fc,iVar3);
    if (iVar4 != 0) {
LAB_004e39e6:
      FUN_00401f00(*pfVar1 + *pfVar1,*(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0xb0),
                   *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xb4));
      FUN_00425440();
      iVar3 = FUN_004d0700(param_3,local_258,s_Dimensions_0072e8f0,local_264);
      if (iVar3 != 0) {
        *param_2 = local_258[0];
        FUN_00424770(local_250);
        return param_2;
      }
      iVar3 = FUN_00647e40(param_3,&DAT_0072e8c4);
      if (iVar3 != 0) {
        FUN_004abdf0(param_2,param_3);
        return param_2;
      }
      FUN_00425440();
      local_258[0] = 0xd;
      FUN_00647d70(local_250,*(undefined4 *)(param_1 + 0xb8),0x200);
      local_51 = 0;
      *param_2 = local_258[0];
      FUN_00424770(local_250);
      return param_2;
    }
    iVar4 = FUN_00647cf0(param_3);
    if (iVar3 == iVar4) {
      local_258[0] = 8;
      FUN_004357e0(pfVar1);
      goto LAB_004e39bd;
    }
    iVar3 = iVar3 + param_3;
    iVar4 = FUN_00647e40(&DAT_00724e78,iVar3);
    if (iVar4 == 0) {
      fVar2 = *pfVar1;
    }
    else {
      iVar4 = FUN_00647e40(&DAT_00724e74,iVar3);
      if (iVar4 == 0) {
        fVar2 = *(float *)(param_1 + 0xb0);
      }
      else {
        iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
        if (iVar3 != 0) goto LAB_004e39e6;
        fVar2 = *(float *)(param_1 + 0xb4);
      }
    }
  }
  local_8 = fVar2;
  local_258[0] = 2;
LAB_004e39bd:
  *param_2 = local_258[0];
  FUN_00424770(local_250);
  return param_2;
}

