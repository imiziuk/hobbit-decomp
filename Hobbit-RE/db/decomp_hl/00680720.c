
void __fastcall FUN_00680720(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  undefined8 uVar12;
  
  piVar1 = *(int **)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x260) = 0;
  if (piVar1 != (int *)0x0) {
    piVar2 = *(int **)(piVar1[2] + 0x10);
    if (piVar1[0xb] == 4) {
      iVar3 = piVar1[7];
      iVar9 = piVar1[4];
      iVar7 = *piVar2;
      if (iVar3 < 0) {
        iVar7 = iVar7 - iVar3;
        piVar1[7] = iVar3 + piVar1[8];
      }
      else {
        iVar8 = piVar1[8];
        iVar9 = iVar9 + iVar3;
        if (piVar1[6] < iVar8 + iVar3) {
          iVar8 = piVar1[6] - iVar3;
        }
        piVar1[7] = iVar3 + iVar8;
      }
      if ((iVar9 != iVar7) && (piVar1[0x16] == 0)) {
        FUN_00648480();
      }
      if (piVar1[7] < piVar1[6]) {
        return;
      }
      piVar1[10] = 4;
    }
    else {
      if (piVar1[0xb] != 5) {
        return;
      }
      piVar1[10] = 5;
    }
    iVar3 = *piVar1;
    piVar4 = (int *)piVar1[1];
    *(int **)(iVar3 + 4) = piVar4;
    *piVar4 = iVar3;
    *piVar1 = 0;
    piVar1[1] = 0;
    *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + -1;
    uVar12 = FUN_0064cb70();
    iVar3 = piVar1[0x1b];
    uVar5 = piVar1[0x1a];
    *(undefined8 *)(piVar1 + 0x1c) = uVar12;
    iVar9 = piVar1[0x1d];
    uVar6 = piVar1[0x1c];
    fVar10 = (float10)FUN_0064cbb0(uVar5 - piVar1[0x18],
                                   (iVar3 - piVar1[0x19]) - (uint)(uVar5 < (uint)piVar1[0x18]));
    fVar11 = (float10)FUN_0064cbb0(uVar6 - uVar5,(iVar9 - iVar3) - (uint)(uVar6 < uVar5));
    FUN_00425890(s_ServiceDeviceCurrentRequest_00753ab8,s_Request_Complete__Total___07_3fm_00753a70,
                 (double)(fVar11 + (float10)(float)fVar10),(double)(float)fVar10,(double)fVar11);
    piVar2[6] = piVar2[6] + -1;
    if ((code *)piVar1[9] != (code *)0x0) {
      (*(code *)piVar1[9])();
    }
    if (piVar1[0xe] != 0) {
      FUN_00655a60();
    }
  }
  return;
}

