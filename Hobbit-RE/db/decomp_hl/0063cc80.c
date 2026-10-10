
void FUN_0063cc80(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  uVar1 = param_1;
  if (param_1 != 0) {
    do {
      uVar1 = uVar1 >> 1;
      iVar2 = iVar2 + 1;
    } while (uVar1 != 0);
  }
  iVar3 = 0;
  do {
    if (iVar2 <= (int)(&DAT_0074a7d0)[iVar3]) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  thunk_FUN_0063dbd0(iVar3,4);
  thunk_FUN_0063dbd0(param_1,(&DAT_0074a7d0)[iVar3]);
  return;
}

