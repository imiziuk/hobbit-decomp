
void __fastcall FUN_004a11b0(int param_1)

{
  uint *puVar1;
  
  *(undefined4 *)(param_1 + 0x124) = 2;
  puVar1 = (uint *)(*(int *)(param_1 + 0x304) + 0x4c);
  *puVar1 = *puVar1 & 0xfff7ffff;
  return;
}

