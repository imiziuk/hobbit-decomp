
undefined4 FUN_006ca900(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_00816368);
  bVar2 = DAT_00816364 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_00816368);
    FUN_006c56f9(0x13);
  }
  uVar1 = FUN_006ca959(param_1,param_2);
  if (bVar2) {
    FUN_006c575a(0x13);
  }
  else {
    InterlockedDecrement((LONG *)&DAT_00816368);
  }
  return uVar1;
}

