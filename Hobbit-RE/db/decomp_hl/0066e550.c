
void FUN_0066e550(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  if ((DAT_007f15e0 != 0) && (iVar2 = 0, 0 < param_2)) {
    do {
      sVar1 = *(short *)(param_1 + iVar2 * 2);
      if (sVar1 == -1) {
        (*DAT_007f14f0)();
      }
      else {
        FUN_0066e1e0((int)sVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

