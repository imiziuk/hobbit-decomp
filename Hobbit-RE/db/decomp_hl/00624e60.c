
undefined4 __fastcall FUN_00624e60(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x42);
  if (((sVar1 != 0xb) && (sVar1 != 0xc)) && (sVar1 != 0xd)) {
    return 1;
  }
  return 0;
}

