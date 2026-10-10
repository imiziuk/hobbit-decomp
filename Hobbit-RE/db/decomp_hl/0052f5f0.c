
undefined4 __fastcall FUN_0052f5f0(int param_1)

{
  int iVar1;
  
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
  case 3:
  case 4:
    *(undefined4 *)(param_1 + 0x70) = 0;
    return 0;
  case 1:
    iVar1 = *(int *)(param_1 + 0x74) + -1;
    if (iVar1 == 0) {
      iVar1 = FUN_0052e2b0(*(undefined4 *)(param_1 + 0x18));
      if (iVar1 != 0) {
        FUN_0052e160(4);
        return 0;
      }
      FUN_0052e160(0);
      return 0;
    }
    break;
  case 2:
    iVar1 = *(int *)(param_1 + 0x74) + -1;
    if (iVar1 == 0) {
      FUN_0052e800(*(undefined4 *)(param_1 + 0x18));
      FUN_0052e160(5);
      return 0;
    }
    break;
  default:
    goto switchD_0052f5fb_default;
  }
  if (iVar1 == 1) {
    FUN_0052e160(0);
    return 0;
  }
switchD_0052f5fb_default:
  return 0;
}

