
void FUN_00674860(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 + 1;
    (&DAT_007f2430)[iVar2] = iVar1;
    iVar2 = iVar1;
  } while (iVar1 < 4999);
  (&DAT_007f2430)[iVar1] = 0;
  puVar3 = &DAT_007f7250;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_007f242c = 1;
  DAT_007f2428 = 0;
  return;
}

