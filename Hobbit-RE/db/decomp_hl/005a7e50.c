
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005a7e50(int param_1,int param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = *(int *)(param_1 + 0x8840);
  if (iVar6 < 0x50) {
    iVar5 = iVar6 * 0x1b4 + param_1;
    *(int *)(param_1 + 0x8840) = iVar6 + 1;
    *(undefined4 *)(iVar5 + 0x1ac) = 1;
    *(undefined4 *)(iVar5 + 0x1b0) = param_4;
    if (0 < param_3) {
      puVar2 = (undefined4 *)(param_2 + 8);
      puVar4 = (undefined4 *)(iVar5 + 0x1c);
      iVar6 = param_3;
      do {
        puVar4[-2] = puVar2[-2];
        puVar4[-1] = puVar2[-1];
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 3;
        puVar4 = puVar4 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(int *)(iVar5 + 0x10) = param_3;
    *(undefined4 *)(iVar5 + 0x184) = 0x7f7fffff;
    *(undefined4 *)(iVar5 + 0x188) = 0x7f7fffff;
    *(undefined4 *)(iVar5 + 0x18c) = 0x7f7fffff;
    FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
    iVar6 = *(int *)(iVar5 + 0x10);
    pfVar3 = (float *)(iVar5 + 0x14);
    if (0 < iVar6) {
      do {
        if (*pfVar3 < *(float *)(iVar5 + 0x184) != (NAN(*pfVar3) || NAN(*(float *)(iVar5 + 0x184))))
        {
          *(float *)(iVar5 + 0x184) = *pfVar3;
        }
        if (pfVar3[1] < *(float *)(iVar5 + 0x188) !=
            (NAN(pfVar3[1]) || NAN(*(float *)(iVar5 + 0x188)))) {
          *(float *)(iVar5 + 0x188) = pfVar3[1];
        }
        if (pfVar3[2] < *(float *)(iVar5 + 0x18c) !=
            (NAN(pfVar3[2]) || NAN(*(float *)(iVar5 + 0x18c)))) {
          *(float *)(iVar5 + 0x18c) = pfVar3[2];
        }
        if (*(float *)(iVar5 + 400) < *pfVar3) {
          *(float *)(iVar5 + 400) = *pfVar3;
        }
        if (*(float *)(iVar5 + 0x194) < pfVar3[1]) {
          *(float *)(iVar5 + 0x194) = pfVar3[1];
        }
        if (*(float *)(iVar5 + 0x198) < pfVar3[2]) {
          *(float *)(iVar5 + 0x198) = pfVar3[2];
        }
        pfVar3 = pfVar3 + 3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    local_3c = 0.0;
    local_38 = 0.0;
    local_34 = 0.0;
    iVar6 = 0;
    if (0 < *(int *)(iVar5 + 0x10)) {
      pfVar3 = (float *)(iVar5 + 0x1c);
      do {
        iVar6 = iVar6 + 1;
        local_3c = local_3c + pfVar3[-2];
        local_38 = local_38 + pfVar3[-1];
        local_34 = local_34 + *pfVar3;
        pfVar3 = pfVar3 + 3;
      } while (iVar6 < *(int *)(iVar5 + 0x10));
    }
    iVar6 = 0;
    fVar1 = DAT_006e92e8 / (float)*(int *)(iVar5 + 0x10);
    local_3c = local_3c * fVar1;
    local_38 = local_38 * fVar1;
    local_34 = local_34 * fVar1;
    *(float *)(iVar5 + 0x170) = local_3c;
    *(float *)(iVar5 + 0x174) = local_38;
    *(float *)(iVar5 + 0x178) = local_34;
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 0.0;
    if (*(int *)(iVar5 + 0x10) != 1 && -1 < *(int *)(iVar5 + 0x10) + -1) {
      pfVar3 = (float *)(iVar5 + 0x24);
      do {
        FUN_00401f00(pfVar3[-1] - local_3c,*pfVar3 - local_38,pfVar3[1] - local_34);
        FUN_00401f00(pfVar3[-4] - local_3c,pfVar3[-3] - local_38,pfVar3[-2] - local_34);
        FUN_00401f00(local_1c * local_14 - local_20 * local_10,
                     local_10 * local_24 - local_1c * local_18,
                     local_20 * local_18 - local_14 * local_24);
        iVar6 = iVar6 + 1;
        local_30 = local_c + local_30;
        pfVar3 = pfVar3 + 3;
        local_2c = local_2c + local_8;
        local_28 = local_28 + local_4;
      } while (iVar6 < *(int *)(iVar5 + 0x10) + -1);
    }
    fVar7 = (float10)FUN_00404890();
    *(float *)(iVar5 + 0x17c) = (float)(fVar7 * (float10)_DAT_006e936c);
    FUN_0042e1f0();
    FUN_00499d00(&local_3c,&local_30);
  }
  return;
}

