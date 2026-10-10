
void __fastcall FUN_0040ea50(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  iVar2 = 0;
  if (0 < (int)*(short *)(param_1 + 0x5e) * (int)*(short *)(param_1 + 0x5c)) {
    do {
      iVar1 = FUN_0040ea00(iVar2);
      if (iVar1 == 2) {
        FUN_0059ed70(iVar2);
      }
      else if (iVar1 == 3) {
        FUN_0040ed10(iVar2);
      }
      iVar2 = iVar2 + 1;
    } while ((int)(short)iVar2 < (int)*(short *)(param_1 + 0x5e) * (int)*(short *)(param_1 + 0x5c));
  }
  return;
}

