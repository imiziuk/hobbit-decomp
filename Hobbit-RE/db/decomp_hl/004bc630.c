
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004bc630(int param_1,int param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  int iVar8;
  byte bVar9;
  float *pfVar10;
  float fStack_8;
  
  iVar5 = FUN_004ba6e0();
  if (iVar5 != 0) {
    piVar6 = (int *)FUN_0041bcc0();
    pfVar7 = (float *)(**(code **)(*piVar6 + 0x28))();
    bVar9 = 0;
    iVar5 = 0;
    pfVar10 = (float *)(param_1 + 0x1a8);
    do {
      if (DAT_006e92e4 <
          (pfVar10[-1] - *(float *)(param_1 + 0x14)) * (*pfVar7 - *(float *)(param_1 + 0x14)) +
          (*pfVar10 - *(float *)(param_1 + 0x1c)) * (pfVar7[2] - *(float *)(param_1 + 0x1c))) {
        bVar9 = bVar9 | '\x01' << ((byte)iVar5 & 0x1f);
      }
      iVar5 = iVar5 + 1;
      pfVar10 = pfVar10 + 2;
    } while (iVar5 < 4);
    iVar5 = 0;
    if (bVar9 != 3) {
      if (bVar9 == 6) {
        iVar5 = 1;
      }
      else if (bVar9 == 0xc) {
        iVar5 = 2;
      }
      else if (bVar9 == 9) {
        iVar5 = 3;
      }
    }
    iVar8 = param_2;
    if (3 < param_2) {
      iVar8 = param_2 + -3;
    }
    iVar8 = (iVar8 + iVar5 * 4) * 8;
    fVar4 = *(float *)(param_1 + 0x1a4 + *(int *)(&DAT_0072c478 + iVar8) * 8) -
            *(float *)(param_1 + 0x1a4 + *(int *)(&DAT_0072c47c + iVar8) * 8);
    fStack_8 = *(float *)(param_1 + *(int *)(&DAT_0072c478 + iVar8) * 8 + 0x1a8) -
               *(float *)(param_1 + *(int *)(&DAT_0072c47c + iVar8) * 8 + 0x1a8);
    if (param_2 == 4) {
      fVar4 = fVar4 * _DAT_006e99b0;
      fStack_8 = fStack_8 * _DAT_006e99b0;
    }
    else if ((param_2 == 5) || (param_2 == 6)) {
      iVar8 = *(int *)(iVar5 * 0x20 + 0x72c484);
      iVar5 = *(int *)(iVar5 * 0x20 + 0x72c480);
      fVar4 = (*(float *)(param_1 + 0x1a4 + iVar5 * 8) - *(float *)(param_1 + 0x1a4 + iVar8 * 8)) *
              _DAT_006e936c + fVar4;
      fStack_8 = (*(float *)(param_1 + iVar5 * 8 + 0x1a8) - *(float *)(param_1 + iVar8 * 8 + 0x1a8))
                 * _DAT_006e936c + fStack_8;
    }
    fVar3 = *(float *)(param_1 + 0x130);
    fVar1 = *(float *)(param_1 + 0x184);
    fVar2 = *(float *)(param_1 + 0x188);
    *param_3 = fVar4 * fVar3 + *(float *)(param_1 + 0x180);
    param_3[1] = fVar1;
    param_3[2] = fStack_8 * fVar3 + fVar2;
    param_3[1] = *(float *)(param_4 + 4);
    return 1;
  }
  return 0;
}

