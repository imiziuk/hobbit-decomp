
void __thiscall FUN_00449810(int *param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float10 fVar9;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [12];
  float afStack_30 [12];
  
  piVar5 = (int *)FUN_004021c0(param_1[0x32],param_1[0x33]);
  if (piVar5 != (int *)0x0) {
    pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
    afStack_30[0xb] = (float)piVar5[0x99] * (float)piVar5[0x4c];
    fStack_60 = *pfVar6;
    fStack_5c = pfVar6[1];
    fStack_58 = pfVar6[2];
    afStack_30[0] = fStack_60 + afStack_30[0xb];
    afStack_30[3] = fStack_60 - afStack_30[0xb];
    afStack_30[8] = fStack_58 + afStack_30[0xb];
    afStack_30[0xb] = fStack_58 - afStack_30[0xb];
    afStack_30[1] = fStack_5c;
    afStack_30[2] = fStack_58;
    afStack_30[4] = fStack_5c;
    afStack_30[5] = fStack_58;
    afStack_30[6] = fStack_60;
    afStack_30[7] = fStack_5c;
    afStack_30[9] = fStack_60;
    afStack_30[10] = fStack_5c;
    iVar7 = (**(code **)(*piVar5 + 0x30))();
    fVar3 = *(float *)(iVar7 + 4);
    fStack_6c = 3.4028235e+38;
    iVar7 = 0;
    fStack_64 = fVar3;
    do {
      pfVar6 = afStack_30 + iVar7 * 3;
      *pfVar6 = afStack_30[iVar7 * 3] - fStack_60;
      afStack_30[iVar7 * 3 + 1] = afStack_30[iVar7 * 3 + 1] - fStack_5c;
      afStack_30[iVar7 * 3 + 2] = afStack_30[iVar7 * 3 + 2] - fStack_58;
      FUN_0064c8e0(fVar3,&fStack_64,&fStack_68);
      fVar1 = *pfVar6;
      fVar2 = afStack_30[iVar7 * 3 + 2];
      *pfVar6 = fVar1 * fStack_68 + fStack_64 * fVar2;
      afStack_30[iVar7 * 3 + 2] = fVar2 * fStack_68 - fVar1 * fStack_64;
      *pfVar6 = fStack_60 + *pfVar6;
      afStack_30[iVar7 * 3 + 1] = fStack_5c + afStack_30[iVar7 * 3 + 1];
      afStack_30[iVar7 * 3 + 2] = fStack_58 + afStack_30[iVar7 * 3 + 2];
      if (iVar7 == 0) {
        fStack_48 = afStack_30[0];
        fStack_44 = afStack_30[1];
        fStack_40 = afStack_30[2];
        pfVar6 = (float *)(**(code **)(*param_1 + 0x28))();
        FUN_00401f00(afStack_30[0] - *pfVar6,afStack_30[1] - pfVar6[1],afStack_30[2] - pfVar6[2]);
        fVar9 = (float10)FUN_00402000();
        fStack_6c = (float)fVar9;
      }
      else {
        pfVar8 = (float *)(**(code **)(*param_1 + 0x28))();
        FUN_00401f00(*pfVar8 - *pfVar6,pfVar8[1] - afStack_30[iVar7 * 3 + 1],
                     pfVar8[2] - afStack_30[iVar7 * 3 + 2]);
        fVar9 = (float10)FUN_00402000();
        if (fVar9 < (float10)fStack_6c != (NAN(fVar9) || NAN((float10)fStack_6c))) {
          fStack_48 = *pfVar6;
          fStack_6c = (float)fVar9;
          fStack_44 = afStack_30[iVar7 * 3 + 1];
          fStack_40 = afStack_30[iVar7 * 3 + 2];
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    fStack_54 = fStack_48 - fStack_60;
    fStack_50 = fStack_44 - fStack_5c;
    fStack_4c = fStack_40 - fStack_58;
    fVar3 = DAT_006e92e8 /
            SQRT(fStack_54 * fStack_54 + fStack_50 * fStack_50 + fStack_4c * fStack_4c);
    iVar7 = FUN_0064cf30(fVar3);
    fVar1 = DAT_006e92e4;
    fVar2 = DAT_006e92e4;
    fVar4 = DAT_006e92e4;
    if (iVar7 != 0) {
      fVar3 = fVar3 * param_3;
      fVar1 = fStack_54 * fVar3;
      fVar2 = fStack_50 * fVar3;
      fVar4 = fStack_4c * fVar3;
    }
    FUN_00401f00(fVar1 + fStack_48,fVar2 + fStack_44,fVar4 + fStack_40);
    FUN_004357e0(auStack_3c);
  }
  return;
}

