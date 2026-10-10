
undefined4 __thiscall FUN_00655630(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  FUN_00653cf0();
  iVar1 = FUN_00655820();
  if ((param_3 & 1) == 0) {
    if (iVar1 != 0) {
      FUN_00653d20();
      return 0;
    }
  }
  else if (iVar1 != 0) {
    do {
      FUN_00653c70();
      FUN_00653a50();
      FUN_00653a70(param_1 + 0x10);
      FUN_00653d20();
      FUN_006539a0(param_3,6);
      FUN_00653cf0();
      iVar1 = FUN_00655820();
    } while (iVar1 != 0);
  }
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  if ((param_3 & 2) == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + *(short *)(param_1 + 6) * 4) = param_2;
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
    if (*(short *)(param_1 + 10) <= *(short *)(param_1 + 6)) {
      *(undefined2 *)(param_1 + 6) = 0;
    }
  }
  else {
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
    if (*(short *)(param_1 + 4) < 0) {
      *(short *)(param_1 + 4) = *(short *)(param_1 + 10) + -1;
    }
    *(undefined4 *)(*(int *)(param_1 + 0xc) + *(short *)(param_1 + 4) * 4) = param_2;
  }
  iVar1 = FUN_00653bc0();
  if (iVar1 == 0) {
    FUN_00653d20();
    return 1;
  }
  FUN_00653a30();
  FUN_00653d20();
  FUN_006539d0(param_3);
  return 1;
}

