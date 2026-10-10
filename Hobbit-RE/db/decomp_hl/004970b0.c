
undefined4 * __thiscall FUN_004970b0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_258 [2];
  undefined1 local_250 [540];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00406a80();
  iVar1 = FUN_00647cf0(s_Scale_00725a04);
  iVar2 = FUN_00647e80(param_3,s_Scale_00725a04,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      local_258[0] = 8;
      local_34 = 0x3f800000;
      local_30 = 0x3f800000;
      local_2c = 0x3f800000;
      goto LAB_0049716f;
    }
    iVar1 = iVar1 + param_3;
    iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
      if (iVar2 != 0) {
        iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
        if (iVar1 != 0) goto LAB_00497198;
      }
    }
    local_258[0] = 2;
    local_8 = 0x3f800000;
LAB_0049716f:
    *param_2 = local_258[0];
    FUN_00424770(local_250);
    return param_2;
  }
LAB_00497198:
  iVar1 = FUN_00647e40(param_3,s_Moveable_End_00729c3c);
  if (iVar1 == 0) {
    FUN_00406a80();
    local_c = *(undefined4 *)(param_1 + 0xc0);
    local_258[0] = 0xc;
    *param_2 = 0xc;
    FUN_00424770(local_250);
    return param_2;
  }
  FUN_00406a80();
  iVar1 = FUN_00647cf0(&DAT_00729c04);
  iVar2 = FUN_00647e80(param_3,&DAT_00729c04,iVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00647cf0(param_3);
    if (iVar1 == iVar2) {
      local_258[0] = 8;
      FUN_004357e0((undefined4 *)(param_1 + 0xa8));
    }
    else {
      iVar1 = iVar1 + param_3;
      iVar2 = FUN_00647e40(&DAT_00724e78,iVar1);
      if (iVar2 == 0) {
        local_8 = *(undefined4 *)(param_1 + 0xa8);
      }
      else {
        iVar2 = FUN_00647e40(&DAT_00724e74,iVar1);
        if (iVar2 == 0) {
          local_8 = *(undefined4 *)(param_1 + 0xac);
        }
        else {
          iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
          if (iVar1 != 0) goto LAB_004972d1;
          local_8 = *(undefined4 *)(param_1 + 0xb0);
        }
      }
      local_258[0] = 2;
    }
    *param_2 = local_258[0];
    FUN_00424770(local_250);
    return param_2;
  }
LAB_004972d1:
  FUN_00425440();
  iVar1 = FUN_004d0700(param_3,local_258,&DAT_00729bfc,param_1 + 0xb4);
  if (iVar1 != 0) {
    FUN_00463a40(local_258);
    return param_2;
  }
  FUN_004abdf0(param_2,param_3);
  return param_2;
}

