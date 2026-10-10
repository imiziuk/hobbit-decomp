
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006559a0(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_00653cf0();
  DAT_007e878c = DAT_007e878c + 1;
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      FUN_00653d20();
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x18) == 0) {
    do {
      FUN_00653c70();
      FUN_00653a50();
      FUN_00653a70(param_1 + 4);
      FUN_00653d20();
      FUN_006539a0(param_2,7);
      FUN_00653cf0();
    } while (*(int *)(param_1 + 0x18) == 0);
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  iVar1 = FUN_00653bc0();
  if (iVar1 == 0) {
    FUN_00653d20();
    return 1;
  }
  FUN_00653a30();
  _DAT_007e8788 = _DAT_007e8788 + 1;
  FUN_00653d20();
  FUN_006539d0(param_2);
  return 1;
}

