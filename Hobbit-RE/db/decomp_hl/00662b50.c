
void FUN_00662b50(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < DAT_007f1008) {
    do {
      if ((undefined4 *)(&DAT_007f0318)[iVar2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(&DAT_007f0318)[iVar2])(1);
      }
      iVar1 = DAT_007f1008;
      (&DAT_007f0318)[iVar2] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  DAT_007f1008 = 0;
  return;
}

