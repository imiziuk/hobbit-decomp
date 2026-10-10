
undefined4 * __thiscall FUN_004790e0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_4c4 [4];
  int local_4c0;
  undefined4 local_4bc [2];
  undefined1 local_4b4 [540];
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264 [147];
  undefined4 local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1de5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4c0 = param_1;
  FUN_00649920(local_4c4,s__s_Camera_Type_00727fc4,param_3);
  local_4 = 0;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_270 = *(undefined4 *)(param_1 + 0x1c);
    local_4bc[0] = 0xc;
    *param_2 = 0xc;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00649920(local_4c4,s__s_Camera_Path_00727fb4,param_3);
  local_4 = 1;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_27c = *(undefined4 *)(param_1 + 0x20);
    local_278 = *(undefined4 *)(param_1 + 0x24);
    local_4bc[0] = 0xf;
    *param_2 = 0xf;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00649920(local_4c4,s__s_Target_00727fa8,param_3);
  local_4 = 2;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_27c = *(undefined4 *)(param_1 + 0x20);
    local_278 = *(undefined4 *)(param_1 + 0x24);
    local_4bc[0] = 0x10;
    *param_2 = 0x10;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00649920(local_4c4,s__s_Relative_To_Target_00727f7c,param_3);
  local_4 = 3;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_268 = *(undefined4 *)(param_1 + 0x60);
LAB_00479329:
    local_4bc[0] = 3;
    *param_2 = 3;
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00649920(local_4c4,s__s_Transition_00727ee4,param_3);
  local_4 = 4;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_268 = *(undefined4 *)(param_1 + 0x68);
    goto LAB_00479329;
  }
  FUN_00649920(local_4c4,s__s_Looping_00727ed8,param_3);
  local_4 = 5;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    FUN_00406a80();
    local_268 = *(undefined4 *)(param_1 + 100);
    goto LAB_00479329;
  }
  FUN_00649920(local_4c4,s__s_Static_Camera_00727f94,param_3);
  local_4 = 6;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  local_4 = 0xffffffff;
  FUN_00649950();
  FUN_00406a80();
  if (iVar3 == 0) {
    local_268 = *(undefined4 *)(param_1 + 0x6c);
    goto LAB_00479329;
  }
  FUN_00649920(local_4c4,s__s_Start_Orient_00727f40,param_3);
  local_4 = 7;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647cf0(uVar2);
  iVar4 = FUN_00647e80(param_4,uVar2,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_4);
    if (iVar3 == iVar4) {
      local_28c = *(undefined4 *)(param_1 + 0x28);
      local_288 = *(undefined4 *)(param_1 + 0x2c);
      local_284 = *(undefined4 *)(param_1 + 0x30);
      local_4bc[0] = 0xb;
      bVar6 = true;
    }
    else {
      iVar3 = iVar3 + param_4;
      iVar4 = FUN_004ad2b0(iVar3,local_4bc,s__Pitch_007207e8,(undefined4 *)(param_1 + 0x28));
      if (iVar4 == 0) {
        iVar4 = FUN_004ad2b0(iVar3,local_4bc,&DAT_007207e0,param_1 + 0x2c);
        if (iVar4 == 0) {
          iVar3 = FUN_004ad2b0(iVar3,local_4bc,s__Roll_007207d8,param_1 + 0x30);
          bVar6 = iVar3 != 0;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
      }
    }
  }
  else {
    bVar6 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar6) {
    *param_2 = local_4bc[0];
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00406a80();
  iVar4 = local_4c0;
  puVar1 = (undefined4 *)(local_4c0 + 0x34);
  FUN_00649920(local_4c4,s__s_End_Orient_00727f20,param_3);
  local_4 = 8;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647cf0(uVar2);
  iVar5 = FUN_00647e80(param_4,uVar2,iVar3);
  if (iVar5 == 0) {
    iVar5 = FUN_00647cf0(param_4);
    if (iVar3 == iVar5) {
      local_28c = *puVar1;
      local_288 = *(undefined4 *)(iVar4 + 0x38);
      local_284 = *(undefined4 *)(iVar4 + 0x3c);
      local_4bc[0] = 0xb;
      bVar6 = true;
    }
    else {
      iVar3 = param_4 + iVar3;
      iVar5 = FUN_004ad2b0(iVar3,local_4bc,s__Pitch_007207e8,puVar1);
      if (iVar5 == 0) {
        iVar5 = FUN_004ad2b0(iVar3,local_4bc,&DAT_007207e0,iVar4 + 0x38);
        if (iVar5 == 0) {
          iVar3 = FUN_004ad2b0(iVar3,local_4bc,s__Roll_007207d8,iVar4 + 0x3c);
          bVar6 = iVar3 != 0;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
      }
    }
  }
  else {
    bVar6 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar6) {
    *param_2 = local_4bc[0];
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00406a80();
  FUN_00649920(local_4c4,s__s_Start_Offset_00727f30,param_3);
  local_4 = 9;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647cf0(uVar2);
  iVar4 = FUN_00647e80(param_4,uVar2,iVar3);
  if (iVar4 == 0) {
    iVar4 = FUN_00647cf0(param_4);
    if (iVar3 == iVar4) {
      local_298 = *(undefined4 *)(local_4c0 + 0x40);
      local_294 = *(undefined4 *)(local_4c0 + 0x44);
      local_290 = *(undefined4 *)(local_4c0 + 0x48);
      local_4bc[0] = 8;
      bVar6 = true;
    }
    else {
      iVar3 = iVar3 + param_4;
      iVar4 = FUN_00647e40(&DAT_00724e78,iVar3);
      if (iVar4 == 0) {
        local_26c = *(undefined4 *)(local_4c0 + 0x40);
        local_4bc[0] = 2;
        bVar6 = true;
      }
      else {
        iVar4 = FUN_00647e40(&DAT_00724e74,iVar3);
        if (iVar4 == 0) {
          local_26c = *(undefined4 *)(local_4c0 + 0x44);
          local_4bc[0] = 2;
          bVar6 = true;
        }
        else {
          iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
          if (iVar3 != 0) goto LAB_004797f0;
          local_26c = *(undefined4 *)(local_4c0 + 0x48);
          local_4bc[0] = 2;
          bVar6 = true;
        }
      }
    }
  }
  else {
LAB_004797f0:
    bVar6 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar6) {
    *param_2 = local_4bc[0];
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00406a80();
  iVar3 = local_4c0;
  puVar1 = (undefined4 *)(local_4c0 + 0x4c);
  FUN_00649920(local_4c4,s__s_End_Offset_00727f10,param_3);
  local_4 = 10;
  uVar2 = FUN_00649940();
  iVar4 = FUN_00647cf0(uVar2);
  iVar5 = FUN_00647e80(param_4,uVar2,iVar4);
  if (iVar5 == 0) {
    iVar5 = FUN_00647cf0(param_4);
    if (iVar4 == iVar5) {
      local_4bc[0] = 8;
      FUN_004357e0(puVar1);
      bVar6 = true;
    }
    else {
      iVar4 = iVar4 + param_4;
      iVar5 = FUN_00647e40(&DAT_00724e78,iVar4);
      if (iVar5 == 0) {
        local_26c = *puVar1;
        local_4bc[0] = 2;
        bVar6 = true;
      }
      else {
        iVar5 = FUN_00647e40(&DAT_00724e74,iVar4);
        if (iVar5 == 0) {
          local_26c = *(undefined4 *)(iVar3 + 0x50);
          local_4bc[0] = 2;
          bVar6 = true;
        }
        else {
          iVar4 = FUN_00647e40(&DAT_00724e70,iVar4);
          if (iVar4 != 0) goto LAB_00479930;
          local_26c = *(undefined4 *)(iVar3 + 0x54);
          local_4bc[0] = 2;
          bVar6 = true;
        }
      }
    }
  }
  else {
LAB_00479930:
    bVar6 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar6) goto LAB_00479b8f;
  FUN_00425440();
  iVar4 = local_4c0;
  puVar1 = (undefined4 *)(local_4c0 + 0x70);
  FUN_00649920(local_4c4,s__s_Target_Offset_00727f68,param_3);
  local_4 = 0xb;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647cf0(uVar2);
  iVar5 = FUN_00647e80(param_4,uVar2,iVar3);
  if (iVar5 == 0) {
    iVar5 = FUN_00647cf0(param_4);
    if (iVar3 == iVar5) {
      local_4bc[0] = 8;
      FUN_004357e0(puVar1);
      bVar6 = true;
    }
    else {
      iVar3 = iVar3 + param_4;
      iVar5 = FUN_00647e40(&DAT_00724e78,iVar3);
      if (iVar5 == 0) {
        local_26c = *puVar1;
        local_4bc[0] = 2;
        bVar6 = true;
      }
      else {
        iVar5 = FUN_00647e40(&DAT_00724e74,iVar3);
        if (iVar5 == 0) {
          local_26c = *(undefined4 *)(iVar4 + 0x74);
          local_4bc[0] = 2;
          bVar6 = true;
        }
        else {
          iVar3 = FUN_00647e40(&DAT_00724e70,iVar3);
          if (iVar3 != 0) goto LAB_00479a57;
          local_26c = *(undefined4 *)(iVar4 + 0x78);
          local_4bc[0] = 2;
          bVar6 = true;
        }
      }
    }
  }
  else {
LAB_00479a57:
    bVar6 = false;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (bVar6) {
    *param_2 = local_4bc[0];
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00425440();
  FUN_00649920(local_4c4,s__s_FOV_Start_00727f00,param_3);
  local_4 = 0xc;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  if (iVar3 == 0) {
    local_26c = *(undefined4 *)(local_4c0 + 0x58);
    local_4bc[0] = 10;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 == 0) {
    *param_2 = local_4bc[0];
    FUN_00424770(local_4b4);
    ExceptionList = local_c;
    return param_2;
  }
  FUN_00425440();
  FUN_00649920(local_4c4,s__s_FOV_End_00727ef4,param_3);
  local_4 = 0xd;
  uVar2 = FUN_00649940();
  iVar3 = FUN_00647e40(param_4,uVar2);
  if (iVar3 == 0) {
    local_26c = *(undefined4 *)(local_4c0 + 0x5c);
    local_4bc[0] = 10;
  }
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar3 != 0) {
    FUN_00649920(local_4c4,s__s_Predefined_Setup_0072802c,param_3);
    local_4 = 0xe;
    uVar2 = FUN_00649940();
    iVar3 = FUN_00647e40(param_4,uVar2);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 == 0) {
      FUN_00425440();
      local_264[0] = 0xc;
      local_18 = 0;
      FUN_00463a40(local_264);
      ExceptionList = local_c;
      return param_2;
    }
    FUN_00474d50(param_2,param_3,param_4);
    ExceptionList = local_c;
    return param_2;
  }
LAB_00479b8f:
  *param_2 = local_4bc[0];
  FUN_00424770(local_4b4);
  ExceptionList = local_c;
  return param_2;
}

