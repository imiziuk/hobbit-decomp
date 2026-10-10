
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581f30(int *param_1)

{
  int *piVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc0d8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_lighting_mgr__ActivateLights_007406c4);
  piVar3 = param_1;
  iVar9 = 0;
  local_4 = 0;
  FUN_005821f0();
  if (0 < *piVar3) {
    piVar8 = piVar3 + 7;
    do {
      piVar1 = (int *)*piVar8;
      if (piVar1 == (int *)0x0) {
LAB_00581fbf:
        (**(code **)(*DAT_007f1000 + 0xb8))(DAT_007f1000,iVar9,0);
      }
      else {
        iVar4 = FUN_004948f0();
        if (iVar4 == 0) goto LAB_00581fbf;
        iVar4 = iVar9;
        fVar10 = (float10)FUN_00494640(iVar9);
        fVar12 = (float)fVar10;
        fVar10 = (float10)FUN_00494610(fVar12);
        fVar11 = (float)fVar10;
        uVar5 = FUN_004945e0(&param_1);
        uVar6 = (**(code **)(*piVar1 + 0x28))(uVar5,fVar11);
        FUN_005837f0(uVar6,uVar5,fVar11,fVar12,iVar4);
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar9 < *piVar3);
  }
  if (iVar9 < piVar3[1] + *piVar3) {
    piVar8 = piVar3 + iVar9 + 7;
    do {
      piVar1 = (int *)*piVar8;
      if (piVar1 == (int *)0x0) {
LAB_005820e9:
        (**(code **)(*DAT_007f1000 + 0xb8))(DAT_007f1000,iVar9,0);
      }
      else {
        iVar4 = FUN_004948f0();
        if (iVar4 == 0) goto LAB_005820e9;
        param_1 = (int *)((float)piVar3[0x13] + (float)piVar3[0x10]);
        fStack_1c = ((float)piVar3[0x14] + (float)piVar3[0x11]) * _DAT_006e936c;
        fStack_20 = (float)param_1 * _DAT_006e936c;
        fStack_24 = ((float)piVar3[0x12] + (float)piVar3[0xf]) * _DAT_006e936c;
        fVar10 = (float10)FUN_00493e40(&fStack_24,auStack_34);
        fVar12 = (float)(fVar10 * (float10)_DAT_006f3f14);
        fVar11 = ((float)piVar3[0x14] + (float)piVar3[0x11]) * _DAT_006e936c;
        fVar2 = ((float)piVar3[0x13] + (float)piVar3[0x10]) * _DAT_006e936c;
        param_1 = (int *)(((float)piVar3[0x12] + (float)piVar3[0xf]) * _DAT_006e936c);
        pfVar7 = (float *)(**(code **)(*piVar1 + 0x28))();
        fStack_10 = fVar11 - pfVar7[2];
        fStack_14 = fVar2 - pfVar7[1];
        fStack_18 = (float)param_1 - *pfVar7;
        iVar4 = iVar9;
        uVar5 = FUN_004945e0(auStack_30);
        FUN_00583930(&fStack_18,uVar5,fVar12,iVar4);
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar9 < piVar3[1] + *piVar3);
  }
  iVar4 = iVar9;
  if (iVar9 < DAT_007779cc) {
    do {
      (**(code **)(*DAT_007f1000 + 0xb8))(DAT_007f1000,iVar4,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_007779cc);
  }
  DAT_007779cc = iVar9;
  FUN_00582290();
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

