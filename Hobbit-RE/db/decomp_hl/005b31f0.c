
undefined4 FUN_005b31f0(float param_1,float *param_2)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006de8b8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_FindNearestNavPoint_NavNodeFunc_00745514);
  uVar1 = *(ushort *)((int)param_1 + 0x16);
  local_4 = 0;
  while (uVar6 = (uint)uVar1, uVar6 != 0xffff) {
    iVar2 = *(int *)(&DAT_007782dc + ((int)uVar6 >> 10) * 4);
    piVar3 = *(int **)(iVar2 + 8 + (uVar6 & 0x3ff) * 0xc);
    pfVar7 = (float *)(**(code **)(*piVar3 + 0x28))();
    fVar4 = pfVar7[1] - param_2[1];
    if (DAT_007ba6ac == 0) {
      fVar4 = fVar4 + fVar4;
    }
    fVar4 = fVar4 * fVar4 +
            (pfVar7[2] - param_2[2]) * (pfVar7[2] - param_2[2]) +
            (*pfVar7 - *param_2) * (*pfVar7 - *param_2);
    fVar5 = (float)piVar3[0x34] * (float)piVar3[0x34];
    param_1 = fVar4 - fVar5;
    if (param_1 < DAT_006e92e4 != (NAN(param_1) || NAN(DAT_006e92e4))) {
      param_1 = fVar4 / fVar5 - DAT_006e92e8;
    }
    if (param_1 < param_2[6] != (NAN(param_1) || NAN(param_2[6]))) {
      uVar8 = FUN_0049dbc0();
      uVar8 = uVar8 & DAT_007ba654;
      uVar9 = FUN_0049dbc0();
      if (uVar8 == uVar9) {
        param_2[6] = param_1;
        fVar4 = (float)piVar3[3];
        param_2[4] = (float)piVar3[2];
        param_2[5] = fVar4;
      }
    }
    uVar1 = *(ushort *)(iVar2 + (uVar6 & 0x3ff) * 0xc);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return 1;
}

