
undefined4 __fastcall FUN_004a4c80(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1b0) != 0x24) && (*(int *)(param_1 + 0x1b0) != 0x25)) {
    iVar1 = FUN_00587ce0();
    if (iVar1 != 0x15) {
      iVar1 = FUN_00587ce0();
      if (iVar1 != 0x16) {
        iVar1 = FUN_00587ce0();
        if (iVar1 != 0x14) {
          iVar1 = FUN_00587ce0();
          if ((((((iVar1 != 0x13) && (iVar1 = *(int *)(param_1 + 0x1b0), iVar1 != 0x4b)) &&
                (iVar1 != 0x4d)) && ((iVar1 != 0x4c && (iVar1 != 0x45)))) &&
              ((iVar1 != 0x38 && ((iVar1 != 0x39 && (iVar1 != 0x37)))))) &&
             ((iVar1 != 0x5e && ((iVar1 != 0x5f && (iVar1 != 0x21)))))) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

