
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0044cc90(int *param_1,int param_2,uint param_3,float param_4,float param_5,int *param_6,
            uint param_7)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  float10 fVar7;
  int local_14;
  int local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  param_4 = param_4 * param_4;
  if (param_4 < (float)param_1[0x1650] == (NAN(param_4) || NAN((float)param_1[0x1650]))) {
    param_4 = (float)param_1[0x1650];
  }
  if (param_2 != -1) {
    FUN_00588ff0(param_2);
    iVar3 = FUN_00589010(param_2,&local_14);
    while (iVar3 != 0) {
      piVar4 = (int *)FUN_004021c0(local_14,local_10);
      if (((piVar4 != (int *)0x0) && (*(byte *)(piVar4 + 0x1f) == param_3)) &&
         ((piVar4[4] & param_7) == param_7)) {
        if (param_3 == 0x35) {
          uVar5 = (**(code **)(*param_1 + 0x28))();
          iVar3 = FUN_004df1c0(uVar5);
LAB_0044cd49:
          if (iVar3 == 0) goto LAB_0044cdec;
        }
        else if (param_3 == 0x33) {
          iVar3 = FUN_004d37b0();
          goto LAB_0044cd49;
        }
        pfVar6 = (float *)(**(code **)(*piVar4 + 0x28))();
        fStack_c = *pfVar6;
        fStack_8 = pfVar6[1];
        fStack_4 = pfVar6[2];
        fVar1 = (fStack_c - (float)param_1[5]) * (fStack_c - (float)param_1[5]) +
                (fStack_4 - (float)param_1[7]) * (fStack_4 - (float)param_1[7]);
        iVar3 = (**(code **)(*piVar4 + 0x28))();
        fVar2 = (float)param_1[6] - *(float *)(iVar3 + 4);
        if (fVar2 < DAT_006e92e4 != (NAN(fVar2) || NAN(DAT_006e92e4))) {
          fVar2 = -fVar2;
        }
        if (((fVar2 < _DAT_006e9994 != (NAN(fVar2) || NAN(_DAT_006e9994))) &&
            (fVar1 < param_4 != (NAN(fVar1) || NAN(param_4)))) &&
           ((fVar1 < _DAT_006e9334 != (NAN(fVar1) || NAN(_DAT_006e9334)) ||
            (fVar7 = (float10)FUN_0044cb00(&fStack_c),
            fVar7 < (float10)param_5 != (NAN(fVar7) || NAN((float10)param_5)))))) {
          *param_6 = local_14;
          param_6[1] = local_10;
          param_1[0x1650] = (int)fVar1;
          param_1[0x164e] = local_14;
          param_1[0x164f] = local_10;
          return;
        }
      }
LAB_0044cdec:
      iVar3 = FUN_00589010(param_2,&local_14);
    }
  }
  *param_6 = 0;
  param_6[1] = 0;
  return;
}

