
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00501730(void)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  
  uVar4 = FUN_0054c5c0(0x1c,s_C__projects_meridian_apps_meridi_00731a44,0x1c6);
  while( true ) {
    iVar1 = *(int *)(&DAT_0076f664 + DAT_0076f864 * 4);
    if (iVar1 == -1) break;
    piVar2 = *(int **)(DAT_0076f648 + iVar1 * 0x14);
    *(int *)(&DAT_0076f664 + DAT_0076f864 * 4) = (int)*(short *)(DAT_0076f648 + iVar1 * 0x14 + 4);
    if (piVar2 == (int *)0x0) break;
    piVar5 = (int *)FUN_0041bcc0();
    pfVar6 = (float *)(**(code **)(*piVar5 + 0x28))();
    pfVar7 = (float *)(**(code **)(*piVar2 + 0x28))();
    fVar3 = SQRT((*pfVar7 - *pfVar6) * (*pfVar7 - *pfVar6) +
                 (pfVar7[1] - pfVar6[1]) * (pfVar7[1] - pfVar6[1]) +
                 (pfVar7[2] - pfVar6[2]) * (pfVar7[2] - pfVar6[2]));
    if (fVar3 < _DAT_006e99c0 != (NAN(fVar3) || NAN(_DAT_006e99c0))) {
      iVar1 = *piVar2;
      uVar8 = (**(code **)(iVar1 + 0x28))(0x447a0000,0,0x47c35000,0,0,0);
      (**(code **)(iVar1 + 0x78))(0,0,uVar8);
    }
  }
  FUN_0054c880(uVar4);
  return 0;
}

