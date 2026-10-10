
void __fastcall FUN_005519f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (((*(byte *)(param_1 + 0x54) & 1) != 0) && ((*(byte *)(param_1 + 0x54) & 2) != 0)) {
    thunk_FUN_005c9d30();
  }
  iVar1 = 0;
  if (*(byte *)(param_1 + 0xa8) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0xac);
    do {
      if (0 < *(short *)*puVar2) goto LAB_00551a5a;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xa8));
  }
  iVar1 = 0;
  if (*(byte *)(param_1 + 0xa9) != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0xb0);
    do {
      if (((short *)*puVar2 != (short *)0x0) && (0 < *(short *)*puVar2)) {
LAB_00551a5a:
        FUN_00552af0();
        return;
      }
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xa9));
  }
  return;
}

