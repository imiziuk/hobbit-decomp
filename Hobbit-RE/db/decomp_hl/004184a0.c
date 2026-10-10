
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004184a0(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  float10 fVar10;
  
  iVar3 = FUN_00418c20(param_2);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00670ef0(0x7b,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x32), iVar3 == 0)) || (*(int *)(param_1 + 0x15c) != 0)
     ) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x160) = uVar4;
  iVar3 = FUN_00670ef0(0x7d,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x33), iVar3 == 0)) || (*(int *)(param_1 + 0x164) != 0)
     ) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x168) = uVar4;
  iVar3 = FUN_00670ef0(0x7e,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x34), iVar3 == 0)) || (*(int *)(param_1 + 0x14c) != 0)
     ) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  iVar3 = FUN_00670ef0(0x7c,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x35), iVar3 == 0)) || (*(int *)(param_1 + 0x154) != 0)
     ) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x158) = uVar4;
  iVar3 = FUN_00670ef0(0x5e,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(1), iVar3 == 0)) || (*(int *)(param_1 + 0x16c) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x170) = uVar4;
  iVar3 = FUN_00670ef0(0x5d,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(7), iVar3 == 0)) || (*(int *)(param_1 + 0x174) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x178) = uVar4;
  iVar3 = FUN_00670ef0(0x7b,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x32), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x15c) = iVar3;
  iVar3 = FUN_00670ef0(0x7d,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x33), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x164) = iVar3;
  iVar3 = FUN_00670ef0(0x7e,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x34), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x14c) = iVar3;
  iVar3 = FUN_00670ef0(0x7c,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x35), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x154) = iVar3;
  iVar3 = FUN_00670ef0(0x5e,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(1), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x16c) = iVar3;
  iVar3 = FUN_00670ef0(0x5d,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(7), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x174) = iVar3;
  fVar10 = (float10)FUN_0064cd90();
  if (fVar10 <= (float10)_DAT_006e9568) goto LAB_0041879e;
  fVar10 = (float10)FUN_00671130(0x80,0);
  fVar1 = (float)fVar10;
  fVar10 = (float10)FUN_00671130(0x81,0);
  fVar2 = (float)fVar10;
  if (fVar1 <= _DAT_006e9568) {
    if (fVar1 < _DAT_006e9564 != (NAN(fVar1) || NAN(_DAT_006e9564))) {
      *(undefined4 *)(param_1 + 0x150) = 1;
      goto LAB_00418760;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x158) = 1;
LAB_00418760:
    FUN_0064cdf0();
  }
  if (fVar2 <= _DAT_006e9568) {
    if (fVar2 < _DAT_006e9564 == (NAN(fVar2) || NAN(_DAT_006e9564))) goto LAB_0041879e;
    *(undefined4 *)(param_1 + 0x168) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x160) = 1;
  }
  FUN_0064cdf0();
LAB_0041879e:
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0x170) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 4) = 1;
      return;
    }
    FUN_004188b0();
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar3 = *(int *)(param_1 + 0x118 + *(int *)(param_1 + 0x10) * 4);
    iVar5 = *(int *)(param_1 + 0x120 + *(int *)(param_1 + 0x10) * 4);
    bVar6 = *(int *)(param_1 + 0x160) != 0;
    if (bVar6) {
      iVar5 = iVar5 + 1;
    }
    bVar7 = *(int *)(param_1 + 0x168) != 0;
    if (bVar7) {
      iVar5 = iVar5 + -1;
    }
    bVar8 = *(int *)(param_1 + 0x150) != 0;
    if (bVar8) {
      iVar3 = iVar3 + -1;
    }
    bVar9 = *(int *)(param_1 + 0x158) != 0;
    if (bVar9) {
      iVar3 = iVar3 + 1;
    }
    FUN_00417c90(iVar3,iVar5);
    if (bVar9 || (bVar8 || (bVar7 || bVar6))) {
      FUN_00659600(s_PuzzleCursor_0071ea7c,1);
    }
    return;
  }
  FUN_00418850();
  return;
}

