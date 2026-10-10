
int __fastcall FUN_0058bdc0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x201c);
  iVar1 = 0x100;
  do {
    puVar2[-5] = 0x7f7fffff;
    puVar2[-4] = 0x7f7fffff;
    puVar2[-3] = 0x7f7fffff;
    puVar2[-2] = 0xff7fffff;
    puVar2[-1] = 0xff7fffff;
    *puVar2 = 0xff7fffff;
    FUN_00401080(puVar2 + 4,0xc,0x10,FUN_0041def0);
    FUN_00401080(puVar2 + 0x34,0xc,7,FUN_0041def0);
    puVar2 = puVar2 + 0x66;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_0058be50();
  return param_1;
}

