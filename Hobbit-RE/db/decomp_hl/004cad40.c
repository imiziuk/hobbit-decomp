
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_004cad40(int param_1,undefined4 param_2,undefined4 param_3,float *param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fStack_18;
  float fStack_14;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  fVar2 = param_5 * _DAT_006e99b0 * param_5 * _DAT_006e99b0;
  iVar9 = 0;
  bVar5 = false;
  piVar6 = (int *)FUN_004021c0(param_2,param_3);
  if (piVar6 != (int *)0x0) {
    pfVar7 = (float *)(**(code **)(*piVar6 + 0x28))();
    fVar1 = *param_4 - *pfVar7;
    fVar3 = param_4[2] - pfVar7[2];
    fVar4 = DAT_006e92e8 / SQRT(fVar1 * fVar1 + fVar3 * fVar3);
    iVar8 = FUN_0064cf30(fVar4);
    if (iVar8 == 0) {
      fStack_c = 0.0;
      fStack_8 = 0.0;
      fStack_4 = 0.0;
    }
    else {
      fStack_c = fVar1 * fVar4;
      fStack_8 = fVar4 * DAT_006e92e4;
      fStack_4 = fVar3 * fVar4;
    }
    bVar5 = true;
  }
  iVar8 = *(int *)(param_1 + 0x120);
  if (0 < iVar8) {
    do {
      if (((iVar9 != 0) || (*(int *)(param_1 + 0xc0) == 0)) &&
         ((iVar9 != iVar8 + -1 || (*(int *)(param_1 + 0xc4) == 0)))) {
        iVar10 = iVar9 * 0x2c;
        fStack_18 = *(float *)(iVar10 + 0xc + *(int *)(param_1 + 0x124)) - *param_4;
        iVar8 = iVar10 + 0xc + *(int *)(param_1 + 0x124);
        fStack_14 = *(float *)(iVar8 + 4) - param_4[1];
        fVar1 = *(float *)(iVar8 + 8) - param_4[2];
        fVar3 = fStack_18 * fStack_18 + fStack_14 * fStack_14 + fVar1 * fVar1;
        if (fVar3 < fVar2 != (NAN(fVar3) || NAN(fVar2))) {
          fVar4 = DAT_006e92e8 / SQRT(fVar3);
          iVar8 = FUN_0064cf30(fVar4);
          if (iVar8 == 0) {
            fStack_18 = 0.0;
            fStack_14 = 0.0;
            fVar1 = DAT_006e92e4;
          }
          else {
            fStack_18 = fStack_18 * fVar4;
            fStack_14 = fStack_14 * fVar4;
            fVar1 = fVar1 * fVar4;
          }
          if (bVar5) {
            fStack_18 = fStack_c;
            fStack_14 = fStack_8;
            fVar1 = fStack_4;
          }
          pfVar7 = (float *)(iVar10 + 0x18 + *(int *)(param_1 + 0x124));
          fVar4 = (_DAT_006e99c0 / *(float *)(param_1 + 0xd0)) * (fVar3 / fVar2);
          fVar3 = fVar4;
          if ((_DAT_006ee9c0 <
               SQRT(pfVar7[2] * pfVar7[2] + pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7) + fVar4) &&
             (fVar3 = _DAT_006ee9c0 - fVar4, _DAT_006ee9c0 - fVar4 <= DAT_006e92e4)) {
            fVar3 = DAT_006e92e4;
          }
          *pfVar7 = fStack_18 * fVar3 + *pfVar7;
          pfVar7[1] = fStack_14 * fVar3 + pfVar7[1];
          pfVar7[2] = fVar3 * fVar1 + pfVar7[2];
          FUN_004cafe0();
        }
      }
      iVar8 = *(int *)(param_1 + 0x120);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar8);
  }
  return 1;
}

