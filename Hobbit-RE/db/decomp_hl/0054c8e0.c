
void __thiscall FUN_0054c8e0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (-1 < *(int *)(param_1 + 0x2adc)) {
    piVar1 = (int *)(param_1 + 0x28dc);
    do {
      if (*piVar1 == param_2) {
        *piVar1 = (int)*(short *)(*(int *)(param_1 + 0x28c0) + 4 + param_2 * 0x14);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x2adc));
  }
  return;
}

