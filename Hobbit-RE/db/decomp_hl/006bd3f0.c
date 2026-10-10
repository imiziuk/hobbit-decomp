
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006bd3f0(int param_1,float param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_fx_cylinder__AdvanceLogic_00757cfc);
  local_4 = 0;
  iVar4 = FUN_006bae20(param_2);
  pfVar8 = (float *)(param_1 + 0x90);
  *pfVar8 = -0.5;
  *(undefined4 *)(param_1 + 0x94) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x98) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa0) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f000000;
  local_24[0] = *pfVar8;
  local_24[1] = (float)*(undefined4 *)(param_1 + 0x94);
  fVar1 = *(float *)(iVar4 + 0x30);
  local_24[2] = (float)*(undefined4 *)(param_1 + 0x98);
  local_24[3] = (float)*(undefined4 *)(param_1 + 0x9c);
  local_24[4] = (float)*(undefined4 *)(param_1 + 0xa0);
  local_24[5] = *(float *)(param_1 + 0xa4);
  *(float *)(param_1 + 0x9c) = fVar1;
  *pfVar8 = fVar1;
  uVar2 = *(undefined4 *)(iVar4 + 0x34);
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar2;
  uVar2 = *(undefined4 *)(iVar4 + 0x38);
  *(undefined4 *)(param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0x98) = uVar2;
  iVar4 = iVar4 - (int)pfVar8;
  iVar7 = 3;
  do {
    pfVar6 = (float *)(iVar4 + (int)pfVar8);
    iVar5 = 0;
    do {
      fVar1 = *pfVar6 * *(float *)((int)local_24 + iVar5);
      fVar3 = *pfVar6 * *(float *)((int)local_24 + iVar5 + 0xc);
      if (fVar1 < fVar3 == (NAN(fVar1) || NAN(fVar3))) {
        *pfVar8 = fVar3 + *pfVar8;
      }
      else {
        *pfVar8 = fVar1 + *pfVar8;
        fVar1 = fVar3;
      }
      iVar5 = iVar5 + 4;
      pfVar6 = pfVar6 + 4;
      pfVar8[3] = fVar1 + pfVar8[3];
    } while (iVar5 < 0xc);
    pfVar8 = pfVar8 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar4 = *(int *)(param_1 + 4);
  if (((NAN(*(float *)(iVar4 + 0x90)) || NAN(DAT_006e92e4)) ==
       (*(float *)(iVar4 + 0x90) == DAT_006e92e4)) ||
     ((NAN(*(float *)(iVar4 + 0x94)) || NAN(DAT_006e92e4)) ==
      (*(float *)(iVar4 + 0x94) == DAT_006e92e4))) {
    param_2 = param_3 * *(float *)(iVar4 + 0x90);
    param_3 = param_3 * *(float *)(iVar4 + 0x94);
    fVar3 = param_2 + *(float *)(param_1 + 0xb8);
    *(float *)(param_1 + 0xb8) = fVar3;
    fVar1 = param_3 + *(float *)(param_1 + 0xbc);
    *(float *)(param_1 + 0xbc) = fVar1;
    if ((float)_DAT_006ec030 < fVar3) {
      *(float *)(param_1 + 0xb8) = fVar3 - DAT_006e92e8;
      param_2 = param_2 - DAT_006e92e8;
    }
    if (*(float *)(param_1 + 0xb8) < (float)_DAT_006ec038 !=
        (NAN(*(float *)(param_1 + 0xb8)) || NAN((float)_DAT_006ec038))) {
      *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) + DAT_006e92e8;
      param_2 = param_2 + DAT_006e92e8;
    }
    if ((float)_DAT_006ec030 < fVar1) {
      *(float *)(param_1 + 0xbc) = fVar1 - DAT_006e92e8;
      param_3 = param_3 - DAT_006e92e8;
    }
    if (*(float *)(param_1 + 0xbc) < (float)_DAT_006ec038 !=
        (NAN(*(float *)(param_1 + 0xbc)) || NAN((float)_DAT_006ec038))) {
      *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) + DAT_006e92e8;
      param_3 = param_3 + DAT_006e92e8;
    }
    if (((NAN(param_2) || NAN(DAT_006e92e4)) == (param_2 == DAT_006e92e4)) &&
       (iVar4 = 0, 0 < *(int *)(param_1 + 0xb0))) {
      do {
        iVar7 = iVar4 * 8;
        iVar5 = iVar4 * 8;
        iVar4 = iVar4 + 1;
        *(float *)(*(int *)(param_1 + 0xc4) + iVar5) =
             param_2 + *(float *)(*(int *)(param_1 + 0xc4) + iVar7);
      } while (iVar4 < *(int *)(param_1 + 0xb0));
    }
    if (((NAN(param_3) || NAN(DAT_006e92e4)) == (param_3 == DAT_006e92e4)) &&
       (iVar4 = 0, 0 < *(int *)(param_1 + 0xb0))) {
      do {
        iVar7 = iVar4 * 8;
        iVar5 = iVar4 * 8;
        iVar4 = iVar4 + 1;
        *(float *)(*(int *)(param_1 + 0xc4) + 4 + iVar5) =
             param_3 + *(float *)(*(int *)(param_1 + 0xc4) + 4 + iVar7);
      } while (iVar4 < *(int *)(param_1 + 0xb0));
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

