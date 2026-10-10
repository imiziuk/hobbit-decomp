
undefined4 __fastcall FUN_00635f80(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((*(ushort *)(param_1 + 0x40) & 2) != 0) {
    *(ushort *)(param_1 + 0x40) = *(ushort *)(param_1 + 0x40) & 0xfffd;
    return 6;
  }
  if (*(short *)(param_1 + 0x42) == 5) {
    uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x130);
    if (((uVar1 & 1) != 0) && ((int)(uVar1 << 0x1d) >> 0x1f == 1)) {
      *(undefined4 *)(param_1 + 0x48) = 1;
    }
  }
  else {
    if (*(short *)(param_1 + 0x42) != 6) {
      uVar2 = FUN_005be370();
      return uVar2;
    }
    if ((*(byte *)(*(int *)(param_1 + 8) + 0x130) & 1) != 0) {
      uVar2 = FUN_005be370();
      return uVar2;
    }
  }
  uVar2 = FUN_005be370();
  return uVar2;
}

