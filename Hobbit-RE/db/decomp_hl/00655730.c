
undefined4 __thiscall FUN_00655730(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  
  FUN_00653cf0();
  iVar3 = FUN_00655810();
  if ((param_2 & 1) == 0) {
    if (iVar3 != 0) {
      FUN_00653d20();
      return 0;
    }
  }
  else if (iVar3 != 0) {
    do {
      FUN_00653c70();
      FUN_00653a50();
      FUN_00653a70(param_1 + 0x18);
      FUN_00653d20();
      FUN_006539a0(param_2,5);
      FUN_00653cf0();
      iVar3 = FUN_00655810();
    } while (iVar3 != 0);
  }
  *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + -1;
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + *(short *)(param_1 + 4) * 4);
  sVar2 = *(short *)(param_1 + 4) + 1;
  *(short *)(param_1 + 4) = sVar2;
  if (*(short *)(param_1 + 10) <= sVar2) {
    *(undefined2 *)(param_1 + 4) = 0;
  }
  if (param_3 != 0) {
    FUN_00655730(param_2,0);
  }
  iVar3 = FUN_00653bc0();
  if (iVar3 == 0) {
    FUN_00653d20();
    return uVar1;
  }
  FUN_00653a30();
  FUN_00653d20();
  FUN_006539d0(param_2);
  return uVar1;
}

