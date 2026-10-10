
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040ff00(int param_1,undefined4 param_2)

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
  
  iVar3 = FUN_00410380(param_2);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_00670ef0(0x7b,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x32), iVar3 == 0)) || (*(int *)(param_1 + 0xbc) != 0))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  iVar3 = FUN_00670ef0(0x7d,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x33), iVar3 == 0)) || (*(int *)(param_1 + 0xc4) != 0))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 200) = uVar4;
  iVar3 = FUN_00670ef0(0x7e,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x34), iVar3 == 0)) || (*(int *)(param_1 + 0xac) != 0))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar4;
  iVar3 = FUN_00670ef0(0x7c,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x35), iVar3 == 0)) || (*(int *)(param_1 + 0xb4) != 0))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  iVar3 = FUN_00670ef0(0x5e,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(1), iVar3 == 0)) || (*(int *)(param_1 + 0xcc) != 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0xd0) = uVar4;
  iVar3 = FUN_00670ef0(0x62,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x31), iVar3 == 0)) || (*(int *)(param_1 + 0xd4) != 0))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar4;
  iVar3 = FUN_00670ef0(0x61,0);
  if (((iVar3 == 0) && (iVar3 = FUN_0042a7d0(0x30), iVar3 == 0)) || (*(int *)(param_1 + 0xdc) != 0))
  {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar4;
  iVar3 = FUN_00670ef0(0x7b,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x32), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xbc) = iVar3;
  iVar3 = FUN_00670ef0(0x7d,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x33), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xc4) = iVar3;
  iVar3 = FUN_00670ef0(0x7e,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x34), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xac) = iVar3;
  iVar3 = FUN_00670ef0(0x7c,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x35), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xb4) = iVar3;
  iVar3 = FUN_00670ef0(0x5e,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(1), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xcc) = iVar3;
  iVar3 = FUN_00670ef0(0x62,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x31), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xd4) = iVar3;
  iVar3 = FUN_00670ef0(0x61,0);
  if ((iVar3 != 0) || (iVar3 = FUN_0042a7d0(0x30), iVar3 != 0)) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0xdc) = iVar3;
  fVar10 = (float10)FUN_0064cd90();
  if (fVar10 <= (float10)_DAT_006e9568) goto LAB_0041025c;
  fVar10 = (float10)FUN_00671130(0x80,0);
  fVar1 = (float)fVar10;
  fVar10 = (float10)FUN_00671130(0x81,0);
  fVar2 = (float)fVar10;
  if (fVar1 <= _DAT_006e9568) {
    if (fVar1 < _DAT_006e9564 != (NAN(fVar1) || NAN(_DAT_006e9564))) {
      *(undefined4 *)(param_1 + 0xb0) = 1;
      goto LAB_0041021e;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 1;
LAB_0041021e:
    FUN_0064cdf0();
  }
  if (fVar2 <= _DAT_006e9568) {
    if (fVar2 < _DAT_006e9564 == (NAN(fVar2) || NAN(_DAT_006e9564))) goto LAB_0041025c;
    *(undefined4 *)(param_1 + 200) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0xc0) = 1;
  }
  FUN_0064cdf0();
LAB_0041025c:
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    return;
  }
  if (*(int *)(param_1 + 0xd8) == 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      iVar3 = *(int *)(param_1 + 0x80);
      iVar5 = *(int *)(param_1 + 0x84);
      bVar6 = *(int *)(param_1 + 0xc0) != 0;
      if (bVar6) {
        iVar5 = iVar5 + 1;
      }
      bVar7 = *(int *)(param_1 + 200) != 0;
      if (bVar7) {
        iVar5 = iVar5 + -1;
      }
      bVar8 = *(int *)(param_1 + 0xb0) != 0;
      if (bVar8) {
        iVar3 = iVar3 + -1;
      }
      bVar9 = *(int *)(param_1 + 0xb8) != 0;
      if (bVar9) {
        iVar3 = iVar3 + 1;
      }
      FUN_0040f250(iVar3,iVar5);
      if (bVar9 || (bVar8 || (bVar7 || bVar6))) {
        FUN_00659600(s_PuzzleCursor_0071ea7c,1);
      }
      return;
    }
    FUN_00410310(0);
    return;
  }
  FUN_00410310(1);
  return;
}

