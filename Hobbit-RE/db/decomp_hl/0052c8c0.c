
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_0052c8c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined1 local_6d8 [4];
  int local_6d4;
  int local_6d0;
  int local_6cc;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8291;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0063ddb0();
  local_4 = 0;
  param_1[4] = 1;
  param_1[0x30a] = 0;
  FUN_0052db90(0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0x333] = 0;
  param_1[0x334] = 0;
  local_6cc = FUN_00650210();
  ppuVar4 = &PTR_s_AntidotePotion_Icon_xbmp_00735fe8;
  puVar3 = param_1 + 6;
  do {
    uVar1 = FUN_005496c0(*ppuVar4,&DAT_0073065c);
    iVar2 = FUN_00652870(uVar1);
    if (iVar2 == 0) {
      FUN_00649920(local_6d8,s_Error_loading__UI1002____s__00736a14,*ppuVar4);
      local_4._0_1_ = 1;
      FUN_00649940();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
    }
    else {
      FUN_00674c70(puVar3);
    }
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 8;
  } while ((int)ppuVar4 < 0x73609c);
  ppuVar4 = &PTR_s_CoverBackgroundPlate_xbmp_007360a0;
  puVar3 = param_1 + 0x176;
  do {
    uVar1 = FUN_005496c0(*ppuVar4,s_LockPick_00736a08);
    iVar2 = FUN_00652870(uVar1);
    if (iVar2 == 0) {
      FUN_00649920(local_6d8,s_Error_loading__LOCKPIC1003____s__007369e4,*ppuVar4);
      local_4._0_1_ = 2;
      FUN_00649940();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00649950();
    }
    else {
      FUN_00674c70(puVar3);
    }
    ppuVar4 = ppuVar4 + 1;
    puVar3 = puVar3 + 8;
  } while ((int)ppuVar4 < 0x736164);
  iVar2 = FUN_00650210();
  iVar2 = local_6cc - iVar2;
  FUN_0051ad90(DAT_0081303c);
  FUN_00519b10(DAT_0081303c);
  FUN_0050e800(DAT_0081303c);
  FUN_0051ff10(DAT_0081303c);
  FUN_00515c30(DAT_0081303c);
  FUN_0051d910(DAT_0081303c);
  FUN_005169e0(DAT_0081303c);
  FUN_00517800(DAT_0081303c);
  FUN_00524140(DAT_0081303c);
  FUN_005237c0(DAT_0081303c);
  FUN_00518980(DAT_0081303c);
  FUN_00517ff0(DAT_0081303c);
  FUN_005185b0(DAT_0081303c);
  FUN_005183b0(DAT_0081303c);
  FUN_00518780(DAT_0081303c);
  FUN_00522fd0(DAT_0081303c);
  FUN_0065f8a0(&local_6d0,&local_6d4);
  local_4 = 0xffffffff;
  param_1[0x306] = (float)local_6d0;
  param_1[0x307] = (float)local_6d4;
  param_1[0x308] = param_1[0x306];
  param_1[0x309] = param_1[0x307];
  param_1[0x308] = (float)param_1[0x308] * _DAT_006e936c;
  param_1[0x309] = (float)param_1[0x309] * _DAT_006e936c;
  FUN_0063de30();
  ExceptionList = local_c;
  return iVar2;
}

