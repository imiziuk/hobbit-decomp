
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0066f810(void)

{
  int iVar1;
  BOOL BVar2;
  undefined4 *puVar3;
  
  Sleep(0);
  DAT_007f23a4 = 0;
  if (DAT_007f23a8 == 0) {
    iVar1 = PeekMessageA((LPMSG)&DAT_007f1618,(HWND)0x0,0,0,0);
    while (iVar1 != 0) {
      BVar2 = GetMessageA((LPMSG)&DAT_007f1618,(HWND)0x0,0,0);
      if (BVar2 == 0) {
        _DAT_007f239c = 1;
        return 0;
      }
      TranslateMessage((MSG *)&DAT_007f1618);
      DispatchMessageA((MSG *)&DAT_007f1618);
      iVar1 = PeekMessageA((LPMSG)&DAT_007f1618,(HWND)0x0,0,0,0);
    }
  }
  FUN_0066f940();
  if (DAT_007f23a8 == 0) {
    iVar1 = 0;
    if (0 < DAT_007f1638) {
      puVar3 = &DAT_007f1644;
      do {
        FUN_0066fa10(puVar3,iVar1);
        FUN_006603b0();
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 4;
      } while (iVar1 < DAT_007f1638);
    }
    iVar1 = 0;
    if (0 < DAT_007f163c) {
      puVar3 = &DAT_007f16c4;
      do {
        FUN_0066fb60(puVar3,iVar1);
        iVar1 = iVar1 + 1;
        puVar3 = puVar3 + 4;
      } while (iVar1 < DAT_007f163c);
    }
  }
  iVar1 = 0;
  if (0 < DAT_007f1640) {
    puVar3 = &DAT_007f1744;
    do {
      FUN_0066fc30(puVar3,iVar1);
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 4;
    } while (iVar1 < DAT_007f1640);
  }
  return DAT_007f23a4;
}

