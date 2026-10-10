
void __fastcall FUN_00436d00(int param_1)

{
  int iVar1;
  
  FUN_006aafd0(s_QuestNames_00723b30);
  FUN_006aafd0(s_QuestDesc_00723b24);
  if (*(int *)(param_1 + 0xfc) == 0) {
    iVar1 = *(int *)(param_1 + 0xf4);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xe0) == 0) {
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 != 0) {
      FUN_006c026a(iVar1,0x2c,*(undefined4 *)(iVar1 + -4),FUN_00649ba0);
      FUN_006bf840(iVar1 + -4);
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  return;
}

