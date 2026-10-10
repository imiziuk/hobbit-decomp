
void __fastcall FUN_0056bdc0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  undefined8 uVar8;
  char *pcVar9;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  piVar1 = (int *)FUN_0041bcc0();
  *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x49c);
  *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x4a0);
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x4a8);
  *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4ac);
  *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4b0);
  *(undefined4 *)(param_1 + 0x4b4) = 0;
  FUN_00571090();
  FUN_00570ee0();
  if (*(int *)(param_1 + 0x480) == 5) {
LAB_0056be70:
    if (piVar1[0x235] != 0x15) {
      FUN_0056b6b0(0);
      FUN_0056b710();
      *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x4a8);
      *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x4ac);
      *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4b0);
    }
  }
  else if (piVar1[0x235] == 0x15) {
    FUN_0056c2a0(5,0);
    uVar8 = FUN_0041bcd0();
    *(undefined8 *)(param_1 + 0x688) = uVar8;
  }
  else if (*(int *)(param_1 + 0x480) == 5) goto LAB_0056be70;
  if (*(int *)(param_1 + 0x480) == 6) {
LAB_0056bef9:
    iVar2 = (**(code **)(*piVar1 + 0x108))(1);
    if ((iVar2 != 0) && (piVar1[0x235] != 0x1b)) {
      FUN_0056b6b0(1);
    }
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x108))(1);
    if ((iVar2 == 0) || (piVar1[0x235] == 0x1b)) {
      FUN_0056c2a0(6,0);
      uVar8 = FUN_0041bcd0();
      *(undefined8 *)(param_1 + 0x688) = uVar8;
    }
    else if (*(int *)(param_1 + 0x480) == 6) goto LAB_0056bef9;
  }
  if (*(int *)(param_1 + 0x480) == 2) {
LAB_0056bf82:
    if (piVar1[0x11b4] == 0) {
      FUN_0056b8d0();
    }
  }
  else {
    fVar7 = 0.0;
    if (piVar1[0x11b4] == 0) {
      if (*(int *)(param_1 + 0x480) == 2) goto LAB_0056bf82;
    }
    else {
      iVar2 = piVar1[0x11b5];
      if ((iVar2 < 0) || (0x3f < iVar2)) {
        fStack_24 = 0.0;
      }
      else {
        fStack_24 = (float)piVar1[iVar2 * 2 + 0x11b7];
        fVar7 = (float)piVar1[iVar2 * 2 + 0x11b6];
      }
      fStack_18 = (float)piVar1[2];
      fStack_14 = (float)piVar1[3];
      fStack_28 = fVar7;
      FUN_0056b890(&fStack_18,&fStack_28);
    }
  }
  if (*(int *)(param_1 + 0x480) == 3) {
LAB_0056bfd6:
    iVar2 = piVar1[0x235];
    if (((iVar2 != 0x26) && (iVar2 != 0x1e)) && (iVar2 != 0x1f)) {
      FUN_0056b6b0(0);
    }
  }
  else {
    iVar2 = piVar1[0x235];
    if (((iVar2 == 0x26) || (iVar2 == 0x1e)) || (iVar2 == 0x1f)) {
      FUN_0056c2a0(3,0);
      uVar8 = FUN_0041bcd0();
      *(undefined8 *)(param_1 + 0x688) = uVar8;
    }
    else if (*(int *)(param_1 + 0x480) == 3) goto LAB_0056bfd6;
  }
  if ((*(int *)(param_1 + 0x480) == 1) || (*(int *)(param_1 + 0x480) == 5)) {
    fStack_18 = *(float *)(param_1 + 0x49c) + (float)piVar1[0x134e];
    fStack_14 = *(float *)(param_1 + 0x4a0) + (float)piVar1[0x134f];
    fStack_10 = *(float *)(param_1 + 0x4a4) + (float)piVar1[0x1350];
    fStack_28 = *(float *)(param_1 + 0x4a8) + (float)piVar1[0x134e];
    fStack_24 = *(float *)(param_1 + 0x4ac) + (float)piVar1[0x134f];
    fStack_20 = *(float *)(param_1 + 0x4b0) + (float)piVar1[0x1350];
    iVar2 = FUN_0052a650();
    if (iVar2 != 6) {
      fStack_18 = fStack_18 - fStack_28;
      fStack_14 = fStack_14 - fStack_24;
      fStack_10 = fStack_10 - fStack_20;
      FUN_00428790(piVar1[0x1353]);
      FUN_004286f0(piVar1[0x1351]);
      FUN_00428740(piVar1[0x1352]);
      fStack_18 = fStack_28 + fStack_18;
      fStack_14 = fStack_24 + fStack_14;
      fStack_10 = fStack_20 + fStack_10;
    }
    FUN_00570010(fStack_18,fStack_14,fStack_10);
    *(float *)(param_1 + 0x4a8) = fStack_28;
    *(float *)(param_1 + 0x4ac) = fStack_24;
    *(float *)(param_1 + 0x4b0) = fStack_20;
    *(float *)(param_1 + 0x4c4) = *(float *)(param_1 + 0x4c4) + (float)piVar1[0x134e];
    *(float *)(param_1 + 0x4c8) = (float)piVar1[0x134f] + *(float *)(param_1 + 0x4c8);
    *(float *)(param_1 + 0x4cc) = (float)piVar1[0x1350] + *(float *)(param_1 + 0x4cc);
    *(float *)(param_1 + 0x4b8) = (float)piVar1[0x134e] + *(float *)(param_1 + 0x4b8);
    *(float *)(param_1 + 0x4bc) = (float)piVar1[0x134f] + *(float *)(param_1 + 0x4bc);
    *(float *)(param_1 + 0x4c0) = (float)piVar1[0x1350] + *(float *)(param_1 + 0x4c0);
  }
  if (*(int *)(param_1 + 0x480) == 1) {
    iVar2 = piVar1[0x235];
    if ((((iVar2 == 0xc) || (iVar2 == 0x1c)) || (iVar2 == 0x25)) ||
       ((iVar2 == 0x23 || (iVar2 == 9)))) {
      uVar3 = *(uint *)(param_1 + 0x484) | 0x200;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x484) & 0xfffffdff;
    }
    *(uint *)(param_1 + 0x484) = uVar3;
  }
  piVar1 = (int *)FUN_00571230();
  if ((piVar1[0x2b] == 0) || (piVar1[0x2c] == 0)) {
    if (3 < *(int *)(param_1 + 0x480)) goto LAB_0056c287;
    piVar4 = (int *)FUN_004021c0(*(undefined4 *)(param_1 + 0x688),*(undefined4 *)(param_1 + 0x68c));
    if (piVar4 == (int *)0x0) goto LAB_0056c287;
    pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
    pfVar6 = (float *)(**(code **)(*piVar1 + 0x28))();
    if (SQRT((*pfVar6 - *pfVar5) * (*pfVar6 - *pfVar5) +
             (pfVar6[1] - pfVar5[1]) * (pfVar6[1] - pfVar5[1]) +
             (pfVar6[2] - pfVar5[2]) * (pfVar6[2] - pfVar5[2])) <=
        *(float *)(*(int *)(param_1 + 0x730) + 0xdc)) goto LAB_0056c287;
    pcVar9 = s_CAMERAMGR__Popping_camera_into_p_0073f8c8;
  }
  else {
    pcVar9 = s_CAMERAMGR__Popping_camera_into_p_0073f8fc;
  }
  *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 4;
  FUN_0064e7d0(pcVar9);
LAB_0056c287:
  FUN_00429100();
  return;
}

