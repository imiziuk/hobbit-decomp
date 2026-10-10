
void __fastcall FUN_00624e80(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x60) = 1;
  uVar1 = FUN_00647b10(0,1);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_005be250();
  return;
}

