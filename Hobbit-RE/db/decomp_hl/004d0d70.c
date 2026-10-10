
void __thiscall FUN_004d0d70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_004aa650(param_2);
  uVar1 = FUN_004ac4d0();
  FUN_00641760(s_IsGoldPile_0072d6dc,uVar1);
  FUN_00641760(s_IsHidden_0072d6d0,*(byte *)(param_1 + 0x126) & 1);
  FUN_00641760(s_Decals_0072d6c8,*(byte *)(param_1 + 0x127) & 1);
  FUN_00641760(s_IsSqueakyChickenBoard_0072d6b0,(*(byte *)(param_1 + 0x127) & 8) >> 3);
  uVar1 = FUN_004d1130(*(byte *)(param_1 + 0x126) >> 3);
  FUN_006414f0(s_Surface_Type_0072d6a0,uVar1);
  return;
}

