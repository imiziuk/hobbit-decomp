
void __fastcall FUN_0047cb60(int param_1)

{
  int iVar1;
  
  FUN_0064e870(6,s_CINEMA__Starting_script_007283a4);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 != 0) {
    FUN_004de300();
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 4;
  return;
}

