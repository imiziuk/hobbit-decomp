
void __fastcall FUN_00647680(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00646960();
  **(float **)(param_1 + 0x7c) = (float)fVar1;
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 4;
  return;
}

