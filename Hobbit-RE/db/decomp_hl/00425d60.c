
void __fastcall FUN_00425d60(int param_1)

{
  undefined4 uVar1;
  
  FUN_00659c80(*(undefined4 *)(param_1 + 0x5f8),0);
  FUN_00659c80(*(undefined4 *)(param_1 + 0x5f4),0);
  uVar1 = FUN_00659600(s_RingEffect_Loop_00720b04,1);
  *(undefined4 *)(param_1 + 0x5f4) = uVar1;
  if (*(int *)(param_1 + 0x3e0) == 0) {
    *(undefined4 *)(param_1 + 0x3e0) = 1;
    FUN_0065b0f0();
    return;
  }
  return;
}

