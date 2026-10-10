
void __fastcall FUN_00425dd0(int param_1)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  FUN_00659c80(*(undefined4 *)(param_1 + 0x5f4),0);
  if (unaff_ESI == 0) {
    uVar1 = FUN_00659600(s_RingEffect_Off_00720b14,1);
    *(undefined4 *)(param_1 + 0x5f8) = uVar1;
  }
  if (*(int *)(param_1 + 0x3e0) != 0) {
    *(undefined4 *)(param_1 + 0x3e0) = 0;
    FUN_0065b130();
  }
  return;
}

