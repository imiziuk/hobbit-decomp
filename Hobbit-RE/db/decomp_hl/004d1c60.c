
undefined4 __fastcall FUN_004d1c60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1 = param_1 + 0xbc;
  iVar2 = FUN_00549470(param_1);
  if (iVar2 == 0) {
    FUN_00549580(param_1);
    return 0;
  }
  uVar1 = *(undefined4 *)(iVar2 + 100);
  FUN_00549580(param_1);
  return uVar1;
}

