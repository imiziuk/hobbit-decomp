
void __fastcall FUN_004a1480(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x300) + 0x130);
  *puVar1 = *puVar1 | 0x80;
  FUN_00467cd0();
  return;
}

