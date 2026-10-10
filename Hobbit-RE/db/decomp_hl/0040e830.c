
short __fastcall FUN_0040e830(int param_1)

{
  short sVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  short sVar10;
  
  piVar7 = (int *)FUN_0041bcc0();
  pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
  fVar3 = *pfVar8;
  fVar4 = pfVar8[1];
  fVar5 = pfVar8[2];
  iVar9 = FUN_004021c0(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (iVar9 != 0) {
    if (((((fVar3 < *(float *)(iVar9 + 0x50) != (fVar3 == *(float *)(iVar9 + 0x50))) &&
          (fVar4 < *(float *)(iVar9 + 0x54) != (fVar4 == *(float *)(iVar9 + 0x54)))) &&
         (fVar5 < *(float *)(iVar9 + 0x58) != (fVar5 == *(float *)(iVar9 + 0x58)))) &&
        ((*(float *)(iVar9 + 0x44) <= fVar3 && (*(float *)(iVar9 + 0x48) <= fVar4)))) &&
       (*(float *)(iVar9 + 0x4c) <= fVar5)) {
      return *(short *)(param_1 + 0x5e) * *(short *)(param_1 + 0x5c);
    }
  }
  if (fVar3 < *(float *)(param_1 + 0x50) != (fVar3 == *(float *)(param_1 + 0x50))) {
    if (fVar4 < *(float *)(param_1 + 0x54) != (fVar4 == *(float *)(param_1 + 0x54))) {
      if (fVar5 < *(float *)(param_1 + 0x58) != (fVar5 == *(float *)(param_1 + 0x58))) {
        if (*(float *)(param_1 + 0x44) <= fVar3) {
          if (*(float *)(param_1 + 0x48) <= fVar4) {
            if (*(float *)(param_1 + 0x4c) <= fVar5) {
              sVar1 = *(short *)(param_1 + 0x5e);
              sVar6 = __ftol();
              sVar2 = *(short *)(param_1 + 0x5c);
              sVar10 = (sVar1 - sVar6) + -1;
              sVar6 = __ftol();
              sVar6 = (sVar2 - sVar6) + -1;
              if (((-1 < sVar10) && (sVar10 < sVar1)) && ((-1 < sVar6 && (sVar6 <= sVar2)))) {
                return sVar10 * sVar2 + sVar6;
              }
            }
          }
        }
      }
    }
  }
  return -1;
}

