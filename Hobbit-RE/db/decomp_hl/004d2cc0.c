
void __thiscall FUN_004d2cc0(int param_1,undefined4 param_2)

{
  FUN_00641760(&DAT_0071fac4,*(uint *)(param_1 + 0x160) >> 1 & 1);
  FUN_00641760(s_TargetLoops_0072d8a4,*(uint *)(param_1 + 0x160) >> 4 & 1);
  FUN_00641760(s_ReverseAnimForOff_0072d890,*(uint *)(param_1 + 0x160) >> 3 & 1);
  FUN_00641400(s_ToggleDelay_0072d884,*(undefined4 *)(param_1 + 0x164));
  FUN_00641760(s_RockCanTrigger_0072d874,*(uint *)(param_1 + 0x160) >> 2 & 1);
  FUN_004c1ff0(param_2);
  return;
}

