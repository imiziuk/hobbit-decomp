
void __fastcall FUN_0052ccc0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    if (*(int *)(param_1 + 0xc28) == 0xc) {
      FUN_0052d1a0();
      return;
    }
  }
  else {
    FUN_00658330(0x3d08ab86);
    FUN_0052d1a0();
    iVar1 = FUN_0065f190(s_PAUSE_00736ab0);
    if (iVar1 != 0) {
      FUN_00429100();
      FUN_0065f430();
      return;
    }
  }
  return;
}

