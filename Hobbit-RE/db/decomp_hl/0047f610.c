
void __fastcall FUN_0047f610(int *param_1)

{
  int iVar1;
  
  FUN_0064e870(6,s_CINEMA__Skipping_animated_instan_00728744);
  if ((*(byte *)(param_1 + 4) & 2) == 0) {
    (**(code **)(*param_1 + 4))();
  }
  if ((*(byte *)(param_1 + 0x15) & 8) != 0) {
    iVar1 = FUN_004021c0(param_1[8],param_1[9]);
    if (iVar1 != 0) {
      FUN_004c75f0(1);
    }
  }
  FUN_004754d0();
  return;
}

