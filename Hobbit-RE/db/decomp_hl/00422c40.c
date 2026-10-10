
void __fastcall FUN_00422c40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00435870();
  if (iVar1 != 1) {
    FUN_00435900(1);
  }
  *(undefined4 *)(param_1 + 0x46cc) = 2;
  FUN_00423c90(0,1);
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 1;
  *(undefined4 *)(param_1 + 0x3d8) = 1;
  return;
}

