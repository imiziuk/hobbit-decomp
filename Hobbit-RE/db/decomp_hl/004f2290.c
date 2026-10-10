
int __fastcall FUN_004f2290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6118;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  iVar1 = FUN_00650210();
  ppuVar4 = &PTR_s_BlueBerrieFull_xbmp_0072f298;
  iVar5 = param_1 + 0x194;
  do {
    uVar2 = FUN_005496c0(*ppuVar4,&PTR_LAB_0072f7bc);
    iVar3 = FUN_00652870(uVar2);
    if (iVar3 == 0) {
      FUN_00649920(&local_10,s_Error_loading_frontend_texture___0072f894,*ppuVar4);
      local_4 = 0;
      FUN_00649940();
      local_4 = 0xffffffff;
      FUN_00649950();
    }
    else {
      FUN_00674c70(iVar5);
    }
    ppuVar4 = ppuVar4 + 1;
    iVar5 = iVar5 + 0x20;
  } while ((int)ppuVar4 < 0x72f2f4);
  uVar2 = FUN_005496c0(s_HUD_ImbuedStone_fxo_0072f880,s_Effects_00729200);
  FUN_006b69a0(s_HUD_ImbuedStone_0072f870,uVar2);
  uVar2 = FUN_005496c0(s_HUD_FireStone_fxo_0072f85c,s_Effects_00729200);
  FUN_006b69a0(s_HUD_FireStone_0072f84c,uVar2);
  uVar2 = FUN_005496c0(s_HUD_ExplodeStone_fxo_0072f834,s_Effects_00729200);
  FUN_006b69a0(s_HUD_ExplodeStone_0072f820,uVar2);
  uVar2 = FUN_005496c0(s_HUD_silverPenny_fxo_0072f80c,s_Effects_00729200);
  FUN_006b69a0(s_HUD_silverPenny_0072f7fc,uVar2);
  iVar5 = FUN_00650210();
  uVar2 = FUN_005496c0(s_HUD_RingScreenHalo_xbmp_0072f7e0,&DAT_0072f7f8);
  FUN_00652870(uVar2);
  uVar2 = FUN_005496c0(s_HUD_RingScreenHaloBlack_xbmp_0072f7c0,&DAT_0072f7f8);
  FUN_00652870(uVar2);
  FUN_00674c70(param_1 + 0x13a4);
  FUN_00674c70(param_1 + 0x13c4);
  FUN_004f2440();
  ExceptionList = local_c;
  return iVar1 - iVar5;
}

