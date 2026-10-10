
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005117d0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int local_34;
  int *local_30;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d6ff8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_006501d0(s_dlg_pause_inventory__OnUpdate_0073337c);
  iVar10 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0x55c) != 0) {
    FUN_00671130(0x98,0);
    uVar2 = __ftol();
    FUN_00671130(0x97,0,uVar2);
    uVar3 = __ftol();
    FUN_006a03c0(*(undefined4 *)(param_1 + 8),uVar3,uVar2);
    *(undefined4 *)(param_1 + 0x55c) = 0;
  }
  iVar4 = __ftol();
  iVar5 = __ftol();
  iVar6 = FUN_00670ef0(0x5d,0);
  if (((iVar6 != 0) || (iVar6 = FUN_00670ef0(0xb9,0), iVar6 != 0)) &&
     (fVar11 = (float10)FUN_00434ca0(4), (float10)DAT_006e92e4 < fVar11)) {
    FUN_00511cf0();
  }
  fVar11 = (float10)FUN_00671130(0x80,0);
  if (((float10)_DAT_006e95b0 < fVar11) && (iVar6 = __ftol(), (&DAT_00732f70)[iVar6] == 1)) {
    *(float *)(param_1 + 0x16c) = (float)extraout_ST0;
  }
  fVar11 = (float10)FUN_00671130(0x80,0);
  if ((fVar11 < (float10)_DAT_006f09e4 != (NAN(fVar11) || NAN((float10)_DAT_006f09e4))) &&
     (iVar6 = __ftol(), (&DAT_00732f70)[iVar6] == 1)) {
    *(float *)(param_1 + 0x16c) = (float)extraout_ST0_00;
  }
  fVar11 = (float10)FUN_00671130(0x81,0);
  if ((fVar11 < (float10)_DAT_006f09e4 != (NAN(fVar11) || NAN((float10)_DAT_006f09e4))) &&
     (fVar1 = *(float *)(param_1 + 0x168) + _DAT_006e9340, *(float *)(param_1 + 0x168) = fVar1,
     DAT_006e92e8 <= fVar1)) {
    iVar6 = __ftol();
    if (*(int *)(&DAT_00732f90 + iVar6 * 4) == 1) {
      *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) + _DAT_006ec08c;
      *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) + DAT_006e92e8;
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  fVar11 = (float10)FUN_00671130(0x81,0);
  if (((float10)_DAT_006e95b0 < fVar11) &&
     (fVar1 = *(float *)(param_1 + 0x168) + _DAT_006e9340, *(float *)(param_1 + 0x168) = fVar1,
     DAT_006e92e8 <= fVar1)) {
    iVar6 = __ftol();
    if (*(int *)(s_IDS_CONTROLS_ATTACK_00732f48 + iVar6 * 4 + 8) == 1) {
      *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) - _DAT_006ec08c;
      *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) - DAT_006e92e8;
    }
    *(undefined4 *)(param_1 + 0x168) = 0;
  }
  iVar6 = FUN_00670ef0(0x7e,0);
  if (((iVar6 != 0) || (iVar6 = FUN_00670ef0(0xe8,0), iVar6 != 0)) &&
     (iVar6 = __ftol(), *(int *)(s_IDS_CONTROLS_JUMP_00732f5c + iVar6 * 4 + 0x10) == 1)) {
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) - DAT_006e92e8;
  }
  iVar6 = FUN_00670ef0(0x7c,0);
  if (((iVar6 != 0) || (iVar6 = FUN_00670ef0(0xea,0), iVar6 != 0)) &&
     (iVar6 = __ftol(), *(int *)(&DAT_00732f74 + iVar6 * 4) == 1)) {
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) + DAT_006e92e8;
  }
  iVar6 = FUN_00670ef0(0x7b,0);
  if (((iVar6 != 0) || (iVar6 = FUN_00670ef0(0xe5,0), iVar6 != 0)) &&
     (iVar6 = __ftol(), *(int *)(s_IDS_CONTROLS_ATTACK_00732f48 + iVar6 * 4 + 8) == 1)) {
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) - _DAT_006ec08c;
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) - DAT_006e92e8;
  }
  iVar6 = FUN_00670ef0(0x7d,0);
  if (((iVar6 != 0) || (iVar6 = FUN_00670ef0(0xed,0), iVar6 != 0)) &&
     (iVar6 = __ftol(), *(int *)(&DAT_00732f90 + iVar6 * 4) == 1)) {
    *(float *)(param_1 + 0x16c) = *(float *)(param_1 + 0x16c) + _DAT_006ec08c;
    *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x170) + DAT_006e92e8;
  }
  piVar9 = (int *)(param_1 + 0x4bc);
  local_34 = 0;
  local_30 = piVar9;
LAB_00511b77:
  iVar6 = iVar10 + local_34 * 8;
  if ((*piVar9 == 0) || (iVar7 = FUN_006a3270(0x400), iVar7 == 0)) goto LAB_00511b96;
  if ((&DAT_00732f70)[iVar6] != 0) {
    *(float *)(param_1 + 0x16c) = (float)iVar6;
    *(float *)(param_1 + 0x170) = (float)local_34;
  }
  goto LAB_00511bc0;
LAB_00511b96:
  iVar10 = iVar10 + 1;
  piVar9 = piVar9 + 1;
  if (iVar10 < 8) goto LAB_00511b77;
LAB_00511bc0:
  local_34 = local_34 + 1;
  piVar9 = local_30 + 8;
  if (local_34 < 5) {
    iVar10 = 0;
    local_30 = piVar9;
    goto LAB_00511b77;
  }
  iVar10 = __ftol();
  if ((iVar4 != iVar10) || (iVar10 = __ftol(), iVar5 != iVar10)) {
    FUN_00659600(s_CursorMove_00731fe0,1);
  }
  if ((*(int *)(param_1 + 0x4b4) == 0) || (uVar8 = FUN_006a3230(), (uVar8 & 0x400) == 0)) {
    if ((*(int *)(param_1 + 0x4b8) == 0) || (uVar8 = FUN_006a3230(), (uVar8 & 0x400) == 0))
    goto LAB_00511cc1;
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x4b8) + 0x10))();
    iStack_1c = *piVar9;
    iStack_18 = piVar9[1];
    iStack_14 = piVar9[2];
    iStack_10 = piVar9[3];
    iVar10 = *(int *)(param_1 + 0x4b8);
  }
  else {
    piVar9 = (int *)(**(code **)(**(int **)(param_1 + 0x4b4) + 0x10))();
    iStack_1c = *piVar9;
    iStack_18 = piVar9[1];
    iStack_14 = piVar9[2];
    iStack_10 = piVar9[3];
    iVar10 = *(int *)(param_1 + 0x4b4);
  }
  iStack_10 = iStack_10 + 0x10;
  iStack_1c = iStack_1c + 0x10;
  iStack_18 = iStack_18 + 0x10;
  iStack_14 = iStack_14 + 0x10;
  FUN_006a0430(*(undefined4 *)(iVar10 + 8),&iStack_1c,0);
LAB_00511cc1:
  local_4 = 0xffffffff;
  FUN_006501e0();
  ExceptionList = pvStack_c;
  return;
}

