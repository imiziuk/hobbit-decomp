
int __fastcall FUN_005a7b70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 + 0x74;
  iVar2 = 0x50;
  do {
    FUN_00401080(iVar1 + -0x60,0xc,8,FUN_0041def0);
    FUN_00401080(iVar1,0x10,9,FUN_0041def0);
    FUN_00406a80();
    iVar1 = iVar1 + 0x1b4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0064cbe0();
  FUN_0064cbe0();
  FUN_005a7e00();
  DAT_007ba5c8 = 0;
  return param_1;
}

