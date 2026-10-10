
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005785c0(int param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x3d28);
  fVar2 = (param_3[1] - param_2[1]) * (param_4[2] - param_2[2]) -
          (param_3[2] - param_2[2]) * (param_4[1] - param_2[1]);
  fVar1 = (param_3[2] - param_2[2]) * (*param_4 - *param_2) -
          (param_4[2] - param_2[2]) * (*param_3 - *param_2);
  fVar3 = (param_4[1] - param_2[1]) * (*param_3 - *param_2) -
          (param_3[1] - param_2[1]) * (*param_4 - *param_2);
  fVar1 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  if (iVar7 == 0x100) {
    if (fVar1 < _DAT_006e9334 == (NAN(fVar1) || NAN(_DAT_006e9334))) {
      iVar7 = -1;
      iVar8 = 0;
      pfVar6 = (float *)(param_1 + 0x548);
      fVar2 = _DAT_006ec00c;
      do {
        fVar5 = (pfVar6[-4] - pfVar6[-7]) * (*pfVar6 - pfVar6[-6]) -
                (pfVar6[-3] - pfVar6[-6]) * (pfVar6[-1] - pfVar6[-7]);
        fVar4 = (pfVar6[-3] - pfVar6[-6]) * (pfVar6[-2] - pfVar6[-8]) -
                (*pfVar6 - pfVar6[-6]) * (pfVar6[-5] - pfVar6[-8]);
        fVar3 = (pfVar6[-1] - pfVar6[-7]) * (pfVar6[-5] - pfVar6[-8]) -
                (pfVar6[-4] - pfVar6[-7]) * (pfVar6[-2] - pfVar6[-8]);
        fVar3 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
        if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
          iVar7 = iVar8;
          fVar2 = fVar3;
        }
        iVar8 = iVar8 + 1;
        pfVar6 = pfVar6 + 0xe;
      } while (iVar8 < 0x100);
      if (fVar1 < fVar2 == (NAN(fVar1) || NAN(fVar2))) goto LAB_0057872a;
    }
    return;
  }
  *(int *)(param_1 + 0x3d28) = iVar7 + 1;
LAB_0057872a:
  param_1 = iVar7 * 0x38 + param_1;
  *(float *)(param_1 + 0x528) = *param_2;
  *(float *)(param_1 + 0x52c) = param_2[1];
  *(float *)(param_1 + 0x530) = param_2[2];
  *(float *)(param_1 + 0x534) = *param_3;
  *(float *)(param_1 + 0x538) = param_3[1];
  *(float *)(param_1 + 0x53c) = param_3[2];
  FUN_004357e0(param_4);
  *(undefined4 *)(param_1 + 0x54c) = param_6;
  *(undefined4 *)(param_1 + 0x558) = param_7;
  *(undefined4 *)(param_1 + 0x55c) = param_8;
  *(undefined4 *)(param_1 + 0x550) = param_5;
  return;
}

