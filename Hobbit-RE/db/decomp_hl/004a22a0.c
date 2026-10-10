
void __fastcall FUN_004a22a0(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x268) = *(uint *)(param_1 + 0x268) | 0x80000;
  iVar1 = FUN_004a2340();
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x478) & 0xffffffdf;
    FUN_004f8a50(0xffffffff,5,0);
  }
  FUN_005aede0();
  return;
}

