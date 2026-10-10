
void __fastcall FUN_00414ef0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint local_18;
  int local_14;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ceeb8;
  local_c = ExceptionList;
  puVar3 = (undefined8 *)(param_1 + 0x478);
  local_18 = 3;
  ExceptionList = &local_c;
  local_14 = param_1;
  do {
    iVar2 = 2;
    uVar5 = local_18;
    do {
      FUN_00649920(local_10,s_AI_WH2_Doors00_d__AI_0071f754,uVar5);
      uVar7 = 1;
      local_4 = 0;
      uVar1 = FUN_00649940(1);
      uVar6 = FUN_0054c210(uVar1,uVar7);
      *puVar3 = uVar6;
      local_4 = 0xffffffff;
      FUN_00649950();
      puVar3 = puVar3 + 1;
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    local_18 = local_18 - 2;
  } while (local_18 < 0x80000000);
  iVar2 = 0;
  puVar3 = (undefined8 *)(local_14 + 0x458);
  do {
    iVar2 = iVar2 + 1;
    FUN_00649920(local_10,s_Wh2_WallSwitch_00_d_0071f740,iVar2);
    uVar7 = 1;
    local_4 = 1;
    uVar1 = FUN_00649940(1);
    uVar6 = FUN_0054c210(uVar1,uVar7);
    *puVar3 = uVar6;
    local_4 = 0xffffffff;
    FUN_00649950();
    puVar3 = puVar3 + 1;
  } while (iVar2 < 4);
  puVar3 = (undefined8 *)(local_14 + 0x4b8);
  iVar2 = 2;
  puVar4 = (undefined4 *)(local_14 + 0x4a0);
  do {
    puVar4[-2] = 0;
    *puVar4 = 0;
    puVar4[2] = 0;
    puVar4[4] = 0;
    FUN_00649920(&local_14,s_Q05_WH2_Door_Cam_00_d_0071f728,iVar2);
    uVar7 = 1;
    local_4 = 2;
    uVar1 = FUN_00649940(1);
    uVar6 = FUN_0054c210(uVar1,uVar7);
    *puVar3 = uVar6;
    local_4 = 0xffffffff;
    FUN_00649950();
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (0 < iVar2);
  ExceptionList = local_c;
  return;
}

