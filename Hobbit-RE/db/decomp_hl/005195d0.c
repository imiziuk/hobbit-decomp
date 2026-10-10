
void __fastcall FUN_005195d0(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x158)) {
  case 0:
    *(undefined4 *)(param_1 + 0x158) = 1;
    return;
  case 1:
    FUN_006a3240(1,1);
    FUN_006a3240(0x100,0);
    FUN_006a3240(1,1);
    FUN_006a3240(0x100,0);
    FUN_006a3240(1,1);
    FUN_006a3240(0x100,0);
    FUN_006a3240(1,1);
    FUN_006a3240(0x100,0);
    FUN_006a3240(1,1);
    FUN_006a3240(0x100,0);
    FUN_006a3240(1,1);
    FUN_006a3240(0x100,0);
    FUN_006a3240(1,1);
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 1;
    param_1 = param_1 + 0x184;
    iVar1 = 3;
    do {
      FUN_00674e10(param_1);
      FUN_00650380();
      param_1 = param_1 + 0x20;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_004fcd20();
    FUN_0052abf0(1);
  default:
    return;
  case 0xffffffff:
    FUN_006a3240(1,1);
  }
  FUN_006a3240(0x100,0);
  *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
  return;
}

