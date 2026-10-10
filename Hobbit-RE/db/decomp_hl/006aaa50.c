
undefined1 * FUN_006aaa50(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_00647cf0(param_1);
  puVar2 = &DAT_00813058;
  uVar3 = 0;
  if (iVar1 != -1) {
    do {
      puVar2[1] = 0;
      *puVar2 = *(undefined1 *)(uVar3 + param_1);
      puVar2 = puVar2 + 2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < iVar1 + 1U);
  }
  return &DAT_00813058;
}

