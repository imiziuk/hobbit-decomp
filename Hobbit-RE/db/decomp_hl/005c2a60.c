
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c2a60(int param_1)

{
  int iVar1;
  int iVar2;
  
  _DAT_007ba9ec = 0;
  FUN_006bf840(*(undefined4 *)(param_1 + 0x30));
  FUN_006bf840(*(undefined4 *)(param_1 + 0x50));
  FUN_006bf840(*(undefined4 *)(param_1 + 0x4c));
  FUN_006bf840(*(undefined4 *)(param_1 + 0x54));
  iVar2 = *(int *)(param_1 + 0x1c);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x400);
    FUN_006bf840(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  return;
}

