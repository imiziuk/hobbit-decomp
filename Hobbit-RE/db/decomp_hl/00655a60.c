
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00655a60(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_00653cf0();
  DAT_007e8790 = DAT_007e8790 + 1;
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x14)) {
      FUN_00653d20();
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x14)) {
    do {
      FUN_00653c70();
      FUN_00653a50();
      FUN_00653a70(param_1 + 0xc);
      FUN_00653d20();
      FUN_006539a0(param_2,8);
      FUN_00653cf0();
    } while (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x14));
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  iVar1 = FUN_00653bc0();
  if (iVar1 == 0) {
    FUN_00653d20();
    return 1;
  }
  _DAT_007e8784 = _DAT_007e8784 + 1;
  FUN_00653a30();
  FUN_00653d20();
  FUN_006539d0(param_2);
  return 1;
}

