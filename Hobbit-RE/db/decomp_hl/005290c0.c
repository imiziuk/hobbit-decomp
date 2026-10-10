
undefined4 __fastcall FUN_005290c0(int param_1)

{
  int iVar1;
  
  if (DAT_006e92e4 < *(float *)(param_1 + 0x8e4)) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (*(int *)(param_1 + 0x28) == iVar1) {
    *(int *)(param_1 + 0x38) = iVar1;
    return *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x2c) == iVar1) {
    return 8;
  }
  *(undefined4 *)(param_1 + 0x8e4) = 0x3e4ccccd;
  return 0;
}

