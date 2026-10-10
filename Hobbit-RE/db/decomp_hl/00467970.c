
void __fastcall FUN_00467970(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  if ((0x13 < iVar1) && (iVar1 < 0x19)) {
    *(undefined4 *)(param_1 + 0x1b4) = 1;
    return;
  }
  if ((0x18 < iVar1) && (iVar1 < 0x24)) {
    *(undefined4 *)(param_1 + 0x1b4) = 2;
    return;
  }
  if (iVar1 == 0x26) {
    *(undefined4 *)(param_1 + 0x1b4) = 3;
    return;
  }
  if (iVar1 == 0x36) {
LAB_004679bf:
    *(undefined4 *)(param_1 + 0x1b4) = 0x12;
    return;
  }
  if (((0x3c < iVar1) && (iVar1 < 0x40)) || (iVar1 == 0x35)) {
    *(undefined4 *)(param_1 + 0x1b4) = 4;
    return;
  }
  if ((iVar1 == 0x11) || (iVar1 == 0x12)) {
    *(undefined4 *)(param_1 + 0x1b4) = 5;
  }
  else {
    if ((iVar1 == 0x2d) || (iVar1 == 0x2c)) {
      *(undefined4 *)(param_1 + 0x1b4) = 6;
      return;
    }
    if ((iVar1 == 0x50) || (iVar1 == 100)) {
      *(undefined4 *)(param_1 + 0x1b4) = 7;
      return;
    }
    if (iVar1 == 99) {
      *(undefined4 *)(param_1 + 0x1b4) = 8;
      return;
    }
    if (iVar1 == 0x40) {
      *(undefined4 *)(param_1 + 0x1b4) = 9;
      return;
    }
    if (iVar1 == 0x62) {
      *(undefined4 *)(param_1 + 0x1b4) = 10;
      return;
    }
    if ((iVar1 == 0x24) || (iVar1 == 0x25)) {
      *(undefined4 *)(param_1 + 0x1b4) = 0xf;
      return;
    }
    if ((((iVar1 == 0x2e) || (iVar1 == 0x2f)) || (iVar1 == 0x30)) || (iVar1 == 0x41)) {
      *(undefined4 *)(param_1 + 0x1b4) = 0xc;
      return;
    }
    if (((iVar1 == 0x29) || (iVar1 == 0x2a)) || (iVar1 == 0x2b)) {
      *(undefined4 *)(param_1 + 0x1b4) = 0xb;
      return;
    }
    if (iVar1 == 0x60) {
      *(undefined4 *)(param_1 + 0x1b4) = 0xd;
      return;
    }
    if (((iVar1 == 0x31) || (iVar1 == 0x32)) || ((iVar1 == 0x33 || (iVar1 == 0x46)))) {
      *(undefined4 *)(param_1 + 0x1b4) = 0x10;
      return;
    }
    if (iVar1 == 0x4b) {
      *(undefined4 *)(param_1 + 0x1b4) = 0x11;
      return;
    }
    if (iVar1 == 0x13) {
      *(undefined4 *)(param_1 + 0x1b4) = 0x13;
      return;
    }
    if (((iVar1 == 0x4e) || (iVar1 == 0x47)) || (iVar1 == 0x45)) {
      *(undefined4 *)(param_1 + 0x1b4) = 0x14;
      return;
    }
    if (((iVar1 == 0x37) || (iVar1 == 0x38)) ||
       ((((iVar1 == 0x39 || ((iVar1 == 0x3a || (iVar1 == 0x3b)))) || (iVar1 == 0x3c)) ||
        ((((iVar1 == 0x3d || (iVar1 == 0x3e)) || (iVar1 == 0x3f)) || (iVar1 == 0x23))))))
    goto LAB_004679bf;
    if (((iVar1 == 0x48) || (iVar1 == 0x49)) || (iVar1 == 0x4a)) {
      *(undefined4 *)(param_1 + 0x1b4) = 0x15;
      return;
    }
    if ((iVar1 == 0x43) || (iVar1 == 0x44)) {
      *(undefined4 *)(param_1 + 0x1b4) = 0x16;
      return;
    }
  }
  return;
}

