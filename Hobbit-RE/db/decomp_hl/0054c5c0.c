
undefined4 __thiscall FUN_0054c5c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2adc) + 1;
  *(int *)(param_1 + 0x2adc) = iVar2;
  *(undefined4 *)(param_1 + 0x2ae0 + iVar2 * 4) = param_3;
  *(undefined4 *)(param_1 + 0x2b20 + *(int *)(param_1 + 0x2adc) * 4) = param_4;
  *(undefined4 *)(param_1 + 0x28dc + *(int *)(param_1 + 0x2adc) * 4) =
       *(undefined4 *)(param_2 * 0x20 + 0x200c + param_1);
  iVar1 = *(int *)(param_1 + 0x2adc) * 0x1c;
  iVar2 = iVar1 + 0x291c + param_1;
  if (*(int *)(iVar1 + 0x2930 + param_1) == 0) {
    FUN_006bf840(*(undefined4 *)(iVar2 + 0xc));
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  return *(undefined4 *)(param_1 + 0x2adc);
}

