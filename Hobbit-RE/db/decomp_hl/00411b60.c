
void __thiscall FUN_00411b60(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004021c0(*(undefined4 *)(param_1 + 0x120 + param_2 * 8),
                       *(undefined4 *)(param_1 + 0x124 + param_2 * 8));
  if (iVar1 != 0) {
    iVar1 = FUN_004c7410();
    if (iVar1 != 0) {
      FUN_004118d0(param_2,0);
    }
  }
  return;
}

