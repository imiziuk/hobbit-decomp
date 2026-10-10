
void __fastcall FUN_00410650(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x120);
  iVar1 = 0x19;
  do {
    FUN_0063d930(puVar2[5]);
    FUN_0063cc20(*puVar2);
    puVar2 = puVar2 + 10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

