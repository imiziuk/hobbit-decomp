
void __fastcall FUN_004057b0(int param_1)

{
  int *piVar1;
  
  FUN_00659c80(DAT_0075b6b4,0);
  FUN_00659c80(DAT_0075b6b8,0);
  FUN_00659c80(DAT_0075b6bc,0);
  DAT_0075b6b4 = 0;
  DAT_0075b6b8 = 0;
  DAT_0075b6bc = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  piVar1 = (int *)FUN_0054c0f0(s_MineCart_Start_000_0071d118,1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(param_1 + 0x334,0);
  }
  piVar1 = (int *)FUN_0054c0f0(s_MineCart_Start_001_0071d104,1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(param_1 + 0x340,0);
  }
  return;
}

