
void __fastcall FUN_004a9870(int *param_1)

{
  int iVar1;
  
  FUN_00429100();
  if (-1 < param_1[0x9b]) {
    FUN_0054f7c0(param_1 + 0x9b);
    param_1[0x9b] = -1;
  }
  FUN_004a29b0(1);
  iVar1 = FUN_004a2340();
  if (iVar1 != 0) {
    param_1[0x11e] = param_1[0x11e] & 0xffffffdf;
    FUN_004f8a50(0xffffffff,5,0);
  }
  (**(code **)(*(int *)param_1[0xc0] + 0x10))();
  FUN_005aa9b0();
  FUN_004ac540();
  (**(code **)(*param_1 + 0x154))();
  FUN_00542580();
  return;
}

