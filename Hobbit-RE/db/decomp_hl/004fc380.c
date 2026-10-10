
undefined4 FUN_004fc380(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  int local_7c8;
  undefined1 local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d64a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_8d8 = (int *)operator_new(0x4ac);
  local_4 = 0;
  if (local_8d8 == (int *)0x0) {
    DAT_0075f930 = (int *)0x0;
  }
  else {
    DAT_0075f930 = (int *)FUN_004fbf50();
  }
  local_4 = 0xffffffff;
  do {
    do {
      FUN_0066f810();
      iVar2 = FUN_006710d0(0x5d);
    } while (iVar2 != 0);
    iVar2 = FUN_006710d0(0xb9);
  } while (iVar2 != 0);
  FUN_0063ddb0();
  local_4 = 1;
  FUN_005486f0();
  FUN_00649920(&local_8d8,s__s_LevelList_txt_00730850);
  local_4._0_1_ = 2;
  FUN_00649940();
  iVar2 = FUN_0063df60();
  local_4._0_1_ = 1;
  FUN_00649950();
  if (iVar2 != 0) {
    iVar2 = FUN_0063e510();
    if (iVar2 != 0) {
      *DAT_0075f930 = local_7c8;
      iVar2 = *DAT_0075f930;
      local_8d8 = (int *)operator_new(iVar2 * 0xa4 + 4);
      local_4._0_1_ = 3;
      if (local_8d8 == (int *)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = local_8d8 + 1;
        *local_8d8 = iVar2;
        FUN_006c043b(piVar6,0xa4,iVar2,FUN_004fca30);
      }
      DAT_0075f930[1] = (int)piVar6;
      iVar2 = 0;
      local_4._0_1_ = 1;
      uVar1 = (undefined1)local_4;
      local_4._0_1_ = 1;
      if (0 < *DAT_0075f930) {
        iVar5 = 0;
        do {
          iVar3 = FUN_0063e6a0();
          if (iVar3 == 0) {
            FUN_00649920(&local_8d8,s_Error_loading_levellist_fields_o_007307cc);
            local_4._0_1_ = 4;
            FUN_00649940();
            FUN_004fc830();
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_00649950();
            FUN_0063df00();
            goto LAB_004fc71e;
          }
          FUN_0063f5e0(&DAT_00725c94);
          FUN_00649920(&local_8d8,s_Levels__s_xbmp_00730820);
          local_4._0_1_ = 5;
          uVar4 = FUN_00649940();
          FUN_005496c0(uVar4);
          FUN_0064f190(local_20c);
          local_4._0_1_ = 1;
          FUN_00649950();
          iVar3 = FUN_00652870();
          if (iVar3 == 0) {
            *(undefined4 *)(DAT_0075f930[1] + 0xa0 + iVar5) = 0;
          }
          else {
            *(undefined4 *)(DAT_0075f930[1] + 0xa0 + iVar5) = 1;
            FUN_00674c70();
          }
          iVar2 = iVar2 + 1;
          iVar5 = iVar5 + 0xa4;
          uVar1 = (undefined1)local_4;
        } while (iVar2 < *DAT_0075f930);
      }
      local_4._0_1_ = uVar1;
      FUN_0063df00();
      FUN_00671650(0x41200000);
      FUN_00671930(0x42c80000);
      local_8d4 = 0x44a98000;
      local_8d0 = 0xc4f04000;
      local_8cc = 0xc38e8000;
      FUN_00671670();
      local_8d4 = 0;
      local_8d0 = 0;
      local_8cc = 0;
      FUN_006723d0(&local_8d4);
      DAT_0075f930[2] = 1;
      DAT_0075f930[3] = 0;
      iVar2 = DAT_0075f930[2];
      while (iVar2 != 0) {
        FUN_004fc090();
        FUN_004fc850();
        iVar2 = DAT_0075f930[2];
      }
      if (DAT_0075f930[4] == 0) {
        local_8d8 = (int *)&stack0xfffff714;
        FUN_0065f940();
        FUN_0065f480();
        FUN_0065f480();
        piVar6 = DAT_0075f930;
        iVar2 = __ftol(param_2);
        FUN_00647d70(param_1,iVar2 * 0xa4 + piVar6[1]);
        if (DAT_0075f930 != (int *)0x0) {
          FUN_004fbfa0();
          FUN_006bf840();
        }
        DAT_0075f930 = (int *)0x0;
        local_4 = 0xffffffff;
        FUN_0063de30();
        ExceptionList = local_c;
        return 1;
      }
      FUN_004fbfa0();
      FUN_006bf840();
      DAT_0075f930 = (int *)0x0;
      FUN_004fc830(s_Level_select_is_aborting_game_00730800);
LAB_004fc71e:
      local_4 = 0xffffffff;
      FUN_0063de30();
      ExceptionList = local_c;
      return 0;
    }
    FUN_004fc830();
  }
  if (DAT_0075f930 != (int *)0x0) {
    FUN_004fbfa0();
    FUN_006bf840();
  }
  DAT_0075f930 = (int *)0x0;
  local_4 = 0xffffffff;
  FUN_0063de30();
  ExceptionList = local_c;
  return 0;
}

