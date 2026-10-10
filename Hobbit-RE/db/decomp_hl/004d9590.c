
void __fastcall FUN_004d9590(int param_1)

{
  int iVar1;
  
  if ((DAT_00777238 != 5) && (DAT_00777238 != 7)) {
    if (DAT_00777238 == 3) {
      iVar1 = FUN_004ab440();
      if (iVar1 != 0) {
        FUN_005784a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        FUN_00579ce0(param_1 + 0x44,0,0,0);
        FUN_005785b0();
        return;
      }
    }
    return;
  }
  FUN_005784a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_00579ce0(param_1 + 0x44,0,0,0);
  FUN_005785b0();
  return;
}

