
void __thiscall FUN_00627d20(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 5) {
    uVar1 = FUN_00567b20(2);
    FUN_0064a2e0(s_HangingIdle_0074a254);
    FUN_005af9f0(uVar1);
  }
  else if ((param_2 == 6) || (param_2 == 9)) {
    uVar1 = FUN_00567b20(2);
    FUN_0064a2e0(s_HangingIdle_0074a254);
    FUN_005af9f0(uVar1);
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_005be710(param_2);
    return;
  }
  FUN_005be710(param_2);
  return;
}

