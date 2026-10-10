
int __fastcall FUN_006ba550(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float afStack_18 [6];
  
  if (*(int *)(param_1 + 0x90) != 0) {
    pfVar4 = (float *)(**(code **)(**(int **)(param_1 + 0xa4) + 4))();
    pfVar8 = (float *)(param_1 + 0x78);
    *pfVar8 = *pfVar4;
    *(float *)(param_1 + 0x7c) = pfVar4[1];
    *(float *)(param_1 + 0x80) = pfVar4[2];
    *(float *)(param_1 + 0x84) = pfVar4[3];
    *(float *)(param_1 + 0x88) = pfVar4[4];
    *(float *)(param_1 + 0x8c) = pfVar4[5];
    iVar5 = FUN_006ba140();
    fVar1 = *(float *)(iVar5 + 0x30);
    afStack_18[0] = *pfVar8;
    afStack_18[1] = (float)*(undefined4 *)(param_1 + 0x7c);
    afStack_18[2] = (float)*(undefined4 *)(param_1 + 0x80);
    afStack_18[4] = *(float *)(param_1 + 0x88);
    afStack_18[3] = (float)*(undefined4 *)(param_1 + 0x84);
    afStack_18[5] = *(float *)(param_1 + 0x8c);
    *(float *)(param_1 + 0x84) = fVar1;
    *pfVar8 = fVar1;
    uVar2 = *(undefined4 *)(iVar5 + 0x34);
    *(undefined4 *)(param_1 + 0x88) = uVar2;
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    uVar2 = *(undefined4 *)(iVar5 + 0x38);
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    *(undefined4 *)(param_1 + 0x80) = uVar2;
    iVar5 = iVar5 - (int)pfVar8;
    iVar7 = 3;
    do {
      pfVar4 = (float *)(iVar5 + (int)pfVar8);
      iVar6 = 0;
      do {
        fVar1 = *pfVar4 * *(float *)((int)afStack_18 + iVar6);
        fVar3 = *pfVar4 * *(float *)((int)afStack_18 + iVar6 + 0xc);
        if (fVar1 < fVar3 == (NAN(fVar1) || NAN(fVar3))) {
          *pfVar8 = fVar3 + *pfVar8;
        }
        else {
          *pfVar8 = fVar1 + *pfVar8;
          fVar1 = fVar3;
        }
        iVar6 = iVar6 + 4;
        pfVar4 = pfVar4 + 4;
        pfVar8[3] = fVar1 + pfVar8[3];
      } while (iVar6 < 0xc);
      pfVar8 = pfVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  return param_1 + 0x78;
}

