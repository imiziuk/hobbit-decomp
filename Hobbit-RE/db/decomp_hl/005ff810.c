
undefined4 __thiscall FUN_005ff810(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 auStack_7c [28];
  undefined4 uStack_60;
  undefined4 *puStack_5c;
  char *pcStack_58;
  int *piStack_54;
  undefined1 local_40 [4];
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e3340;
  local_c = ExceptionList;
  piStack_54 = *(int **)(param_1 + 4);
  puStack_5c = (undefined4 *)local_40;
  pcStack_58 = s_AIManager_Triggers_Trigger__d_Da_00748958;
  uStack_60 = 0x5ff841;
  ExceptionList = &local_c;
  FUN_00649920();
  local_4 = 0;
  piStack_54 = (int *)0x5ff853;
  piStack_54 = (int *)FUN_00649940();
  uVar2 = param_2;
  pcStack_58 = (char *)param_2;
  puStack_5c = (undefined4 *)0x5ff85e;
  iVar1 = FUN_00647e40();
  local_4 = 0xffffffff;
  piStack_54 = (int *)0x5ff879;
  FUN_00649950();
  if (iVar1 == 0) {
    if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
      *(int *)(param_1 + 0x10) = param_3[0x90];
      *(int *)(param_1 + 0x14) = param_3[0x91];
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    piStack_54 = *(int **)(param_1 + 4);
    puStack_5c = &param_2;
    pcStack_58 = s_AIManager_Triggers_Trigger__d_Da_00748930;
    uStack_60 = 0x5ff8c3;
    FUN_00649920();
    local_4 = 1;
    piStack_54 = (int *)0x5ff8d5;
    piStack_54 = (int *)FUN_00649940();
    pcStack_58 = (char *)uVar2;
    puStack_5c = (undefined4 *)0x5ff8dc;
    iVar1 = FUN_00647e40();
    local_4 = 0xffffffff;
    piStack_54 = (int *)0x5ff8f4;
    FUN_00649950();
    if (iVar1 == 0) {
      if ((*param_3 == 0xf) || (*param_3 == 0x10)) {
        *(int *)(param_1 + 0x18) = param_3[0x90];
        *(int *)(param_1 + 0x1c) = param_3[0x91];
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      piStack_54 = (int *)0x5ff934;
      FUN_006499d0();
      piStack_54 = *(int **)(param_1 + 4);
      puStack_5c = (undefined4 *)local_3c;
      pcStack_58 = s_AIManager_Triggers_Trigger__d_Pa_00748908;
      local_4 = 2;
      uStack_60 = 0x5ff94f;
      FUN_00649920();
      local_4._0_1_ = 3;
      piStack_54 = (int *)0x5ff95e;
      piStack_54 = (int *)FUN_00649940();
      pcStack_58 = (char *)uVar2;
      puStack_5c = (undefined4 *)0x5ff965;
      iVar1 = FUN_00647e40();
      local_4 = CONCAT31(local_4._1_3_,2);
      piStack_54 = (int *)0x5ff97e;
      FUN_00649950();
      if (iVar1 == 0) {
        piVar3 = param_3 + 2;
        param_3 = (int *)auStack_7c;
        FUN_00649b20(piVar3);
        uVar2 = FUN_005b8a70();
        *(undefined4 *)(param_1 + 0x4c) = uVar2;
        local_4 = 0xffffffff;
        piStack_54 = (int *)0x5ff9b3;
        FUN_00649ba0();
        uVar2 = 1;
      }
      else {
        piStack_54 = param_3;
        pcStack_58 = (char *)uVar2;
        puStack_5c = (undefined4 *)0x5ff9c7;
        uVar2 = FUN_005f17e0();
        local_4 = 0xffffffff;
        piStack_54 = (int *)0x5ff9d6;
        FUN_00649ba0();
      }
    }
  }
  ExceptionList = local_c;
  return uVar2;
}

