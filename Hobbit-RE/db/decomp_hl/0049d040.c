
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049d040(int param_1,float param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined1 auStack_54 [4];
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3568;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_MotionLinear__OnAdvanceLogic_0072a4f4);
  pfVar1 = (float *)(param_1 + 0x34);
  iVar8 = 0;
  *(float *)(param_1 + 0x44) = param_2 + *(float *)(param_1 + 0x44);
  local_4 = 0;
  *pfVar1 = param_2 * *(float *)(param_1 + 0x28) + *pfVar1;
  *(float *)(param_1 + 0x38) = param_2 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x38);
  *(float *)(param_1 + 0x3c) = param_2 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x3c);
  pfVar5 = (float *)(**(code **)(*param_3 + 0x28))();
  fStack_8c = *pfVar5;
  fStack_88 = pfVar5[1];
  fStack_84 = pfVar5[2];
  fStack_6c = fStack_84 + param_2 * *(float *)(param_1 + 0x24);
  fStack_70 = fStack_88 + param_2 * *(float *)(param_1 + 0x20);
  fStack_74 = param_2 * *(float *)(param_1 + 0x1c) + fStack_8c;
  fVar2 = (fStack_6c - fStack_84) * (fStack_6c - fStack_84) +
          (fStack_70 - fStack_88) * (fStack_70 - fStack_88) +
          (fStack_74 - fStack_8c) * (fStack_74 - fStack_8c);
  if (fVar2 < _DAT_006ebfe4 == (NAN(fVar2) || NAN(_DAT_006ebfe4))) {
    (**(code **)(*param_3 + 0x1c))(pfVar1);
    (**(code **)(*param_3 + 0x14))(&fStack_78,0);
    FUN_00405080(&fStack_60,param_3 + 0x14,param_3 + 0x11);
    fVar2 = (fStack_58 + fStack_5c + fStack_60) * _DAT_006edc00;
    if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
      if ((*(byte *)(param_1 + 0x50) & 4) != 0) {
        fStack_78 = *(float *)(param_1 + 0x24);
        fStack_7c = *(float *)(param_1 + 0x20);
        fStack_80 = *(float *)(param_1 + 0x1c);
        fVar3 = DAT_006e92e8 /
                SQRT(fStack_80 * fStack_80 + fStack_7c * fStack_7c + fStack_78 * fStack_78);
        iVar6 = FUN_0064cf30(fVar3);
        if (iVar6 == 0) {
          fStack_78 = 0.0;
          fVar4 = DAT_006e92e4;
          fVar3 = DAT_006e92e4;
        }
        else {
          fVar3 = fVar3 * _DAT_006edc1c;
          fStack_78 = fStack_78 * fVar3;
          fVar4 = fVar3 * fStack_80;
          fVar3 = fStack_7c * fVar3;
        }
        fStack_8c = fVar4 + fStack_8c;
        *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfb;
        fStack_88 = fVar3 + fStack_88;
        fStack_84 = fStack_78 + fStack_84;
      }
      FUN_00579460(param_3[2],param_3[3],&fStack_8c,&fStack_74,fVar2,0x1850);
      FUN_00579910(param_3[0x58],param_3[0x59]);
      FUN_005798f0(8);
      iVar6 = FUN_00577e70();
      if ((iVar6 != 0) && (0 < DAT_00773970)) {
        puVar7 = &DAT_007734f0;
        do {
          if (((puVar7[0xc] != param_3[0x58]) || (puVar7[0xd] != param_3[0x59])) &&
             (iVar6 = FUN_004b7ce0(puVar7), iVar6 != 0)) {
            (**(code **)(*param_3 + 0x14))(&DAT_007734f4 + iVar8 * 0x12,0);
            *(undefined4 *)(param_1 + 0x1c) = 0;
            *(undefined4 *)(param_1 + 0x20) = 0;
            *(undefined4 *)(param_1 + 0x24) = 0;
            break;
          }
          iVar8 = iVar8 + 1;
          puVar7 = puVar7 + 0x12;
        } while (iVar8 < DAT_00773970);
      }
    }
    else {
      pfVar1 = (float *)(param_1 + 0x10);
      fVar2 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0xc);
      fVar4 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 8);
      fVar3 = *pfVar1 - *(float *)(param_1 + 4);
      fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) / *(float *)(param_1 + 0x40);
      if (fVar2 < *(float *)(param_1 + 0x44) != (NAN(fVar2) || NAN(*(float *)(param_1 + 0x44)))) {
        FUN_0057dd60();
        fStack_50 = *pfVar1;
        uStack_48 = *(undefined4 *)(param_1 + 0x18);
        uStack_4c = *(undefined4 *)(param_1 + 0x14);
        uStack_24 = 0;
        uStack_20 = 0;
        FUN_004b7ce0(auStack_54);
        (**(code **)(*param_3 + 0x14))(pfVar1,0);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

