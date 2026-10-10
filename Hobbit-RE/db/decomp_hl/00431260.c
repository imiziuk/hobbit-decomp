
void __thiscall FUN_00431260(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00647b10(0,9);
  if (iVar1 < 5) {
    *param_2 = 0xbf800000;
    *(undefined4 *)(param_1 + 0x5ee4) = 0;
    return;
  }
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5ee4) = 1;
  return;
}

