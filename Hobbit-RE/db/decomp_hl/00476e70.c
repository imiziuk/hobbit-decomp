
undefined4 * __thiscall
FUN_00476e70(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_268 [4];
  undefined4 local_264;
  undefined4 local_25c [127];
  undefined1 local_5d;
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
  puStack_8 = &LAB_006d1afc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_268,s__s_Sample_00727de0,param_3);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_4,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_264 = 0xd;
    FUN_00647d70(local_25c,*(undefined4 *)(param_1 + 0x28),0x200);
    local_5d = 0;
    *param_2 = local_264;
    FUN_00424770(local_25c);
  }
  else {
    FUN_00649920(local_268,s__s_Speaker_00727dd4,param_3);
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_4,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
      FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
      local_20 = *(undefined4 *)(param_1 + 0x24);
      local_24 = *(undefined4 *)(param_1 + 0x20);
      local_264 = 0x10;
      *param_2 = 0x10;
      FUN_00424770(local_25c);
    }
    else {
      FUN_00649920(local_268,s__s_Force_End_After_Duration_Expi_00727db0,param_3);
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_4,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        local_10 = *(undefined4 *)(param_1 + 0x58);
        local_264 = 3;
        *param_2 = 3;
        puVar3 = local_25c;
        puVar4 = param_2 + 2;
        for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        FUN_00480f60(local_5c);
        FUN_00425250(local_44);
        FUN_004357e0(local_40);
        FUN_004357e0(local_34);
        param_2[0x90] = local_24;
        param_2[0x91] = local_20;
        param_2[0x92] = local_1c;
        param_2[0x93] = local_18;
        param_2[0x94] = local_14;
        param_2[0x95] = local_10;
      }
      else {
        FUN_00649920(local_268,s__s_Play_Sound_at_Speaker_Positio_00727dec,param_3);
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_4,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_10 = *(undefined4 *)(param_1 + 0x5c);
          local_264 = 3;
          *param_2 = 3;
          FUN_00424770(local_25c);
        }
        else {
          FUN_00474d50(param_2,param_3,param_4);
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_2;
}

