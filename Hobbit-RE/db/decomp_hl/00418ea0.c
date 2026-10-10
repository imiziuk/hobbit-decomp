
void __thiscall FUN_00418ea0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x80);
  iVar2 = 9;
  do {
    FUN_004021c0(*puVar1,puVar1[1]);
    FUN_004d22c0(param_2);
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

