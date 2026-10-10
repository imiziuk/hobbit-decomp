
undefined4 * __thiscall FUN_0047b5f0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_26c;
  undefined1 local_268 [4];
  undefined4 local_264;
  undefined1 local_25c [536];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  uint local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d2108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(&local_26c,s__s_Fx_Type_0072828c,param_3);
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_18 = *(undefined4 *)(param_1 + 0x1c);
    local_264 = 0xc;
    *param_2 = 0xc;
    FUN_00424770(local_25c);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00649920(&local_26c,s__s_Magnitude_0072827c,param_3);
  local_4 = 1;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_14 = *(undefined4 *)(param_1 + 0x20);
LAB_0047b709:
    local_264 = 2;
    *param_2 = 2;
    FUN_00424770(local_25c);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00649920(&local_26c,s__s_Frequency_0072826c,param_3);
  local_4 = 2;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_14 = *(undefined4 *)(param_1 + 0x24);
    goto LAB_0047b709;
  }
  FUN_00649920(&local_26c,s__s_Rolling_00728260,param_3);
  local_4 = 3;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_10 = *(undefined4 *)(param_1 + 0x28);
  }
  else {
    FUN_00649920(&local_26c,s__s_Fadeout_00728254,param_3);
    local_4 = 4;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(param_4,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      FUN_00406a80();
    }
    else {
      FUN_00649920(&local_26c,s__s_Wipeout_007282b8,param_3);
      local_4 = 5;
      uVar2 = FUN_00649940();
      iVar3 = FUN_00647e40(param_4,uVar2);
      local_4 = 0xffffffff;
      FUN_00649950();
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      if (iVar3 != 0) {
        FUN_00649920(local_268,s__s_Color_00728248,param_3);
        local_4 = 6;
        uVar2 = FUN_00649940();
        local_26c = FUN_00647cf0(uVar2);
        iVar3 = FUN_00647e80(param_4,uVar2,local_26c);
        if (iVar3 == 0) {
          iVar3 = FUN_00647cf0(param_4);
          if (local_26c == iVar3) {
            local_41 = *(undefined1 *)(param_1 + 0x37);
            local_42 = *(undefined1 *)(param_1 + 0x36);
            local_43 = *(undefined1 *)(param_1 + 0x35);
            local_44 = *(undefined1 *)(param_1 + 0x34);
            local_264 = 0x11;
            bVar1 = true;
            goto LAB_0047ba47;
          }
          iVar3 = local_26c + param_4;
          iVar4 = FUN_00647e40(&DAT_00728244,iVar3);
          if (iVar4 == 0) {
            local_18 = (uint)*(byte *)(param_1 + 0x36);
            bVar1 = true;
            local_264 = 1;
            goto LAB_0047ba47;
          }
          iVar4 = FUN_00647e40(&DAT_00728240,iVar3);
          if (iVar4 == 0) {
            local_18 = (uint)*(byte *)(param_1 + 0x35);
            bVar1 = true;
            local_264 = 1;
            goto LAB_0047ba47;
          }
          iVar4 = FUN_00647e40(&DAT_0072823c,iVar3);
          if (iVar4 == 0) {
            local_18 = (uint)*(byte *)(param_1 + 0x34);
            bVar1 = true;
            local_264 = 1;
            goto LAB_0047ba47;
          }
          iVar3 = FUN_00647e40(&DAT_00728238,iVar3);
          if (iVar3 == 0) {
            local_18 = (uint)*(byte *)(param_1 + 0x37);
            bVar1 = true;
            local_264 = 1;
            goto LAB_0047ba47;
          }
        }
        bVar1 = false;
LAB_0047ba47:
        local_4 = 0xffffffff;
        FUN_00649950();
        if (bVar1) {
          *param_2 = local_264;
          FUN_00424770(local_25c);
          ExceptionList = local_c;
          return param_2;
        }
        FUN_00649920(local_268,s__s_Target__1_closed__0_open__00728218,param_3);
        local_4 = 7;
        uVar2 = FUN_00649940();
        iVar3 = FUN_00647e40(param_4,uVar2);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar3 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_14 = *(undefined4 *)(param_1 + 0x30);
          local_264 = 2;
          *param_2 = 2;
          FUN_00424770(local_25c);
          ExceptionList = local_c;
          return param_2;
        }
        FUN_00474d50(param_2,param_3,param_4);
        ExceptionList = local_c;
        return param_2;
      }
    }
    local_10 = *(undefined4 *)(param_1 + 0x2c);
  }
  local_264 = 3;
  *param_2 = 3;
  FUN_00424770(local_25c);
  ExceptionList = local_c;
  return param_2;
}

