
void FUN_0063cc20(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_0063d930((int)param_1 < 0);
  if (iVar1 != 0) {
    param_1 = -param_1;
  }
  iVar1 = 0;
  for (uVar2 = param_1; uVar2 != 0; uVar2 = uVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  iVar3 = 0;
  do {
    if (iVar1 <= (int)(&DAT_0074a7d0)[iVar3]) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  thunk_FUN_0063dbd0(iVar3,4);
  thunk_FUN_0063dbd0(param_1,(&DAT_0074a7d0)[iVar3]);
  return;
}

