
void __thiscall FUN_00417e90(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cef48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[2] = 0;
  param_1[1] = 1;
  param_1[3] = 0;
  param_1[0x4a] = *param_2;
  param_1[0x4b] = param_2[1];
  param_1[0x4c] = param_2[2];
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0xc4188000;
  param_1[0x50] = 0xc41b0000;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[4] = 0;
  param_1[0x3c] = 0;
  param_1[0x66] = 0;
  uVar5 = FUN_0054c210(s_PlatformPuzzleSwitch_0071fda8,0);
  *(undefined8 *)(param_1 + 6) = uVar5;
  uVar5 = FUN_0054c210(s_WH2_Puzzle_Cam_0071fd98,0);
  *(undefined8 *)(param_1 + 8) = uVar5;
  uVar5 = FUN_0054c210(s_Cursor_001_0071fd8c,0);
  *(undefined8 *)(param_1 + 10) = uVar5;
  uVar5 = FUN_0054c210(s_Cursor_002_0071fd80,0);
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  puVar3 = (undefined8 *)(param_1 + 0x20);
  iVar1 = 0;
  do {
    uVar5 = FUN_0054c210(*(undefined4 *)((int)&PTR_s_Inst_WH2_T_Block_001_0071faec + iVar1),0);
    puVar3[-9] = uVar5;
    uVar5 = FUN_0054c210(*(undefined4 *)((int)&PTR_s_Inst_LT_Chandelier_003_0071fb10 + iVar1),0);
    *puVar3 = uVar5;
    iVar1 = iVar1 + 4;
    puVar3 = puVar3 + 1;
  } while (iVar1 < 0x24);
  FUN_00649b20(s_Failed_to_load__0071fd6c);
  local_4 = 0;
  *param_1 = 1;
  if (param_1[6] == 0 && param_1[7] == 0) {
    *param_1 = 0;
    FUN_0064a750(s__PlatformPuzzleSwitch__0071fd54);
  }
  if (param_1[8] == 0 && param_1[9] == 0) {
    *param_1 = 0;
    FUN_0064a750(s__WH2_Puzzle_Cam__0071fd40);
  }
  if (param_1[10] == 0 && param_1[0xb] == 0) {
    *param_1 = 0;
    FUN_0064a750(s__Cursor_001__0071fd30);
  }
  if (param_1[0xc] == 0 && param_1[0xd] == 0) {
    *param_1 = 0;
    FUN_0064a750(s__Cursor_002__0071fd20);
  }
  ppuVar4 = &PTR_s_Inst_WH2_T_Block_001_0071faec;
  piVar2 = param_1 + 0xe;
  do {
    if (*piVar2 == 0 && piVar2[1] == 0) {
      *param_1 = 0;
      FUN_0064a750(&DAT_0071fd1c);
      FUN_0064a750(*ppuVar4);
      FUN_0064a750(&DAT_0071fd18);
    }
    ppuVar4 = ppuVar4 + 1;
    piVar2 = piVar2 + 2;
  } while ((int)ppuVar4 < 0x71fb10);
  ppuVar4 = &PTR_s_Inst_LT_Chandelier_003_0071fb10;
  piVar2 = param_1 + 0x20;
  do {
    if (*piVar2 == 0 && piVar2[1] == 0) {
      *param_1 = 0;
    }
    FUN_0064a750(&DAT_0071fd1c);
    FUN_0064a750(*ppuVar4);
    FUN_0064a750(&DAT_0071fd18);
    ppuVar4 = ppuVar4 + 1;
    piVar2 = piVar2 + 2;
  } while ((int)ppuVar4 < 0x71fb34);
  FUN_00417e50(0);
  FUN_00417e50(1);
  pvStack_c = (void *)0xffffffff;
  FUN_00649ba0();
  ExceptionList = pvStack_14;
  return;
}

