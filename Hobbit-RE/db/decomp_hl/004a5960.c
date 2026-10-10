
float10 __fastcall FUN_004a5960(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x154))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x154))();
    return (float10)*(float *)(iVar1 + 0x20);
  }
  iVar1 = (**(code **)(*param_1 + 0x30))();
  return (float10)*(float *)(iVar1 + 4);
}

