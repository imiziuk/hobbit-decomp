
void __thiscall FUN_005b74e0(float param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  float *unaff_EBX;
  int iVar12;
  float *pfVar13;
  undefined4 unaff_ESI;
  float *pfVar14;
  int *piVar15;
  int unaff_retaddr;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_c;
  int iStack_4;
  
  iVar12 = *(int *)((int)param_1 + 0xd8);
  piVar15 = (int *)(*(int *)((int)param_1 + 0xe4) + param_3 * 4);
  iVar8 = (0 < *(int *)((int)param_1 + 0x1c) + *(int *)((int)param_1 + 0x18)) + 1;
  if (*piVar15 != iVar8) {
    *piVar15 = iVar8;
    piVar15 = (int *)(param_3 * 0x10 + *(int *)(param_2 + 0xa4));
    local_34 = 0;
    iVar8 = *(int *)((int)param_1 + 0x1c) + *(int *)((int)param_1 + 0x18);
    local_28 = iVar12;
    local_1c = param_1;
    (**(code **)(**(int **)(*(int *)((int)param_1 + 0x140) + param_3 * 4) + 4))
              (&local_34,CONCAT31((int3)((uint)iVar8 >> 8),0 < iVar8));
    iVar8 = piVar15[1];
    pfVar13 = (float *)piVar15[3];
    iStack_2c = iVar8 * 8 + 0x20;
    if (*(int *)((int)param_1 + 0x74) == 1) {
      unaff_ESI = *(undefined4 *)((int)param_1 + 0x70);
    }
    else {
      FUN_00425250((int)param_1 + 0x6c);
    }
    local_34 = 0;
    if (0 < *piVar15) {
      local_28 = -(iVar8 * 8 + 0x1c);
      iStack_4 = 4 - (int)pfVar13;
      pfVar14 = pfVar13 + 4;
      do {
        pfVar9 = (float *)((uint)*(byte *)(pfVar14 + 2) * 0x40 + iVar12);
        fVar1 = pfVar9[5];
        fVar2 = pfVar14[-3];
        fVar3 = pfVar14[-2];
        fVar4 = pfVar9[9];
        fVar5 = pfVar9[1];
        fVar6 = *pfVar13;
        fVar7 = pfVar9[0xd];
        fStack_c = pfVar14[-3] * pfVar9[6] + pfVar14[-2] * pfVar9[10] + pfVar9[2] * *pfVar13 +
                   pfVar9[0xe];
        *unaff_EBX = *pfVar13 * *pfVar9 + pfVar14[-3] * pfVar9[4] + pfVar14[-2] * pfVar9[8] +
                     pfVar9[0xc];
        unaff_EBX[2] = fStack_c;
        unaff_EBX[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
        FUN_00401f00(pfVar14[1] * pfVar9[8] + pfVar14[-1] * *pfVar9 + *pfVar14 * pfVar9[4],
                     pfVar14[-1] * pfVar9[1] + pfVar9[9] * pfVar14[1] + *pfVar14 * pfVar9[5],
                     *pfVar14 * pfVar9[6] + pfVar14[1] * pfVar9[10] + pfVar9[2] * pfVar14[-1]);
        unaff_EBX[3] = fStack_20;
        unaff_EBX[4] = local_1c;
        unaff_EBX[5] = fStack_18;
        *(char *)((int)unaff_EBX + 0x1b) = (char)((uint)unaff_ESI >> 0x18);
        *(char *)((int)unaff_EBX + 0x1a) = (char)((uint)unaff_ESI >> 0x10);
        *(char *)((int)unaff_EBX + 0x19) = (char)((uint)unaff_ESI >> 8);
        *(char *)(unaff_EBX + 6) = (char)unaff_ESI;
        *(undefined1 *)((int)unaff_EBX + 0x1f) = 0xff;
        *(undefined1 *)((int)unaff_EBX + 0x1e) = 0xff;
        *(undefined1 *)((int)unaff_EBX + 0x1d) = 0xff;
        *(undefined1 *)(unaff_EBX + 7) = 0xff;
        iVar11 = 0;
        if (0 < piVar15[1]) {
          pfVar9 = pfVar14 + 3;
          do {
            pfVar10 = (float *)(iStack_4 + (int)pfVar9 + (int)unaff_EBX);
            *pfVar10 = *pfVar9;
            pfVar10[1] = pfVar9[1];
            iVar11 = iVar11 + 1;
            pfVar9 = pfVar9 + 2;
            iVar12 = iStack_30;
          } while (iVar11 < piVar15[1]);
        }
        unaff_EBX = (float *)((int)unaff_EBX + iStack_2c);
        pfVar13 = pfVar13 + iVar8 * 2 + 7;
        pfVar14 = pfVar14 + iVar8 * 2 + 7;
        iStack_4 = iStack_4 + local_28;
        local_34 = local_34 + 1;
        param_1 = fStack_24;
      } while (local_34 < *piVar15);
    }
    (**(code **)(**(int **)(*(int *)((int)param_1 + 0x140) + unaff_retaddr * 4) + 8))();
  }
  return;
}

