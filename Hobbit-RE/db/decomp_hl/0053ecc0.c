
void __fastcall FUN_0053ecc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0053c940(param_1);
  iVar1 = param_1 + 0x48;
  iVar2 = 5;
  do {
    FUN_0053c910(iVar1);
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar1 = param_1 + 0x5c;
  iVar2 = 8;
  do {
    FUN_0053c8a0(iVar1);
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar1 = param_1 + 0x7c;
  iVar2 = 2;
  do {
    FUN_0053c9d0(iVar1);
    iVar1 = iVar1 + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1 = param_1 + 0x94;
  iVar1 = 8;
  do {
    FUN_0053c910(param_1);
    param_1 = param_1 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

