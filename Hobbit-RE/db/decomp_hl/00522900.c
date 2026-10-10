
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00522900(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d79b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_dlg_pause_questlog__OnUpdate_00735194);
  local_4 = 0;
  if (*(int *)(param_1 + 0xb64) != 0) {
    FUN_00671130(0x98,0);
    uVar2 = __ftol();
    FUN_00671130(0x97,0,uVar2);
    uVar3 = __ftol();
    FUN_006a03c0(*(undefined4 *)(param_1 + 8),uVar3,uVar2);
    *(undefined4 *)(param_1 + 0xb64) = 0;
  }
  uVar3 = 0;
  uVar2 = FUN_0042b100(0x13);
  iVar4 = FUN_006710d0(uVar2,uVar3);
  *(int *)(param_1 + 0xb40) = iVar4;
  if ((*(int *)(param_1 + 0xb3c) != 0) && (iVar4 == 0)) {
    FUN_00659600(s_Inventory_ZButton_00734a14,1);
    if (*(int *)(param_1 + 0xb30) == 0) {
      iVar4 = *(int *)(param_1 + 0x1f0);
      *(undefined4 *)(param_1 + 0xb30) = 1;
      *(int *)(param_1 + 0x174) = iVar4;
      DAT_007626a4 = 5;
      if (iVar4 < 6) {
LAB_00522a22:
        DAT_007626a4 = iVar4;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xb30) = 0;
      uVar2 = FUN_00437340();
      *(undefined4 *)(param_1 + 0x174) = uVar2;
      iVar4 = FUN_00437340();
      if (iVar4 < 6) {
        iVar4 = FUN_00437340();
        goto LAB_00522a22;
      }
      DAT_007626a4 = 5;
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  *(undefined4 *)(param_1 + 0xb3c) = *(undefined4 *)(param_1 + 0xb40);
  if (*(int *)(param_1 + 0xb4c) != 0) {
    bVar7 = *(int *)(param_1 + 0xb54) != 0x2a;
    if (bVar7) {
      FUN_006a3240(1,0);
    }
    else {
      FUN_006a3240(1,1);
    }
    FUN_006a3240(0x100,bVar7);
  }
  if (*(int *)(param_1 + 0xb50) != 0) {
    bVar7 = *(int *)(param_1 + 0xb58) != 0x23;
    if (bVar7) {
      FUN_006a3240(1,0);
    }
    else {
      FUN_006a3240(1,1);
    }
    FUN_006a3240(0x100,bVar7);
  }
  fVar8 = (float10)FUN_00671130(0x81,0);
  if (fVar8 <= (float10)_DAT_006e95b0) {
    fVar8 = (float10)FUN_00671130(0x81,0);
    if (fVar8 < (float10)_DAT_006e95b0 != (NAN(fVar8) || NAN((float10)_DAT_006e95b0))) {
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x15c) = 0;
    fVar1 = *(float *)(param_1 + 0xb34) + _DAT_006e9340;
    *(float *)(param_1 + 0xb34) = fVar1;
    if (DAT_006e92e8 <= fVar1) {
      *(undefined4 *)(param_1 + 0x158) = 1;
      *(undefined4 *)(param_1 + 0xb34) = 0;
    }
  }
  iVar4 = FUN_00670ef0(0x7b,0);
  if (((iVar4 != 0) || (*(int *)(param_1 + 0x158) != 0)) ||
     (iVar4 = FUN_00670ef0(0x165,0), iVar4 != 0)) {
    FUN_00522d60();
  }
  fVar8 = (float10)FUN_00671130(0x81,0);
  if (fVar8 < (float10)_DAT_006f09e4 == (NAN(fVar8) || NAN((float10)_DAT_006f09e4))) {
    fVar8 = (float10)FUN_00671130(0x81,0);
    if ((float10)_DAT_006f09e4 < fVar8) {
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb34) = 0;
    fVar1 = *(float *)(param_1 + 0xb38) + _DAT_006e9340;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(float *)(param_1 + 0xb38) = fVar1;
    if (DAT_006e92e8 <= fVar1) {
      *(undefined4 *)(param_1 + 0x15c) = 1;
      *(undefined4 *)(param_1 + 0xb38) = 0;
    }
  }
  iVar4 = FUN_00670ef0(0x7d,0);
  if (((iVar4 != 0) || (*(int *)(param_1 + 0x15c) != 0)) ||
     (iVar4 = FUN_00670ef0(0x16d,0), iVar4 != 0)) {
    FUN_00522dd0();
  }
  if ((*(int *)(param_1 + 0xb44) == 0) || (uVar5 = FUN_006a3230(), (uVar5 & 0x400) == 0)) {
    if ((*(int *)(param_1 + 0xb48) == 0) || (uVar5 = FUN_006a3230(), (uVar5 & 0x400) == 0)) {
      if ((*(int *)(param_1 + 0xb4c) == 0) || (uVar5 = FUN_006a3230(), (uVar5 & 0x400) == 0)) {
        if ((*(int *)(param_1 + 0xb50) == 0) || (uVar5 = FUN_006a3230(), (uVar5 & 0x400) == 0))
        goto LAB_00522d35;
        piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xb50) + 0x10))();
        iStack_1c = *piVar6;
        iStack_18 = piVar6[1];
        iStack_14 = piVar6[2];
        iStack_10 = piVar6[3] + 0x10;
        iVar4 = *(int *)(param_1 + 0xb50);
      }
      else {
        piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xb4c) + 0x10))();
        iStack_1c = *piVar6;
        iStack_18 = piVar6[1];
        iStack_14 = piVar6[2];
        iStack_10 = piVar6[3] + 0x10;
        iVar4 = *(int *)(param_1 + 0xb4c);
      }
    }
    else {
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xb48) + 0x10))();
      iStack_1c = *piVar6;
      iStack_18 = piVar6[1];
      iStack_14 = piVar6[2];
      iStack_10 = piVar6[3] + 0x10;
      iVar4 = *(int *)(param_1 + 0xb48);
    }
  }
  else {
    piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xb44) + 0x10))();
    iStack_1c = *piVar6;
    iStack_18 = piVar6[1];
    iStack_14 = piVar6[2];
    iStack_10 = piVar6[3] + 0x10;
    iVar4 = *(int *)(param_1 + 0xb44);
  }
  iStack_1c = iStack_1c + 0x10;
  iStack_18 = iStack_18 + 0x10;
  iStack_14 = iStack_14 + 0x10;
  FUN_006a0430(*(undefined4 *)(iVar4 + 8),&iStack_1c,0);
LAB_00522d35:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

