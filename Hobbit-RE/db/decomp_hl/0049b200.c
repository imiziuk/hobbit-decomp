
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0049b200(undefined4 param_1,float param_2,float param_3,float param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  float local_14;
  float local_10;
  float local_c;
  
  FUN_0054c5c0();
  bVar2 = false;
  local_14 = 0.0;
  local_10 = 0.0;
  local_c = 0.0;
  sVar7 = FUN_0054c7c0();
  do {
    if (sVar7 < 0) {
LAB_0049b2a9:
      FUN_0054c880();
      if (!bVar2) {
        FUN_0064e870();
        return 0;
      }
      if (0.0 < _DAT_006edbd8 != NAN(_DAT_006edbd8)) {
        local_14 = _DAT_006e9598 + 0.0;
      }
      if (0.0 < _DAT_006edbd8 != NAN(_DAT_006edbd8)) {
        local_10 = _DAT_006e9598 + 0.0;
      }
      if (0.0 < _DAT_006edbd8 != NAN(_DAT_006edbd8)) {
        local_c = _DAT_006e9598 + 0.0;
      }
      fVar3 = local_14 * _DAT_006e9560 * _DAT_006e955c;
      fVar5 = local_10 * _DAT_006e9560 * _DAT_006e955c;
      fVar6 = local_c * _DAT_006e9560 * _DAT_006e955c;
      fVar4 = fVar3 - param_2;
      if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
        fVar4 = -fVar4;
      }
      if (fVar4 < _DAT_006edbd4 != (NAN(fVar4) || NAN(_DAT_006edbd4))) {
        fVar4 = fVar5 - param_3;
        if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
          fVar4 = -fVar4;
        }
        if (fVar4 < _DAT_006edbd4 != (NAN(fVar4) || NAN(_DAT_006edbd4))) {
          fVar4 = fVar6 - param_4;
          if (fVar4 < DAT_006e92e4 != (NAN(fVar4) || NAN(DAT_006e92e4))) {
            fVar4 = -fVar4;
          }
          if (fVar4 < _DAT_006edbd4 != (NAN(fVar4) || NAN(_DAT_006edbd4))) {
            FUN_0064e870(3,s_Trigger__IsPushBoxOrient_returns_0072a024);
            return 1;
          }
        }
      }
      FUN_0064e870(3,s_Trigger__IsPushBoxOrient_degrees_00729fc8,(double)param_2,(double)param_3,
                   (double)param_4,(double)fVar3,(double)fVar5,(double)fVar6);
      return 0;
    }
    if (sVar7 == -1) {
      piVar10 = (int *)0x0;
    }
    else {
      uVar1 = *(uint *)(DAT_0076f648 + sVar7 * 0x14);
      if (uVar1 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
      }
    }
    uVar8 = (**(code **)(*piVar10 + 0x4c))();
    iVar9 = FUN_00647ed0(uVar8);
    if (iVar9 == 0) {
      FUN_004bf3a0();
      bVar2 = true;
      goto LAB_0049b2a9;
    }
    sVar7 = FUN_0054c7c0();
  } while( true );
}

