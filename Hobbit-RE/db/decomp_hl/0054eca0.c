
void __fastcall FUN_0054eca0(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int *piVar4;
  short *psVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  undefined8 uVar9;
  undefined1 local_c [12];
  
  if (param_1[0x826] != 0) {
    uVar9 = FUN_0064cb70();
    fVar8 = (float10)FUN_0064cbc0(uVar9);
    if ((float10)(float)param_1[1] < fVar8 - (float10)*(double *)(param_1 + 4) !=
        (NAN((float10)(float)param_1[1]) || NAN(fVar8 - (float10)*(double *)(param_1 + 4)))) {
      uVar9 = FUN_0064cb70();
      fVar8 = (float10)FUN_0064cbc0(uVar9);
      *(double *)(param_1 + 4) = (double)fVar8;
      if ((param_1[8] != 0) && (param_1[6] != 0)) {
        FUN_0054ec40();
      }
      piVar7 = param_1 + 0x416;
      piVar4 = param_1 + 0x16;
      *(undefined2 *)piVar7 = 0;
      iVar6 = 0;
      sVar3 = (short)*piVar4;
      while (sVar3 != 0) {
        if (sVar3 == 0x3c) {
          psVar5 = (short *)((int)piVar4 + 2);
          param_1[8] = 1;
          if (*param_1 == iVar6) {
            iVar6 = 0;
            local_c[0] = 0;
            if (*psVar5 != 0x3e) {
              iVar6 = 0;
              do {
                local_c[iVar6] = (char)*psVar5;
                psVar5 = psVar5 + 1;
                iVar6 = iVar6 + 1;
              } while (*psVar5 != 0x3e);
            }
            fVar1 = (float)param_1[3];
            fVar2 = (float)param_1[1];
            local_c[iVar6] = 0;
            param_1[3] = (int)(fVar1 + fVar2);
            fVar8 = (float10)FUN_006487a0(local_c);
            param_1[1] = (int)(float)(fVar8 - (float10)(float)param_1[3]);
            *(undefined2 *)piVar7 = 0;
            *param_1 = *param_1 + 1;
            return;
          }
          sVar3 = *psVar5;
          while (sVar3 != 0x3e) {
            psVar5 = psVar5 + 1;
            sVar3 = *psVar5;
          }
          piVar4 = (int *)(psVar5 + 1);
          if ((short)*piVar4 == 10) {
            piVar4 = (int *)(psVar5 + 2);
          }
          iVar6 = iVar6 + 1;
        }
        else {
          if (*param_1 == iVar6) {
            *(short *)piVar7 = sVar3;
            piVar7 = (int *)((int)piVar7 + 2);
          }
          piVar4 = (int *)((int)piVar4 + 2);
        }
        sVar3 = (short)*piVar4;
      }
      *(undefined2 *)piVar7 = 0;
      if (*param_1 == 0) {
        param_1[8] = 1;
        param_1[1] = param_1[2];
        return;
      }
      FUN_0054ec40();
    }
  }
  return;
}

