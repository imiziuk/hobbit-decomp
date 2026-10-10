
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00678250(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iStack_4;
  
  FUN_00679ab0();
  puVar1 = (undefined4 *)(param_1 + 0xf8);
  _DAT_00806944 = 1;
  iStack_4 = 0x40;
  puVar3 = puVar1;
  puVar2 = &DAT_00802808;
  do {
    puVar4 = puVar2;
    FUN_00648600(puVar4,0,0xf8);
    puVar4[1] = puVar4 + 0x3e;
    *puVar4 = puVar3;
    iStack_4 = iStack_4 + -1;
    puVar3 = puVar4;
    puVar2 = puVar4 + 0x3e;
  } while (iStack_4 != 0);
  puVar4[1] = puVar1;
  *puVar1 = puVar4;
  *(undefined4 **)(param_1 + 0xfc) = &DAT_00802808;
  *(int *)(param_1 + 4) = param_1;
  puVar1 = (undefined4 *)(param_1 + 0x298);
  *(int *)param_1 = param_1;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  iStack_4 = 0x40;
  puVar3 = puVar1;
  puVar2 = &DAT_007f9008;
  do {
    puVar4 = puVar2;
    FUN_00648600(puVar4,0,0x98);
    *puVar4 = puVar3;
    puVar4[1] = puVar4 + 0x26;
    puVar4[0x22] = 0xffffffff;
    iStack_4 = iStack_4 + -1;
    puVar3 = puVar4;
    puVar2 = puVar4 + 0x26;
  } while (iStack_4 != 0);
  puVar4[1] = puVar1;
  *(undefined4 **)(param_1 + 0x29c) = &DAT_007f9008;
  *puVar1 = puVar4;
  FUN_00679ac0();
  return;
}

