
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0056c890(int param_1,undefined4 *param_2,float *param_3,float *param_4,undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float local_c [2];
  float local_4;
  
  piVar5 = (int *)FUN_004021c0(*param_2,param_2[1]);
  if (piVar5 == (int *)0x0) {
    *param_3 = *(float *)(param_1 + 0x4c4);
    param_3[1] = *(float *)(param_1 + 0x4c8);
    param_3[2] = *(float *)(param_1 + 0x4cc);
    local_c[0] = *(float *)(param_1 + 0x4c4) - *(float *)(param_1 + 0x4b8);
    local_4 = *(float *)(param_1 + 0x4cc) - *(float *)(param_1 + 0x4c0);
    fVar9 = (float10)FUN_0064ca10(local_c[0],local_4);
    *param_4 = (float)fVar9;
  }
  else {
    pfVar6 = (float *)FUN_0056bcf0(local_c,piVar5,param_5);
    pfVar7 = (float *)(**(code **)(*piVar5 + 0x28))();
    fVar1 = pfVar7[1];
    fVar2 = pfVar6[1];
    fVar3 = pfVar7[2];
    fVar4 = pfVar6[2];
    *param_3 = *pfVar7 + *pfVar6;
    param_3[1] = fVar1 + fVar2;
    param_3[2] = fVar3 + fVar4;
    iVar8 = (**(code **)(*piVar5 + 0x30))();
    fVar1 = *(float *)(iVar8 + 4);
    *param_4 = fVar1;
    if ((*(uint *)(param_1 + 0x484) & 0x400) != 0) {
      fVar9 = (float10)fVar1 + (float10)_DAT_006e9368 + (float10)_DAT_006e9368;
      if (((float10)_DAT_006e95a0 < fVar9) ||
         (fVar9 < (float10)_DAT_006e959c != (NAN(fVar9) || NAN((float10)_DAT_006e959c)))) {
        fVar9 = (float10)FUN_0064c6b0((float)fVar9,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar9) {
        do {
          fVar9 = fVar9 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar9);
      }
      if (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar9 = fVar9 + (float10)_DAT_006e9598;
        } while (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4)));
      }
      *param_4 = (float)(fVar9 - (float10)_DAT_006e9368);
    }
    if ((*(uint *)(param_1 + 0x484) & 0x800) != 0) {
      fVar9 = (float10)*param_4 + (float10)_DAT_006e9578 + (float10)_DAT_006e9368;
      if (((float10)_DAT_006e95a0 < fVar9) ||
         (fVar9 < (float10)_DAT_006e959c != (NAN(fVar9) || NAN((float10)_DAT_006e959c)))) {
        fVar9 = (float10)FUN_0064c6b0((float)fVar9,0x40c90fdb);
      }
      if ((float10)_DAT_006e9598 <= fVar9) {
        do {
          fVar9 = fVar9 - (float10)_DAT_006e9598;
        } while ((float10)_DAT_006e9598 <= fVar9);
      }
      if (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4))) {
        do {
          fVar9 = fVar9 + (float10)_DAT_006e9598;
        } while (fVar9 < (float10)DAT_006e92e4 != (NAN(fVar9) || NAN((float10)DAT_006e92e4)));
      }
      *param_4 = (float)(fVar9 - (float10)_DAT_006e9368);
      return;
    }
  }
  return;
}

