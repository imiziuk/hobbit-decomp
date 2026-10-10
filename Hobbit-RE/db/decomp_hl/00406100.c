
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00406100(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int *piVar7;
  uint *puVar8;
  int local_10;
  undefined4 uStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  puVar8 = (uint *)(param_1 + 0x230);
  piVar7 = (int *)(param_1 + 0x2c0);
  pfVar6 = (float *)(param_1 + 0x248);
  local_10 = 5;
  do {
    if (*(float *)(param_1 + 0x2e8) < pfVar6[-1] ==
        (NAN(*(float *)(param_1 + 0x2e8)) || NAN(pfVar6[-1]))) {
      fVar1 = DAT_006e92e4;
      if (pfVar6[2] < *(float *)(param_1 + 0x2e8)) {
        fVar1 = *(float *)(param_1 + 0x2e8) - pfVar6[2];
        goto LAB_00406165;
      }
    }
    else {
      fVar1 = *(float *)(param_1 + 0x2e8) - pfVar6[-1];
LAB_00406165:
      fVar1 = fVar1 * fVar1;
    }
    if (*(float *)(param_1 + 0x2ec) < *pfVar6 == (NAN(*(float *)(param_1 + 0x2ec)) || NAN(*pfVar6)))
    {
      if (pfVar6[3] < *(float *)(param_1 + 0x2ec)) {
        fVar2 = *(float *)(param_1 + 0x2ec) - pfVar6[3];
        goto LAB_00406195;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x2ec) - *pfVar6;
LAB_00406195:
      fVar1 = fVar2 * fVar2 + fVar1;
    }
    if (*(float *)(param_1 + 0x2f0) < pfVar6[1] ==
        (NAN(*(float *)(param_1 + 0x2f0)) || NAN(pfVar6[1]))) {
      if (pfVar6[4] < *(float *)(param_1 + 0x2f0)) {
        fVar2 = *(float *)(param_1 + 0x2f0) - pfVar6[4];
        goto LAB_004061cb;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x2f0) - pfVar6[1];
LAB_004061cb:
      fVar1 = fVar2 * fVar2 + fVar1;
    }
    if (fVar1 < DAT_006e9300 * DAT_006e9300 != (fVar1 == DAT_006e9300 * DAT_006e9300)) {
      piVar3 = (int *)FUN_00406bf0(*piVar7,piVar7[1]);
      iVar4 = (**(code **)(*piVar3 + 0x28))();
      if (*(float *)(iVar4 + 4) < _DAT_0075b66c * _DAT_006e936c) {
        iVar4 = piVar7[1];
        *puVar8 = (uint)(*puVar8 == 0);
        if (*piVar7 != 0 || iVar4 != 0) {
          piVar3 = (int *)FUN_00406bf0(*piVar7,iVar4);
          puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x30))();
          uStack_c = *puVar5;
          uStack_4 = puVar5[2];
          fStack_8 = (float)puVar5[1] + _DAT_006e9368;
          (**(code **)(*piVar3 + 0x1c))(&uStack_c);
        }
        FUN_00659600(s_MineTrackLever_0071d568,1);
        FUN_0064cc50();
        FUN_0064cc30();
      }
    }
    puVar8 = puVar8 + 1;
    piVar7 = piVar7 + 2;
    pfVar6 = pfVar6 + 6;
    local_10 = local_10 + -1;
    if (local_10 == 0) {
      return;
    }
  } while( true );
}

