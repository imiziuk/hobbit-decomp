
undefined4 __fastcall FUN_004d0ae0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = __allshl();
  if ((*(uint *)(param_1 + 0xb0) & (uint)uVar1) != 0 ||
      (*(uint *)(param_1 + 0xb4) & (uint)((ulonglong)uVar1 >> 0x20)) != 0) {
    return 0;
  }
  return 1;
}

