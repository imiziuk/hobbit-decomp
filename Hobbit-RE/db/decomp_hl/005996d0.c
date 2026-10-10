
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005996d0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  float unaff_ESI;
  float *pfVar8;
  float unaff_EDI;
  float fVar9;
  float *pfVar10;
  float fStack_3c;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined1 auStack_1c [28];
  
  piVar4 = (int *)FUN_00592920();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  fStack_30 = *pfVar5;
  fStack_2c = pfVar5[1];
  fStack_28 = pfVar5[2];
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x260);
  *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(param_1 + 0x264);
  *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_1 + 0x268);
  iVar6 = FUN_00592920();
  if ((*(int *)(iVar6 + 0x1b0) == 0x24) || (iVar6 = FUN_00592920(), *(int *)(iVar6 + 0x1b0) == 0x25)
     ) {
    *(undefined4 *)(param_1 + 0x21c) = 0;
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x4000;
    *(float *)(param_1 + 0x220) = fStack_2c;
    *(float *)(param_1 + 0x224) = fStack_28;
    *(float *)(param_1 + 0x21c) = fStack_30;
    *(float *)(param_1 + 0x2e8) = fStack_30;
    *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x220);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x224);
    if (*(int *)(param_1 + 0x38) != 2) {
      *(undefined4 *)(param_1 + 0x38) = 4;
      FUN_00595ad0();
    }
  }
  else {
    piVar4 = (int *)FUN_00592920();
    pfVar5 = (float *)(param_1 + 0x2d8);
    pfVar10 = pfVar5;
    iVar6 = (**(code **)(*piVar4 + 0x140))(&fStack_30,0,&fStack_24,pfVar5);
    if (iVar6 != 0) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x4000;
    }
    *(float *)(param_1 + 0x2f0) = fStack_2c;
    *(undefined4 *)(param_1 + 0x2e8) = uStack_34;
    *(float *)(param_1 + 0x2ec) = fStack_30;
    iVar6 = FUN_00598bc0();
    if ((iVar6 == 0) || (fVar9 = fStack_3c - fStack_30, fVar9 < **(float **)(param_1 + 0x34))) {
      fVar9 = *(float *)(param_1 + 0x294);
      pfVar8 = (float *)(param_1 + 0x21c);
      fStack_24 = fVar9 * *(float *)(param_1 + 0x244);
      fStack_20 = fVar9 * *(float *)(param_1 + 0x248);
      *pfVar8 = fVar9 * *(float *)(param_1 + 0x240) + *pfVar8;
      *(float *)(param_1 + 0x220) = fStack_24 + *(float *)(param_1 + 0x220);
      *(float *)(param_1 + 0x224) = fStack_20 + *(float *)(param_1 + 0x224);
      uVar7 = FUN_0042eea0(&fStack_28,
                           *pfVar5 * *pfVar8 +
                           *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x2dc) +
                           *(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x2e0),pfVar5);
      FUN_004357e0(uVar7);
      uVar7 = FUN_00405080(&fStack_28,pfVar8,auStack_1c);
      FUN_004357e0(uVar7);
      fVar9 = DAT_006e92e8 /
              SQRT((float)pfVar10 * (float)pfVar10 + unaff_EDI * unaff_EDI + unaff_ESI * unaff_ESI);
      iVar6 = FUN_0064cf30(fVar9);
      fVar1 = DAT_006e92e4;
      fVar2 = DAT_006e92e4;
      fVar3 = DAT_006e92e4;
      if (iVar6 != 0) {
        fVar1 = (float)pfVar10 * fVar9;
        fVar2 = unaff_EDI * fVar9;
        fVar3 = unaff_ESI * fVar9;
      }
      fVar9 = SQRT(*(float *)(param_1 + 0x224) * *(float *)(param_1 + 0x224) +
                   *(float *)(param_1 + 0x220) * *(float *)(param_1 + 0x220) + *pfVar8 * *pfVar8);
      FUN_00401f00(fVar9 * fVar1,fVar2 * fVar9,fVar3 * fVar9);
      *pfVar8 = fStack_28;
      *(float *)(param_1 + 0x220) = fStack_24;
      *(float *)(param_1 + 0x224) = fStack_20;
      return;
    }
    FUN_00592660(6);
    if (_DAT_006e99c0 < fVar9) {
      *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 0x8000;
      return;
    }
  }
  return;
}

