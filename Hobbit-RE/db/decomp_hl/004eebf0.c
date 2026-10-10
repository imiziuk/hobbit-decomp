
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004eebf0(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fStack_34;
  float afStack_30 [3];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d5f48;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_web_wall__OnAdvanceLogic_0072f064);
  iVar5 = 0;
  uStack_4 = 0;
  if ((char)param_1[0x76] != '\0') {
    if (DAT_006e92e4 < (float)param_1[0x79]) {
      param_1[0x79] = (int)((float)param_1[0x79] - param_2);
    }
    FUN_0065fce0(0);
    pfVar3 = (float *)FUN_00672260(&fStack_18);
    pfVar4 = (float *)(**(code **)(*param_1 + 0x28))();
    if (SQRT((pfVar4[2] - pfVar3[2]) * (pfVar4[2] - pfVar3[2]) +
             (pfVar4[1] - pfVar3[1]) * (pfVar4[1] - pfVar3[1]) +
             (*pfVar4 - *pfVar3) * (*pfVar4 - *pfVar3)) <= (float)param_1[0x5d]) {
      param_1[0x78] = 0;
    }
    else {
      param_1[0x78] = 1;
    }
    if (((param_1[0x78] == 0) &&
        ((float)param_1[0x79] < DAT_006e92e4 == ((float)param_1[0x79] == DAT_006e92e4))) ||
       (param_1[0x72] != 0)) {
      if (param_1[0x72] == 0) {
        fStack_18 = 0.0;
        fStack_14 = -98.1;
        fStack_10 = 0.0;
        FUN_005a2ba0(&fStack_18);
      }
      else {
        afStack_30[0] = (float)param_1[0x1c];
        fStack_24 = 0.0;
        fStack_20 = 0.0;
        fStack_1c = 1.0;
        FUN_0064c8e0(afStack_30[0],afStack_30,&fStack_34);
        fVar1 = fStack_20 * afStack_30[0];
        fStack_20 = fStack_24 * afStack_30[0] + fStack_20 * fStack_34;
        fStack_24 = fStack_34 * fStack_24 - fVar1;
        FUN_004286f0(param_1[0x1a]);
        FUN_00428740(param_1[0x1b]);
        fVar1 = (float)param_1[0x77];
        fStack_24 = fStack_24 * fVar1;
        fStack_20 = fStack_20 * fVar1;
        fStack_1c = fVar1 * fStack_1c;
        fStack_14 = fStack_20 - _DAT_006efa2c;
        fStack_18 = fStack_24;
        fStack_10 = fStack_1c;
        FUN_005a2ba0(&fStack_18);
        iVar6 = 0;
        if (0 < param_1[0x59]) {
          do {
            FUN_005a3000(iVar6,*(undefined4 *)(param_1[0x74] + iVar6 * 4));
            iVar6 = iVar6 + 1;
          } while (iVar6 < param_1[0x59]);
        }
        FUN_005a3000(param_1[0x5a] * param_1[0x59],
                     *(undefined4 *)(param_1[0x74] + param_1[0x59] * 4));
        iVar6 = param_1[0x5a];
        iVar2 = param_1[0x59];
        if (0 < iVar6) {
          do {
            FUN_005a3180((iVar6 * 2 + -1) * iVar2 + -1 + iVar5,
                         *(undefined4 *)(param_1[0x75] + iVar5 * 4));
            iVar5 = iVar5 + 1;
          } while (iVar5 < param_1[0x5a]);
        }
        FUN_005a3000(param_1[0x5a] * param_1[0x59],
                     *(undefined4 *)(param_1[0x74] + param_1[0x59] * 4));
      }
      FUN_005a2bc0(param_2,1);
      uStack_4 = 0xffffffff;
      FUN_00649720();
      ExceptionList = pvStack_c;
      return;
    }
  }
  uStack_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

