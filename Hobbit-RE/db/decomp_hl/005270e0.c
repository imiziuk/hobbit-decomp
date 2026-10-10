
undefined4 __fastcall FUN_005270e0(int param_1)

{
  char cVar1;
  
  if (DAT_006e92e4 < *(float *)(param_1 + 0x2f0)) {
    return 0xffffffff;
  }
  cVar1 = *(char *)(param_1 + 0x2dd);
  if (*(char *)(param_1 + 0x2e4) == cVar1) {
    *(char *)(param_1 + 0x2e6) = cVar1;
    return *(undefined4 *)(param_1 + 0x14);
  }
  if (*(char *)(param_1 + 0x2e5) == cVar1) {
    return 8;
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0x3e4ccccd;
  return 0;
}

