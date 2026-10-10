
undefined4 * __thiscall
FUN_00475dc0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_4c0 [4];
  undefined4 local_4bc;
  undefined4 local_4b4 [127];
  undefined1 local_2b5;
  undefined1 local_2b4 [12];
  undefined1 local_2a8 [12];
  undefined1 local_29c;
  undefined1 local_29b;
  undefined1 local_29a;
  undefined1 local_299;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined1 local_28c [16];
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined1 local_25c [568];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d1997;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_4c0,s__s_Target_Object_00727cd0,param_3);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_4,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_24 = *(undefined4 *)(param_1 + 0x20);
    local_20 = *(undefined4 *)(param_1 + 0x24);
    local_264 = 0x10;
    *param_2 = 0x10;
    FUN_00424770(local_25c);
  }
  else {
    FUN_00649920(local_4c0,s__s_Target_Location_00727cbc,param_3);
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_4,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_24 = *(undefined4 *)(param_1 + 0x28);
      local_20 = *(undefined4 *)(param_1 + 0x2c);
      local_264 = 0xf;
      *param_2 = 0xf;
      FUN_00424770(local_25c);
    }
    else {
      FUN_00649920(local_4c0,s__s_Target_Facing_00727ca8,param_3);
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_4,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00406a80();
        local_20 = *(undefined4 *)(param_1 + 0x34);
        local_24 = *(undefined4 *)(param_1 + 0x30);
        local_264 = 0xf;
        *param_2 = 0xf;
        FUN_00424770(local_25c);
      }
      else {
        FUN_00649920(local_4c0,s__s_SetFacing_00727c98,param_3);
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_4,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_10 = *(undefined4 *)(param_1 + 0x38);
          local_264 = 3;
          *param_2 = 3;
          FUN_00424770(local_25c);
        }
        else {
          FUN_00649920(local_4c0,s__s_Anim_00727ce4,param_3);
          local_4 = 4;
          uVar1 = FUN_00649940();
          iVar2 = FUN_00647e40(param_4,uVar1);
          local_4 = 0xffffffff;
          FUN_00649950();
          if (iVar2 == 0) {
            FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
            FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
            local_4bc = 0xd;
            FUN_00647d70(local_4b4,*(undefined4 *)(param_1 + 0x3c),0x200);
            local_2b5 = 0;
            *param_2 = local_4bc;
            puVar3 = local_4b4;
            puVar4 = param_2 + 2;
            for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            FUN_004357e0(local_2b4);
            FUN_004357e0(local_2a8);
            *(undefined1 *)((int)param_2 + 0x223) = local_299;
            *(undefined1 *)((int)param_2 + 0x222) = local_29a;
            *(undefined1 *)((int)param_2 + 0x221) = local_29b;
            *(undefined1 *)(param_2 + 0x88) = local_29c;
            param_2[0x89] = local_298;
            param_2[0x8a] = local_294;
            param_2[0x8b] = local_290;
            FUN_004357e0(local_28c);
            param_2[0x91] = local_278;
            param_2[0x90] = local_27c;
            param_2[0x92] = local_274;
            param_2[0x94] = local_26c;
            param_2[0x93] = local_270;
            param_2[0x95] = local_268;
          }
          else {
            FUN_00474d50(param_2,param_3,param_4);
          }
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

