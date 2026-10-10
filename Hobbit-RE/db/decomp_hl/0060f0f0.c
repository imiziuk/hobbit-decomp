
void FUN_0060f0f0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 6) {
    iVar1 = FUN_00567b20(2);
    uVar2 = FUN_005be240();
    *(undefined8 *)(iVar1 + 0x40) = uVar2;
    FUN_0064a2e0(s_BridgeIdle_007490f8);
    FUN_005af9f0(iVar1);
  }
  FUN_005be710(param_1);
  return;
}

