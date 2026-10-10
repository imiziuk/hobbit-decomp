
void __thiscall FUN_00411d10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  FUN_0041a060(param_2);
  puVar2 = (undefined2 *)(param_1 + 0x264);
  iVar1 = 3;
  do {
    FUN_0063cb80(*puVar2,2);
    puVar2 = puVar2 + 2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0063d930(*(undefined4 *)(param_1 + 0x170));
  return;
}

