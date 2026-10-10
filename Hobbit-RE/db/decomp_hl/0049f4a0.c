
undefined4 __thiscall FUN_0049f4a0(int param_1,ushort param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x328)) {
    psVar2 = (short *)(param_1 + 0x334);
    do {
      if ((int)*psVar2 == (uint)param_2) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x328));
  }
  return 0;
}

