
void FUN_006628d0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = DAT_007f0448;
  puVar3 = &DAT_007f0448;
  puVar4 = &DAT_007f00f0;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  DAT_007f010c = (uint)(DAT_007f0464 == 0);
  iVar2 = FUN_0065c4a0(&DAT_007f00f0,DAT_007f0444,uVar1,DAT_007f044c);
  if (iVar2 == 0) {
    DAT_007f00ed = 1;
  }
  FUN_0064e7d0(s_ToggleWindowed_0074f2cc);
  return;
}

