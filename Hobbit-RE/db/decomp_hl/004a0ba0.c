
void __fastcall FUN_004a0ba0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a1250(6);
  if (iVar1 == 0) {
    iVar1 = FUN_004a1250(8);
    if (iVar1 != 0) goto LAB_004a0bc8;
    iVar1 = FUN_004a1250(0x31);
    if (iVar1 != 0) goto LAB_004a0bc8;
  }
  else {
LAB_004a0bc8:
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x1bc) = iVar1;
  uVar2 = FUN_004a1250(9);
  *(undefined4 *)(param_1 + 0x1c0) = uVar2;
  uVar2 = FUN_004a1250(0xb);
  *(undefined4 *)(param_1 + 0x1c4) = uVar2;
  iVar1 = FUN_004a1250(0xc);
  *(int *)(param_1 + 0x1c8) = iVar1;
  if (((iVar1 == 0) || (*(int *)(param_1 + 0x1c4) == 0)) || (*(int *)(param_1 + 0x1c0) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x1cc) = uVar2;
  uVar2 = FUN_004a1250(0xd);
  *(undefined4 *)(param_1 + 0x1d0) = uVar2;
  uVar2 = FUN_004a1250(0xe);
  *(undefined4 *)(param_1 + 0x1d4) = uVar2;
  uVar2 = FUN_004a1250(0x31);
  *(undefined4 *)(param_1 + 0x1d8) = uVar2;
  iVar1 = FUN_00587ce0();
  if (((iVar1 == 0xb) && (*(int *)(param_1 + 0x1b0) != 0x28)) && (*(int *)(param_1 + 0x1b0) != 0x27)
     ) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x1dc) = uVar2;
  iVar1 = FUN_00587ce0();
  *(uint *)(param_1 + 0x1e0) = (uint)(iVar1 == 0x13);
  if (((*(int *)(param_1 + 0x1bc) == 0) && (*(int *)(param_1 + 0x1cc) == 0)) &&
     ((*(int *)(param_1 + 0x1d8) == 0 &&
      (((*(int *)(param_1 + 0x1dc) == 0 && ((iVar1 == 0x13) == 0)) &&
       (*(int *)(param_1 + 0x1d0) == 0)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x1e4) = uVar2;
  iVar1 = FUN_004a1250(0x11);
  if (iVar1 == 0) {
    iVar1 = FUN_004a1250(0x13);
    if (iVar1 != 0) goto LAB_004a0d0d;
    iVar1 = FUN_004a1250(0x14);
    if (iVar1 != 0) goto LAB_004a0d0d;
    iVar1 = FUN_004a1250(0x12);
    if (iVar1 != 0) goto LAB_004a0d0d;
  }
  else {
LAB_004a0d0d:
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x1e8) = iVar1;
  uVar2 = FUN_004a1250(0x15);
  *(undefined4 *)(param_1 + 0x1ec) = uVar2;
  iVar1 = FUN_004a1250(0x17);
  if (((iVar1 == 0) || (iVar1 = *(int *)(param_1 + 0x260), iVar1 == 0)) ||
     (*(int *)(iVar1 + 0x10) == 0 && *(int *)(iVar1 + 0x14) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined4 *)(param_1 + 0x1f0) = uVar2;
  uVar2 = FUN_004a1250(0x19);
  *(undefined4 *)(param_1 + 500) = uVar2;
  iVar1 = FUN_004a1250(0x3d);
  *(int *)(param_1 + 0x240) = iVar1;
  if (((*(int *)(param_1 + 0x1e8) != 0) || (*(int *)(param_1 + 500) != 0)) ||
     ((*(int *)(param_1 + 0x1ec) != 0 || (iVar1 != 0)))) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x1f8) = iVar1;
  iVar1 = FUN_004a1250(0x1a);
  if (iVar1 == 0) {
    iVar1 = FUN_004a1250(0x1b);
    if (iVar1 != 0) goto LAB_004a0dba;
  }
  else {
LAB_004a0dba:
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x1fc) = iVar1;
  uVar2 = FUN_004a1250(0x1b);
  *(undefined4 *)(param_1 + 0x200) = uVar2;
  uVar2 = FUN_004a1250(0x1c);
  *(undefined4 *)(param_1 + 0x204) = uVar2;
  uVar2 = FUN_004a1250(0x22);
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  iVar1 = FUN_004a1250(0x23);
  *(int *)(param_1 + 0x20c) = iVar1;
  if ((*(int *)(param_1 + 0x208) != 0) || (iVar1 != 0)) {
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x210) = iVar1;
  uVar2 = FUN_004a1250(0x37);
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  uVar2 = FUN_004a1250(0x39);
  *(undefined4 *)(param_1 + 0x220) = uVar2;
  uVar2 = FUN_004a1250(0x1f);
  *(undefined4 *)(param_1 + 0x21c) = uVar2;
  iVar1 = FUN_004a1250(0x1e);
  if (iVar1 == 0) {
    iVar1 = FUN_004a1250(0x1d);
    if (iVar1 != 0) goto LAB_004a0e61;
  }
  else {
LAB_004a0e61:
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x214) = iVar1;
  *(undefined4 *)(param_1 + 0x224) = 1;
  uVar2 = FUN_004a1250(0x3b);
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  uVar2 = FUN_004a1250(0x2e);
  *(undefined4 *)(param_1 + 0x230) = uVar2;
  iVar1 = FUN_004a1250(0x30);
  if (iVar1 == 0) {
    iVar1 = FUN_004a1250(0x2f);
    if (iVar1 != 0) goto LAB_004a0eae;
  }
  else {
LAB_004a0eae:
    iVar1 = 1;
  }
  *(int *)(param_1 + 0x234) = iVar1;
  uVar2 = FUN_004a1250(0x33);
  *(undefined4 *)(param_1 + 0x22c) = uVar2;
  iVar1 = FUN_00587ce0();
  if (iVar1 == 0xf) {
LAB_004a0ee4:
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00587ce0();
    if (iVar1 == 0x13) goto LAB_004a0ee4;
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x238) = uVar2;
  iVar1 = FUN_00587ce0();
  *(uint *)(param_1 + 0x23c) = (uint)(iVar1 == 0xc);
  iVar1 = FUN_00587ce0();
  if (iVar1 != 0xf) {
    iVar1 = FUN_00587ce0();
    if (iVar1 != 0x13) {
      uVar2 = 1;
      goto LAB_004a0f25;
    }
  }
  uVar2 = 0;
LAB_004a0f25:
  *(undefined4 *)(param_1 + 0x244) = uVar2;
  if (*(int *)(param_1 + 0x1d8) != 0) {
    *(uint *)(param_1 + 0x1ac) = *(uint *)(param_1 + 0x1ac) | 1;
  }
  return;
}

