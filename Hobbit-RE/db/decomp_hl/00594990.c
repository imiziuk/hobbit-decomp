
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00594990(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dd168;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_PhysController__UpdateHeadTracki_00742eb0);
  local_4 = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffd;
  iVar5 = FUN_00592920();
  if (*(int *)(*(int *)(iVar5 + 0x300) + 0xbc) != 0) {
    iVar5 = FUN_00592920();
    iVar5 = (**(code **)(**(int **)(*(int *)(iVar5 + 0x300) + 0xbc) + 0x24))();
    if (iVar5 != 0) {
      FUN_00592920();
      lVar13 = FUN_004a4160();
      lVar14 = FUN_0041bcd0();
      if (lVar13 != lVar14) goto LAB_00594bb1;
    }
    iVar5 = FUN_00592920();
    iVar5 = (**(code **)(**(int **)(*(int *)(iVar5 + 0x300) + 0xbc) + 0x24))();
    if (iVar5 == 0) {
      uVar6 = FUN_0041bcc0();
      FUN_00592920(uVar6);
      iVar5 = FUN_004683d0(uVar6);
      if (iVar5 != 0) goto LAB_00594bb1;
    }
    uVar15 = FUN_0041bcd0();
    *(undefined8 *)(param_1 + 0xf8) = uVar15;
    piVar7 = (int *)FUN_00592920();
    pfVar8 = (float *)(**(code **)(*piVar7 + 0x28))();
    piVar7 = (int *)FUN_0041bcc0();
    pfVar9 = (float *)(**(code **)(*piVar7 + 0x28))();
    fVar3 = pfVar9[2] - pfVar8[2];
    fVar1 = pfVar9[1];
    fVar2 = pfVar8[1];
    fVar4 = *pfVar9 - *pfVar8;
    fVar11 = (float10)FUN_0064ca10(fVar4,fVar3);
    FUN_00592920();
    fVar12 = (float10)FUN_004a3370();
    fVar11 = (fVar12 - (float10)(float)fVar11) + (float10)_DAT_006e9368;
    if (((float10)_DAT_006e95a0 < fVar11) ||
       (fVar11 < (float10)_DAT_006e959c != (NAN(fVar11) || NAN((float10)_DAT_006e959c)))) {
      fVar11 = (float10)FUN_0064c6b0((float)fVar11,0x40c90fdb);
    }
    if ((float10)_DAT_006e9598 <= fVar11) {
      do {
        fVar11 = fVar11 - (float10)_DAT_006e9598;
      } while ((float10)_DAT_006e9598 <= fVar11);
    }
    if (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4))) {
      do {
        fVar11 = fVar11 + (float10)_DAT_006e9598;
      } while (fVar11 < (float10)DAT_006e92e4 != (NAN(fVar11) || NAN((float10)DAT_006e92e4)));
    }
    fVar11 = fVar11 - (float10)_DAT_006e9368;
    fVar1 = SQRT(fVar3 * fVar3 + (fVar1 - fVar2) * (fVar1 - fVar2) + fVar4 * fVar4);
    if (((fVar1 < _DAT_006f40ac == (NAN(fVar1) || NAN(_DAT_006f40ac))) ||
        (fVar11 < (float10)_DAT_006e9578 == (NAN(fVar11) || NAN((float10)_DAT_006e9578)))) ||
       (fVar11 <= (float10)_DAT_006e9570)) {
      uVar10 = *(uint *)(param_1 + 0x4c) & 0xfffffffd;
    }
    else {
      uVar10 = *(uint *)(param_1 + 0x4c) | 2;
    }
    *(uint *)(param_1 + 0x4c) = uVar10;
  }
LAB_00594bb1:
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

