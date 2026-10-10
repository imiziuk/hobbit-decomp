
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0049bef0(int param_1,float param_2,int *param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  float unaff_ESI;
  float10 fVar10;
  float10 fVar11;
  undefined4 unaff_retaddr;
  undefined1 *puVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (*(int *)(param_1 + 0x10) == 3) {
    *(float *)(param_1 + 0x54) = param_2 + *(float *)(param_1 + 0x54);
    return;
  }
  *(float *)(param_1 + 0x54) = param_2 + *(float *)(param_1 + 0x54);
  if ((NAN(param_2) || NAN(DAT_006e92e4)) == (param_2 == DAT_006e92e4)) {
    iVar5 = (**(code **)(*param_3 + 0x28))();
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar5 + 4);
    if (*(int *)(param_1 + 0x10) == 2) {
      fStack_14 = -(_DAT_0072a4bc * param_2);
      fVar14 = -(_DAT_0072a4bc * *(float *)(param_1 + 0x18) * param_2);
      FUN_00401f00(fVar14 * *(float *)(param_1 + 0x14),fVar14 * *(float *)(param_1 + 0x18),
                   fVar14 * *(float *)(param_1 + 0x1c));
      FUN_00401f00(-fStack_30,fStack_14 - fStack_2c,-fStack_28);
      *(float *)(param_1 + 4) = fStack_3c + *(float *)(param_1 + 4);
      *(float *)(param_1 + 8) = fStack_38 + *(float *)(param_1 + 8);
      *(float *)(param_1 + 0xc) = fStack_34 + *(float *)(param_1 + 0xc);
      fVar14 = SQRT(*(float *)(param_1 + 0xc) * *(float *)(param_1 + 0xc) +
                    *(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
                    *(float *)(param_1 + 4) * *(float *)(param_1 + 4));
      if ((fVar14 < _DAT_006e936c != (NAN(fVar14) || NAN(_DAT_006e936c))) &&
         (fVar14 = param_2 + *(float *)(param_1 + 0x38), *(float *)(param_1 + 0x38) = fVar14,
         _DAT_006e936c < fVar14)) {
        *(undefined4 *)(param_1 + 0x10) = 3;
        return;
      }
      FUN_00401f00(param_2 * *(float *)(param_1 + 4),param_2 * *(float *)(param_1 + 8),
                   param_2 * *(float *)(param_1 + 0xc));
      pfVar6 = (float *)(**(code **)(*param_3 + 0x28))();
      FUN_00401f00(fStack_24 + *pfVar6,fStack_20 + pfVar6[1],fStack_1c + pfVar6[2]);
      fStack_48 = fStack_18;
      fStack_44 = fStack_14;
      fStack_40 = fStack_10;
    }
    else {
      fVar14 = *(float *)(param_1 + 0x58);
      fVar13 = *(float *)(param_1 + 0xa0);
      fStack_10 = fVar14 * *(float *)(param_1 + 0x50) * param_2;
      fVar3 = fVar14 * *(float *)(param_1 + 0x48) * param_2 * fVar13;
      fVar14 = fVar14 * *(float *)(param_1 + 0x4c) * param_2 * fVar13;
      fVar13 = fStack_10 * fVar13;
      pfVar6 = (float *)(**(code **)(*param_3 + 0x28))();
      FUN_00401f00(fVar3 + *pfVar6,fVar14 + pfVar6[1],fVar13 + pfVar6[2]);
      fStack_48 = fStack_30;
      fStack_40 = fStack_28;
      fVar10 = (float10)FUN_0049cc10(param_2,param_3);
      fStack_44 = (float)fVar10;
      pfVar6 = (float *)(**(code **)(*param_3 + 0x28))();
      FUN_00401f00(fStack_30 - *pfVar6,fStack_44 - pfVar6[1],fStack_28 - pfVar6[2]);
      fVar4 = DAT_006e92e8 / param_2;
      FUN_00401f00(fStack_30 * fVar4,fStack_2c * fVar4,fStack_28 * fVar4);
      bVar1 = NAN(_DAT_006e9980);
      bVar2 = fStack_44 < _DAT_006e9980;
      *(float *)(param_1 + 4) = fVar3;
      *(float *)(param_1 + 8) = fVar14;
      *(float *)(param_1 + 0xc) = fVar13;
      if (bVar2 != (NAN(fStack_44) || bVar1)) {
        *(undefined4 *)(param_1 + 0x10) = 3;
      }
    }
    pfVar6 = (float *)(**(code **)(*param_3 + 0x28))();
    FUN_00401f00(fStack_48 - *pfVar6,fStack_44 - pfVar6[1],fStack_40 - pfVar6[2]);
    param_2 = DAT_006e92e8 / param_2;
    *(float *)(param_1 + 0xa8) = fStack_18;
    *(float *)(param_1 + 0xac) = fStack_14;
    *(float *)(param_1 + 0xb0) = fStack_10;
    *(float *)(param_1 + 0xa8) = param_2 * *(float *)(param_1 + 0xa8);
    *(float *)(param_1 + 0xac) = param_2 * *(float *)(param_1 + 0xac);
    *(float *)(param_1 + 0xb0) = param_2 * *(float *)(param_1 + 0xb0);
    fVar10 = (float10)FUN_0064ca10(*(undefined4 *)(param_1 + 0xac),
                                   SQRT(*(float *)(param_1 + 0xb0) * *(float *)(param_1 + 0xb0) +
                                        *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xa8)));
    fVar11 = (float10)FUN_0064ca10(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
    fStack_14 = (float)fVar11;
    fStack_10 = 0.0;
    fStack_18 = (float)-fVar10;
    (**(code **)(*param_3 + 0x1c))(&fStack_18);
    FUN_00405080(&fStack_10,param_3 + 0x14,param_3 + 0x11);
    uVar15 = *(undefined4 *)(param_1 + 0xcc);
    iVar5 = param_3[2];
    iVar8 = param_3[3];
    fVar14 = (fStack_8 + fStack_c + fStack_10) * _DAT_006edc00;
    puVar12 = &stack0xffffffb4;
    fVar13 = fVar14;
    uVar7 = (**(code **)(*param_3 + 0x28))(puVar12,fVar14,uVar15);
    FUN_00579460(iVar5,iVar8,uVar7,puVar12,fVar13,uVar15);
    FUN_00579910(param_3[0x58],param_3[0x59]);
    iVar5 = FUN_00577e70();
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x10) == 2) {
        pfVar6 = (float *)(**(code **)(*param_3 + 0x28))();
        fStack_14 = pfVar6[2];
        uVar15 = *(undefined4 *)(param_1 + 0xcc);
        fStack_18 = pfVar6[1] - _DAT_006e9364;
        fStack_1c = *pfVar6;
        iVar5 = param_3[2];
        iVar8 = param_3[3];
        pfVar6 = &fStack_1c;
        uVar7 = (**(code **)(*param_3 + 0x28))(pfVar6,fVar14,uVar15);
        FUN_00579460(iVar5,iVar8,uVar7,pfVar6,fVar14,uVar15);
        FUN_00579910(param_3[0x58],param_3[0x59]);
        iVar5 = FUN_00577e70();
        if ((iVar5 == 0) || (_DAT_006edbfc < DAT_007734f0)) {
          pfVar6 = (float *)(**(code **)(*param_3 + 0x28))();
          fVar14 = pfVar6[1];
          fStack_14 = fStack_44 - pfVar6[2];
          *(float *)(param_1 + 0x48) = unaff_ESI - *pfVar6;
          *(float *)(param_1 + 0x50) = fStack_14;
          *(float *)(param_1 + 0x4c) = fStack_48 - fVar14;
          FUN_0042e1f0();
          *(undefined4 *)(param_1 + 0x10) = 1;
        }
      }
    }
    else {
      iVar5 = 0;
      if (0 < DAT_00773970) {
        piVar9 = &DAT_00773520;
        do {
          if (((*piVar9 != param_3[0x58]) || (piVar9[1] != param_3[0x59])) &&
             (iVar8 = FUN_004b7ce0(&DAT_007734f0), iVar8 != 0)) {
            FUN_0049c4b0(&stack0xffffffb4,unaff_retaddr,param_3);
            break;
          }
          iVar5 = iVar5 + 1;
          piVar9 = piVar9 + 0x12;
        } while (iVar5 < DAT_00773970);
      }
    }
    (**(code **)(*param_3 + 0x14))(&stack0xffffffb4,0);
  }
  return;
}

