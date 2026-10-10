
undefined4 * FUN_00474d50(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_71c [4];
  int local_718;
  undefined4 local_714;
  undefined4 local_70c [128];
  undefined1 local_50c [12];
  undefined1 local_500 [12];
  undefined1 local_4f4 [4];
  undefined1 local_4f0 [12];
  undefined1 local_4e4 [16];
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined1 local_4b4 [580];
  int local_270;
  undefined4 local_26c;
  undefined4 local_264;
  undefined1 local_25c [588];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d180c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649920(local_71c,s__s_Shot_00727bd4,param_2);
  local_4 = 0;
  uVar1 = FUN_00649940();
  iVar2 = FUN_00647e40(param_3,uVar1);
  local_4 = 0xffffffff;
  FUN_00649950();
  if (iVar2 == 0) {
    FUN_00406a80();
    local_270 = (int)*(short *)(local_718 + 0xe);
    local_4bc = 1;
    *param_1 = 1;
    FUN_00424770(local_4b4);
  }
  else {
    FUN_00649920(local_71c,s__s_Offset_00727bc8,param_2);
    local_4 = 1;
    uVar1 = FUN_00649940();
    iVar2 = FUN_00647e40(param_3,uVar1);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 == 0) {
      FUN_00406a80();
      local_26c = *(undefined4 *)(local_718 + 4);
      local_4bc = 2;
      *param_1 = 2;
      FUN_00424770(local_4b4);
    }
    else {
      FUN_00649920(local_71c,s__s_Duration_00727bbc,param_2);
      local_4 = 2;
      uVar1 = FUN_00649940();
      iVar2 = FUN_00647e40(param_3,uVar1);
      local_4 = 0xffffffff;
      FUN_00649950();
      if (iVar2 == 0) {
        FUN_00406a80();
        local_26c = *(undefined4 *)(local_718 + 8);
        local_4bc = 2;
        *param_1 = 2;
        FUN_00424770(local_4b4);
      }
      else {
        FUN_00649920(local_71c,s__s_Done_00727bb4,param_2);
        local_4 = 3;
        uVar1 = FUN_00649940();
        iVar2 = FUN_00647e40(param_3,uVar1);
        local_4 = 0xffffffff;
        FUN_00649950();
        if (iVar2 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_264 = 3;
          local_10 = (int)(short)(*(short *)(local_718 + 0x10) << 0xd) >> 0xf;
          *param_1 = 3;
          FUN_00424770(local_25c);
        }
        else {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          local_714 = 0;
          *param_1 = 0;
          puVar3 = local_70c;
          puVar4 = param_1 + 2;
          for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          FUN_004357e0(local_50c);
          FUN_004357e0(local_500);
          FUN_00425250(local_4f4);
          FUN_004357e0(local_4f0);
          FUN_004357e0(local_4e4);
          param_1[0x92] = local_4cc;
          param_1[0x90] = local_4d4;
          param_1[0x91] = local_4d0;
          param_1[0x95] = local_4c0;
          param_1[0x93] = local_4c8;
          param_1[0x94] = local_4c4;
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

