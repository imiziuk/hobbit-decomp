
void __fastcall FUN_004a14a0(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x300) + 0x130);
  *puVar1 = *puVar1 & 0xffffff7f;
  FUN_00467e40();
  return;
}

