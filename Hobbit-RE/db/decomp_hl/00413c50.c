
void __fastcall FUN_00413c50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [128];
  
  FUN_00411f90();
  FUN_00411f90();
  iVar1 = *(int *)(param_1 + 0x104);
  if (iVar1 != 0) {
    FUN_00411e50();
    FUN_006bf840(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 != 0) {
    FUN_00411e50();
    FUN_006bf840(iVar1);
  }
  uVar2 = FUN_005496c0(s_SFX_GUI_audiopkg_0071cde8,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_Player_audiopkg_0071cdd4,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_Weapons_audiopkg_0071cdbc,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_Goblins_audiopkg_0071cdfc,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_Wolves_audiopkg_0071d724,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_DwarvesWar_audiopkg_0071f48c,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_ElvesWar_audiopkg_0071f474,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_HumansWar_audiopkg_0071f45c,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_AMB_Chapter11_audiopkg_0071f440,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_Chapter11_audiopkg_0071f428,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  uVar2 = FUN_005496c0(s_SFX_Ring_audiopkg_0071cda8,s_Audio_0071ce88);
  FUN_006581c0(uVar2);
  FUN_00419620(auStack_80,s_DX_CH11_PC_audiopkg_0071f414);
  FUN_006581c0(auStack_80);
  FUN_0054e6c0();
  return;
}

