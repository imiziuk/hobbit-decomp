
void __fastcall FUN_0060f800(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 4;
  do {
    iVar1 = FUN_005b6e70();
    if (iVar1 != 0) {
      FUN_006109e0();
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_004f8a50(0xffffffff,3,0);
  FUN_00659c80(*(undefined4 *)(param_1 + 0x198),0);
  iVar2 = FUN_004021c0(*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb4));
  if (iVar2 != 0) {
    FUN_0048a740();
    return;
  }
  return;
}

