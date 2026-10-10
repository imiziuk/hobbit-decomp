
void __fastcall FUN_0054c880(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x28dc + *(int *)(param_1 + 0x2adc) * 4) = 0xffffffff;
  iVar2 = *(int *)(param_1 + 0x2adc) * 0x1c;
  iVar1 = iVar2 + 0x291c + param_1;
  if (*(int *)(iVar2 + 0x2930 + param_1) == 0) {
    FUN_006bf840(*(undefined4 *)(iVar1 + 0xc));
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(param_1 + 0x2adc) = *(int *)(param_1 + 0x2adc) + -1;
  return;
}

