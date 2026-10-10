
void __fastcall FUN_00525db0(int param_1)

{
  int iVar1;
  
  FUN_00526600();
  if (*(int *)(param_1 + 0x180) == 0) {
    iVar1 = *(int *)(param_1 + 0x178);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  *(undefined4 *)(param_1 + 0x174) = 0;
  FUN_006aafd0(&DAT_0071da28);
  return;
}

