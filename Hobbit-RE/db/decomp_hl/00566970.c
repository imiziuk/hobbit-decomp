
void __fastcall FUN_00566970(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

